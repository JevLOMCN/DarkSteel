// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 12

// CloneToEmptyStorage @ 14da23340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0xb0,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____GetComponentDesc_VFFastGeoInstancedSkinnedMeshComponent___0A__FInstancedSkinnedMeshComponentHelper__SA_AUFInstanceDataManagerSourceDataDesc__AEAVFFastGeoInstancedSkinnedMeshComponent__W4EShaderPlatform___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x18);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x28);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  puVar2[5] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x38);
  puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  puVar2[7] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x48);
  puVar2[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar2[9] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x58);
  puVar2[10] = *(undefined8 *)((longlong)this + 0x50);
  puVar2[0xb] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x68);
  puVar2[0xc] = *(undefined8 *)((longlong)this + 0x60);
  puVar2[0xd] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x78);
  puVar2[0xe] = *(undefined8 *)((longlong)this + 0x70);
  puVar2[0xf] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x88);
  puVar2[0x10] = *(undefined8 *)((longlong)this + 0x80);
  puVar2[0x11] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x98);
  puVar2[0x12] = *(undefined8 *)((longlong)this + 0x90);
  puVar2[0x13] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0xa8);
  puVar2[0x14] = *(undefined8 *)((longlong)this + 0xa0);
  puVar2[0x15] = uVar1;
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14da233e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14da23420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::`5'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14da23440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::`5'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14da26930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14da26960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14da26990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014da26995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14da269a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014da269a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14da29650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14da29660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14da29670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14da29680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

