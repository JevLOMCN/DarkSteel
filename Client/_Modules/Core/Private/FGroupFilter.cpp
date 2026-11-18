// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FGroupFilter @ 1419d2780

void __thiscall FGroupFilter::~FGroupFilter(FGroupFilter *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FGroupFilter__6B_;
  if ((this->RootValidCount < 0) && (1 < (this->RootFilter).Data.ArrayNum)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8011288727840096411>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsCommand.cpp"
                       ,0x9b,"RootValidCount >= 0 || RootFilter.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->RootFilter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IItemFilter__6B_;
  return;
}

// IsRoot @ 141a07740

bool __thiscall FGroupFilter::IsRoot(FGroupFilter *this,FName *param_1)

{
  int iVar1;
  TTuple<FName,bool> *pTVar2;
  FString *this_00;
  size_t sVar3;
  undefined1 *puVar4;
  wchar_t *_Str;
  undefined1 local_res8 [16];
  undefined1 local_28 [16];
  
  pTVar2 = TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                 *)&this->HudGroupManager->RootFilterCache,*param_1);
  puVar4 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,bool> *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined1 *)0x0) {
    return (bool)*puVar4;
  }
  this_00 = ::FName::ToString(param_1,(FString *)local_28);
  if ((this->RootFilter).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->RootFilter).Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      iVar1 = -1;
      goto LAB_141a077e3;
    }
  }
  sVar3 = wcslen(_Str);
  iVar1 = ::FString::Find(this_00,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
LAB_141a077e3:
  local_res8[0] = iVar1 != -1;
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  local_28._8_8_ = local_res8;
  local_28._0_8_ = param_1;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,bool_const_&>_>
            ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
              *)&this->HudGroupManager->RootFilterCache,
             (TPairInitializer<FName_const_&,bool_const_&> *)(local_res8 + 8),(bool *)local_28);
  return (bool)local_res8[0];
}

// Keep @ 141a07d70

bool __thiscall FGroupFilter::Keep(FGroupFilter *this,FStatMessage *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = (param_1->NameAndInfo).Index.Value;
  uVar6 = (param_1->NameAndInfo).Number;
  local_res8.Number = uVar6 & 0x1ff;
  if (1 < (this->RootFilter).Data.ArrayNum) {
    uVar6 = uVar6 & 0xf000;
    if (uVar6 == 0xc000) {
      bVar3 = IsRoot(this,&local_res8);
      if (bVar3) {
        this->RootValidCount = this->RootValidCount + 1;
      }
    }
    else if ((uVar6 == 0xd000) && (bVar3 = IsRoot(this,&local_res8), bVar3)) {
      this->RootValidCount = this->RootValidCount + -1;
    }
  }
  uVar6 = local_res8.Number;
  lVar2 = CONCAT44(local_res8.Number,local_res8.ComparisonIndex.Value);
  pTVar1 = this->EnabledItems;
  uVar4 = ::GetTypeHash(local_res8.ComparisonIndex);
  if (*(int *)&(pTVar1->Elements).field_0x8 != *(int *)&(pTVar1->Elements).field_0x34) {
    FVar7 = (pTVar1->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&pTVar1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)(pTVar1->HashSize - 1U & uVar6 + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&pTVar1->Elements + (longlong)iVar5 * 0x10) == lVar2) {
          if (this->RootValidCount == 0) {
            return false;
          }
          return true;
        }
        iVar5 = *(int *)(*(longlong *)&pTVar1->Elements + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  return false;
}

