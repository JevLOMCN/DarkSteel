// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 14

// StaticClass @ 14a70d620

UClass * __cdecl UAnimationWarpingLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationWarpingRuntime",L"AnimationWarpingLibrary",
               &Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton,
               StaticRegisterNativesUAnimationWarpingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimationWarpingLibrary>,
               InternalVTableHelperCtorCaller<UAnimationWarpingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton;
}

// UAnimationWarpingLibrary @ 14a71c090

UAnimationWarpingLibrary * __thiscall
UAnimationWarpingLibrary::UAnimationWarpingLibrary
          (UAnimationWarpingLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationWarpingLibrary__6B_;
  return this;
}

// UAnimationWarpingLibrary @ 14a71c0c0

UAnimationWarpingLibrary * __thiscall
UAnimationWarpingLibrary::UAnimationWarpingLibrary
          (UAnimationWarpingLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationWarpingLibrary__6B_;
  return this;
}

// ~UAnimationWarpingLibrary @ 14a71c220

void __thiscall UAnimationWarpingLibrary::~UAnimationWarpingLibrary(UAnimationWarpingLibrary *this)

{
  *(undefined ***)this = &___7UAnimationWarpingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetCurveValueFromAnimation @ 14a729220

bool __cdecl
UAnimationWarpingLibrary::GetCurveValueFromAnimation
          (UAnimSequenceBase *param_1,FName param_2,float param_3,float *param_4)

{
  int iVar1;
  UAnimSequenceBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UClass *pUVar7;
  FAnimSegment *this;
  void *pvVar8;
  float fVar9;
  float fVar10;
  float local_res18 [4];
  double local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined1 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined1 local_77;
  double local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  undefined1 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined1 local_27;
  
  *param_4 = 0.0;
  if (param_1 != (UAnimSequenceBase *)0x0) {
    local_res18[0] = param_3;
    pUVar7 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) {
      cVar6 = (**(code **)(param_1->_padding_ + 0x308))(param_1,param_2,0);
      if (cVar6 != '\0') {
        local_50 = 0;
        local_60 = 0;
        local_54 = 0;
        local_53 = 0;
        local_68 = (double)local_res18[0];
        local_51 = 0;
        local_48 = (void *)0x0;
        local_40 = 0;
        local_38 = (void *)0x0;
        local_5c = 0;
        local_58 = 0;
        local_30 = 0;
        local_27 = 0;
        fVar10 = (float)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,param_2,&local_68,0);
        *param_4 = fVar10;
        pvVar8 = local_48;
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
          pvVar8 = local_48;
        }
LAB_14a729437:
        if (pvVar8 != (void *)0x0) {
          FMemory::Free(pvVar8);
        }
        return true;
      }
    }
    else if (0 < (int)param_1[2]._padding_) {
      if (((int)param_1[2]._padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      this = FAnimTrack::GetSegmentAtTime((FAnimTrack *)(param_1[2]._padding_ + 8),local_res18[0]);
      if (((this != (FAnimSegment *)0x0) &&
          (pUVar2 = (this->AnimReference).field0_0x0.DebugPtr, pUVar2 != (UAnimSequenceBase *)0x0))
         && (cVar6 = (**(code **)(pUVar2->_padding_ + 0x308))(pUVar2,param_2,0), cVar6 != '\0')) {
        fVar9 = FAnimSegment::ConvertTrackPosToAnimPos(this,local_res18);
        pUVar2 = (this->AnimReference).field0_0x0.DebugPtr;
        fVar10 = this->AnimEndTime;
        if (fVar9 <= this->AnimEndTime) {
          fVar10 = fVar9;
        }
        local_a0 = 0;
        local_b0 = 0;
        local_a4 = 0;
        if (fVar10 <= this->AnimStartTime) {
          fVar10 = this->AnimStartTime;
        }
        local_a3 = 0;
        local_ac = 0;
        local_a8 = 0;
        local_b8 = (double)fVar10;
        local_a1 = 0;
        local_98 = (void *)0x0;
        local_90 = 0;
        local_88 = (void *)0x0;
        local_80 = 0;
        local_77 = 0;
        fVar10 = (float)(**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,param_2,&local_b8,0);
        *param_4 = fVar10;
        pvVar8 = local_98;
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
          pvVar8 = local_98;
        }
        goto LAB_14a729437;
      }
    }
  }
  return false;
}

// GetFloatValueFromCurve @ 14a729700

bool __cdecl
UAnimationWarpingLibrary::GetFloatValueFromCurve(UCurveFloat *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if (param_1 != (UCurveFloat *)0x0) {
    fVar1 = UCurveFloat::GetFloatValue(param_1,param_2);
    *param_3 = fVar1;
    return true;
  }
  return false;
}

