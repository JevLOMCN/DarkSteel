// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 2

// FSyntaxTextStyle @ 14d0ee390

FSyntaxTextStyle * __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::FSyntaxTextStyle::FSyntaxTextStyle
          (FSyntaxTextStyle *this,FTextBlockStyle *param_1,FTextBlockStyle *param_2)

{
  FTextBlockStyle::FTextBlockStyle(&this->NormalTextStyle,param_1);
  FTextBlockStyle::FTextBlockStyle(&this->ArgumentTextStyle,param_2);
  return this;
}

// ~FSyntaxTextStyle @ 14d0f0180

void __thiscall
FNamingTokensStringSyntaxHighlighterMarshaller::FSyntaxTextStyle::~FSyntaxTextStyle
          (FSyntaxTextStyle *this)

{
  FTextBlockStyle::~FTextBlockStyle(&this->ArgumentTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->NormalTextStyle);
  return;
}

