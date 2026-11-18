// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FSyntaxHighlighterTextLayoutMarshaller @ 142846350

FSyntaxHighlighterTextLayoutMarshaller * __thiscall
FSyntaxHighlighterTextLayoutMarshaller::FSyntaxHighlighterTextLayoutMarshaller
          (FSyntaxHighlighterTextLayoutMarshaller *this,TSharedPtr<ISyntaxTokenizer,1> *param_1)

{
  FPlainTextLayoutMarshaller::FPlainTextLayoutMarshaller((FPlainTextLayoutMarshaller *)this);
  this->_padding_ = (longlong)&___7FSyntaxHighlighterTextLayoutMarshaller__6B_;
  (this->Tokenizer).Object = param_1->Object;
  (this->Tokenizer).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (ISyntaxTokenizer *)0x0;
  this->bSyntaxHighlightingEnabled = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSyntaxHighlighterTextLayoutMarshaller @ 142849ee0

void __thiscall
FSyntaxHighlighterTextLayoutMarshaller::~FSyntaxHighlighterTextLayoutMarshaller
          (FSyntaxHighlighterTextLayoutMarshaller *this)

{
  this->_padding_ = (longlong)&___7FSyntaxHighlighterTextLayoutMarshaller__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Tokenizer).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FPlainTextLayoutMarshaller__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  this->_padding_ = (longlong)&___7ITextLayoutMarshaller__6B_;
  return;
}

// EnableSyntaxHighlighting @ 14286f000

void __thiscall
FSyntaxHighlighterTextLayoutMarshaller::EnableSyntaxHighlighting
          (FSyntaxHighlighterTextLayoutMarshaller *this,bool param_1)

{
  this->bSyntaxHighlightingEnabled = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014286f006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))();
  return;
}

// IsSyntaxHighlightingEnabled @ 1428829c0

bool __thiscall
FSyntaxHighlighterTextLayoutMarshaller::IsSyntaxHighlightingEnabled
          (FSyntaxHighlighterTextLayoutMarshaller *this)

{
  return this->bSyntaxHighlightingEnabled;
}

// RequiresLiveUpdate @ 142895280

bool __thiscall
FSyntaxHighlighterTextLayoutMarshaller::RequiresLiveUpdate
          (FSyntaxHighlighterTextLayoutMarshaller *this)

{
  return this->bSyntaxHighlightingEnabled;
}

// SetText @ 14289a920

void __thiscall
FSyntaxHighlighterTextLayoutMarshaller::SetText
          (FSyntaxHighlighterTextLayoutMarshaller *this,FString *param_1,FTextLayout *param_2)

{
  ISyntaxTokenizer *pIVar1;
  code *pcVar2;
  FTokenizedLine *pFVar3;
  int iVar4;
  bool bVar5;
  FTokenizedLine *local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if (this->bSyntaxHighlightingEnabled == false) {
    FPlainTextLayoutMarshaller::SetText((FPlainTextLayoutMarshaller *)this,param_1,param_2);
  }
  else {
    local_38 = (FTokenizedLine *)0x0;
    local_30 = 0;
    if ((this->Tokenizer).Object == (ISyntaxTokenizer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->Tokenizer).Object;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_38,param_1);
    pFVar3 = local_38;
    iVar4 = (int)local_30;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = (int)local_30;
    pcVar2 = *(code **)(this->_padding_ + 0x38);
    if ((int)local_30 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(int)local_30,0,&local_28,(int)local_30,&local_1c);
      ConstructItems<ISyntaxTokenizer::FTokenizedLine,ISyntaxTokenizer::FTokenizedLine,int>
                (local_28.Data,pFVar3,iVar4);
    }
    (*pcVar2)(this,param_1,param_2,&local_28);
    DestructItems<ISyntaxTokenizer::FTokenizedLine,int>(local_38,(int)local_30);
    if (local_38 != (FTokenizedLine *)0x0) {
      FMemory::Free(local_38);
      return;
    }
  }
  return;
}

