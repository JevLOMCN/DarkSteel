// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FUniqueObjectGuid @ 1420a30d0

FUniqueObjectGuid * __thiscall
FUniqueObjectGuid::FUniqueObjectGuid(FUniqueObjectGuid *this,UObject *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FUniqueObjectGuid *pFVar4;
  FUniqueObjectGuid local_18;
  
  pFVar4 = FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAnnotation
                     ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)&GuidAnnotation,&local_18,
                      (UObjectBase *)param_1);
  uVar1 = (pFVar4->Guid).B;
  uVar2 = (pFVar4->Guid).C;
  uVar3 = (pFVar4->Guid).D;
  (this->Guid).A = (pFVar4->Guid).A;
  (this->Guid).B = uVar1;
  (this->Guid).C = uVar2;
  (this->Guid).D = uVar3;
  return this;
}

// FixupForPIE @ 1420b8270

FUniqueObjectGuid * __thiscall
FUniqueObjectGuid::FixupForPIE
          (FUniqueObjectGuid *this,FUniqueObjectGuid *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_28;
  FGuid local_18;
  
  local_28.A = (this->Guid).A;
  local_28.B = (this->Guid).B;
  local_28.C = (this->Guid).C;
  local_28.D = (this->Guid).D;
  pFVar4 = RemapGuid(&local_18,(FUniqueObjectGuid *)&local_28,param_1);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (__return_storage_ptr__->Guid).A = pFVar4->A;
  (__return_storage_ptr__->Guid).B = uVar1;
  (__return_storage_ptr__->Guid).C = uVar2;
  (__return_storage_ptr__->Guid).D = uVar3;
  return __return_storage_ptr__;
}

// FromString @ 1420b8fe0

