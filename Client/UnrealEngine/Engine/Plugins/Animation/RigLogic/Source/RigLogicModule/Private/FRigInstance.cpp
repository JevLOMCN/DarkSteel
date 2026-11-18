// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 30

// FRigInstance @ 14a660160

FRigInstance * __thiscall FRigInstance::FRigInstance(FRigInstance *this,FRigLogic *param_1)

{
  RigInstance *pRVar1;
  
  FMemoryResource::SharedInstance(&this->MemoryResource);
  pRVar1 = rl4::RigInstance::create
                     ((param_1->RigLogic).Ptr,(MemoryResource *)(this->MemoryResource).Object);
  (this->RigInstance).Ptr = pRVar1;
  return this;
}

// ~FRigInstance @ 14a6610f0

void __thiscall FRigInstance::~FRigInstance(FRigInstance *this)

{
  rl4::RigInstance::destroy((this->RigInstance).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MemoryResource).SharedReferenceCount.ReferenceController);
  return;
}

// GetAnimatedMapOutputs @ 14a66d420

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetAnimatedMapOutputs
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 200))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeOutputs @ 14a66e720

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetBlendShapeOutputs
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 0xc0))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetGUIControl @ 14a6703d0

float __thiscall FRigInstance::GetGUIControl(FRigInstance *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6703d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*(this->RigInstance).Ptr + 0x10))();
  return fVar1;
}

// GetGUIControlCount @ 14a670470

ushort __thiscall FRigInstance::GetGUIControlCount(FRigInstance *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a670477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigInstance).Ptr + 8))();
  return uVar1;
}

// GetGUIControlValues @ 14a6707b0

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetGUIControlValues
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x20))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetJointOutputs @ 14a6726c0

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetJointOutputs
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 0xb8))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetLOD @ 14a672d80

ushort __thiscall FRigInstance::GetLOD(FRigInstance *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigInstance).Ptr + 0xd0))();
  return uVar1;
}

// GetMLControl @ 14a672ec0

float __thiscall FRigInstance::GetMLControl(FRigInstance *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*(this->RigInstance).Ptr + 0x78))();
  return fVar1;
}

// GetMLControlCount @ 14a672f20

ushort __thiscall FRigInstance::GetMLControlCount(FRigInstance *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigInstance).Ptr + 0x70))();
  return uVar1;
}

// GetMLControlValues @ 14a6731e0

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetMLControlValues
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x80))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkCount @ 14a674b80

ushort __thiscall FRigInstance::GetNeuralNetworkCount(FRigInstance *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a674b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigInstance).Ptr + 0x88))();
  return uVar1;
}

// GetNeuralNetworkMask @ 14a675860

float __thiscall FRigInstance::GetNeuralNetworkMask(FRigInstance *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a675867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*(this->RigInstance).Ptr + 0x90))();
  return fVar1;
}

// GetPSDControl @ 14a676070

float __thiscall FRigInstance::GetPSDControl(FRigInstance *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*(this->RigInstance).Ptr + 0x60))();
  return fVar1;
}

// GetPSDControlCount @ 14a676090

ushort __thiscall FRigInstance::GetPSDControlCount(FRigInstance *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a676097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigInstance).Ptr + 0x58))();
  return uVar1;
}

// GetPSDControlValues @ 14a6760b0

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetPSDControlValues
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x68))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFControl @ 14a6767d0

float __thiscall FRigInstance::GetRBFControl(FRigInstance *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6767d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*(this->RigInstance).Ptr + 0xa8))();
  return fVar1;
}

// GetRBFControlCount @ 14a6767f0

ushort __thiscall FRigInstance::GetRBFControlCount(FRigInstance *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6767f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigInstance).Ptr + 0xa0))();
  return uVar1;
}

// GetRBFControlValues @ 14a676810

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetRBFControlValues
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 0xb0))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRawControl @ 14a6787d0

float __thiscall FRigInstance::GetRawControl(FRigInstance *this,ushort param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a6787d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*(this->RigInstance).Ptr + 0x38))();
  return fVar1;
}

// GetRawControlCount @ 14a678870

ushort __thiscall FRigInstance::GetRawControlCount(FRigInstance *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a678877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigInstance).Ptr + 0x30))();
  return uVar1;
}

// GetRawControlValues @ 14a678c30

TArrayView<float_const_,int> * __thiscall
FRigInstance::GetRawControlValues
          (FRigInstance *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigInstance *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigInstance).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x48))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// SetGUIControl @ 14a682770

void __thiscall FRigInstance::SetGUIControl(FRigInstance *this,ushort param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a682777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->RigInstance).Ptr + 0x18))();
  return;
}

// SetGUIControlValues @ 14a682790

void __thiscall FRigInstance::SetGUIControlValues(FRigInstance *this,float *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a682797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->RigInstance).Ptr + 0x28))();
  return;
}

// SetLOD @ 14a6827c0

void __thiscall FRigInstance::SetLOD(FRigInstance *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a6827c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->RigInstance).Ptr + 0xd8))();
  return;
}

// SetNeuralNetworkMask @ 14a6827e0

void __thiscall FRigInstance::SetNeuralNetworkMask(FRigInstance *this,ushort param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a6827e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->RigInstance).Ptr + 0x98))();
  return;
}

// SetRawControl @ 14a682800

void __thiscall FRigInstance::SetRawControl(FRigInstance *this,ushort param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014a682807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->RigInstance).Ptr + 0x40))();
  return;
}

// SetRawControlValues @ 14a682820

void __thiscall FRigInstance::SetRawControlValues(FRigInstance *this,float *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a682827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->RigInstance).Ptr + 0x50))();
  return;
}

// Unwrap @ 14a6838a0

RigInstance * __thiscall FRigInstance::Unwrap(FRigInstance *this)

{
  return (this->RigInstance).Ptr;
}

