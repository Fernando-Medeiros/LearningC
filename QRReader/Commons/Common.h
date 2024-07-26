#pragma once

namespace Common {
    using
	  System::String;

    public delegate void BufferChanged(String^ message);
    public delegate void MessageChanged(String^ caption, String^ message);

    ref struct Caption
    {
	  static String^ Error = "Falha";
	  static String^ Warning = "Alerta";
	  static String^ Info = "Informação";
	  static String^ Output = "Envio de Dados";
	  static String^ Input = "Entrada de dados";
    };
}