// GetOffsetRootTransform @ 14a729f80

TTransform<double> * __cdecl
UAnimationWarpingLibrary::GetOffsetRootTransform
          (TTransform<double> *__return_storage_ptr__,FAnimNodeReference *param_1)

{
  double dVar1;
  int iVar2;
  FAnimNode_Base *pFVar3;
  UScriptStruct *pUVar4;
  FAnimNodeData *pFVar5;
  FAnimNodeData *pFVar6;
  bool bVar7;
  __m128d _Var8;
  __m128d _Var9;
  UPackage *pUVar10;
  
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  pFVar3 = param_1->AnimNode;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var9.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var9.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var8.m128d_f64;
  if (pFVar3 == (FAnimNode_Base *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar10,
                           L"AnimNode_OffsetRootBone");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return __return_storage_ptr__;
      }
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton)->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (pFVar3 = param_1->AnimNode, pFVar3 != (FAnimNode_Base *)0x0)) {
      pFVar5 = pFVar3[0xb].NodeData;
      dVar1 = (double)pFVar3[0xc]._padding_;
      pFVar6 = pFVar3[0xc].NodeData;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)pFVar3[0xb]._padding_;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)pFVar5;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar1;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)pFVar6;
      pFVar5 = pFVar3[9].NodeData;
      dVar1 = (double)pFVar3[10]._padding_;
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)pFVar3[9]._padding_;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)pFVar5;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a72a340

UClass * __cdecl UAnimationWarpingLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationWarpingRuntime",L"AnimationWarpingLibrary",
               &Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton,
               StaticRegisterNativesUAnimationWarpingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimationWarpingLibrary>,
               InternalVTableHelperCtorCaller<UAnimationWarpingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton;
}

// GetVectorValueFromCurve @ 14a72bdd0

