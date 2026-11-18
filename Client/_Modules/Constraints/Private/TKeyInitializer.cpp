// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 1

// operator<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction> @ 14648f940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction> * __thiscall
TKeyInitializer<TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>
          (TKeyInitializer<TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  TFunction<void___cdecl(void)> *pTVar3;
  bool bVar4;
  int iVar5;
  TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction> *pTVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FTickFunction local_58;
  undefined8 local_30;
  TFunction<void___cdecl(void)> *local_28;
  undefined8 local_20;
  
  FTickFunction::FTickFunction(&local_58);
  local_58.bHighPriority = '\x01';
  local_58.bStartWithTickEnabled = '\x01';
  local_58.bCanEverTick = '\x01';
  local_58._padding_ = (longlong)&___7FConstraintTickFunction__6B_;
  local_30 = 0;
  local_28 = (TFunction<void___cdecl(void)> *)0x0;
  local_20 = 0;
  local_58.TickGroup.Value = '\0';
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  FTickFunction::FTickFunction((FTickFunction *)&__return_storage_ptr__->field_0x8);
  pTVar3 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  __return_storage_ptr__->field_0x12 = __return_storage_ptr__->field_0x12 | 0x26;
  __return_storage_ptr__->field_0x10 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x8 = &___7FConstraintTickFunction__6B_;
  if (0 < (int)local_20) {
    if ((local_28 <
         (TFunction<void___cdecl(void)> *)
         ((longlong)*(int *)&__return_storage_ptr__->field_0x44 * 0x30)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction> *)(*pcVar2)();
      return pTVar6;
    }
    iVar5 = *(int *)&__return_storage_ptr__->field_0x40;
    if (iVar5 == *(int *)&__return_storage_ptr__->field_0x44) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,(ForAnyElementType *)&__return_storage_ptr__->field_0x38,
                         (int *)&__return_storage_ptr__->field_0x44);
    }
    *(int *)&__return_storage_ptr__->field_0x40 = iVar5 + 1;
    plVar8 = (longlong *)((longlong)iVar5 * 0x30 + *(longlong *)&__return_storage_ptr__->field_0x38)
    ;
    *plVar8 = *(longlong *)pTVar3;
    plVar8[5] = 0;
    if (*plVar8 != 0) {
      puVar7 = (undefined8 *)&pTVar3->field_0x10;
      if (*(undefined8 **)&pTVar3->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&pTVar3->field_0x28;
      }
      (**(code **)*puVar7)();
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_30;
  local_58._padding_ = (longlong)&___7FConstraintTickFunction__6B_;
  DestructItems<TFunction<void___cdecl(void)>,int>(local_28,(int)local_20);
  if (local_28 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_28);
  }
  FTickFunction::~FTickFunction(&local_58);
  return __return_storage_ptr__;
}

