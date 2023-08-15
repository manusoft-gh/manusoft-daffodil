using System;
using System.Collections.Generic;
using System.Windows.Forms;
using System.ServiceModel;

namespace WindowsApplication1
{
  static class Program
  {
    /// <summary>
    /// The main entry point for the application.
    /// </summary>
    [STAThread]
    static void Main()
    {
      System.ServiceModel.Channels.Binding binding = new BasicHttpBinding(BasicHttpSecurityMode.None);
      Application.EnableVisualStyles();
      Application.SetCompatibleTextRenderingDefault(false);
      Application.Run(new Form1());
    }
  }
}