bool __cdecl
UAnimationWarpingLibrary::GetVectorValueFromCurve
          (UCurveVector *param_1,float param_2,TVector<double> *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  if (param_1 != (UCurveVector *)0x0) {
    pTVar2 = UCurveVector::GetVectorValue(param_1,&local_28,param_2);
    dVar1 = (pTVar2->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar1;
    (param_3->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    return true;
  }
  return false;
}

// StaticRegisterNativesUAnimationWarpingLibrary @ 14a731030

void __cdecl UAnimationWarpingLibrary::StaticRegisterNativesUAnimationWarpingLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAnimationWarpingLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCurveValueFromAnimation @ 14a732720

void __cdecl
UAnimationWarpingLibrary::execGetCurveValueFromAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UAnimSequenceBase *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  UClass *pUVar10;
  FAnimSegment *this;
  void *pvVar11;
  uchar *puVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  uchar local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  undefined8 local_108;
  longlong *local_100 [2];
  undefined4 local_f0;
  undefined4 local_e0;
  double local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined1 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_97;
  double local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined2 local_73;
  undefined1 local_71;
  undefined1 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined1 local_47;
  
  local_100[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_100);
  }
  local_108 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar7 = local_100[0];
  uVar6 = local_108;
  puVar12 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  local_res20[0] = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  if (local_100[0] != (longlong *)0x0) {
    pUVar10 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((*(int *)(plVar7[2] + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar7[2] + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar10->_padding_)) {
      cVar9 = (**(code **)(*plVar7 + 0x308))(plVar7,uVar6,0);
      if (cVar9 != '\0') {
        local_7c = 0;
        local_e0 = 0;
        local_80 = 0;
        local_74 = 0;
        local_73 = 0;
        local_88 = (double)local_res20[0];
        local_71 = 0;
        local_70 = 0;
        local_68 = (void *)0x0;
        local_60 = 0;
        local_78 = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        local_47 = 0;
        uVar14 = (**(code **)(*plVar7 + 0x2e0))(plVar7,uVar6,&local_88,0);
        *(undefined4 *)puVar12 = uVar14;
        pvVar11 = local_68;
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
          pvVar11 = local_68;
        }
LAB_14a7329c3:
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
    else if (0 < (int)plVar7[0x2d]) {
      if (((int)plVar7[0x2d] < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = FAnimTrack::GetSegmentAtTime((FAnimTrack *)(plVar7[0x2c] + 8),local_res20[0]);
      if (((this != (FAnimSegment *)0x0) &&
          (pUVar4 = (this->AnimReference).field0_0x0.DebugPtr, pUVar4 != (UAnimSequenceBase *)0x0))
         && (cVar9 = (**(code **)(pUVar4->_padding_ + 0x308))(pUVar4,uVar6,0), cVar9 != '\0')) {
        fVar13 = FAnimSegment::ConvertTrackPosToAnimPos(this,local_res20);
        pUVar4 = (this->AnimReference).field0_0x0.DebugPtr;
        fVar15 = this->AnimEndTime;
        if (fVar13 <= this->AnimEndTime) {
          fVar15 = fVar13;
        }
        local_cc = 0;
        local_f0 = 0;
        local_d0 = 0;
        local_c4 = 0;
        if (fVar15 <= this->AnimStartTime) {
          fVar15 = this->AnimStartTime;
        }
        local_c3 = 0;
        local_c8 = 0;
        local_c1 = 0;
        local_d8 = (double)fVar15;
        local_c0 = 0;
        local_b8 = (void *)0x0;
        local_b0 = 0;
        local_a8 = (void *)0x0;
        local_a0 = 0;
        local_97 = 0;
        uVar14 = (**(code **)(pUVar4->_padding_ + 0x2e0))(pUVar4,uVar6,&local_d8,0);
        *(undefined4 *)puVar12 = uVar14;
        pvVar11 = local_b8;
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
          pvVar11 = local_b8;
        }
        goto LAB_14a7329c3;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetFloatValueFromCurve @ 14a732aa0

void __cdecl
UAnimationWarpingLibrary::execGetFloatValueFromCurve(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  UCurveFloat *local_res20;
  
  local_res20 = (UCurveFloat *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UCurveFloat *)0x0) {
    fVar3 = UCurveFloat::GetFloatValue(local_res20,local_res18[0]);
    *pfVar2 = fVar3;
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetOffsetRootTransform @ 14a732be0

void __cdecl
UAnimationWarpingLibrary::execGetOffsetRootTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  __m128d _Var5;
  __m128d _Var6;
  UPackage *pUVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  longlong local_78 [14];
  
  local_78[0] = 0;
  local_78[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  plVar8 = local_78;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Var6 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var5 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  uVar13 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  uVar14 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  uVar15 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  uVar16 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  uVar17 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  uVar18 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  uVar19 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  uVar20 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  uVar21 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  uVar22 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  uVar23 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  uVar24 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  uVar9 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  uVar10 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  uVar11 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  uVar12 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  if ((*plVar8 != 0) && (lVar3 = plVar8[1], lVar3 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone,(UObject *)pUVar7,
                           L"AnimNode_OffsetRootBone");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14a732d41;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar3 = *plVar8, lVar3 != 0)) {
      uVar13 = *(undefined4 *)(lVar3 + 0xb0);
      uVar14 = *(undefined4 *)(lVar3 + 0xb4);
      uVar15 = *(undefined4 *)(lVar3 + 0xb8);
      uVar16 = *(undefined4 *)(lVar3 + 0xbc);
      uVar17 = *(undefined4 *)(lVar3 + 0xc0);
      uVar18 = *(undefined4 *)(lVar3 + 0xc4);
      uVar19 = *(undefined4 *)(lVar3 + 200);
      uVar20 = *(undefined4 *)(lVar3 + 0xcc);
      uVar21 = *(undefined4 *)(lVar3 + 0x90);
      uVar22 = *(undefined4 *)(lVar3 + 0x94);
      uVar23 = *(undefined4 *)(lVar3 + 0x98);
      uVar24 = *(undefined4 *)(lVar3 + 0x9c);
      uVar9 = (undefined4)*(undefined8 *)(lVar3 + 0xa0);
      uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0xa0) >> 0x20);
      uVar11 = 0;
      uVar12 = 0;
    }
  }
LAB_14a732d41:
  *(undefined4 *)param_3 = uVar13;
  *(undefined4 *)((longlong)param_3 + 4) = uVar14;
  *(undefined4 *)((longlong)param_3 + 8) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar20;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar21;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar22;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar23;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar24;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x38) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar12;
  *(double (*) [2])((longlong)param_3 + 0x40) = _Var5.m128d_f64;
  *(double (*) [2])((longlong)param_3 + 0x50) = _Var6.m128d_f64;
  return;
}

// execGetVectorValueFromCurve @ 14a732da0

void __cdecl
UAnimationWarpingLibrary::execGetVectorValueFromCurve
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  double *pdVar4;
  float local_res10 [2];
  UCurveVector *local_res18 [2];
  double local_48 [3];
  TVector<double> local_30;
  
  local_res18[0] = (UCurveVector *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pdVar4 = local_48;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar4 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UCurveVector *)0x0) {
    pTVar3 = UCurveVector::GetVectorValue(local_res18[0],&local_30,local_res10[0]);
    dVar2 = (pTVar3->field0_0x0)._s_0.Y;
    *pdVar4 = (pTVar3->field0_0x0)._s_0.X;
    pdVar4[1] = dVar2;
    pdVar4[2] = (pTVar3->field0_0x0)._s_0.Z;
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

