// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Create @ 1417be920

TSharedRef<FTextToken,1> * __cdecl
FTextToken::Create(TSharedRef<FTextToken,1> *__return_storage_ptr__,FText *param_1,bool param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 local_res8 [8];
  
  pTVar3 = ::operator_new(0x58);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFTextToken___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar3 + 4));
    pTVar3[1]._padding_ = (longlong)&___7FTextToken__6B_;
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (ITextData *)pTVar3[4]._padding_;
    if (pIVar2 != pIVar1) {
      pTVar3[4]._padding_ = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    pTVar3[4].SharedReferenceCount = (atomic<int>)param_1->Flags;
    *(bool *)&pTVar3[5]._padding_ = param_2;
  }
  TSharedRef<FTextToken,1>::TSharedRef<FTextToken,1>
            (__return_storage_ptr__,(FTextToken *)(pTVar3 + 1),pTVar3);
  return __return_storage_ptr__;
}

// GetType @ 1417d8780

Type __thiscall FTextToken::GetType(FTextToken *this)

{
  return Text;
}

// FTextToken @ 141918c10

FTextToken * __thiscall
TextFilterExpressionParser::FTextToken::FTextToken(FTextToken *this,FTextToken *param_1)

{
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::FString::FString((FString *)this,(FString *)param_1);
  pTVar1 = &(this->String).InternalStringAnsi;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->String).InternalStringAnsi.ArrayMax;
  iVar3 = (param_1->String).InternalStringAnsi.ArrayNum;
  _Src = (param_1->String).InternalStringAnsi.AllocatorInstance.Data;
  (this->String).InternalStringAnsi.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  this->TextComparisonMode = param_1->TextComparisonMode;
  this->InvertResult = param_1->InvertResult;
  return this;
}

// EvaluateAsBasicStringExpression @ 141938730

bool __thiscall
TextFilterExpressionParser::FTextToken::EvaluateAsBasicStringExpression
          (FTextToken *this,ITextFilterExpressionContext *param_1)

{
  char cVar1;
  
  if ((this->String).InternalString.Data.ArrayNum < 2) {
    return true;
  }
  cVar1 = (**(code **)*param_1)(param_1,this,this->TextComparisonMode);
  if (this->InvertResult != No) {
    cVar1 = cVar1 == '\0';
  }
  return (bool)cVar1;
}

// EvaluateAsComplexExpression @ 141938780

bool __thiscall
TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
          (FTextToken *this,ITextFilterExpressionContext *param_1,FTextFilterString *param_2,
          ETextFilterComparisonOperation param_3)

{
  ETextFilterTextComparisonMode EVar1;
  code *pcVar2;
  char cVar3;
  wchar_t *pwVar4;
  FName local_res8;
  
  EVar1 = this->TextComparisonMode;
  pcVar2 = *(code **)((longlong)*param_1 + 8);
  if ((param_2->InternalString).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->InternalString).Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar4);
  cVar3 = (*pcVar2)(param_1,&local_res8,this,param_3,EVar1);
  if (this->InvertResult != No) {
    cVar3 = cVar3 == '\0';
  }
  return (bool)cVar3;
}

