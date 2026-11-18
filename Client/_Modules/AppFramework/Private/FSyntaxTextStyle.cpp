// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// FSyntaxTextStyle @ 14305caa0

FSyntaxTextStyle * __thiscall
FRichTextSyntaxHighlighterTextLayoutMarshaller::FSyntaxTextStyle::FSyntaxTextStyle
          (FSyntaxTextStyle *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FTextBlockStyle *pFVar3;
  FName local_res8;
  
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"SyntaxHighlight.Normal");
  pFVar3 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTextBlockStyle *)0x0) {
    pFVar3 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::FTextBlockStyle(&this->NormalTextStyle,pFVar3);
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"SyntaxHighlight.Node");
  pFVar3 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTextBlockStyle *)0x0) {
    pFVar3 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::FTextBlockStyle(&this->NodeTextStyle,pFVar3);
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"SyntaxHighlight.NodeAttributeKey");
  pFVar3 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTextBlockStyle *)0x0) {
    pFVar3 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::FTextBlockStyle(&this->NodeAttributeKeyTextStyle,pFVar3);
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"SyntaxHighlight.NodeAttribueAssignment");
  pFVar3 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTextBlockStyle *)0x0) {
    pFVar3 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::FTextBlockStyle(&this->NodeAttribueAssignmentTextStyle,pFVar3);
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"SyntaxHighlight.NodeAttributeValue");
  pFVar3 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTextBlockStyle *)0x0) {
    pFVar3 = FTextBlockStyle::GetDefault();
  }
  FTextBlockStyle::FTextBlockStyle(&this->NodeAttributeValueTextStyle,pFVar3);
  return this;
}

// ~FSyntaxTextStyle @ 143061e60

void __thiscall
FRichTextSyntaxHighlighterTextLayoutMarshaller::FSyntaxTextStyle::~FSyntaxTextStyle
          (FSyntaxTextStyle *this)

{
  FTextBlockStyle::~FTextBlockStyle(&this->NodeAttributeValueTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->NodeAttribueAssignmentTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->NodeAttributeKeyTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->NodeTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->NormalTextStyle);
  return;
}

