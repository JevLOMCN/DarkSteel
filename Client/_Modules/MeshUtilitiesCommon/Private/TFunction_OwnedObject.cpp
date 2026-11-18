// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 12

// CloneToEmptyStorage @ 144353340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 144353380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::`9'::<lambda_1>,0,0>::_vftable_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1443533a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1443533e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::`11'::<lambda_2>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 144353f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144353f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144353f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144353f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144353f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144353f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144359c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144359c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l9::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144359c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144359c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLayoutUV::FChartPacker::PackCharts'::__l11::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

