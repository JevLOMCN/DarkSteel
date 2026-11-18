// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 3

// StaticStruct @ 14a0ad8e0

UScriptStruct * __cdecl FRigVMFunctionCompilationPropertyDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyDescription.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription,
                         (UObject *)pUVar1,L"RigVMFunctionCompilationPropertyDescription");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationPropertyDescription.
         OuterSingleton;
}

// ToPropertyDescription @ 14a111f50

FRigVMPropertyDescription * __thiscall
FRigVMFunctionCompilationPropertyDescription::ToPropertyDescription
          (FRigVMFunctionCompilationPropertyDescription *this,
          FRigVMPropertyDescription *__return_storage_ptr__)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->CPPTypeObject);
  if ((pUVar1 == (UObject *)0x0) &&
     (*(longlong *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8 != 0)) {
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->CPPTypeObject);
  }
  FRigVMPropertyDescription::FRigVMPropertyDescription
            (__return_storage_ptr__,&this->Name,&this->CPPType,pUVar1,&this->DefaultValue);
  return __return_storage_ptr__;
}

// ToPropertyDescription @ 14a111fd0

/* WARNING: Removing unreachable block (ram,0x00014a1121cf) */
/* WARNING: Removing unreachable block (ram,0x00014a1121dd) */
/* WARNING: Removing unreachable block (ram,0x00014a1121eb) */

TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> * __cdecl
FRigVMFunctionCompilationPropertyDescription::ToPropertyDescription
          (TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  FRigVMPropertyDescription *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *pTVar10;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 local_res8 [8];
  FRigVMPropertyDescription local_78;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = param_1->ArrayNum;
  pFVar11 = (FName *)(param_1->AllocatorInstance).Data;
  this = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar11 + 3);
  pFVar12 = pFVar11 + (longlong)iVar4 * 10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyDescription_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      return __return_storage_ptr__;
    }
    pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
    if ((pUVar9 == (UObject *)0x0) && ((this->ObjectID).AssetPath.PackageName != (FName)0x0)) {
      FSoftObjectPath::TryLoad(&this->ObjectID,(FUObjectSerializeContext *)0x0);
      pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
    }
    FRigVMPropertyDescription::FRigVMPropertyDescription
              (&local_78,pFVar11,(FString *)&this[-1].ObjectID.SubPathString,pUVar9,
               (FString *)(this + 1));
    pFVar5 = (FRigVMPropertyDescription *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar5 <= &local_78) && (&local_78 < pFVar5 + *piVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar2 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x48);
    *pFVar2 = local_78.Name;
    pFVar2[2].ComparisonIndex = 0;
    pFVar2[2].Number = 0;
    pFVar2[1] = (FName)local_78.Property;
    pFVar2[2] = (FName)local_78.CPPType.Data.AllocatorInstance.Data;
    pFVar2[3].ComparisonIndex.Value = local_78.CPPType.Data.ArrayNum;
    pFVar2[3].Number = local_78.CPPType.Data.ArrayMax;
    pFVar2[5].ComparisonIndex = 0;
    pFVar2[5].Number = 0;
    pFVar2[4] = (FName)local_78.CPPTypeObject;
    pFVar2[5] = (FName)local_78.Containers.AllocatorInstance.Data;
    pFVar2[6].ComparisonIndex.Value = local_78.Containers.ArrayNum;
    pFVar2[6].Number = local_78.Containers.ArrayMax;
    pFVar2[7].ComparisonIndex = 0;
    pFVar2[7].Number = 0;
    pFVar2[7] = (FName)local_78.DefaultValue.Data.AllocatorInstance.Data;
    pFVar2[8].ComparisonIndex.Value = local_78.DefaultValue.Data.ArrayNum;
    pFVar2[8].Number = local_78.DefaultValue.Data.ArrayMax;
    local_78.DefaultValue.Data.ArrayNum = 0;
    local_78.DefaultValue.Data.ArrayMax = 0;
    local_78.DefaultValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Containers.ArrayNum = 0;
    local_78.Containers.ArrayMax = 0;
    local_78.Containers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.CPPType.Data.ArrayNum = 0;
    local_78.CPPType.Data.ArrayMax = 0;
    local_78.CPPType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar11 = pFVar11 + 10;
    this = this + 2;
  }
  pcVar6 = (code *)swi(3);
  pTVar10 = (TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
  return pTVar10;
}