void __thiscall FUniqueObjectGuid::FromString(FUniqueObjectGuid *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  uVar4 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  local_98.ArrayMax = 0;
  DestructItems<FString,int>((FString *)0x0,0);
  local_98.ArrayNum = 0;
  if (local_98.ArrayMax != 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  }
  iVar3 = ::FString::ParseIntoArray(param_1,&local_98,L"-",false);
  if (iVar3 != 4) {
    (this->Guid).B = 0;
    (this->Guid).C = 0;
    (this->Guid).A = 0;
    goto LAB_1420b9255;
  }
  if ((local_98.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(local_98.AllocatorInstance.Data + 8) == 0) {
    local_88 = L"";
LAB_1420b90c1:
    sVar5 = wcslen(local_88);
    iStack_80 = (int)sVar5;
  }
  else {
    local_88 = *(wchar_t **)local_98.AllocatorInstance.Data;
    iStack_80 = iVar6;
    if (local_88 != (wchar_t *)0x0) goto LAB_1420b90c1;
  }
  local_48._12_4_ = uStack_7c;
  local_48.Size = iStack_80;
  local_48.DataPtr = local_88;
  uVar4 = FParse::HexNumber(&local_48);
  (this->Guid).A = uVar4;
  if ((local_98.ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = 0;
  if (*(int *)(local_98.AllocatorInstance.Data + 0x18) == 0) {
    local_78 = L"";
LAB_1420b913b:
    sVar5 = wcslen(local_78);
    iStack_70 = (int)sVar5;
  }
  else {
    local_78 = *(wchar_t **)(local_98.AllocatorInstance.Data + 0x10);
    iStack_70 = iVar3;
    if (local_78 != (wchar_t *)0x0) goto LAB_1420b913b;
  }
  local_38._12_4_ = uStack_6c;
  local_38.Size = iStack_70;
  local_38.DataPtr = local_78;
  uVar4 = FParse::HexNumber(&local_38);
  (this->Guid).B = uVar4;
  if ((local_98.ArrayNum < 3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(local_98.AllocatorInstance.Data + 0x28) == 0) {
    local_68 = L"";
LAB_1420b91b6:
    sVar5 = wcslen(local_68);
    iVar3 = (int)sVar5;
  }
  else {
    local_68 = *(wchar_t **)(local_98.AllocatorInstance.Data + 0x20);
    if (local_68 != (wchar_t *)0x0) goto LAB_1420b91b6;
  }
  local_28._12_4_ = uStack_5c;
  local_28.Size = iVar3;
  local_28.DataPtr = local_68;
  iStack_60 = iVar3;
  uVar4 = FParse::HexNumber(&local_28);
  (this->Guid).C = uVar4;
  if ((local_98.ArrayNum < 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(local_98.AllocatorInstance.Data + 0x38) == 0) {
    local_58 = L"";
LAB_1420b922c:
    sVar5 = wcslen(local_58);
    iVar6 = (int)sVar5;
  }
  else {
    local_58 = *(wchar_t **)(local_98.AllocatorInstance.Data + 0x30);
    if (local_58 != (wchar_t *)0x0) goto LAB_1420b922c;
  }
  local_18._12_4_ = uStack_4c;
  local_18.Size = iVar6;
  local_18.DataPtr = local_58;
  iStack_50 = iVar6;
  uVar4 = FParse::HexNumber(&local_18);
LAB_1420b9255:
  (this->Guid).D = uVar4;
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// GetOrCreateIDForObject @ 1420c7990

FUniqueObjectGuid * __cdecl
FUniqueObjectGuid::GetOrCreateIDForObject
          (FUniqueObjectGuid *__return_storage_ptr__,FObjectPtr param_1)

{
  UObjectBase *this;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FUniqueObjectGuid *pFVar6;
  FGuid *pFVar7;
  FUniqueObjectGuid local_28;
  FGuid local_18;
  
  this = *(UObjectBase **)param_1.field0_0x0;
  if (this == (UObjectBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LazyObjectPtr.cpp"
                       ,0x57,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FUniqueObjectGuid *)(*pcVar1)();
      return pFVar6;
    }
  }
  pFVar6 = FUObjectAnnotationSparse<FUniqueObjectGuid,1>::GetAnnotation
                     ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)&GuidAnnotation,&local_28,
                      this);
  uVar2 = (pFVar6->Guid).B;
  uVar3 = (pFVar6->Guid).C;
  uVar4 = (pFVar6->Guid).D;
  (__return_storage_ptr__->Guid).A = (pFVar6->Guid).A;
  (__return_storage_ptr__->Guid).B = uVar2;
  (__return_storage_ptr__->Guid).C = uVar3;
  (__return_storage_ptr__->Guid).D = uVar4;
  if ((((__return_storage_ptr__->Guid).D == 0 && (__return_storage_ptr__->Guid).C == 0) &&
      (__return_storage_ptr__->Guid).B == 0) && (__return_storage_ptr__->Guid).A == 0) {
    pFVar7 = FGuid::NewGuid(&local_18);
    uVar2 = pFVar7->B;
    uVar3 = pFVar7->C;
    uVar4 = pFVar7->D;
    (__return_storage_ptr__->Guid).A = pFVar7->A;
    (__return_storage_ptr__->Guid).B = uVar2;
    (__return_storage_ptr__->Guid).C = uVar3;
    (__return_storage_ptr__->Guid).D = uVar4;
    FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::
    AddAnnotationInternal<FUniqueObjectGuid_const_&>(&GuidAnnotation,this,__return_storage_ptr__);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return __return_storage_ptr__;
}

// ResolveObject @ 1420d4580

UObject * __thiscall FUniqueObjectGuid::ResolveObject(FUniqueObjectGuid *this)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  UObject *pUVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GuidAnnotation.InverseAnnotationMapCritical);
  uVar2 = CityHash64((char *)this,0x10);
  iVar1 = TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueObjectGuid>
                    ((TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
                      *)&GuidAnnotation.InverseAnnotationMap,(uint)uVar2,this);
  if ((iVar1 == -1) ||
     (lVar3 = (longlong)iVar1 * 0x20 + GuidAnnotation.InverseAnnotationMap._0_8_, lVar3 == 0)) {
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar4 = *(UObject **)(lVar3 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GuidAnnotation.InverseAnnotationMapCritical);
  return pUVar4;
}

// ToString @ 1420dc0b0

FString * __thiscall
FUniqueObjectGuid::ToString(FUniqueObjectGuid *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&this->Guid,__return_storage_ptr__,UniqueObjectGuid);
  return __return_storage_ptr__;
}

