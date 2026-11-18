// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 14962a570

UClass * __cdecl UGizmoLocalVec2ParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLocalVec2ParameterSource",
               &Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoLocalVec2ParameterSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoLocalVec2ParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoLocalVec2ParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.InnerSingleton;
}

// UGizmoLocalVec2ParameterSource @ 14963b390

UGizmoLocalVec2ParameterSource * __thiscall
UGizmoLocalVec2ParameterSource::UGizmoLocalVec2ParameterSource
          (UGizmoLocalVec2ParameterSource *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  (this->Value).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UGizmoLocalVec2ParameterSource @ 14963b410

UGizmoLocalVec2ParameterSource * __thiscall
UGizmoLocalVec2ParameterSource::UGizmoLocalVec2ParameterSource
          (UGizmoLocalVec2ParameterSource *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  (this->Value).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UGizmoLocalVec2ParameterSource @ 14963ea50

void __thiscall
UGizmoLocalVec2ParameterSource::~UGizmoLocalVec2ParameterSource
          (UGizmoLocalVec2ParameterSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this);
  return;
}

// BeginModify @ 14964b4f0

void __thiscall UGizmoLocalVec2ParameterSource::BeginModify(UGizmoLocalVec2ParameterSource *this)

{
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  (this->Value).field0_0x0._s_0.X = (double)this->_padding_;
  return;
}

// EndModify @ 149652110

void __thiscall UGizmoLocalVec2ParameterSource::EndModify(UGizmoLocalVec2ParameterSource *this)

{
  return;
}

// GetParameter @ 149655330

TVector2<double> * __thiscall
UGizmoLocalVec2ParameterSource::GetParameter
          (UGizmoLocalVec2ParameterSource *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149656990

UClass * __cdecl UGizmoLocalVec2ParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoLocalVec2ParameterSource",
               &Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoLocalVec2ParameterSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoLocalVec2ParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoLocalVec2ParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.InnerSingleton;
}

// SetParameter @ 149662320

void __thiscall
UGizmoLocalVec2ParameterSource::SetParameter
          (UGizmoLocalVec2ParameterSource *this,TVector2<double> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  UGizmoLocalVec2ParameterSource *pUVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FDestructionSentinel local_58;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar4;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  (this->Value).field0_0x0._s_0.X = dVar4;
  lVar5 = this->_padding_;
  lVar6 = this->_padding_;
  pUVar15 = this;
  if (this == (UGizmoLocalVec2ParameterSource *)&DAT_00000028) {
    pUVar15 = (UGizmoLocalVec2ParameterSource *)0x0;
  }
  lVar7 = this->_padding_;
  uVar8 = *(undefined8 *)&(this->Value).field0_0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_58);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar9 = false;
  uVar13 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar9 = false;
    do {
      uVar12 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)(this->_padding_ + 8 + lVar14) == 0) ||
         (plVar2 = *(longlong **)(this->_padding_ + lVar14), plVar2 == (longlong *)0x0)) {
LAB_149662434:
        bVar9 = true;
      }
      else {
        local_68 = (undefined4)lVar7;
        uStack_64 = (undefined4)((ulonglong)lVar7 >> 0x20);
        uStack_60 = (undefined4)uVar8;
        uStack_5c = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_28 = local_68;
        uStack_24 = uStack_64;
        uStack_20 = uStack_60;
        uStack_1c = uStack_5c;
        local_38 = lVar5;
        lStack_30 = lVar6;
        cVar11 = (**(code **)(*plVar2 + 0x68))(plVar2,pUVar15,&local_38);
        if (cVar11 == '\0') goto LAB_149662434;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  if (bVar9) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

// StaticRegisterNativesUGizmoLocalVec2ParameterSource @ 149664b60

void __cdecl
UGizmoLocalVec2ParameterSource::StaticRegisterNativesUGizmoLocalVec2ParameterSource(void)

{
  return;
}

