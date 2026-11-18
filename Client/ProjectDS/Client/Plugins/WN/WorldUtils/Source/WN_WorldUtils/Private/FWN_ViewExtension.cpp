// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 4

// FWN_ViewExtension @ 14a02d950

FWN_ViewExtension * __thiscall
FWN_ViewExtension::FWN_ViewExtension
          (FWN_ViewExtension *this,FAutoRegister *param_1,UWN_WorldUtils_Subsystem *param_2)

{
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->Subsystem = param_2;
  this->_padding_ = (longlong)&___7FWN_ViewExtension__6B_;
  return this;
}

// BeginRenderViewFamily @ 14a031d20

void __thiscall
FWN_ViewExtension::BeginRenderViewFamily(FWN_ViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// SetupView @ 14a03a290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FWN_ViewExtension::SetupView(FWN_ViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  int *piVar1;
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  *this_00;
  int iVar2;
  UWN_WorldUtils_Subsystem *pUVar3;
  void *pvVar4;
  bool bVar5;
  longlong lVar6;
  
  if (((param_1->Scene != (FSceneInterface *)0x0) &&
      (lVar6 = (**(code **)(param_1->Scene->_padding_ + 0x410))(), lVar6 != 0)) &&
     (this->Subsystem != (UWN_WorldUtils_Subsystem *)0x0)) {
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>
              (&param_2->HiddenPrimitives,&this->Subsystem->CustomHiddenPrimitiveIDs);
    pUVar3 = this->Subsystem;
    this_00 = &param_2->ShowOnlyPrimitives;
    if ((pUVar3->CurrentOcclusionVolume).field0_0x0.DebugPtr == (AWN_OcclusionVolume *)0x0) {
      TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
      ::Reset(this_00);
      return;
    }
    iVar2 = *(int *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0xc);
    piVar1 = (int *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0xc);
    if (*(int *)&(pUVar3->VolumeShownPrimitiveIDs).Elements.field_0x8 ==
        *(int *)&(pUVar3->VolumeShownPrimitiveIDs).Elements.field_0x34) {
      if (iVar2 != -1) {
        (param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
        pvVar4 = *(void **)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x40);
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_00,0,piVar1);
        }
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
        iVar2 = *(int *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x2c);
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
        if ((iVar2 < 0) || (0x80 < iVar2)) {
          *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.Elements.field_0x10,0);
        }
        pvVar4 = *(void **)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x20);
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        if (*(void **)&this_00->field0_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00->field0_0x0);
        }
        *(undefined8 *)&this_00->field0_0x0 = 0;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
        *piVar1 = -1;
        *(undefined8 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
        *(undefined8 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
        (param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
      }
    }
    else {
      if (iVar2 == -1) {
        (param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
        pvVar4 = *(void **)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x40);
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this_00);
        *(undefined8 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x10) = 0;
        *(undefined8 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x18) = 0;
        *(undefined8 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x38) = 0;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x4c) = 0;
        *(undefined8 *)&this_00->field0_0x0 = 0;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
        *piVar1 = 0;
        *(undefined8 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
        *(undefined8 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
        (param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
      }
      bVar5 = 1 < (param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize;
      if (!bVar5) {
        TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                        *)this_00);
      }
      *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)this_00,0,piVar1);
      }
      *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
      iVar2 = *(int *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x2c);
      *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.Elements.field_0x10,0);
      }
      if (bVar5) {
        (param_2->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 1;
        TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
        Rehash((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)this_00);
      }
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                  *)this_00,&this->Subsystem->VolumeShownPrimitiveIDs);
    }
  }
  return;
}

// SetupViewFamily @ 14a03a510

void __thiscall
FWN_ViewExtension::SetupViewFamily(FWN_ViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

