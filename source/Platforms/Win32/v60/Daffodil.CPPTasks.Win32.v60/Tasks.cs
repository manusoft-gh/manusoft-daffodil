﻿using System;
using Microsoft.Build.Utilities;
using Microsoft.Build.CPPTasks;

namespace Daffodil.CPPTasks.Win32.v60
{
  public class CLA : Microsoft.Build.CPPTasks.CL
  {
    protected override void PostProcessSwitchList()
    {
      base.PostProcessSwitchList();
    }
    public virtual bool AssumeNoAliasing
    {
      get
      {
        return (base.IsPropertySet("AssumeNoAliasing") && base.ActiveToolSwitches["AssumeNoAliasing"].BooleanValue);
      }
      set
      {
        base.ActiveToolSwitches.Remove("AssumeNoAliasing");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Assume No Aliasing";
        switch2.Description = "Tells the compiler that your program does not use aliasing. An alias is a name that refers to a memory location that is already referred to by a different name.     (/Oa)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/Oa";
        switch2.ReverseSwitchValue = "";
        switch2.Name = "AssumeNoAliasing";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("AssumeNoAliasing", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public virtual bool AssumeXFunctionAliasing
    {
      get
      {
        return (base.IsPropertySet("AssumeXFunctionAliasing") && base.ActiveToolSwitches["AssumeXFunctionAliasing"].BooleanValue);
      }
      set
      {
        base.ActiveToolSwitches.Remove("AssumeXFunctionAliasing");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Assume Aliasing Across Function Calls";
        switch2.Description = "Tells the compiler that no aliasing occurs within function bodies but might occur across function calls. After each function call, pointer variables must be reloaded from memory.     (/Ow)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/Ow";
        switch2.ReverseSwitchValue = "";
        switch2.Name = "AssumeXFunctionAliasing";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("AssumeXFunctionAliasing", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public override string DebugInformationFormat
    {
      get
      {
        return base.DebugInformationFormat;
      }
      set
      {
        base.ActiveToolSwitches.Remove("DebugInformationFormat");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.String);
        switch2.DisplayName = "Debug Information Format";
        switch2.Description = "Specifies the type of debugging information generated by the compiler.  You must also change linker settings appropriately to match.    (/Z7, Zd, /Zi, /ZI)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        string[][] switchMap = new string[][] { new string[] { "None", "" }, new string[] { "OldStyle", "/Z7" }, new string[] { "LineNumbers", "/Zd" }, new string[] { "ProgramDatabase", "/Zi" }, new string[] { "EditAndContinue", "/ZI" } };
        switch2.SwitchValue = base.ReadSwitchMap("DebugInformationFormat", switchMap, value);
        switch2.Name = "DebugInformationFormat";
        switch2.Value = value;
        switch2.MultiValues = true;
        base.ActiveToolSwitches.Add("DebugInformationFormat", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public virtual string FloatConsistency
    {
      get
      {
        if (base.IsPropertySet("FloatConsistency"))
          return base.ActiveToolSwitches["FloatConsistency"].Value;
        return null;
      }
      set
      {
        base.ActiveToolSwitches.Remove("FloatConsistency");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.String);
        switch2.DisplayName = "Improve Float Consistency";
        switch2.Description = "Controls the use of optimizations that affect floating-point tests for equality and inequality. (/Op)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        string[][] switchMap = new string[][] { new string[] { "Default", "" }, new string[] { "Disabled", "/Op-" }, new string[] { "Enabled", "/Op" } };
        switch2.SwitchValue = base.ReadSwitchMap("FloatConsistency", switchMap, value);
        switch2.Name = "FloatConsistency";
        switch2.Value = value;
        switch2.MultiValues = true;
        base.ActiveToolSwitches.Add("FloatConsistency", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public override bool FunctionLevelLinking
    {
      get
      {
        return base.FunctionLevelLinking;
      }
      set
      {
        base.ActiveToolSwitches.Remove("FunctionLevelLinking");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Enable Function-Level Linking";
        switch2.Description = "Allows the compiler to package individual functions in the form of packaged functions (COMDATs). Required for edit and continue to work. (/Gy)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/Gy";
        switch2.ReverseSwitchValue = "";
        switch2.Name = "FunctionLevelLinking";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("FunctionLevelLinking", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public virtual bool IncrementalCompilation
    {
      get
      {
        return (base.IsPropertySet("IncrementalCompilation") && base.ActiveToolSwitches["IncrementalCompilation"].BooleanValue);
      }
      set
      {
        base.ActiveToolSwitches.Remove("IncrementalCompilation");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Enable Incremental Compilation";
        switch2.Description = "Controls the incremental compiler, which compiles only those functions that have changed since the last compile.  (/Gi)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/Gi";
        switch2.ReverseSwitchValue = "";
        switch2.Name = "IncrementalCompilation";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("IncrementalCompilation", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public override bool MinimalRebuild
    {
      get
      {
        return base.MinimalRebuild;
      }
      set
      {
        base.ActiveToolSwitches.Remove("MinimalRebuild");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Enable Minimal Rebuild";
        switch2.Description = "Enables minimal rebuild, which determines whether C++ source files that include changed C++ class definitions (stored in header (.h) files) need to be recompiled. (/Gm)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/Gm";
        switch2.ReverseSwitchValue = "";
        switch2.Name = "MinimalRebuild";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("MinimalRebuild", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public override string PrecompiledHeader
    {
      get
      {
        return base.PrecompiledHeader;
      }
      set
      {
        base.ActiveToolSwitches.Remove("PrecompiledHeader");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.String);
        switch2.DisplayName = "Precompiled Header";
        switch2.Description = "Create/Use Precompiled Header : Enables creation or use of a precompiled header during the build.     (/Yc, /Yu)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.ArgumentRelationList.Add(new ArgumentRelation("PrecompiledHeaderFile", "Create", false, ""));
        switch2.ArgumentRelationList.Add(new ArgumentRelation("PrecompiledHeaderFile", "Use", false, ""));
        string[][] switchMap = new string[][] { new string[] { "Create", "/Yc" }, new string[] { "Automatic", "/YX" }, new string[] { "Use", "/Yu" }, new string[] { "NotUsing", "" } };
        switch2.SwitchValue = base.ReadSwitchMap("PrecompiledHeader", switchMap, value);
        switch2.Name = "PrecompiledHeader";
        switch2.Value = value;
        switch2.MultiValues = true;
        base.ActiveToolSwitches.Add("PrecompiledHeader", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public override string RuntimeLibrary
    {
      get
      {
        return base.RuntimeLibrary;
      }
      set
      {
        base.ActiveToolSwitches.Remove("RuntimeLibrary");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.String);
        switch2.DisplayName = "Runtime Library";
        switch2.Description = "Specify runtime library for linking.     (/MT, /MTd, /MD, /MDd, /ML, /MLd)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        string[][] switchMap = new string[][] { new string[] { "MultiThreaded", "/MT" }, new string[] { "MultiThreadedDebug", "/MTd" }, new string[] { "MultiThreadedDLL", "/MD" }, new string[] { "MultiThreadedDebugDLL", "/MDd" }, new string[] { "SingleThreaded", "/ML" }, new string[] { "SingleThreadedDebug", "/MLd" } };
        switch2.SwitchValue = base.ReadSwitchMap("RuntimeLibrary", switchMap, value);
        switch2.Name = "RuntimeLibrary";
        switch2.Value = value;
        switch2.MultiValues = true;
        base.ActiveToolSwitches.Add("RuntimeLibrary", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public override bool StringPooling
    {
      get
      {
        return base.StringPooling;
      }
      set
      {
        base.ActiveToolSwitches.Remove("StringPooling");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Enable String Pooling";
        switch2.Description = "Enables the compiler to create a single read-only copy of identical strings in the program image and in memory during execution, resulting in smaller programs, an optimization called string pooling. /O1, /O2, and /ZI  automatically set /GF option.";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/GF";
        switch2.ReverseSwitchValue = "";
        switch2.Name = "StringPooling";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("StringPooling", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public virtual string TargetProcessor
    {
      get
      {
        if (base.IsPropertySet("TargetProcessor"))
          return base.ActiveToolSwitches["TargetProcessor"].Value;
        return null;
      }
      set
      {
        base.ActiveToolSwitches.Remove("TargetProcessor");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.String);
        switch2.DisplayName = "Processor";
        switch2.Description = "Direct the compiler to optimize code generation for the 80386, 80486, or Pentium® processors.     (/G3, /G4, /G5, /G6, /GB)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        string[][] switchMap = new string[][] { new string[] { "80386", "/G3" }, new string[] { "80486", "/G4" }, new string[] { "Pentium", "/G5" }, new string[] { "Pentium Pro", "/G6" }, new string[] { "Blend", "/GB" } };
        switch2.SwitchValue = base.ReadSwitchMap("TargetProcessor", switchMap, value);
        switch2.Name = "TargetProcessor";
        switch2.Value = value;
        switch2.MultiValues = true;
        base.ActiveToolSwitches.Add("TargetProcessor", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    protected override System.Text.Encoding ResponseFileEncoding
    {
      get
      {
        return System.Text.Encoding.ASCII;
      }
    }
  }
  public class LinkA : Microsoft.Build.CPPTasks.Link
  {
    public virtual string DebugInformationFormat
    {
      get
      {
        if (base.IsPropertySet("DebugInformationFormat"))
          return base.ActiveToolSwitches["DebugInformationFormat"].Value;
        return null;
      }
      set
      {
        base.ActiveToolSwitches.Remove("DebugInformationFormat");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.String);
        switch2.DisplayName = "Debug Information Format";
        switch2.Description = "Specifies the type of debugging information generated by the linker.    (/DEBUGTYPE:[CV|COFF|BOTH])";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        string[][] switchMap = new string[][] { new string[] { "CV", "/DEBUGTYPE:CV" }, new string[] { "COFF", "/DEBUGTYPE:COFF" }, new string[] { "Both", "/DEBUGTYPE:BOTH" } };
        switch2.SwitchValue = base.ReadSwitchMap("DebugInformationFormat", switchMap, value);
        switch2.Name = "DebugInformationFormat";
        switch2.Value = value;
        switch2.MultiValues = true;
        base.ActiveToolSwitches.Add("DebugInformationFormat", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    public override bool LinkIncremental
    {
      get
      {
        return base.LinkIncremental;
      }
      set
      {
        base.ActiveToolSwitches.Remove("LinkIncremental");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Enable Incremental Linking";
        switch2.Description = "Enables incremental linking.  (/INCREMENTAL:YES, /INCREMENTAL:NO)";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/INCREMENTAL:YES";
        switch2.ReverseSwitchValue = "/INCREMENTAL:NO";
        switch2.Name = "LinkIncremental";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("LinkIncremental", switch2);
        base.AddActiveSwitchToolValue(switch2);
        switch2.Overrides.AddLast(new System.Collections.Generic.KeyValuePair<string, string>("INCREMENTAL:YES", "INCREMENTAL:NO"));
        switch2.Overrides.AddLast(new System.Collections.Generic.KeyValuePair<string, string>("INCREMENTAL:NO", "INCREMENTAL:YES"));
      }
    }
    public virtual bool OptimizeWin98
    {
      get
      {
        return (base.IsPropertySet("OptimizeWin98") && base.ActiveToolSwitches["OptimizeWin98"].BooleanValue);
      }
      set
      {
        base.ActiveToolSwitches.Remove("OptimizeWin98");
        ToolSwitch switch2 = new ToolSwitch(ToolSwitchType.Boolean);
        switch2.DisplayName = "Optimize for Windows 98";
        switch2.Description = "Align code on 4K boundaries. This improves performance on Windows 98 systems. (/OPT:WIN98, /OPT:NOWIN98) ";
        switch2.ArgumentRelationList = new System.Collections.ArrayList();
        switch2.SwitchValue = "/OPT:WIN98";
        switch2.ReverseSwitchValue = "/OPT:NOWIN98";
        switch2.Name = "OptimizeWin98";
        switch2.BooleanValue = value;
        base.ActiveToolSwitches.Add("OptimizeWin98", switch2);
        base.AddActiveSwitchToolValue(switch2);
      }
    }
    protected override void PostProcessSwitchList()
    {
      base.PostProcessSwitchList();
    }
    protected override System.Text.Encoding ResponseFileEncoding
    {
      get
      {
        return System.Text.Encoding.ASCII;
      }
    }
  }
  public class LIBA : Microsoft.Build.CPPTasks.LIB
  {
    protected override void PostProcessSwitchList()
    {
      base.ActiveToolSwitches.Remove("UseUnicodeResponseFiles");
      base.PostProcessSwitchList();
    }
    public override bool UseUnicodeResponseFiles
    {
      get
      {
        return false;
      }
      set
      {
      }
    }
    protected override System.Text.Encoding ResponseFileEncoding
    {
      get
      {
        return System.Text.Encoding.ASCII;
      }
    }
  }
  public class BSCMakeA : Microsoft.Build.CPPTasks.BSCMake
  {
    protected override void PostProcessSwitchList()
    {
      base.PostProcessSwitchList();
    }
    protected override System.Text.Encoding ResponseFileEncoding
    {
      get
      {
        return System.Text.Encoding.ASCII;
      }
    }
  }
}
