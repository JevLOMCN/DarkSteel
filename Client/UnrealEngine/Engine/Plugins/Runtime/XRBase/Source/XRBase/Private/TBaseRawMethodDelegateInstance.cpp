// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 11

// CreateCopy @ 14cf85e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDefaultSpectatorScreenController____A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf85ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDefaultSpectatorScreenController____A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14cf85f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDefaultSpectatorScreenController____A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cf89cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
          *this,FRHICommandListImmediate *param_1,TRefCountPtr<FRHITexture> param_2,
         TRefCountPtr<FRHITexture> param_3,TRefCountPtr<FRHITexture> param_4,
         TVector2<double> *param_5)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  TRefCountPtr<FRHITexture> TVar4;
  FDefaultSpectatorScreenController *pFVar5;
  FDefaultSpectatorScreenController *local_res8;
  longlong local_res18;
  longlong local_res20;
  double local_28;
  double dStack_20;
  
  TVar4.Reference = param_4.Reference;
  local_res8 = this->UserObject;
  pcVar2 = *(code **)&this->MethodPtr;
  uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pFVar1 = (FRHITexture *)(param_4.Reference)->_padding_;
  (param_4.Reference)->_padding_ = 0;
  local_res18 = (param_3.Reference)->_padding_;
  (param_3.Reference)->_padding_ = 0;
  local_res20 = (param_2.Reference)->_padding_;
  (param_2.Reference)->_padding_ = 0;
  local_28 = (param_5->field0_0x0)._s_0.X;
  dStack_20 = (param_5->field0_0x0)._s_0.Y;
  param_4.Reference = pFVar1;
  pFVar5 = UE::Core::Private::
           DereferenceIfNecessary<FDefaultSpectatorScreenController,FDefaultSpectatorScreenController_*_&>
                     (&local_res8);
  (*pcVar2)((longlong)&pFVar5->_padding_ + (longlong)(int)uVar3,param_1,&local_res20,&local_res18,
            &param_4,&local_28);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(TVar4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(TVar4.Reference)->_padding_);
  }
  return;
}

// ExecuteIfSafe @ 14cf8b320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
                *this,FRHICommandListImmediate *param_1,TRefCountPtr<FRHITexture> param_2,
               TRefCountPtr<FRHITexture> param_3,TRefCountPtr<FRHITexture> param_4,
               TVector2<double> *param_5)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  TRefCountPtr<FRHITexture> TVar4;
  FDefaultSpectatorScreenController *pFVar5;
  FDefaultSpectatorScreenController *local_res8;
  longlong local_res18;
  longlong local_res20;
  double local_28;
  double dStack_20;
  
  TVar4.Reference = param_4.Reference;
  local_res8 = this->UserObject;
  pcVar2 = *(code **)&this->MethodPtr;
  uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pFVar1 = (FRHITexture *)(param_4.Reference)->_padding_;
  (param_4.Reference)->_padding_ = 0;
  local_res18 = (param_3.Reference)->_padding_;
  (param_3.Reference)->_padding_ = 0;
  local_res20 = (param_2.Reference)->_padding_;
  (param_2.Reference)->_padding_ = 0;
  local_28 = (param_5->field0_0x0)._s_0.X;
  dStack_20 = (param_5->field0_0x0)._s_0.Y;
  param_4.Reference = pFVar1;
  pFVar5 = UE::Core::Private::
           DereferenceIfNecessary<FDefaultSpectatorScreenController,FDefaultSpectatorScreenController_*_&>
                     (&local_res8);
  (*pcVar2)((longlong)&pFVar5->_padding_ + (longlong)(int)uVar3,param_1,&local_res20,&local_res18,
            &param_4,&local_28);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  if ((FRHIResource *)(param_3.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_3.Reference)->_padding_);
  }
  if ((FRHIResource *)(TVar4.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(TVar4.Reference)->_padding_);
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14cf8de90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14cf901d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14cf919f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cf923c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14cf93230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14cf9da00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDefaultSpectatorScreenController,void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

