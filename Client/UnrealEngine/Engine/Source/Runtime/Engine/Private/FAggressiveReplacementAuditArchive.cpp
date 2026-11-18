// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator<< @ 148b1ef00

FArchive * __thiscall
FAggressiveReplacementAuditArchive::operator<<
          (FAggressiveReplacementAuditArchive *this,UObject **param_1)

{
  UPackage *pUVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObjectBaseUtility *pUVar4;
  TTuple<UObject_*,UObject_*> *pTVar5;
  UObjectBaseUtility *local_res8;
  UObject *local_res10;
  UObject **local_38;
  UObjectBaseUtility **local_30;
  FAggressiveReplacementAuditArchive *local_28;
  
  local_res8 = (UObjectBaseUtility *)*param_1;
  local_res10 = (UObject *)local_res8;
  FArchiveReplaceObjectRef<UObject>::operator<<
            ((FArchiveReplaceObjectRef<UObject> *)this,(UObject **)&local_res8);
  pUVar4 = local_res8;
  if (local_res8 != (UObjectBaseUtility *)0x0) {
    pUVar1 = UObjectBaseUtility::GetPackage(local_res8);
    if (((pUVar1 != (UPackage *)0x0) && (pUVar1 != (UPackage *)*param_1)) &&
       ((UPackage *)this->_padding_ != pUVar1)) {
      pUVar4 = (UObjectBaseUtility *)this->_padding_;
      pUVar2 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)*param_1);
      pUVar3 = UObjectBaseUtility::GetOutermostObject(pUVar4);
      if ((pUVar2 != pUVar3) &&
         (pUVar4 = (UObjectBaseUtility *)(UObject *)0x0, (*(uint *)&(*param_1)->field_0x8 & 1) == 0)
         ) goto LAB_148b1ef99;
    }
    pUVar4 = local_res8;
  }
LAB_148b1ef99:
  *param_1 = (UObject *)pUVar4;
  pTVar5 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                   *)this->AggressiveReplacements,local_res10);
  local_res8 = (UObjectBaseUtility *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<UObject_*,UObject_*> *)0x0) {
    local_res8 = (UObjectBaseUtility *)(UObject *)0x0;
  }
  if (local_res8 != (UObjectBaseUtility *)0x0) {
    local_38 = &local_res10;
    local_30 = &local_res8;
    local_28 = this;
    `FAggressiveReplacementAuditArchive::operator<<'::__l5::<lambda_1>::operator()(&local_38);
  }
  return (FArchive *)this;
}

// operator() @ 150536880

bool __thiscall
`FAggressiveReplacementAuditArchive::operator<<'::__l5::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  wchar_t *pwVar10;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar8 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar7 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4775614440395487566>);
  if (bVar7) {
    pvVar1 = *(void **)(*(longlong *)((longlong)this + 0x10) + 0x70);
    if (pvVar1 == (void *)0x0) {
      pwVar10 = L"none";
LAB_15053690e:
      ::FString::FString(&local_78,pwVar10);
    }
    else {
      bVar8 = IsThisNotNull(pvVar1,"FField::GetName");
      if (!bVar8) {
        pwVar10 = L"None";
        goto LAB_15053690e;
      }
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_78);
    }
    lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x90);
    if (lVar2 == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar2 + 0x18);
      ::FName::ToString(&local_res10,&local_48);
    }
    if (*(longlong *)**(undefined8 **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res18 = *(FName *)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res18,&local_58);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      local_res20 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res20,&local_68);
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar8 = true;
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4775614440395487566>,
                       &`public:___cdecl_`public:_virtual_class_FArchive&___ptr64___cdecl_FAggressiveReplacementAuditArchive::operator<<(UObject*___ptr64&___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_150536a38;
    }
  }
  bVar7 = false;
LAB_150536a38:
  if ((bVar8) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  return false;
}

