// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 84

// TTangentBezierSpline<float> @ 147a24200

TTangentBezierSpline<float> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::TTangentBezierSpline<float>
          (TTangentBezierSpline<float> *this)

{
  uint uVar1;
  ForAnyElementType _Src;
  uint *puVar2;
  longlong lVar3;
  FString local_58;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  TSplineInterface<float>::TSplineInterface<float>((TSplineInterface<float> *)this);
  this->_padding_ =
       (longlong)
       &___7__TSplineWrapper_V__TPolyBezierSpline_M_Spline_Geometry_UE___Spline_Geometry_UE__6B_;
  TPolyBezierSpline<float>::TPolyBezierSpline<float>((TPolyBezierSpline<float> *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TTangentBezierSpline_M_Spline_Geometry_UE__M_Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"TangentBezier");
    _Src = TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<float>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<float>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_58,TSplineValueTypeTraits<float>::Name.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_M_Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_M_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>::
               RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                  ::Call;
    FSplineTypeRegistry::RegisterType
              (uVar1,&local_48,&local_58,
               (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
                *)local_38);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  this->Tension = 0.0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<float>_>__
  ;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>__
  ;
  (this->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentModes).ArrayNum = 0;
  (this->TangentModes).ArrayMax = 0;
  this->bStationaryEndpoint = false;
  return this;
}

// TTangentBezierSpline<UE::Math::TQuat<double>_> @ 147a243a0

TTangentBezierSpline<UE::Math::TQuat<double>_> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::
TTangentBezierSpline<UE::Math::TQuat<double>_>(TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  uint uVar1;
  ForAnyElementType _Src;
  uint *puVar2;
  longlong lVar3;
  FString local_58;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  TSplineInterface<UE::Math::TQuat<double>_>::TSplineInterface<UE::Math::TQuat<double>_>
            ((TSplineInterface<UE::Math::TQuat<double>_> *)this);
  this->_padding_ =
       (longlong)
       &
       ___7__TSplineWrapper_V__TPolyBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__6B_
  ;
  TPolyBezierSpline<UE::Math::TQuat<double>_>::TPolyBezierSpline<UE::Math::TQuat<double>_>
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TTangentBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__U__TQuat_N_Math_4__Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_48,L"TangentBezier");
    _Src = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
    lVar3 = (longlong)TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_58,
                 TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
               ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                  ::Call;
    FSplineTypeRegistry::RegisterType
              (uVar1,&local_48,&local_58,
               (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
                *)local_38);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  this->Tension = 0.0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>__
  ;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>__
  ;
  (this->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentModes).ArrayNum = 0;
  (this->TangentModes).ArrayMax = 0;
  this->bStationaryEndpoint = false;
  return this;
}

// ~TTangentBezierSpline<float> @ 147a29700

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::~TTangentBezierSpline<float>
          (TTangentBezierSpline<float> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TangentModes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TTangentBezierSpline<UE::Math::TQuat<double>_> @ 147a29760

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::
~TTangentBezierSpline<UE::Math::TQuat<double>_>
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TangentModes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AppendPoint @ 147a32300

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::AppendPoint
          (TTangentBezierSpline<float> *this,TTangentBezierControlPoint<float> *param_1)

{
  uint uVar1;
  longlong *this_00;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_01;
  int iVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  int local_res18 [2];
  float local_res20 [2];
  float local_78;
  float local_74;
  float local_70 [2];
  undefined1 local_68 [8];
  undefined1 *local_60;
  longlong *local_58;
  
  cVar5 = (**(code **)(this->_padding_ + 0x40))();
  (**(code **)(this->_padding_ + 0x38))(this,0);
  local_res18[0] = GetNumPoints(this);
  bVar6 = InitializeFirstSegment(this,param_1,local_res18);
  iVar4 = local_res18[0];
  if (bVar6) goto LAB_147a3272c;
  uVar1 = local_res18[0] - 1;
  fVar9 = GetValue(this,uVar1);
  local_res20[0] = param_1->Position;
  this_01 = &this->TangentModes;
  uVar8 = 0;
  if ((int)uVar1 < (this->TangentModes).ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this_01->AllocatorInstance).Data[(int)uVar1] == (FScriptContainerElement)0x0) {
LAB_147a3245e:
    uVar1 = iVar4 - 1;
    uVar8 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,iVar4 + -1,(ETangentMode)(this_01->AllocatorInstance).Data[(int)uVar1])
    ;
  }
  else {
    uVar1 = iVar4 - 1;
    uVar8 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_01->AllocatorInstance).Data[(int)uVar1] == (FScriptContainerElement)0x1)
    goto LAB_147a3245e;
  }
  uVar1 = iVar4 - 1;
  fVar10 = GetTangentOut(this,uVar1);
  local_74 = fVar10 * __real_3eaaaaab + fVar9;
  if ((param_1->TangentMode == User) || (param_1->TangentMode == Broken)) {
    fVar9 = param_1->TangentIn;
  }
  else {
    fVar9 = (__real_3f800000 - this->Tension) * (local_res20[0] - fVar9);
  }
  local_78 = local_res20[0] - fVar9 * __real_3eaaaaab;
  this_00 = &this->_padding_;
  TPolyBezierSpline<float>::GetLoopKnotDelta((TPolyBezierSpline<float> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00,0);
  local_60 = local_68;
  local_58 = this_00;
  pfVar7 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this_00,(int)this->_padding_ + -1);
  local_70[0] = *pfVar7;
  iVar2 = (int)this->_padding_;
  TPolyBezierSpline<float>::AddBezierSegmentInternal
            ((TPolyBezierSpline<float> *)this_00,(int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2,local_70,
             &local_74,&local_78,local_res20,Centripetal,true);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment_::__l2::<lambda_1>_>
            (&local_60);
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::InsertDefaulted
            (this_01,iVar4);
  SetPointTangentMode(this,iVar4,param_1->TangentMode);
  if ((param_1->TangentMode == Auto) || (param_1->TangentMode == AutoClamped)) {
    uVar8 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_01->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar1 = iVar4 - 1;
      uVar8 = 0;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this_01->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a3272c;
    }
    uVar1 = iVar4 - 1;
    uVar8 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,iVar4 + -1,(ETangentMode)(this_01->AllocatorInstance).Data[(int)uVar1])
    ;
  }
LAB_147a3272c:
  if (cVar5 != '\0') {
    (**(code **)(this->_padding_ + 0x38))(this,1);
  }
  return;
}

// AppendPoint @ 147a32760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::AppendPoint
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,
          TTangentBezierControlPoint<UE::Math::TQuat<double>_> *param_1)

{
  uint uVar1;
  longlong *this_00;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_01;
  undefined1 auVar2 [16];
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  char cVar11;
  bool bVar12;
  TQuat<double> *pTVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  int local_res18 [2];
  undefined1 local_res20 [8];
  TQuat<double> local_148;
  undefined1 *local_128;
  longlong *local_120;
  TQuat<double> local_118;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  TQuat<double> local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  cVar11 = (**(code **)(this->_padding_ + 0x40))();
  (**(code **)(this->_padding_ + 0x38))(this,0);
  local_res18[0] = GetNumPoints(this);
  bVar12 = InitializeFirstSegment(this,param_1,local_res18);
  iVar10 = local_res18[0];
  if (bVar12) goto LAB_147a32c2b;
  uVar1 = local_res18[0] - 1;
  GetValue(this,&local_118,uVar1);
  local_148.X = (param_1->Position).X;
  local_148.Y = (param_1->Position).Y;
  local_148.Z = (param_1->Position).Z;
  local_148.W = (param_1->Position).W;
  this_01 = &this->TangentModes;
  uVar14 = 0;
  if ((int)uVar1 < (this->TangentModes).ArrayNum) {
    uVar14 = ~uVar1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this_01->AllocatorInstance).Data[(int)uVar1] == (FScriptContainerElement)0x0) {
LAB_147a328d7:
    uVar1 = iVar10 - 1;
    uVar14 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar14 = ~uVar1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdatePointTangents(this,iVar10 + -1,(ETangentMode)(this_01->AllocatorInstance).Data[(int)uVar1]
                       );
  }
  else {
    uVar1 = iVar10 - 1;
    uVar14 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar14 = ~uVar1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this_01->AllocatorInstance).Data[(int)uVar1] == (FScriptContainerElement)0x1)
    goto LAB_147a328d7;
  }
  uVar1 = iVar10 - 1;
  GetTangentOut(this,(TQuat<double> *)local_d8,uVar1);
  dVar19 = (double)_UNK_15076be98;
  dVar20 = (double)_UNK_15076be9c;
  dVar5 = _UNK_150aa23f8 * (double)local_d8._8_8_ + local_118.Y;
  auVar15._8_8_ = dVar20;
  auVar15._0_8_ = dVar19;
  auVar15 = divpd(local_d8._16_16_,auVar15);
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = ___xmm_3fd55555555555553fd5555555555555 * (double)local_d8._0_8_ + local_118.X;
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8 = auVar15._0_8_ + local_118.Z;
  dStack_a0 = auVar15._8_8_ + local_118.W;
  if ((param_1->TangentMode == User) || (param_1->TangentMode == Broken)) {
    auVar2._0_8_ = (param_1->TangentIn).Z;
    auVar2._8_8_ = (param_1->TangentIn).W;
    auVar9._8_8_ = dVar20;
    auVar9._0_8_ = dVar19;
    auVar15 = divpd(auVar2,auVar9);
    dVar20 = local_148.X - ___xmm_3fd55555555555553fd5555555555555 * (param_1->TangentIn).X;
    dVar5 = local_148.Y - _UNK_150aa23f8 * (param_1->TangentIn).Y;
    uVar17 = SUB84(dVar5,0);
    uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar5 = local_148.Z - auVar15._0_8_;
    dVar19 = local_148.W - auVar15._8_8_;
    local_58._8_4_ = uVar17;
    local_58._0_8_ = dVar20;
    local_58._12_4_ = uVar18;
    local_48._8_4_ = SUB84(dVar19,0);
    local_48._0_8_ = dVar5;
    local_48._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    local_f8._8_4_ = uVar17;
    local_f8._0_8_ = dVar20;
    local_f8._12_4_ = uVar18;
  }
  else {
    dVar5 = (double)(__real_3f800000 - this->Tension);
    dVar6 = local_148.X -
            (local_148.X - local_118.X) * dVar5 * ___xmm_3fd55555555555553fd5555555555555;
    dVar7 = local_148.Y - (local_148.Y - local_118.Y) * dVar5 * _UNK_150aa23f8;
    uVar17 = SUB84(dVar7,0);
    uVar18 = (undefined4)((ulonglong)dVar7 >> 0x20);
    local_78._8_4_ = uVar17;
    local_78._0_8_ = dVar6;
    local_78._12_4_ = uVar18;
    auVar16._0_8_ = (local_148.Z - local_118.Z) * dVar5;
    auVar16._8_8_ = (local_148.W - local_118.W) * dVar5;
    local_f8._8_4_ = uVar17;
    local_f8._0_8_ = dVar6;
    local_f8._12_4_ = uVar18;
    auVar8._8_8_ = dVar20;
    auVar8._0_8_ = dVar19;
    auVar15 = divpd(auVar16,auVar8);
    dVar5 = local_148.Z - auVar15._0_8_;
    dVar19 = local_148.W - auVar15._8_8_;
    local_68._8_4_ = SUB84(dVar19,0);
    local_68._0_8_ = dVar5;
    local_68._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  }
  this_00 = &this->_padding_;
  local_e8._8_4_ = SUB84(dVar19,0);
  local_e8._0_8_ = dVar5;
  local_e8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  TPolyBezierSpline<UE::Math::TQuat<double>_>::GetLoopKnotDelta
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00,0);
  local_128 = local_res20;
  local_120 = this_00;
  pTVar13 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                      ((TBSpline<UE::Math::TQuat<double>,3> *)this_00,(int)this->_padding_ + -1);
  local_98.X = pTVar13->X;
  local_98.Y = pTVar13->Y;
  local_98.Z = pTVar13->Z;
  local_98.W = pTVar13->W;
  iVar3 = (int)this->_padding_;
  TPolyBezierSpline<UE::Math::TQuat<double>_>::AddBezierSegmentInternal
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)this_00,
             (int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2,&local_98,(TQuat<double> *)local_b8,
             (TQuat<double> *)local_f8,&local_148,Centripetal,true);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
            (&local_128);
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::InsertDefaulted
            (this_01,iVar10);
  SetPointTangentMode(this,iVar10,param_1->TangentMode);
  if ((param_1->TangentMode == Auto) || (param_1->TangentMode == AutoClamped)) {
    uVar14 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar14 = ~uVar1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this_01->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar1 = iVar10 - 1;
      uVar14 = 0;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar14 = ~uVar1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this_01->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a32c2b;
    }
    uVar1 = iVar10 - 1;
    uVar14 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar14 = ~uVar1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdatePointTangents(this,iVar10 + -1,(ETangentMode)(this_01->AllocatorInstance).Data[(int)uVar1]
                       );
  }
LAB_147a32c2b:
  if (cVar11 != '\0') {
    (**(code **)(this->_padding_ + 0x38))(this,1);
  }
  return;
}

// AppendPoint @ 147a32c60

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *param_1)

{
  uint uVar1;
  longlong *this_00;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_01;
  int iVar2;
  code *pcVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  int local_res18 [2];
  undefined1 local_res20 [8];
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  undefined1 *local_90;
  longlong *local_88;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  
  cVar6 = (**(code **)(this->_padding_ + 0x40))();
  (**(code **)(this->_padding_ + 0x38))(this,0);
  local_res18[0] = GetNumPoints(this);
  bVar7 = InitializeFirstSegment(this,param_1,local_res18);
  iVar5 = local_res18[0];
  if (bVar7) goto LAB_147a33151;
  uVar1 = local_res18[0] - 1;
  GetValue(this,(TVector<double> *)&local_a8._s_0,uVar1);
  local_d8._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  local_d8._s_0.Y = (param_1->Position).field0_0x0._s_0.Y;
  this_01 = &this->TangentModes;
  local_d8._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  uVar9 = 0;
  if ((int)uVar1 < (this->TangentModes).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this_01->AllocatorInstance).Data[(int)uVar1] == (FScriptContainerElement)0x0) {
LAB_147a32dc7:
    uVar1 = iVar5 - 1;
    uVar9 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,iVar5 + -1,(ETangentMode)(this_01->AllocatorInstance).Data[(int)uVar1])
    ;
  }
  else {
    uVar1 = iVar5 - 1;
    uVar9 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_01->AllocatorInstance).Data[(int)uVar1] == (FScriptContainerElement)0x1)
    goto LAB_147a32dc7;
  }
  uVar1 = iVar5 - 1;
  GetTangentOut(this,(TVector<double> *)&local_80._s_0,uVar1);
  local_68._s_0.X = local_80._s_0.X * __real_3fd5555555555555 + local_a8._s_0.X;
  local_68._s_0.Z = local_80._s_0.Z * __real_3fd5555555555555 + local_a8._s_0.Z;
  local_68._s_0.Y = local_80._s_0.Y * __real_3fd5555555555555 + local_a8._s_0.Y;
  if ((param_1->TangentMode == User) || (param_1->TangentMode == Broken)) {
    dVar10 = (param_1->TangentIn).field0_0x0._s_0.X;
    dVar4 = (param_1->TangentIn).field0_0x0._s_0.Y;
    dVar11 = (param_1->TangentIn).field0_0x0._s_0.Z;
  }
  else {
    dVar11 = (double)(__real_3f800000 - this->Tension);
    dVar10 = (local_d8._s_0.X - local_a8._s_0.X) * dVar11;
    dVar4 = (local_d8._s_0.Y - local_a8._s_0.Y) * dVar11;
    dVar11 = (local_d8._s_0.Z - local_a8._s_0.Z) * dVar11;
  }
  local_c0._s_0.Z = local_d8._s_0.Z - dVar11 * __real_3fd5555555555555;
  local_c0._s_0.Y = local_d8._s_0.Y - dVar4 * __real_3fd5555555555555;
  local_c0._s_0.X = local_d8._s_0.X - dVar10 * __real_3fd5555555555555;
  this_00 = &this->_padding_;
  TPolyBezierSpline<UE::Math::TVector<double>_>::GetLoopKnotDelta
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00,0);
  local_90 = local_res20;
  local_88 = this_00;
  pTVar8 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                     ((TBSpline<UE::Math::TVector<double>,3> *)this_00,(int)this->_padding_ + -1);
  local_50._s_0.X = (pTVar8->field0_0x0)._s_0.X;
  local_50._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
  local_50._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  iVar2 = (int)this->_padding_;
  TPolyBezierSpline<UE::Math::TVector<double>_>::AddBezierSegmentInternal
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)this_00,
             (int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2,(TVector<double> *)&local_50._s_0,
             (TVector<double> *)&local_68._s_0,(TVector<double> *)&local_c0._s_0,
             (TVector<double> *)&local_d8._s_0,Centripetal,true);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
            (&local_90);
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::InsertDefaulted
            (this_01,iVar5);
  SetPointTangentMode(this,iVar5,param_1->TangentMode);
  if ((param_1->TangentMode == Auto) || (param_1->TangentMode == AutoClamped)) {
    uVar9 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_01->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar1 = iVar5 - 1;
      uVar9 = 0;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this_01->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a33151;
    }
    uVar1 = iVar5 - 1;
    uVar9 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,iVar5 + -1,(ETangentMode)(this_01->AllocatorInstance).Data[(int)uVar1])
    ;
  }
LAB_147a33151:
  if (cVar6 != '\0') {
    (**(code **)(this->_padding_ + 0x38))(this,1);
  }
  return;
}

// Clear @ 147a378e0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::Clear(TTangentBezierSpline<float> *this)

{
  int *piVar1;
  
  (**(code **)(this->_padding_ + 8))();
  piVar1 = &(this->TangentModes).ArrayMax;
  (this->TangentModes).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->TangentModes).AllocatorInstance,0,piVar1);
  }
  return;
}

// Clear @ 147a37930

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::Clear
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  int *piVar1;
  
  (**(code **)(this->_padding_ + 8))();
  piVar1 = &(this->TangentModes).ArrayMax;
  (this->TangentModes).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->TangentModes).AllocatorInstance,0,piVar1);
  }
  return;
}

// Clone @ 147a37d40

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::Clone(TTangentBezierSpline<float> *this)

{
  TTangentBezierSpline<float> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x98);
  if (this_00 == (TTangentBezierSpline<float> *)0x0) {
    IVar1 = (ISplineInterface)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined8 *)&this_00->Tension = 0;
    (this_00->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->TangentModes).ArrayNum = 0;
    (this_00->TangentModes).ArrayMax = 0;
    *(undefined8 *)&this_00->bStationaryEndpoint = 0;
    IVar1 = (ISplineInterface)TTangentBezierSpline<float>(this_00);
  }
  TPolyBezierSpline<float>::operator=
            ((TPolyBezierSpline<float> *)((longlong)IVar1 + 0x10),
             (TPolyBezierSpline<float> *)&this->_padding_);
  *(float *)((longlong)IVar1 + 0x78) = this->Tension;
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *)
             ((longlong)IVar1 + 0x80),&this->TangentModes);
  *(bool *)((longlong)IVar1 + 0x90) = this->bStationaryEndpoint;
  *(int *)((longlong)IVar1 + 8) = (int)this->_padding_;
  *(undefined4 *)((longlong)IVar1 + 0xc) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *in_RDX = IVar1;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// Clone @ 147a37e00

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::Clone
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  ISplineInterface IVar1;
  ISplineInterface *in_RDX;
  
  this_00 = ::operator_new(0x98);
  if (this_00 == (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
    IVar1 = (ISplineInterface)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined8 *)&this_00->Tension = 0;
    (this_00->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->TangentModes).ArrayNum = 0;
    (this_00->TangentModes).ArrayMax = 0;
    *(undefined8 *)&this_00->bStationaryEndpoint = 0;
    IVar1 = (ISplineInterface)TTangentBezierSpline<UE::Math::TQuat<double>_>(this_00);
  }
  TPolyBezierSpline<UE::Math::TQuat<double>_>::operator=
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)((longlong)IVar1 + 0x10),
             (TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this->_padding_);
  *(float *)((longlong)IVar1 + 0x78) = this->Tension;
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *)
             ((longlong)IVar1 + 0x80),&this->TangentModes);
  *(bool *)((longlong)IVar1 + 0x90) = this->bStationaryEndpoint;
  *(int *)((longlong)IVar1 + 8) = (int)this->_padding_;
  *(undefined4 *)((longlong)IVar1 + 0xc) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *in_RDX = IVar1;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RDX;
}

// FindNearest @ 147a46480

float __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::FindNearest
          (TTangentBezierSpline<float> *this,float *param_1,float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a46488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x68))(&this->_padding_);
  return fVar1;
}

// FindNearest @ 147a464a0

float __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::FindNearest
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,TQuat<double> *param_1,
          float *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a464a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(this->_padding_ + 0x68))(&this->_padding_);
  return fVar1;
}

// GetImplementationName @ 147a50fe0

FString * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetImplementationName
          (TTangentBezierSpline<float> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TangentBezier");
  return __return_storage_ptr__;
}

// GetImplementationName @ 147a51010

FString * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetImplementationName
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TangentBezier");
  return __return_storage_ptr__;
}

// GetNumPoints @ 147a53fb0

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(TTangentBezierSpline<float> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  int iVar2;
  undefined1 local_res8 [32];
  
  iVar2 = (int)this->_padding_;
  if (iVar2 == 0) {
    return 0;
  }
  if ((iVar2 == 1) || (iVar2 == 2)) {
    `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>::operator()
              (local_res8);
    return 1;
  }
  if (iVar2 == 3) {
    return 1;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x40))();
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x50);
  if (cVar1 == '\0') {
    iVar2 = (*UNRECOVERED_JUMPTABLE)(this);
    return iVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a53fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*UNRECOVERED_JUMPTABLE)();
  return iVar2;
}

// GetNumPoints @ 147a54020

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  int iVar2;
  undefined1 local_res8 [32];
  
  iVar2 = (int)this->_padding_;
  if (iVar2 == 0) {
    return 0;
  }
  if ((iVar2 == 1) || (iVar2 == 2)) {
    `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints'::__l4::
    <lambda_1>::operator()(local_res8);
    return 1;
  }
  if (iVar2 == 3) {
    return 1;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x40))();
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x50);
  if (cVar1 == '\0') {
    iVar2 = (*UNRECOVERED_JUMPTABLE)(this);
    return iVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a54058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*UNRECOVERED_JUMPTABLE)();
  return iVar2;
}

// GetNumberOfSegments @ 147a54270

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumberOfSegments
          (TTangentBezierSpline<float> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a54278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
  return iVar1;
}

// GetNumberOfSegments @ 147a54290

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumberOfSegments
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a54298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
  return iVar1;
}

// GetParameterSpace @ 147a55cc0

TInterval1<float> __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetParameterSpace
          (TTangentBezierSpline<float> *this)

{
  int iVar1;
  TInterval1<float> in_RDX;
  
  iVar1 = GetNumPoints(this);
  if (iVar1 == 1) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
  return in_RDX;
}

// GetParameterSpace @ 147a55d10

TInterval1<float> __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetParameterSpace
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  int iVar1;
  TInterval1<float> in_RDX;
  
  iVar1 = GetNumPoints(this);
  if (iVar1 == 1) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
  return in_RDX;
}

// GetSegmentParameterRange @ 147a58f70

TInterval1<float> __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetSegmentParameterRange
          (TTangentBezierSpline<float> *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  (**(code **)(this->_padding_ + 0x58))(&this->_padding_);
  return TVar1;
}

// GetSegmentParameterRange @ 147a58fa0

TInterval1<float> __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetSegmentParameterRange
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

{
  TInterval1<float> TVar1;
  float in_register_00000014;
  
  TVar1.Max = in_register_00000014;
  TVar1.Min = (float)param_1;
  (**(code **)(this->_padding_ + 0x58))(&this->_padding_);
  return TVar1;
}

// GetStaticTypeId @ 147a5a200

uint * __cdecl UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId(void)

{
  ushort uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    uVar5 = 0x811c9dc5;
    pwVar3 = L"TangentBezier";
    if (TSplineValueTypeTraits<float>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
    }
    uVar7 = 0x811c9dc5;
    uVar6 = 0x54;
    do {
      pwVar3 = pwVar3 + 1;
      uVar2 = uVar6 ^ uVar7;
      uVar7 = uVar2 * 0x1000193;
      uVar6 = (uint)(ushort)*pwVar3;
    } while (*pwVar3 != L'\0');
    uVar1 = *pwVar4;
    while (uVar1 != 0) {
      pwVar4 = (wchar_t *)((longlong)pwVar4 + 2);
      uVar5 = (uVar1 ^ uVar5) * 0x1000193;
      uVar1 = *pwVar4;
    }
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = uVar2 * 0x1930000 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetStaticTypeId @ 147a5a2f0

uint * __cdecl
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)

{
  ushort uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar4 = L"";
    uVar5 = 0x811c9dc5;
    pwVar3 = L"TangentBezier";
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)
               TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
    }
    uVar7 = 0x811c9dc5;
    uVar6 = 0x54;
    do {
      pwVar3 = pwVar3 + 1;
      uVar2 = uVar6 ^ uVar7;
      uVar7 = uVar2 * 0x1000193;
      uVar6 = (uint)(ushort)*pwVar3;
    } while (*pwVar3 != L'\0');
    uVar1 = *pwVar4;
    while (uVar1 != 0) {
      pwVar4 = (wchar_t *)((longlong)pwVar4 + 2);
      uVar5 = (uVar1 ^ uVar5) * 0x1000193;
      uVar1 = *pwVar4;
    }
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = uVar2 * 0x1930000 | uVar5 & 0xffff;
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetTangentIn @ 147a5a5c0

float __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetTangentIn
          (TTangentBezierSpline<float> *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  
  iVar2 = GetNumPoints(this);
  while( true ) {
    if (iVar2 < 2) {
      return 0.0;
    }
    if (param_1 != 0) break;
    cVar1 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar1 == '\0') {
      fVar5 = GetTangentOut(this,0);
      return fVar5;
    }
    iVar3 = GetNumPoints(this);
    param_1 = iVar2;
    iVar2 = iVar3;
  }
  iVar2 = param_1 * 4 + -1;
  if ((int)this->_padding_ <= iVar2) {
    return 0.0;
  }
  pfVar4 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,iVar2);
  fVar5 = *pfVar4;
  pfVar4 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,param_1 * 4 + -2);
  return (fVar5 - *pfVar4) * __real_40400000;
}

// GetTangentIn @ 147a5a690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetTangentIn
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,
          TQuat<double> *__return_storage_ptr__,int param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  TQuat<double> *pTVar11;
  
  iVar10 = GetNumPoints(this);
  if (1 < iVar10) {
    if (param_1 == 0) {
      cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar9 != '\0') {
        GetTangentIn(this,__return_storage_ptr__,iVar10);
        return __return_storage_ptr__;
      }
      GetTangentOut(this,__return_storage_ptr__,0);
      return __return_storage_ptr__;
    }
    iVar10 = param_1 * 4 + -1;
    if (iVar10 < (int)this->_padding_) {
      pTVar11 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,iVar10);
      dVar2 = pTVar11->X;
      dVar3 = pTVar11->Y;
      dVar7 = pTVar11->Z;
      dVar8 = pTVar11->W;
      pTVar11 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,param_1 * 4 + -2)
      ;
      dVar5 = (dVar2 - pTVar11->X) * ___xmm_40080000000000004008000000000000;
      dVar6 = (dVar3 - pTVar11->Y) * _UNK_15076baf8;
      dVar2 = (dVar7 - pTVar11->Z) * ___xmm_40080000000000004008000000000000;
      dVar3 = (dVar8 - pTVar11->W) * _UNK_15076baf8;
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      __return_storage_ptr__->X = dVar5;
      __return_storage_ptr__->Y = (double)auVar4._8_8_;
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar2;
      auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      __return_storage_ptr__->Z = dVar2;
      __return_storage_ptr__->W = (double)auVar1._8_8_;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->X = 0.0;
  __return_storage_ptr__->Y = 0.0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  return __return_storage_ptr__;
}

// GetTangentMode @ 147a5a780

ETangentMode __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentMode
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ETangentMode EVar3;
  int iVar4;
  uint uVar5;
  
  if (-1 < param_1) {
    iVar4 = GetNumPoints(this);
    if (param_1 < iVar4) {
      uVar5 = 0;
      if (param_1 < (this->TangentModes).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
      }
      return (ETangentMode)(this->TangentModes).AllocatorInstance.Data[param_1];
    }
  }
  return Unknown;
}

// GetTangentOut @ 147a5a810

float __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetTangentOut
          (TTangentBezierSpline<float> *this,int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  iVar2 = GetNumPoints(this);
  if (1 < iVar2) {
    if (param_1 == iVar2 + -1) {
      cVar1 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar1 == '\0') {
        fVar4 = GetTangentIn(this,param_1);
        return fVar4;
      }
    }
    iVar2 = param_1 * 4 + 1;
    if (iVar2 < (int)this->_padding_) {
      pfVar3 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,param_1 * 4);
      fVar4 = *pfVar3;
      pfVar3 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,iVar2);
      return (*pfVar3 - fVar4) * __real_40400000;
    }
  }
  return 0.0;
}

// GetTangentOut @ 147a5a8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetTangentOut
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,
          TQuat<double> *__return_storage_ptr__,int param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  TQuat<double> *pTVar11;
  
  iVar10 = GetNumPoints(this);
  if (1 < iVar10) {
    if (param_1 == iVar10 + -1) {
      cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar9 == '\0') {
        GetTangentIn(this,__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
    iVar10 = param_1 * 4 + 1;
    if (iVar10 < (int)this->_padding_) {
      pTVar11 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,param_1 * 4);
      dVar2 = pTVar11->X;
      dVar3 = pTVar11->Y;
      dVar7 = pTVar11->Z;
      dVar8 = pTVar11->W;
      pTVar11 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,iVar10);
      dVar5 = (pTVar11->X - dVar2) * ___xmm_40080000000000004008000000000000;
      dVar6 = (pTVar11->Y - dVar3) * _UNK_15076baf8;
      dVar2 = (pTVar11->Z - dVar7) * ___xmm_40080000000000004008000000000000;
      dVar3 = (pTVar11->W - dVar8) * _UNK_15076baf8;
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      __return_storage_ptr__->X = dVar5;
      __return_storage_ptr__->Y = (double)auVar4._8_8_;
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar2;
      auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      __return_storage_ptr__->Z = dVar2;
      __return_storage_ptr__->W = (double)auVar1._8_8_;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->X = 0.0;
  __return_storage_ptr__->Y = 0.0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  return __return_storage_ptr__;
}

// GetTypeId @ 147a5b0a0

uint __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetTypeId(TTangentBezierSpline<float> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// GetTypeId @ 147a5b0c0

uint __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetTypeId
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// GetValue @ 147a5b3f0

float __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::GetValue
          (TTangentBezierSpline<float> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  if (iVar1 == 0) {
    return 0.0;
  }
  if (param_1 < 0) {
    return 0.0;
  }
  if (iVar1 == 0) {
    return 0.0;
  }
  if ((iVar1 == 1) || (iVar1 == 2)) {
    `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  else if (iVar1 != 3) {
    cVar3 = (**(code **)(this->_padding_ + 0x40))();
    pcVar2 = *(code **)(this->_padding_ + 0x50);
    if (cVar3 == '\0') {
      iVar4 = (*pcVar2)(this);
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = (*pcVar2)();
    }
    goto LAB_147a5b461;
  }
  iVar4 = 1;
LAB_147a5b461:
  if (iVar4 <= param_1) {
    return 0.0;
  }
  if (iVar1 == 1) {
    if (param_1 != 0) {
      return 0.0;
    }
  }
  else if (param_1 != 0) {
    iVar4 = param_1 * 4 + -1;
    if (iVar1 <= iVar4) {
      return 0.0;
    }
    pfVar5 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,iVar4);
    return *pfVar5;
  }
  pfVar5 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,0);
  return *pfVar5;
}

// GetValue @ 147a5b4e0

TQuat<double> * __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetValue
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,
          TQuat<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  TQuat<double> *pTVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || (param_1 < 0)) || (iVar1 == 0)) goto LAB_147a5b58b;
  if ((iVar1 == 1) || (iVar1 == 2)) {
    `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints'::__l4::
    <lambda_1>::operator()(local_res8);
LAB_147a5b54f:
    iVar7 = 1;
  }
  else {
    if (iVar1 == 3) goto LAB_147a5b54f;
    cVar6 = (**(code **)(this->_padding_ + 0x40))();
    pcVar2 = *(code **)(this->_padding_ + 0x50);
    if (cVar6 == '\0') {
      iVar7 = (*pcVar2)(this);
      iVar7 = iVar7 + 1;
    }
    else {
      iVar7 = (*pcVar2)();
    }
  }
  if (iVar7 <= param_1) {
LAB_147a5b58b:
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
    return __return_storage_ptr__;
  }
  if (iVar1 == 1) {
    if (param_1 != 0) goto LAB_147a5b58b;
  }
  else if (param_1 != 0) {
    iVar7 = param_1 * 4 + -1;
    if (iVar1 <= iVar7) goto LAB_147a5b58b;
    goto LAB_147a5b563;
  }
  iVar7 = 0;
LAB_147a5b563:
  pTVar8 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                     ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,iVar7);
  dVar3 = pTVar8->Y;
  dVar4 = pTVar8->Z;
  dVar5 = pTVar8->W;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar3;
  __return_storage_ptr__->Z = dVar4;
  __return_storage_ptr__->W = dVar5;
  return __return_storage_ptr__;
}

// InitializeFirstSegment @ 147a5e350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::InitializeFirstSegment
          (TTangentBezierSpline<float> *this,TTangentBezierControlPoint<float> *param_1,int *param_2
          )

{
  int *piVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  float *pfVar12;
  ETangentMode *pEVar13;
  float fVar14;
  undefined1 auStackY_d8 [32];
  float local_88;
  float local_84;
  TArray<float,TSizedDefaultAllocator<32>_> local_80 [2];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar11 = GetNumPoints(this);
  if (iVar11 == 0) {
    TBSpline<float,3>::AddValue((TBSpline<float,3> *)&this->_padding_,&param_1->Position);
    local_88 = param_1->TangentOut * __real_3eaaaaab + param_1->Position;
    TBSpline<float,3>::AddValue((TBSpline<float,3> *)&this->_padding_,&local_88);
    local_84 = param_1->Position - param_1->TangentIn * __real_3eaaaaab;
    TBSpline<float,3>::AddValue((TBSpline<float,3> *)&this->_padding_,&local_84);
    iVar11 = (this->TangentModes).ArrayNum;
    pTVar2 = &this->TangentModes;
    pEVar13 = &param_1->TangentMode;
    if (iVar11 == 0) {
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar6 <= pEVar13) && (pEVar13 < pFVar6 + (this->TangentModes).ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      iVar11 = (this->TangentModes).ArrayNum;
      piVar1 = &(this->TangentModes).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TangentModes).ArrayNum = iVar11 + 1;
      (pTVar2->AllocatorInstance).Data[iVar11] = (FScriptContainerElement)*pEVar13;
      bVar9 = true;
      *param_2 = 0;
    }
    else {
      FVar5 = (FScriptContainerElement)*pEVar13;
      if ((iVar11 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      *(pTVar2->AllocatorInstance).Data = FVar5;
      bVar9 = true;
      *param_2 = 0;
    }
  }
  else if (iVar11 == 1) {
    pfVar12 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,0);
    fVar3 = param_1->Position;
    fVar4 = *pfVar12;
    fVar14 = (__real_3f800000 - this->Tension) * (fVar3 - fVar4);
    fVar8 = fVar14;
    if ((param_1->TangentMode != Auto) && (param_1->TangentMode != AutoClamped)) {
      fVar8 = param_1->TangentIn;
    }
    fVar8 = fVar8 * __real_3eaaaaab;
    fVar14 = fVar14 * __real_3eaaaaab;
    bVar9 = IsAutoTangent(this,0);
    if (bVar9) {
      fVar14 = fVar14 + fVar4;
    }
    else {
      pfVar12 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,1);
      fVar14 = *pfVar12;
    }
    local_80[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80[0].ArrayNum = 4;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,4,0,&local_80[0].AllocatorInstance,4,&local_80[0].ArrayMax);
    *(float *)local_80[0].AllocatorInstance.Data = fVar4;
    *(float *)(local_80[0].AllocatorInstance.Data + 4) = fVar14;
    *(float *)(local_80[0].AllocatorInstance.Data + 8) = fVar3 - fVar8;
    *(float *)(local_80[0].AllocatorInstance.Data + 0xc) = fVar3;
    TPolyBezierSpline<float>::SetControlPoints
              ((TPolyBezierSpline<float> *)&this->_padding_,local_80,Centripetal);
    if (local_80[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80[0].AllocatorInstance.Data);
    }
    iVar11 = (this->TangentModes).ArrayNum;
    piVar1 = &(this->TangentModes).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&(this->TangentModes).AllocatorInstance,piVar1);
    }
    (this->TangentModes).ArrayNum = iVar11 + 1;
    (this->TangentModes).AllocatorInstance.Data[iVar11] = (FScriptContainerElement)0x0;
    SetPointTangentMode(this,1,param_1->TangentMode);
    bVar9 = true;
    *param_2 = 1;
  }
  else {
    bVar9 = false;
  }
  return bVar9;
}

// InitializeFirstSegment @ 147a5e6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::InitializeFirstSegment
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,
          TTangentBezierControlPoint<UE::Math::TQuat<double>_> *param_1,int *param_2)

{
  int *piVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  FScriptContainerElement FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  undefined1 uVar22;
  int iVar23;
  TQuat<double> *pTVar24;
  ETangentMode *pEVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auStackY_1e8 [32];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_198;
  TQuat<double> local_188;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar23 = GetNumPoints(this);
  if (iVar23 == 0) {
    TBSpline<UE::Math::TQuat<double>,3>::AddValue
              ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,&param_1->Position);
    dVar9 = _UNK_150aa23f8;
    dVar14 = ___xmm_3fd55555555555553fd5555555555555;
    auVar36._0_8_ = (double)_UNK_15076be98;
    auVar36._8_8_ = (double)_UNK_15076be9c;
    auVar3._0_8_ = (param_1->TangentOut).Z;
    auVar3._8_8_ = (param_1->TangentOut).W;
    local_188.X = ___xmm_3fd55555555555553fd5555555555555 * (param_1->TangentOut).X +
                  (param_1->Position).X;
    local_188.Y = _UNK_150aa23f8 * (param_1->TangentOut).Y + (param_1->Position).Y;
    auVar27 = divpd(auVar3,auVar36);
    local_188.Z = auVar27._0_8_ + (param_1->Position).Z;
    local_188.W = auVar27._8_8_ + (param_1->Position).W;
    TBSpline<UE::Math::TQuat<double>,3>::AddValue
              ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,&local_188);
    auVar4._0_8_ = (param_1->TangentIn).Z;
    auVar4._8_8_ = (param_1->TangentIn).W;
    auVar27 = divpd(auVar4,auVar36);
    dVar9 = (param_1->Position).Y - dVar9 * (param_1->TangentIn).Y;
    local_158 = (param_1->Position).Z - auVar27._0_8_;
    dStack_150 = (param_1->Position).W - auVar27._8_8_;
    local_168._8_4_ = SUB84(dVar9,0);
    local_168._0_8_ = (param_1->Position).X - dVar14 * (param_1->TangentIn).X;
    local_168._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    TBSpline<UE::Math::TQuat<double>,3>::AddValue
              ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,(TQuat<double> *)local_168);
    iVar23 = (this->TangentModes).ArrayNum;
    pTVar2 = &this->TangentModes;
    pEVar25 = &param_1->TangentMode;
    if (iVar23 == 0) {
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar7 <= pEVar25) && (pEVar25 < pFVar7 + (this->TangentModes).ArrayMax)) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          uVar22 = (*pcVar8)();
          return (bool)uVar22;
        }
      }
      iVar23 = (this->TangentModes).ArrayNum;
      piVar1 = &(this->TangentModes).ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TangentModes).ArrayNum = iVar23 + 1;
      (pTVar2->AllocatorInstance).Data[iVar23] = (FScriptContainerElement)*pEVar25;
      bVar21 = true;
      *param_2 = 0;
    }
    else {
      FVar6 = (FScriptContainerElement)*pEVar25;
      if (iVar23 < 1) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          uVar22 = (*pcVar8)();
          return (bool)uVar22;
        }
      }
      *(pTVar2->AllocatorInstance).Data = FVar6;
      bVar21 = true;
      *param_2 = 0;
    }
  }
  else if (iVar23 == 1) {
    pTVar24 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                        ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,0);
    auVar27 = ___xmm_40080000000000004008000000000000;
    dVar9 = (param_1->Position).X;
    dVar14 = (param_1->Position).Y;
    dVar15 = pTVar24->X;
    dVar16 = pTVar24->Y;
    dVar17 = pTVar24->Z;
    dVar18 = pTVar24->W;
    dVar19 = (param_1->Position).Z;
    dVar20 = (param_1->Position).W;
    dVar31 = (double)(__real_3f800000 - this->Tension);
    auVar33._0_8_ = (dVar9 - dVar15) * dVar31;
    auVar33._8_8_ = (dVar14 - dVar16) * dVar31;
    auVar37._0_8_ = (dVar19 - dVar17) * dVar31;
    auVar37._8_8_ = (dVar20 - dVar18) * dVar31;
    if ((param_1->TangentMode == Auto) || (param_1->TangentMode == AutoClamped)) {
      auVar29._8_4_ = SUB84(auVar37._8_8_,0);
      auVar29._0_8_ = auVar37._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
      auVar28._8_4_ = SUB84((double)_UNK_15076be9c,0);
      auVar28._0_8_ = (double)_UNK_15076be98;
      auVar28._12_4_ = (int)((ulonglong)(double)_UNK_15076be9c >> 0x20);
      auVar28 = divpd(auVar29,auVar28);
      dVar26 = auVar28._0_8_;
      dVar30 = auVar28._8_8_;
      dVar31 = auVar33._0_8_;
      dVar13 = auVar33._8_8_;
    }
    else {
      auVar5._0_8_ = (param_1->TangentIn).Z;
      auVar5._8_8_ = (param_1->TangentIn).W;
      auVar12._8_4_ = SUB84((double)_UNK_15076be9c,0);
      auVar12._0_8_ = (double)_UNK_15076be98;
      auVar12._12_4_ = (int)((ulonglong)(double)_UNK_15076be9c >> 0x20);
      auVar28 = divpd(auVar5,auVar12);
      dVar26 = auVar28._0_8_;
      dVar30 = auVar28._8_8_;
      dVar31 = (param_1->TangentIn).X;
      dVar13 = (param_1->TangentIn).Y;
    }
    dVar31 = ___xmm_3fd55555555555553fd5555555555555 * dVar31;
    dVar34 = (double)_UNK_15076be9c;
    dVar32 = (double)_UNK_15076be98;
    dVar13 = dVar14 - _UNK_150aa23f8 * dVar13;
    bVar21 = IsAutoTangent(this,0);
    if (bVar21) {
      auVar33 = divpd(auVar33,auVar27);
      auVar27._8_4_ = SUB84(dVar34,0);
      auVar27._0_8_ = dVar32;
      auVar27._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar27 = divpd(auVar37,auVar27);
      dVar32 = auVar33._0_8_ + dVar15;
      dVar34 = auVar33._8_8_ + dVar16;
      dVar35 = auVar27._0_8_ + dVar17;
      dVar38 = auVar27._8_8_ + dVar18;
    }
    else {
      pTVar24 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,1);
      dVar32 = pTVar24->X;
      dVar34 = pTVar24->Y;
      dVar35 = pTVar24->Z;
      dVar38 = pTVar24->W;
    }
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ArrayNum = 4;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,4,0,&local_198.AllocatorInstance,4,&local_198.ArrayMax);
    *(double *)local_198.AllocatorInstance.Data = dVar15;
    *(double *)(local_198.AllocatorInstance.Data + 8) = dVar16;
    *(double *)(local_198.AllocatorInstance.Data + 0x10) = dVar17;
    *(double *)(local_198.AllocatorInstance.Data + 0x18) = dVar18;
    *(double *)(local_198.AllocatorInstance.Data + 0x20) = dVar32;
    *(double *)(local_198.AllocatorInstance.Data + 0x28) = dVar34;
    *(double *)(local_198.AllocatorInstance.Data + 0x30) = dVar35;
    *(double *)(local_198.AllocatorInstance.Data + 0x38) = dVar38;
    auVar10._8_4_ = SUB84(dVar13,0);
    auVar10._0_8_ = dVar9 - dVar31;
    auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(local_198.AllocatorInstance.Data + 0x40) = auVar10;
    auVar11._8_4_ = SUB84(dVar20 - dVar30,0);
    auVar11._0_8_ = dVar19 - dVar26;
    auVar11._12_4_ = (int)((ulonglong)(dVar20 - dVar30) >> 0x20);
    *(undefined1 (*) [16])(local_198.AllocatorInstance.Data + 0x50) = auVar11;
    *(double *)(local_198.AllocatorInstance.Data + 0x60) = dVar9;
    *(double *)(local_198.AllocatorInstance.Data + 0x68) = dVar14;
    *(double *)(local_198.AllocatorInstance.Data + 0x70) = dVar19;
    *(double *)(local_198.AllocatorInstance.Data + 0x78) = dVar20;
    TPolyBezierSpline<UE::Math::TQuat<double>_>::SetControlPoints
              ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this->_padding_,&local_198,
               Centripetal);
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
    iVar23 = (this->TangentModes).ArrayNum;
    piVar1 = &(this->TangentModes).ArrayMax;
    if (iVar23 == *piVar1) {
      iVar23 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&(this->TangentModes).AllocatorInstance,piVar1);
    }
    (this->TangentModes).ArrayNum = iVar23 + 1;
    (this->TangentModes).AllocatorInstance.Data[iVar23] = (FScriptContainerElement)0x0;
    SetPointTangentMode(this,1,param_1->TangentMode);
    bVar21 = true;
    *param_2 = 1;
  }
  else {
    bVar21 = false;
  }
  return bVar21;
}

// InitializeFirstSegment @ 147a5eb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::InitializeFirstSegment
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *param_1,int *param_2)

{
  int *piVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  undefined1 uVar20;
  int iVar21;
  TVector<double> *pTVar22;
  ETangentMode *pEVar23;
  double dVar24;
  ForAnyElementType FVar25;
  undefined1 auStackY_1c8 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150 [2];
  undefined1 local_120 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  iVar21 = GetNumPoints(this);
  if (iVar21 == 0) {
    TBSpline<UE::Math::TVector<double>,3>::AddValue
              ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,&param_1->Position);
    dVar3 = __real_3fd5555555555555;
    local_150[0]._0_8_ =
         (param_1->TangentOut).field0_0x0._s_0.X * __real_3fd5555555555555 +
         (param_1->Position).field0_0x0._s_0.X;
    local_150[0]._16_8_ =
         (param_1->TangentOut).field0_0x0._s_0.Z * __real_3fd5555555555555 +
         (param_1->Position).field0_0x0._s_0.Z;
    local_150[0]._8_8_ =
         (param_1->TangentOut).field0_0x0._s_0.Y * __real_3fd5555555555555 +
         (param_1->Position).field0_0x0._s_0.Y;
    TBSpline<UE::Math::TVector<double>,3>::AddValue
              ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
               (TVector<double> *)&local_150[0]._s_0);
    local_168._s_0.X =
         (param_1->Position).field0_0x0._s_0.X - (param_1->TangentIn).field0_0x0._s_0.X * dVar3;
    local_168._s_0.Y =
         (param_1->Position).field0_0x0._s_0.Y - (param_1->TangentIn).field0_0x0._s_0.Y * dVar3;
    local_168._s_0.Z =
         (param_1->Position).field0_0x0._s_0.Z - (param_1->TangentIn).field0_0x0._s_0.Z * dVar3;
    TBSpline<UE::Math::TVector<double>,3>::AddValue
              ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
               (TVector<double> *)&local_168._s_0);
    iVar21 = (this->TangentModes).ArrayNum;
    pTVar2 = &this->TangentModes;
    pEVar23 = &param_1->TangentMode;
    if (iVar21 == 0) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= pEVar23) && (pEVar23 < pFVar5 + (this->TangentModes).ArrayMax)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar6 = (code *)swi(3);
        uVar20 = (*pcVar6)();
        return (bool)uVar20;
      }
      iVar21 = (this->TangentModes).ArrayNum;
      piVar1 = &(this->TangentModes).ArrayMax;
      if (iVar21 == *piVar1) {
        iVar21 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TangentModes).ArrayNum = iVar21 + 1;
      (pTVar2->AllocatorInstance).Data[iVar21] = (FScriptContainerElement)*pEVar23;
      bVar19 = true;
      *param_2 = 0;
    }
    else {
      FVar4 = (FScriptContainerElement)*pEVar23;
      if ((iVar21 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        uVar20 = (*pcVar6)();
        return (bool)uVar20;
      }
      *(pTVar2->AllocatorInstance).Data = FVar4;
      bVar19 = true;
      *param_2 = 0;
    }
  }
  else if (iVar21 == 1) {
    pTVar22 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                        ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,0);
    dVar14 = (param_1->Position).field0_0x0._s_0.X;
    dVar15 = (param_1->Position).field0_0x0._s_0.Y;
    dVar16 = (pTVar22->field0_0x0)._s_0.X;
    dVar17 = (pTVar22->field0_0x0)._s_0.Y;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)(pTVar22->field0_0x0)._s_0.Z;
    dVar3 = (param_1->Position).field0_0x0._s_0.Z;
    dVar24 = (double)(__real_3f800000 - this->Tension);
    dVar10 = (dVar15 - dVar17) * dVar24;
    dVar9 = (dVar14 - dVar16) * dVar24;
    dVar24 = (dVar3 - (double)local_178.AllocatorInstance.Data) * dVar24;
    dVar13 = dVar24;
    dVar12 = dVar10;
    dVar18 = dVar9;
    if ((param_1->TangentMode != Auto) && (param_1->TangentMode != AutoClamped)) {
      dVar13 = (param_1->TangentIn).field0_0x0._s_0.Z;
      dVar12 = (param_1->TangentIn).field0_0x0._s_0.Y;
      dVar18 = (param_1->TangentIn).field0_0x0._s_0.X;
    }
    dVar18 = dVar18 * __real_3fd5555555555555;
    dVar13 = dVar13 * __real_3fd5555555555555;
    dVar24 = dVar24 * __real_3fd5555555555555;
    dVar10 = dVar10 * __real_3fd5555555555555;
    dVar9 = dVar9 * __real_3fd5555555555555;
    dVar12 = dVar15 - dVar12 * __real_3fd5555555555555;
    bVar19 = IsAutoTangent(this,0);
    if (bVar19) {
      dVar10 = dVar17 + dVar10;
      dVar9 = dVar16 + dVar9;
      dVar24 = (double)local_178.AllocatorInstance.Data + dVar24;
      FVar25.Data = local_178.AllocatorInstance.Data;
    }
    else {
      pTVar22 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,1);
      dVar9 = (pTVar22->field0_0x0)._s_0.X;
      dVar10 = *(double *)((longlong)&pTVar22->field0_0x0 + 8);
      dVar24 = *(double *)((longlong)&pTVar22->field0_0x0 + 0x10);
      FVar25.Data = local_178.AllocatorInstance.Data;
    }
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 4;
    local_120._8_4_ = SUB84(dVar10,0);
    local_120._0_8_ = dVar9;
    local_120._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_f0 = dVar14;
    uStack_e8 = dVar15;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,0,&local_178.AllocatorInstance,4,&local_178.ArrayMax);
    *(double *)local_178.AllocatorInstance.Data = dVar16;
    *(double *)(local_178.AllocatorInstance.Data + 8) = dVar17;
    auVar7._8_4_ = local_120._0_4_;
    auVar7._0_8_ = FVar25.Data;
    auVar7._12_4_ = local_120._4_4_;
    *(undefined1 (*) [16])(local_178.AllocatorInstance.Data + 0x10) = auVar7;
    *(undefined4 *)(local_178.AllocatorInstance.Data + 0x20) = local_120._8_4_;
    *(undefined4 *)(local_178.AllocatorInstance.Data + 0x24) = local_120._12_4_;
    *(int *)(local_178.AllocatorInstance.Data + 0x28) = SUB84(dVar24,0);
    *(int *)(local_178.AllocatorInstance.Data + 0x2c) = (int)((ulonglong)dVar24 >> 0x20);
    auVar11._8_4_ = SUB84(dVar12,0);
    auVar11._0_8_ = dVar14 - dVar18;
    auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(local_178.AllocatorInstance.Data + 0x30) = auVar11;
    auVar8._8_4_ = (undefined4)local_f0;
    auVar8._0_8_ = dVar3 - dVar13;
    auVar8._12_4_ = local_f0._4_4_;
    *(undefined1 (*) [16])(local_178.AllocatorInstance.Data + 0x40) = auVar8;
    *(undefined4 *)(local_178.AllocatorInstance.Data + 0x50) = (undefined4)uStack_e8;
    *(undefined4 *)(local_178.AllocatorInstance.Data + 0x54) = uStack_e8._4_4_;
    *(int *)(local_178.AllocatorInstance.Data + 0x58) = SUB84(dVar3,0);
    *(int *)(local_178.AllocatorInstance.Data + 0x5c) = (int)((ulonglong)dVar3 >> 0x20);
    TPolyBezierSpline<UE::Math::TVector<double>_>::SetControlPoints
              ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_178,
               Centripetal);
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
    iVar21 = (this->TangentModes).ArrayNum;
    piVar1 = &(this->TangentModes).ArrayMax;
    if (iVar21 == *piVar1) {
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&(this->TangentModes).AllocatorInstance,piVar1);
    }
    (this->TangentModes).ArrayNum = iVar21 + 1;
    (this->TangentModes).AllocatorInstance.Data[iVar21] = (FScriptContainerElement)0x0;
    SetPointTangentMode(this,1,param_1->TangentMode);
    bVar19 = true;
    *param_2 = 1;
  }
  else {
    bVar19 = false;
  }
  return bVar19;
}

// InsertPointAtGlobalParam @ 147a60e70

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::InsertPointAtGlobalParam
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,float param_1,
          TTangentBezierControlPoint<UE::Math::TQuat<double>_> *param_2)

{
  int iVar1;
  float local_res8 [2];
  int local_res20 [2];
  
  TPolyBezierSpline<UE::Math::TQuat<double>_>::MapGlobalParameterToLocalSegment
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this->_padding_,param_1,local_res20,
             local_res8);
  iVar1 = InsertPointAtSegmentParam(this,local_res20[0],local_res8[0],param_2,Centripetal);
  return iVar1;
}

// InsertPointAtGlobalParam @ 147a60ed0

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::InsertPointAtGlobalParam
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,float param_1,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *param_2)

{
  int iVar1;
  float local_res8 [2];
  int local_res20 [2];
  
  TPolyBezierSpline<UE::Math::TVector<double>_>::MapGlobalParameterToLocalSegment
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,local_res20,
             local_res8);
  iVar1 = InsertPointAtSegmentParam(this,local_res20[0],local_res8[0],param_2,Centripetal);
  return iVar1;
}

// InsertPointAtPosition @ 147a60f30

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::InsertPointAtPosition
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *param_2)

{
  uint uVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int local_res20 [2];
  float local_48 [2];
  float local_40;
  float local_3c;
  
  bVar3 = InitializeFirstSegment(this,param_2,local_res20);
  if (bVar3) {
    return local_res20[0];
  }
  iVar4 = GetNumPoints(this);
  if (param_1 + -1 < iVar4 + -1) {
    iVar4 = param_1;
  }
  iVar6 = 0;
  if (0 < iVar4 + -1) {
    iVar6 = iVar4 + -1;
  }
  if ((iVar6 < 0) ||
     (iVar4 = (int)this->_padding_, (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2 <= iVar6)) {
    local_48[0] = 3.4028235e+38;
    fVar9 = 0.0;
  }
  else {
    fVar8 = TPolyBezierSpline<UE::Math::TVector<double>_>::FindNearestOnSegment
                      ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                       &param_2->Position,iVar6,local_48);
    (**(code **)(this->_padding_ + 0x58))(&this->_padding_,&local_40,iVar6);
    fVar9 = 0.0;
    if (local_3c - local_40 != 0.0) {
      fVar9 = (fVar8 - local_40) / (local_3c - local_40);
    }
  }
  iVar4 = TPolyBezierSpline<UE::Math::TVector<double>_>::InsertPointAtSegmentParam
                    ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,iVar6,fVar9,
                     &param_2->Position,Centripetal);
  if ((-1 < iVar4) && ((param_2->TangentMode == User || (param_2->TangentMode == Broken)))) {
    SetTangentIn(this,iVar4,&param_2->TangentIn);
    SetTangentOut(this,iVar4,&param_2->TangentOut);
  }
  this_00 = &this->TangentModes;
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::InsertDefaulted
            (this_00,iVar4);
  SetPointTangentMode(this,iVar4,param_2->TangentMode);
  if (0 < iVar4) {
    uVar1 = iVar4 - 1;
    uVar7 = ~uVar1 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar5 = 0;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a61183;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
LAB_147a61183:
  uVar1 = iVar4 + 1;
  iVar6 = GetNumPoints(this);
  if ((int)uVar1 < iVar6) {
    uVar7 = ~uVar1 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar5 = 0;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1) {
        return iVar4;
      }
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
  return iVar4;
}

// InsertPointAtSegmentParam @ 147a61380

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::InsertPointAtSegmentParam
          (TTangentBezierSpline<float> *this,int param_1,float param_2,
          TTangentBezierControlPoint<float> *param_3,EParameterizationPolicy param_4)

{
  uint uVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  
  bVar3 = InitializeFirstSegment(this,param_3,&local_38);
  if (bVar3) {
    return local_38;
  }
  iVar4 = (int)this->_padding_;
  iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  if ((iVar4 != 0) ||
     (bVar3 = TPolyBezierSpline<float>::InitializeFirstSegment
                        ((TPolyBezierSpline<float> *)&this->_padding_,0.0,&param_3->Position,
                         &local_34), iVar5 = local_34, !bVar3)) {
    iVar4 = iVar4 + -1;
    if (param_1 < iVar4) {
      iVar4 = param_1;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    (**(code **)(this->_padding_ + 0x58))(&this->_padding_,&local_30,iVar5);
    iVar5 = TPolyBezierSpline<float>::InsertPoint
                      ((TPolyBezierSpline<float> *)&this->_padding_,
                       (local_2c - local_30) * param_2 + local_30,&param_3->Position,Centripetal);
  }
  if ((-1 < iVar5) && ((param_3->TangentMode == User || (param_3->TangentMode == Broken)))) {
    SetTangentIn(this,iVar5,&param_3->TangentIn);
    SetTangentOut(this,iVar5,&param_3->TangentOut);
  }
  this_00 = &this->TangentModes;
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::InsertDefaulted
            (this_00,iVar5);
  SetPointTangentMode(this,iVar5,param_3->TangentMode);
  uVar8 = 0;
  if (0 < iVar5) {
    uVar1 = iVar5 - 1;
    uVar7 = ~uVar1 >> 0x1f;
    uVar6 = uVar8;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar6 = uVar8;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a615a9;
    }
    uVar6 = uVar8;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
LAB_147a615a9:
  uVar1 = iVar5 + 1;
  iVar4 = GetNumPoints(this);
  if ((int)uVar1 < iVar4) {
    uVar7 = ~uVar1 >> 0x1f;
    uVar6 = uVar8;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar6 = uVar8;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1) {
        return iVar5;
      }
    }
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar8 = uVar7;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
  return iVar5;
}

// InsertPointAtSegmentParam @ 147a616f0

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::InsertPointAtSegmentParam
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,float param_2,
          TTangentBezierControlPoint<UE::Math::TQuat<double>_> *param_3,
          EParameterizationPolicy param_4)

{
  uint uVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  
  bVar3 = InitializeFirstSegment(this,param_3,&local_38);
  if (bVar3) {
    return local_38;
  }
  iVar4 = (int)this->_padding_;
  iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  if ((iVar4 != 0) ||
     (bVar3 = TPolyBezierSpline<UE::Math::TQuat<double>_>::InitializeFirstSegment
                        ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this->_padding_,0.0,
                         &param_3->Position,&local_34), iVar5 = local_34, !bVar3)) {
    iVar4 = iVar4 + -1;
    if (param_1 < iVar4) {
      iVar4 = param_1;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    (**(code **)(this->_padding_ + 0x58))(&this->_padding_,&local_30,iVar5);
    iVar5 = TPolyBezierSpline<UE::Math::TQuat<double>_>::InsertPoint
                      ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this->_padding_,
                       (local_2c - local_30) * param_2 + local_30,&param_3->Position,Centripetal);
  }
  if ((-1 < iVar5) && ((param_3->TangentMode == User || (param_3->TangentMode == Broken)))) {
    SetTangentIn(this,iVar5,&param_3->TangentIn);
    SetTangentOut(this,iVar5,&param_3->TangentOut);
  }
  this_00 = &this->TangentModes;
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::InsertDefaulted
            (this_00,iVar5);
  SetPointTangentMode(this,iVar5,param_3->TangentMode);
  uVar8 = 0;
  if (0 < iVar5) {
    uVar1 = iVar5 - 1;
    uVar7 = ~uVar1 >> 0x1f;
    uVar6 = uVar8;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar6 = uVar8;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a61919;
    }
    uVar6 = uVar8;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
LAB_147a61919:
  uVar1 = iVar5 + 1;
  iVar4 = GetNumPoints(this);
  if ((int)uVar1 < iVar4) {
    uVar7 = ~uVar1 >> 0x1f;
    uVar6 = uVar8;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar6 = uVar8;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1) {
        return iVar5;
      }
    }
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar8 = uVar7;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
  return iVar5;
}

// InsertPointAtSegmentParam @ 147a61a60

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::InsertPointAtSegmentParam
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,float param_2,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *param_3,
          EParameterizationPolicy param_4)

{
  uint uVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_38 [8];
  
  bVar3 = InitializeFirstSegment(this,param_3,local_38);
  if (bVar3) {
    return local_38[0];
  }
  iVar4 = TPolyBezierSpline<UE::Math::TVector<double>_>::InsertPointAtSegmentParam
                    ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,
                     param_2,&param_3->Position,Centripetal);
  if ((-1 < iVar4) && ((param_3->TangentMode == User || (param_3->TangentMode == Broken)))) {
    SetTangentIn(this,iVar4,&param_3->TangentIn);
    SetTangentOut(this,iVar4,&param_3->TangentOut);
  }
  this_00 = &this->TangentModes;
  TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::InsertDefaulted
            (this_00,iVar4);
  SetPointTangentMode(this,iVar4,param_3->TangentMode);
  if (0 < iVar4) {
    uVar1 = iVar4 - 1;
    uVar7 = ~uVar1 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar5 = 0;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a61c28;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
LAB_147a61c28:
  uVar1 = iVar4 + 1;
  iVar6 = GetNumPoints(this);
  if ((int)uVar1 < iVar6) {
    uVar7 = ~uVar1 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x0) {
      uVar5 = 0;
      if ((int)uVar1 < (this->TangentModes).ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((this_00->AllocatorInstance).Data[(int)uVar1] != (FScriptContainerElement)0x1) {
        return iVar4;
      }
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->TangentModes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    UpdatePointTangents(this,uVar1,(ETangentMode)(this_00->AllocatorInstance).Data[(int)uVar1]);
  }
  return iVar4;
}

// IsAutoTangent @ 147a62cb0

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::IsAutoTangent
          (TTangentBezierSpline<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->TangentModes).ArrayNum <= param_1)) {
LAB_147a62d92:
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->TangentModes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((this->TangentModes).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if (param_1 < (this->TangentModes).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((this->TangentModes).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x1)
      goto LAB_147a62d92;
    }
    bVar2 = true;
  }
  return bVar2;
}

// IsAutoTangent @ 147a62dc0

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::IsAutoTangent
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->TangentModes).ArrayNum <= param_1)) {
LAB_147a62ea2:
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->TangentModes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((this->TangentModes).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
      uVar4 = 0;
      if (param_1 < (this->TangentModes).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((this->TangentModes).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x1)
      goto LAB_147a62ea2;
    }
    bVar2 = true;
  }
  return bVar2;
}

// IsClosedLoop @ 147a62f30

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::IsClosedLoop(TTangentBezierSpline<float> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a62f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  return (bool)uVar1;
}

// IsClosedLoop @ 147a62f50

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::IsClosedLoop
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a62f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  return (bool)uVar1;
}

// IsEqual @ 147a63160

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::IsEqual
          (TTangentBezierSpline<float> *this,ISplineInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x48);
  iVar3 = (**(code **)(this->_padding_ + 0x48))();
  iVar4 = (*pcVar1)(param_1);
  if (((iVar4 == iVar3) &&
      (bVar2 = TBSpline<float,3>::operator==
                         ((TBSpline<float,3> *)&this->_padding_,(TBSpline<float,3> *)(param_1 + 2)),
      bVar2)) && (*(float *)(param_1 + 0xf) == this->Tension)) {
    iVar3 = (this->TangentModes).ArrayNum;
    if (((iVar3 == *(int *)(param_1 + 0x11)) &&
        ((iVar3 == 0 ||
         (iVar3 = memcmp((this->TangentModes).AllocatorInstance.Data,(void *)param_1[0x10],
                         (longlong)iVar3), iVar3 == 0)))) &&
       (this->bStationaryEndpoint == (bool)*(char *)(param_1 + 0x12))) {
      return true;
    }
  }
  return false;
}

// IsEqual @ 147a63210

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::IsEqual
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,ISplineInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x48);
  iVar3 = (**(code **)(this->_padding_ + 0x48))();
  iVar4 = (*pcVar1)(param_1);
  if (((iVar4 == iVar3) &&
      (bVar2 = TBSpline<UE::Math::TQuat<double>,3>::operator==
                         ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,
                          (TBSpline<UE::Math::TQuat<double>,3> *)(param_1 + 2)), bVar2)) &&
     (*(float *)(param_1 + 0xf) == this->Tension)) {
    iVar3 = (this->TangentModes).ArrayNum;
    if (((iVar3 == *(int *)(param_1 + 0x11)) &&
        ((iVar3 == 0 ||
         (iVar3 = memcmp((this->TangentModes).AllocatorInstance.Data,(void *)param_1[0x10],
                         (longlong)iVar3), iVar3 == 0)))) &&
       (this->bStationaryEndpoint == (bool)*(char *)(param_1 + 0x12))) {
      return true;
    }
  }
  return false;
}

// ModifyPoint @ 147a650a0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::ModifyPoint
          (TTangentBezierSpline<float> *this,int param_1,TTangentBezierControlPoint<float> *param_2)

{
  longlong lVar1;
  float fVar2;
  ETangentMode EVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  iVar7 = GetNumPoints(this);
  if (param_1 < 0) {
    return;
  }
  if (iVar7 <= param_1) {
    return;
  }
  fVar13 = GetValue(this,param_1);
  fVar2 = param_2->Position;
  SetPointTangentMode(this,param_1,param_2->TangentMode);
  iVar9 = param_1 * 4;
  if (param_1 == 0) {
    UpdateBezierControlPoint(this,0,&param_2->Position);
    cVar5 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar5 != '\0') {
      iVar9 = iVar7 * 4 + -1;
      goto LAB_147a65158;
    }
  }
  else {
    if (param_1 == iVar7 + -1) {
      UpdateBezierControlPoint(this,iVar9 + -1,&param_2->Position);
      cVar5 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar5 == '\0') goto LAB_147a65163;
    }
    else {
      UpdateBezierControlPoint(this,iVar9 + -1,&param_2->Position);
    }
LAB_147a65158:
    UpdateBezierControlPoint(this,iVar9,&param_2->Position);
  }
LAB_147a65163:
  EVar3 = param_2->TangentMode;
  if (((EVar3 != Auto) && (EVar3 != AutoClamped)) && (1 < (byte)(EVar3 - Linear))) {
    SetTangentIn(this,param_1,&param_2->TangentIn);
    SetTangentOut(this,param_1,&param_2->TangentOut);
  }
  UpdatePointTangents(this,param_1,param_2->TangentMode);
  if (fVar13 == fVar2) {
    return;
  }
  uVar10 = 0;
  if (0 < param_1) {
    uVar12 = param_1 - 1;
    uVar11 = ~uVar12 >> 0x1f;
    uVar8 = uVar10;
    if ((int)uVar12 < (this->TangentModes).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar1 = (longlong)param_1 + -1;
    if ((this->TangentModes).AllocatorInstance.Data[lVar1] != (FScriptContainerElement)0x0) {
      uVar8 = uVar10;
      if ((int)uVar12 < (this->TangentModes).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->TangentModes).AllocatorInstance.Data[lVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a652d2;
    }
    uVar8 = uVar10;
    if ((int)uVar12 < (this->TangentModes).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdatePointTangents(this,uVar12,(ETangentMode)(this->TangentModes).AllocatorInstance.Data[lVar1]
                       );
  }
LAB_147a652d2:
  if (param_1 < iVar7 + -1) {
    uVar11 = param_1 + 1;
    uVar12 = ~uVar11 >> 0x1f;
    uVar8 = uVar10;
    if ((int)uVar11 < (this->TangentModes).ArrayNum) {
      uVar8 = uVar12;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->TangentModes).AllocatorInstance.Data[(int)uVar11] != (FScriptContainerElement)0x0) {
      uVar8 = uVar10;
      if ((int)uVar11 < (this->TangentModes).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->TangentModes).AllocatorInstance.Data[(int)uVar11] != (FScriptContainerElement)0x1)
      {
        return;
      }
    }
    if ((int)uVar11 < (this->TangentModes).ArrayNum) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdatePointTangents(this,uVar11,
                        (ETangentMode)(this->TangentModes).AllocatorInstance.Data[(int)uVar11]);
  }
  return;
}

// ModifyPoint @ 147a65410

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::ModifyPoint
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,
          TTangentBezierControlPoint<UE::Math::TQuat<double>_> *param_2)

{
  ETangentMode EVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  TQuat<double> *pTVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_R15D;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  TQuat<double> local_38;
  
  iVar7 = GetNumPoints(this);
  if (param_1 < 0) {
    return;
  }
  if (iVar7 <= param_1) {
    return;
  }
  pTVar10 = GetValue(this,&local_38,param_1);
  lVar15 = -(ulonglong)((param_2->Position).W != local_38.W);
  lVar16 = -(ulonglong)((param_2->Position).Y != local_38.Y);
  auVar3._8_4_ = (int)lVar15;
  auVar3._0_8_ = -(ulonglong)((param_2->Position).Z != local_38.Z);
  auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
  uVar13 = movmskpd(unaff_R15D,auVar3);
  auVar4._8_4_ = (int)lVar16;
  auVar4._0_8_ = -(ulonglong)((param_2->Position).X != local_38.X);
  auVar4._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar8 = movmskpd((int)pTVar10,auVar4);
  SetPointTangentMode(this,param_1,param_2->TangentMode);
  iVar11 = param_1 * 4;
  if (param_1 == 0) {
    UpdateBezierControlPoint(this,0,&param_2->Position);
    cVar5 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar5 != '\0') {
      iVar11 = iVar7 * 4 + -1;
      goto LAB_147a654e9;
    }
  }
  else {
    if (param_1 == iVar7 + -1) {
      UpdateBezierControlPoint(this,iVar11 + -1,&param_2->Position);
      cVar5 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar5 == '\0') goto LAB_147a654f4;
    }
    else {
      UpdateBezierControlPoint(this,iVar11 + -1,&param_2->Position);
    }
LAB_147a654e9:
    UpdateBezierControlPoint(this,iVar11,&param_2->Position);
  }
LAB_147a654f4:
  EVar1 = param_2->TangentMode;
  if (((EVar1 != Auto) && (EVar1 != AutoClamped)) && (1 < (byte)(EVar1 - Linear))) {
    SetTangentIn(this,param_1,&param_2->TangentIn);
    SetTangentOut(this,param_1,&param_2->TangentOut);
  }
  UpdatePointTangents(this,param_1,param_2->TangentMode);
  if ((uVar13 & 0x3fffffff) == 0 && iVar8 == 0) {
    return;
  }
  uVar13 = 0;
  if (0 < param_1) {
    uVar14 = param_1 - 1;
    uVar12 = ~uVar14 >> 0x1f;
    uVar9 = uVar13;
    if ((int)uVar14 < (this->TangentModes).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar15 = (longlong)param_1 + -1;
    if ((this->TangentModes).AllocatorInstance.Data[lVar15] != (FScriptContainerElement)0x0) {
      uVar9 = uVar13;
      if ((int)uVar14 < (this->TangentModes).ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->TangentModes).AllocatorInstance.Data[lVar15] != (FScriptContainerElement)0x1)
      goto LAB_147a65663;
    }
    uVar9 = uVar13;
    if ((int)uVar14 < (this->TangentModes).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UpdatePointTangents(this,uVar14,
                        (ETangentMode)(this->TangentModes).AllocatorInstance.Data[lVar15]);
  }
LAB_147a65663:
  if (param_1 < iVar7 + -1) {
    uVar12 = param_1 + 1;
    uVar14 = ~uVar12 >> 0x1f;
    uVar9 = uVar13;
    if ((int)uVar12 < (this->TangentModes).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->TangentModes).AllocatorInstance.Data[(int)uVar12] != (FScriptContainerElement)0x0) {
      uVar9 = uVar13;
      if ((int)uVar12 < (this->TangentModes).ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->TangentModes).AllocatorInstance.Data[(int)uVar12] != (FScriptContainerElement)0x1)
      {
        return;
      }
    }
    if ((int)uVar12 < (this->TangentModes).ArrayNum) {
      uVar13 = uVar14;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UpdatePointTangents(this,uVar12,
                        (ETangentMode)(this->TangentModes).AllocatorInstance.Data[(int)uVar12]);
  }
  return;
}

// ModifyPoint @ 147a657b0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::ModifyPoint
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *param_2)

{
  longlong lVar1;
  ETangentMode EVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TVector<double>_u_0 local_38;
  
  iVar6 = GetNumPoints(this);
  if (param_1 < 0) {
    return;
  }
  if (iVar6 <= param_1) {
    return;
  }
  GetValue(this,(TVector<double> *)&local_38._s_0,param_1);
  if (((local_38._s_0.X == (param_2->Position).field0_0x0._s_0.X) &&
      (local_38._s_0.Y == (param_2->Position).field0_0x0._s_0.Y)) &&
     (local_38._s_0.Z == (param_2->Position).field0_0x0._s_0.Z)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  SetPointTangentMode(this,param_1,param_2->TangentMode);
  iVar8 = param_1 * 4;
  if (param_1 == 0) {
    UpdateBezierControlPoint(this,0,&param_2->Position);
    cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar4 != '\0') {
      iVar8 = iVar6 * 4 + -1;
      goto LAB_147a65892;
    }
  }
  else {
    if (param_1 == iVar6 + -1) {
      UpdateBezierControlPoint(this,iVar8 + -1,&param_2->Position);
      cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar4 == '\0') goto LAB_147a6589d;
    }
    else {
      UpdateBezierControlPoint(this,iVar8 + -1,&param_2->Position);
    }
LAB_147a65892:
    UpdateBezierControlPoint(this,iVar8,&param_2->Position);
  }
LAB_147a6589d:
  EVar2 = param_2->TangentMode;
  if (((EVar2 != Auto) && (EVar2 != AutoClamped)) && (1 < (byte)(EVar2 - Linear))) {
    SetTangentIn(this,param_1,&param_2->TangentIn);
    SetTangentOut(this,param_1,&param_2->TangentOut);
  }
  UpdatePointTangents(this,param_1,param_2->TangentMode);
  if (!bVar5) {
    return;
  }
  uVar9 = 0;
  if (0 < param_1) {
    uVar11 = param_1 - 1;
    uVar10 = ~uVar11 >> 0x1f;
    uVar7 = uVar9;
    if ((int)uVar11 < (this->TangentModes).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = (longlong)param_1 + -1;
    if ((this->TangentModes).AllocatorInstance.Data[lVar1] != (FScriptContainerElement)0x0) {
      uVar7 = uVar9;
      if ((int)uVar11 < (this->TangentModes).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->TangentModes).AllocatorInstance.Data[lVar1] != (FScriptContainerElement)0x1)
      goto LAB_147a65a0c;
    }
    uVar7 = uVar9;
    if ((int)uVar11 < (this->TangentModes).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,uVar11,(ETangentMode)(this->TangentModes).AllocatorInstance.Data[lVar1]
                       );
  }
LAB_147a65a0c:
  if (param_1 < iVar6 + -1) {
    uVar10 = param_1 + 1;
    uVar11 = ~uVar10 >> 0x1f;
    uVar7 = uVar9;
    if ((int)uVar10 < (this->TangentModes).ArrayNum) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->TangentModes).AllocatorInstance.Data[(int)uVar10] != (FScriptContainerElement)0x0) {
      uVar7 = uVar9;
      if ((int)uVar10 < (this->TangentModes).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->TangentModes).AllocatorInstance.Data[(int)uVar10] != (FScriptContainerElement)0x1)
      {
        return;
      }
    }
    if ((int)uVar10 < (this->TangentModes).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,uVar10,
                        (ETangentMode)(this->TangentModes).AllocatorInstance.Data[(int)uVar10]);
  }
  return;
}

// PrependPoint @ 147a67650

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::PrependPoint
          (TTangentBezierSpline<float> *this,TTangentBezierControlPoint<float> *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *this_00;
  code *pcVar3;
  FScriptContainerElement *_Src;
  char cVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68 [2];
  undefined1 local_60 [8];
  undefined1 *local_58;
  longlong *local_50;
  
  cVar4 = (**(code **)(this->_padding_ + 0x40))();
  (**(code **)(this->_padding_ + 0x38))(this,0);
  bVar5 = InitializeFirstSegment(this,param_1,local_68);
  if (bVar5) goto LAB_147a67a18;
  local_78 = param_1->Position;
  fVar10 = 0.0;
  if ((param_1->TangentMode == User) || (param_1->TangentMode == Broken)) {
    fVar9 = param_1->TangentOut;
  }
  else {
    iVar7 = (int)this->_padding_;
    if (iVar7 == 0) {
LAB_147a67709:
      fVar9 = 0.0 - param_1->Position;
    }
    else {
      if ((iVar7 == 1) || (iVar7 == 2)) {
        local_res8[0] = 0;
        `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>::
        operator()(local_res8);
      }
      else if (iVar7 != 3) {
        cVar6 = (**(code **)(this->_padding_ + 0x40))(this);
        pcVar3 = *(code **)(this->_padding_ + 0x50);
        if (cVar6 == '\0') {
          iVar7 = (*pcVar3)(this);
          iVar7 = iVar7 + 1;
        }
        else {
          iVar7 = (*pcVar3)();
        }
        if (iVar7 < 1) goto LAB_147a67709;
      }
      pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,0);
      fVar9 = *pfVar8 - param_1->Position;
    }
  }
  iVar7 = (int)this->_padding_;
  local_6c = fVar9 * __real_3eaaaaab + local_78;
  if (iVar7 == 0) {
LAB_147a67792:
    fVar9 = 0.0;
  }
  else {
    if ((iVar7 == 1) || (iVar7 == 2)) {
      local_res18[0] = 0;
      `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>::
      operator()(local_res18);
    }
    else if (iVar7 != 3) {
      cVar6 = (**(code **)(this->_padding_ + 0x40))(this);
      pcVar3 = *(code **)(this->_padding_ + 0x50);
      if (cVar6 == '\0') {
        iVar7 = (*pcVar3)(this);
        iVar7 = iVar7 + 1;
      }
      else {
        iVar7 = (*pcVar3)();
      }
      if (iVar7 < 1) goto LAB_147a67792;
    }
    pfVar8 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,0);
    fVar9 = *pfVar8;
  }
  this_00 = &this->_padding_;
  iVar7 = GetNumPoints(this);
  if (1 < iVar7) {
    cVar6 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar6 == '\0') {
      fVar10 = GetTangentOut(this,0);
    }
    else {
      fVar10 = GetTangentIn(this,iVar7);
    }
  }
  local_70 = fVar9 - fVar10 * __real_3eaaaaab;
  TPolyBezierSpline<float>::GetLoopKnotDelta((TPolyBezierSpline<float> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00);
  local_58 = local_60;
  local_50 = this_00;
  if (((int)this->_padding_ < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_74 = *(float *)this->_padding_;
  TPolyBezierSpline<float>::AddBezierSegmentInternal
            ((TPolyBezierSpline<float> *)this_00,0,&local_78,&local_6c,&local_70,&local_74,
             Centripetal,false);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::PrependBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::PrependBezierSegment_::__l2::<lambda_1>_>
            (&local_58);
  pTVar2 = &this->TangentModes;
  iVar7 = (this->TangentModes).ArrayNum;
  piVar1 = &(this->TangentModes).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  _Src = (pTVar2->AllocatorInstance).Data;
  (this->TangentModes).ArrayNum = iVar7 + 1;
  memmove(_Src + 1,_Src,(longlong)iVar7);
  *(pTVar2->AllocatorInstance).Data = (FScriptContainerElement)0x0;
  SetPointTangentMode(this,0,param_1->TangentMode);
  iVar7 = GetNumPoints(this);
  if (0 < iVar7) {
    if (((this->TangentModes).ArrayNum < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar2->AllocatorInstance).Data[1] != (FScriptContainerElement)0x0) {
      if (((this->TangentModes).ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pTVar2->AllocatorInstance).Data[1] != (FScriptContainerElement)0x1) goto LAB_147a67a18;
    }
    if (((this->TangentModes).ArrayNum < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,1,(ETangentMode)(pTVar2->AllocatorInstance).Data[1]);
  }
LAB_147a67a18:
  if (cVar4 != '\0') {
    (**(code **)(this->_padding_ + 0x38))(this,1);
  }
  return;
}

// PrependPoint @ 147a67a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::PrependPoint
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,
          TTangentBezierControlPoint<UE::Math::TQuat<double>_> *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  TQuat<double> *pTVar13;
  longlong *this_00;
  undefined1 auVar14 [16];
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
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  int local_1a8 [2];
  undefined1 local_1a0 [8];
  undefined1 *local_198;
  longlong *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  TQuat<double> local_148;
  TQuat<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TQuat<double> local_e8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  
  cVar9 = (**(code **)(this->_padding_ + 0x40))();
  (**(code **)(this->_padding_ + 0x38))(this,0);
  bVar10 = InitializeFirstSegment(this,param_1,local_1a8);
  if (bVar10) goto LAB_147a67e89;
  local_128.X = (param_1->Position).X;
  local_128.Y = (param_1->Position).Y;
  local_128.Z._0_4_ = *(undefined4 *)&(param_1->Position).Z;
  local_128.Z._4_4_ = *(undefined4 *)((longlong)&(param_1->Position).Z + 4);
  local_128.W._0_4_ = *(undefined4 *)&(param_1->Position).W;
  local_128.W._4_4_ = *(undefined4 *)((longlong)&(param_1->Position).W + 4);
  if ((param_1->TangentMode == User) || (param_1->TangentMode == Broken)) {
    dVar5 = (param_1->TangentOut).X;
    dVar6 = (param_1->TangentOut).Y;
    local_f8._0_8_ = (param_1->TangentOut).Z;
    local_f8._8_8_ = (param_1->TangentOut).W;
  }
  else {
    iVar12 = (int)this->_padding_;
    if (iVar12 == 0) {
LAB_147a67b32:
      local_188 = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      local_178 = 0.0;
      dStack_170 = 0.0;
    }
    else {
      if ((iVar12 == 1) || (iVar12 == 2)) {
        local_res8[0] = 0;
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints'::__l4::
        <lambda_1>::operator()(local_res8);
      }
      else if (iVar12 != 3) {
        cVar11 = (**(code **)(this->_padding_ + 0x40))(this);
        pcVar3 = *(code **)(this->_padding_ + 0x50);
        if (cVar11 == '\0') {
          iVar12 = (*pcVar3)(this);
          iVar12 = iVar12 + 1;
        }
        else {
          iVar12 = (*pcVar3)();
        }
        if (iVar12 < 1) goto LAB_147a67b32;
      }
      pTVar13 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,0);
      local_188 = *(undefined4 *)&pTVar13->X;
      uStack_184 = *(undefined4 *)((longlong)&pTVar13->X + 4);
      uStack_180 = *(undefined4 *)&pTVar13->Y;
      uStack_17c = *(undefined4 *)((longlong)&pTVar13->Y + 4);
      local_178 = pTVar13->Z;
      dStack_170 = pTVar13->W;
    }
    local_f8._0_8_ = local_178 - (param_1->Position).Z;
    local_f8._8_8_ = dStack_170 - (param_1->Position).W;
    dVar5 = (double)CONCAT44(uStack_184,local_188) - (param_1->Position).X;
    dVar6 = (double)CONCAT44(uStack_17c,uStack_180) - (param_1->Position).Y;
    local_88._8_4_ = SUB84(dVar6,0);
    local_88._0_8_ = dVar5;
    local_88._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_78 = local_f8;
  }
  this_00 = &this->_padding_;
  iVar12 = (int)this->_padding_;
  local_108._8_4_ = SUB84(dVar6,0);
  local_108._0_8_ = dVar5;
  local_108._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  fVar4 = __xmm_40400000404000004040000040400000._8_4_;
  uVar23 = SUB84((double)__xmm_40400000404000004040000040400000._12_4_,0);
  uVar24 = (undefined4)((ulonglong)(double)__xmm_40400000404000004040000040400000._12_4_ >> 0x20);
  dVar6 = dVar6 * _UNK_150aa23f8 + local_128.Y;
  auVar14._8_4_ = uVar23;
  auVar14._0_8_ = (double)fVar4;
  auVar14._12_4_ = uVar24;
  auVar14 = divpd(local_f8,auVar14);
  local_a8._8_4_ = SUB84(dVar6,0);
  local_a8._0_8_ = dVar5 * ___xmm_3fd55555555555553fd5555555555555 + local_128.X;
  local_a8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_98 = auVar14._0_8_ + (double)CONCAT44(local_128.Z._4_4_,local_128.Z._0_4_);
  dStack_90 = auVar14._8_8_ + (double)CONCAT44(local_128.W._4_4_,local_128.W._0_4_);
  if (iVar12 == 0) {
LAB_147a67c11:
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
  }
  else {
    if ((iVar12 == 1) || (iVar12 == 2)) {
      local_res18[0] = 0;
      `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints'::__l4::
      <lambda_1>::operator()(local_res18);
    }
    else if (iVar12 != 3) {
      cVar11 = (**(code **)(this->_padding_ + 0x40))(this);
      pcVar3 = *(code **)(this->_padding_ + 0x50);
      if (cVar11 == '\0') {
        iVar12 = (*pcVar3)(this);
        iVar12 = iVar12 + 1;
      }
      else {
        iVar12 = (*pcVar3)();
      }
      if (iVar12 < 1) goto LAB_147a67c11;
    }
    pTVar13 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                        ((TBSpline<UE::Math::TQuat<double>,3> *)this_00,0);
    uVar15 = *(undefined4 *)&pTVar13->X;
    uVar16 = *(undefined4 *)((longlong)&pTVar13->X + 4);
    uVar17 = *(undefined4 *)&pTVar13->Y;
    uVar18 = *(undefined4 *)((longlong)&pTVar13->Y + 4);
    uVar19 = *(undefined4 *)&pTVar13->Z;
    uVar20 = *(undefined4 *)((longlong)&pTVar13->Z + 4);
    uVar21 = *(undefined4 *)&pTVar13->W;
    uVar22 = *(undefined4 *)((longlong)&pTVar13->W + 4);
  }
  local_168 = uVar15;
  uStack_164 = uVar16;
  uStack_160 = uVar17;
  uStack_15c = uVar18;
  local_158 = uVar19;
  uStack_154 = uVar20;
  uStack_150 = uVar21;
  uStack_14c = uVar22;
  iVar12 = GetNumPoints(this);
  if (iVar12 < 2) {
    local_148.X = 0.0;
    local_148.Y = 0.0;
    local_148.Z = 0.0;
    local_148.W = 0.0;
  }
  else {
    cVar11 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar11 == '\0') {
      GetTangentOut(this,&local_148,0);
    }
    else {
      GetTangentIn(this,&local_148,iVar12);
    }
  }
  dVar5 = (double)CONCAT44(uVar18,uVar17) - local_148.Y * _UNK_150aa23f8;
  auVar8._8_8_ = local_148.W;
  auVar8._0_8_ = local_148.Z;
  auVar7._8_4_ = uVar23;
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = uVar24;
  auVar14 = divpd(auVar8,auVar7);
  local_c8._8_4_ = SUB84(dVar5,0);
  local_c8._0_8_ =
       (double)CONCAT44(uVar16,uVar15) - local_148.X * ___xmm_3fd55555555555553fd5555555555555;
  local_c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar5 = (double)CONCAT44(uVar22,uVar21) - auVar14._8_8_;
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = (double)CONCAT44(uVar20,uVar19) - auVar14._0_8_;
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  TPolyBezierSpline<UE::Math::TQuat<double>_>::GetLoopKnotDelta
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00);
  local_198 = local_1a0;
  local_190 = this_00;
  pTVar13 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                      ((TBSpline<UE::Math::TQuat<double>,3> *)this_00,0);
  local_e8.X = pTVar13->X;
  local_e8.Y = pTVar13->Y;
  local_e8.Z = pTVar13->Z;
  local_e8.W = pTVar13->W;
  TPolyBezierSpline<UE::Math::TQuat<double>_>::AddBezierSegmentInternal
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)this_00,0,&local_128,
             (TQuat<double> *)local_a8,(TQuat<double> *)local_c8,&local_e8,Centripetal,false);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::PrependBezierSegment_::__l2::<lambda_1>_>
            (&local_198);
  pTVar2 = &this->TangentModes;
  iVar12 = (this->TangentModes).ArrayNum;
  piVar1 = &(this->TangentModes).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  _Src = (pTVar2->AllocatorInstance).Data;
  (this->TangentModes).ArrayNum = iVar12 + 1;
  memmove(_Src + 1,_Src,(longlong)iVar12);
  *(pTVar2->AllocatorInstance).Data = (FScriptContainerElement)0x0;
  SetPointTangentMode(this,0,param_1->TangentMode);
  iVar12 = GetNumPoints(this);
  if (0 < iVar12) {
    if (((this->TangentModes).ArrayNum < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar2->AllocatorInstance).Data[1] != (FScriptContainerElement)0x0) {
      if (((this->TangentModes).ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pTVar2->AllocatorInstance).Data[1] != (FScriptContainerElement)0x1) goto LAB_147a67e89;
    }
    if (((this->TangentModes).ArrayNum < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,1,(ETangentMode)(pTVar2->AllocatorInstance).Data[1]);
  }
LAB_147a67e89:
  if (cVar9 != '\0') {
    (**(code **)(this->_padding_ + 0x38))(this,1);
  }
  return;
}

// PrependPoint @ 147a67ec0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::PrependPoint
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  double *pdVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  TVector<double> *pTVar11;
  longlong *this_00;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  TVector<double>_u_0 local_148;
  undefined1 local_130 [16];
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  int local_100 [2];
  undefined1 local_f8 [8];
  TVector<double>_u_0 local_f0;
  undefined1 *local_d8;
  longlong *local_d0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98 [4];
  
  cVar7 = (**(code **)(this->_padding_ + 0x40))();
  (**(code **)(this->_padding_ + 0x38))(this,0);
  bVar8 = InitializeFirstSegment(this,param_1,local_100);
  if (bVar8) goto LAB_147a68389;
  local_f0._0_4_ = *(undefined4 *)&(param_1->Position).field0_0x0;
  local_f0._4_4_ = *(undefined4 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_f0._8_4_ = *(undefined4 *)((longlong)&(param_1->Position).field0_0x0 + 8);
  local_f0._12_4_ = *(undefined4 *)((longlong)&(param_1->Position).field0_0x0 + 0xc);
  local_f0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  uVar18 = 0;
  uVar19 = 0;
  if ((param_1->TangentMode == User) || (param_1->TangentMode == Broken)) {
    dVar12 = (param_1->TangentOut).field0_0x0._s_0.X;
    dVar4 = (param_1->TangentOut).field0_0x0._s_0.Y;
    dVar15 = (param_1->TangentOut).field0_0x0._s_0.Z;
    local_98[0]._16_8_ = dVar15;
  }
  else {
    iVar10 = (int)this->_padding_;
    if (iVar10 == 0) {
LAB_147a67fad:
      uVar13 = 0;
      uVar14 = 0;
      local_120 = 0.0;
      dVar12 = 0.0;
      local_130 = ZEXT816(0);
    }
    else {
      if ((iVar10 == 1) || (iVar10 == 2)) {
        local_res8[0] = 0;
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res8);
      }
      else if (iVar10 != 3) {
        cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
        pcVar3 = *(code **)(this->_padding_ + 0x50);
        if (cVar9 == '\0') {
          iVar10 = (*pcVar3)(this);
          iVar10 = iVar10 + 1;
        }
        else {
          iVar10 = (*pcVar3)();
        }
        if (iVar10 < 1) goto LAB_147a67fad;
      }
      pTVar11 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,0);
      local_120 = (pTVar11->field0_0x0)._s_0.Z;
      local_130 = *(undefined1 (*) [16])&pTVar11->field0_0x0;
      uVar13 = local_130._8_4_;
      uVar14 = local_130._12_4_;
      dVar12 = local_130._0_8_;
    }
    dVar15 = local_120 - (param_1->Position).field0_0x0._s_0.Z;
    dVar12 = dVar12 - (param_1->Position).field0_0x0._s_0.X;
    dVar4 = (double)CONCAT44(uVar14,uVar13) - (param_1->Position).field0_0x0._s_0.Y;
  }
  dVar6 = __real_3fd5555555555555;
  this_00 = &this->_padding_;
  iVar10 = (int)this->_padding_;
  local_b0._s_0.X =
       dVar12 * __real_3fd5555555555555 + (double)CONCAT44(local_f0._4_4_,local_f0._0_4_);
  local_b0._s_0.Y =
       dVar4 * __real_3fd5555555555555 + (double)CONCAT44(local_f0._12_4_,local_f0._8_4_);
  local_b0._s_0.Z = dVar15 * __real_3fd5555555555555 + local_f0._s_0.Z;
  if (iVar10 == 0) {
LAB_147a680c6:
    uVar16 = 0;
    uVar17 = 0;
    local_118 = 0.0;
    dStack_110 = 0.0;
    local_108 = 0.0;
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    if ((iVar10 == 1) || (iVar10 == 2)) {
      local_res18[0] = 0;
      `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4::
      <lambda_1>::operator()(local_res18);
    }
    else if (iVar10 != 3) {
      cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
      pcVar3 = *(code **)(this->_padding_ + 0x50);
      if (cVar9 == '\0') {
        iVar10 = (*pcVar3)(this);
        iVar10 = iVar10 + 1;
      }
      else {
        iVar10 = (*pcVar3)();
      }
      if (iVar10 < 1) goto LAB_147a680c6;
    }
    pTVar11 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                        ((TBSpline<UE::Math::TVector<double>,3> *)this_00,0);
    local_108 = (pTVar11->field0_0x0)._s_0.Z;
    uVar13 = *(undefined4 *)&pTVar11->field0_0x0;
    uVar14 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 4);
    local_118 = (pTVar11->field0_0x0)._s_0.X;
    pdVar5 = &(pTVar11->field0_0x0)._s_0.Y;
    uVar16 = *(undefined4 *)pdVar5;
    uVar17 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 0xc);
    dStack_110 = *pdVar5;
  }
  iVar10 = GetNumPoints(this);
  if (iVar10 < 2) {
    local_148._s_0.X = 0.0;
    local_148._s_0.Y = 0.0;
    local_148._s_0.Z = 0.0;
  }
  else {
    cVar9 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar9 == '\0') {
      GetTangentOut(this,(TVector<double> *)&local_148._s_0,0);
    }
    else {
      GetTangentIn(this,(TVector<double> *)&local_148._s_0,iVar10);
    }
    uVar18 = SUB84(local_148._s_0.X,0);
    uVar19 = (undefined4)((ulonglong)local_148._0_8_ >> 0x20);
  }
  local_c8._s_0.Y = (double)CONCAT44(uVar17,uVar16) - local_148._s_0.Y * dVar6;
  local_c8._s_0.X = (double)CONCAT44(uVar14,uVar13) - (double)CONCAT44(uVar19,uVar18) * dVar6;
  local_c8._s_0.Z = local_108 - local_148._s_0.Z * dVar6;
  TPolyBezierSpline<UE::Math::TVector<double>_>::GetLoopKnotDelta
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00);
  local_d8 = local_f8;
  local_d0 = this_00;
  pTVar11 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                      ((TBSpline<UE::Math::TVector<double>,3> *)this_00,0);
  local_98[0]._0_8_ = (pTVar11->field0_0x0)._s_0.X;
  local_98[0]._8_8_ = (pTVar11->field0_0x0)._s_0.Y;
  local_98[0]._16_8_ = (pTVar11->field0_0x0)._s_0.Z;
  TPolyBezierSpline<UE::Math::TVector<double>_>::AddBezierSegmentInternal
            ((TPolyBezierSpline<UE::Math::TVector<double>_> *)this_00,0,
             (TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_b0._s_0,
             (TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_98[0]._s_0,Centripetal,
             false);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::PrependBezierSegment_::__l2::<lambda_1>_>
            (&local_d8);
  pTVar2 = &this->TangentModes;
  iVar10 = (this->TangentModes).ArrayNum;
  piVar1 = &(this->TangentModes).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  _Src = (pTVar2->AllocatorInstance).Data;
  (this->TangentModes).ArrayNum = iVar10 + 1;
  memmove(_Src + 1,_Src,(longlong)iVar10);
  *(pTVar2->AllocatorInstance).Data = (FScriptContainerElement)0x0;
  SetPointTangentMode(this,0,param_1->TangentMode);
  iVar10 = GetNumPoints(this);
  if (0 < iVar10) {
    if (((this->TangentModes).ArrayNum < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar2->AllocatorInstance).Data[1] != (FScriptContainerElement)0x0) {
      if (((this->TangentModes).ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pTVar2->AllocatorInstance).Data[1] != (FScriptContainerElement)0x1) goto LAB_147a68389;
    }
    if (((this->TangentModes).ArrayNum < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UpdatePointTangents(this,1,(ETangentMode)(pTVar2->AllocatorInstance).Data[1]);
  }
LAB_147a68389:
  if (cVar7 != '\0') {
    (**(code **)(this->_padding_ + 0x38))(this,1);
  }
  return;
}

// RemovePoint @ 147a7b400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::RemovePoint
          (TTangentBezierSpline<float> *this,int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float local_res10 [2];
  
  iVar2 = GetNumPoints(this);
  if ((-1 < param_1) && (param_1 < iVar2)) {
    if (iVar2 == 1) {
      (**(code **)(this->_padding_ + 0x98))(&this->_padding_);
      (this->TangentModes).ArrayNum = 0;
      if ((this->TangentModes).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->TangentModes).AllocatorInstance,0,&(this->TangentModes).ArrayMax);
        return;
      }
    }
    else {
      if (iVar2 == 2) {
        cVar1 = (**(code **)(this->_padding_ + 0x40))(this);
        if (cVar1 == '\0') {
          pfVar3 = TBSpline<float,3>::GetValue
                             ((TBSpline<float,3> *)&this->_padding_,2 - (uint)(param_1 != 0));
          local_res10[0] = *pfVar3;
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1 + 2);
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1 + 1);
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1);
          TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->TangentModes,param_1,Default);
          TBSpline<float,3>::AddValue((TBSpline<float,3> *)&this->_padding_,local_res10);
          TBSpline<float,3>::AddValue((TBSpline<float,3> *)&this->_padding_,local_res10);
          return;
        }
      }
      if (param_1 < (this->TangentModes).ArrayNum) {
        TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->TangentModes,param_1,Default);
      }
      TPolyBezierSpline<float>::RemovePoint((TPolyBezierSpline<float> *)&this->_padding_,param_1);
      iVar2 = GetNumPoints(this);
      if (iVar2 < (this->TangentModes).ArrayNum) {
        iVar2 = GetNumPoints(this);
        TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->TangentModes,iVar2,Default);
      }
      UpdateTangents(this);
    }
  }
  return;
}

// RemovePoint @ 147a7b590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::RemovePoint
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1)

{
  char cVar1;
  int iVar2;
  TQuat<double> *pTVar3;
  TQuat<double> local_28;
  
  iVar2 = GetNumPoints(this);
  if ((-1 < param_1) && (param_1 < iVar2)) {
    if (iVar2 == 1) {
      (**(code **)(this->_padding_ + 0x98))(&this->_padding_);
      (this->TangentModes).ArrayNum = 0;
      if ((this->TangentModes).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->TangentModes).AllocatorInstance,0,&(this->TangentModes).ArrayMax);
        return;
      }
    }
    else {
      if (iVar2 == 2) {
        cVar1 = (**(code **)(this->_padding_ + 0x40))(this);
        if (cVar1 == '\0') {
          pTVar3 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                             ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,
                              2 - (uint)(param_1 != 0));
          local_28.X._0_4_ = *(undefined4 *)&pTVar3->X;
          local_28.X._4_4_ = *(undefined4 *)((longlong)&pTVar3->X + 4);
          local_28.Y._0_4_ = *(undefined4 *)&pTVar3->Y;
          local_28.Y._4_4_ = *(undefined4 *)((longlong)&pTVar3->Y + 4);
          local_28.Z._0_4_ = *(undefined4 *)&pTVar3->Z;
          local_28.Z._4_4_ = *(undefined4 *)((longlong)&pTVar3->Z + 4);
          local_28.W._0_4_ = *(undefined4 *)&pTVar3->W;
          local_28.W._4_4_ = *(undefined4 *)((longlong)&pTVar3->W + 4);
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1 + 2);
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1 + 1);
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1);
          TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->TangentModes,param_1,Default);
          TBSpline<UE::Math::TQuat<double>,3>::AddValue
                    ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,&local_28);
          TBSpline<UE::Math::TQuat<double>,3>::AddValue
                    ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,&local_28);
          return;
        }
      }
      if (param_1 < (this->TangentModes).ArrayNum) {
        TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->TangentModes,param_1,Default);
      }
      TPolyBezierSpline<UE::Math::TQuat<double>_>::RemovePoint
                ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)&this->_padding_,param_1);
      iVar2 = GetNumPoints(this);
      if (iVar2 < (this->TangentModes).ArrayNum) {
        iVar2 = GetNumPoints(this);
        TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->TangentModes,iVar2,Default);
      }
      UpdateTangents(this);
    }
  }
  return;
}

// RemovePoint @ 147a7b730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::RemovePoint
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1)

{
  char cVar1;
  int iVar2;
  TVector<double> *pTVar3;
  TVector<double>_u_0 local_28;
  
  iVar2 = GetNumPoints(this);
  if ((-1 < param_1) && (param_1 < iVar2)) {
    if (iVar2 == 1) {
      (**(code **)(this->_padding_ + 0x98))(&this->_padding_);
      (this->TangentModes).ArrayNum = 0;
      if ((this->TangentModes).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->TangentModes).AllocatorInstance,0,&(this->TangentModes).ArrayMax);
        return;
      }
    }
    else {
      if (iVar2 == 2) {
        cVar1 = (**(code **)(this->_padding_ + 0x40))(this);
        if (cVar1 == '\0') {
          pTVar3 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                             ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
                              2 - (uint)(param_1 != 0));
          local_28._0_4_ = *(undefined4 *)&pTVar3->field0_0x0;
          local_28._4_4_ = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 4);
          local_28._8_4_ = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 8);
          local_28._12_4_ = *(undefined4 *)((longlong)&pTVar3->field0_0x0 + 0xc);
          local_28._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1 + 2);
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1 + 1);
          (**(code **)(this->_padding_ + 0x98))(&this->_padding_,param_1);
          TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->TangentModes,param_1,Default);
          TBSpline<UE::Math::TVector<double>,3>::AddValue
                    ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
                     (TVector<double> *)&local_28._s_0);
          TBSpline<UE::Math::TVector<double>,3>::AddValue
                    ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,
                     (TVector<double> *)&local_28._s_0);
          return;
        }
      }
      if (param_1 < (this->TangentModes).ArrayNum) {
        TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->TangentModes,param_1,Default);
      }
      TPolyBezierSpline<UE::Math::TVector<double>_>::RemovePoint
                ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1);
      iVar2 = GetNumPoints(this);
      if (iVar2 < (this->TangentModes).ArrayNum) {
        iVar2 = GetNumPoints(this);
        TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->TangentModes,iVar2,Default);
      }
      UpdateTangents(this);
    }
  }
  return;
}

// Serialize @ 147a87750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::Serialize
          (TTangentBezierSpline<float> *this,FArchive *param_1)

{
  float *pfVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  float *pfVar3;
  longlong *plVar4;
  code *pcVar5;
  FScriptContainerElement FVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement local_res18 [8];
  uint local_res20 [2];
  float local_38;
  float local_34 [3];
  
  bVar7 = TSplineInterface<float>::Serialize((TSplineInterface<float> *)this,param_1);
  if ((!bVar7) ||
     (cVar8 = (**(code **)(this->_padding_ + 0x60))(&this->_padding_,param_1), cVar8 == '\0')) {
    return false;
  }
  pfVar1 = &this->Tension;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  this_00 = &this->TangentModes;
  local_res20[0] = (this->TangentModes).ArrayNum;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,local_res20[0],Default);
    iVar2 = (int)this->_padding_;
    if (iVar2 == 1) {
      local_38 = 0.0;
      TBSpline<float,3>::AddValue((TBSpline<float,3> *)&this->_padding_,&local_38);
    }
    else if (iVar2 != 2) goto LAB_147a87881;
    local_34[0] = 0.0;
    TBSpline<float,3>::AddValue((TBSpline<float,3> *)&this->_padding_,local_34);
  }
LAB_147a87881:
  uVar11 = 0;
  if (0 < (int)local_res20[0]) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (this->TangentModes).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      local_res18[0] = (this_00->AllocatorInstance).Data[lVar12];
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      }
      else {
        local_res18[0] = *(FScriptContainerElement *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
      FVar6 = local_res18[0];
      if ((param_1->field_0x28 & 1) != 0) {
        uVar10 = 0;
        if ((int)uVar11 < (this->TangentModes).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        (this_00->AllocatorInstance).Data[lVar12] = FVar6;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while ((int)uVar11 < (int)local_res20[0]);
  }
  ::operator<<(param_1,&this->bStationaryEndpoint);
  return true;
}

// Serialize @ 147a879e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::Serialize
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,FArchive *param_1)

{
  float *pfVar1;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  float *pfVar3;
  longlong *plVar4;
  code *pcVar5;
  FScriptContainerElement FVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement local_res18 [8];
  uint local_res20 [2];
  TQuat<double> local_68;
  TQuat<double> local_48;
  
  bVar7 = TSplineInterface<UE::Math::TQuat<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TQuat<double>_> *)this,param_1);
  if ((!bVar7) ||
     (cVar8 = (**(code **)(this->_padding_ + 0x60))(&this->_padding_,param_1), cVar8 == '\0')) {
    return false;
  }
  pfVar1 = &this->Tension;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  this_00 = &this->TangentModes;
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = (this->TangentModes).ArrayNum;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,local_res20[0],Default);
    iVar2 = (int)this->_padding_;
    if (iVar2 == 1) {
      local_68.X = 0.0;
      local_68.Y = 0.0;
      local_68.Z = 0.0;
      local_68.W = 0.0;
      TBSpline<UE::Math::TQuat<double>,3>::AddValue
                ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,&local_68);
    }
    else if (iVar2 != 2) goto LAB_147a87b20;
    local_48.X = 0.0;
    local_48.Y = 0.0;
    local_48.Z = 0.0;
    local_48.W = 0.0;
    TBSpline<UE::Math::TQuat<double>,3>::AddValue
              ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,&local_48);
  }
LAB_147a87b20:
  uVar11 = 0;
  if (0 < (int)local_res20[0]) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (this->TangentModes).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      local_res18[0] = (this_00->AllocatorInstance).Data[lVar12];
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      }
      else {
        local_res18[0] = *(FScriptContainerElement *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
      FVar6 = local_res18[0];
      if ((param_1->field_0x28 & 1) != 0) {
        uVar10 = 0;
        if ((int)uVar11 < (this->TangentModes).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        (this_00->AllocatorInstance).Data[lVar12] = FVar6;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while ((int)uVar11 < (int)local_res20[0]);
  }
  ::operator<<(param_1,&this->bStationaryEndpoint);
  return true;
}

// SetClosedLoop @ 147a8b6e0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::SetClosedLoop
          (TTangentBezierSpline<float> *this,bool param_1)

{
  longlong *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  undefined1 local_88 [8];
  undefined1 *local_80;
  longlong *local_78;
  
  this_00 = &this->_padding_;
  cVar2 = (**(code **)(this->_padding_ + 0x40))(this_00);
  if (param_1 == (bool)cVar2) {
    return;
  }
  if (!param_1) {
    iVar4 = (**(code **)(this->_padding_ + 0x50))();
    if (0 < iVar4) {
      TPolyBezierSpline<float>::RemoveSegment((TPolyBezierSpline<float> *)this_00,iVar4 + -1);
    }
    goto LAB_147a8b95a;
  }
  iVar4 = GetNumPoints(this);
  if (iVar4 < 2) goto LAB_147a8b95a;
  iVar5 = (int)this->_padding_;
  fVar9 = 0.0;
  if (iVar5 == 0) {
LAB_147a8b79b:
    fVar10 = 0.0;
  }
  else {
    if ((iVar5 == 1) || (iVar5 == 2)) {
      `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>::
      operator()(local_res10);
    }
    else if (iVar5 != 3) {
      cVar2 = (**(code **)(this->_padding_ + 0x40))(this);
      pcVar1 = *(code **)(this->_padding_ + 0x50);
      if (cVar2 == '\0') {
        iVar5 = (*pcVar1)(this);
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = (*pcVar1)();
      }
      if (iVar5 < 1) goto LAB_147a8b79b;
    }
    pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this_00,0);
    fVar10 = *pfVar6;
  }
  fVar7 = GetValue(this,iVar4 + -1);
  bVar3 = IsAutoTangent(this,iVar4 + -1);
  if ((bVar3) && (bVar3 = IsAutoTangent(this,0), bVar3)) {
    fVar8 = (__real_3f800000 - this->Tension) * (fVar10 - fVar7);
    fVar9 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
  }
  else {
    fVar8 = GetTangentOut(this,iVar4 + -1);
    iVar4 = GetNumPoints(this);
    if (1 < iVar4) {
      cVar2 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar2 == '\0') {
        fVar9 = GetTangentOut(this,0);
      }
      else {
        fVar9 = GetTangentIn(this,iVar4);
      }
    }
  }
  local_res18[0] = fVar8 * __real_3eaaaaab + fVar7;
  local_res8[0] = fVar10 - fVar9 * __real_3eaaaaab;
  local_res10[0] = fVar10;
  TPolyBezierSpline<float>::GetLoopKnotDelta((TPolyBezierSpline<float> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00,0);
  local_80 = local_88;
  local_78 = this_00;
  pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)this_00,(int)this->_padding_ + -1);
  local_res20[0] = *pfVar6;
  iVar4 = (int)this->_padding_;
  TPolyBezierSpline<float>::AddBezierSegmentInternal
            ((TPolyBezierSpline<float> *)this_00,(int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2,
             local_res20,local_res18,local_res8,local_res10,Centripetal,true);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<float>::AppendBezierSegment_::__l2::<lambda_1>_>
            (&local_80);
LAB_147a8b95a:
  *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  UpdateTangents(this);
  return;
}

// SetClosedLoop @ 147a8b980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetClosedLoop
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,bool param_1)

{
  longlong *this_00;
  code *pcVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TQuat<double> *pTVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_108 [32];
  TQuat<double> local_e8;
  TQuat<double> local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  
  this_00 = &this->_padding_;
  cVar7 = (**(code **)(this->_padding_ + 0x40))(this_00);
  if (param_1 == (bool)cVar7) {
    return;
  }
  if (!param_1) {
    iVar9 = (**(code **)(this->_padding_ + 0x50))();
    if (0 < iVar9) {
      TPolyBezierSpline<UE::Math::TQuat<double>_>::RemoveSegment
                ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)this_00,iVar9 + -1);
    }
    goto LAB_147a8bc68;
  }
  iVar9 = GetNumPoints(this);
  if (iVar9 < 2) goto LAB_147a8bc68;
  iVar10 = (int)this->_padding_;
  if (iVar10 == 0) {
LAB_147a8ba4a:
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
  }
  else {
    if ((iVar10 == 1) || (iVar10 == 2)) {
      `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints'::__l4::
      <lambda_1>::operator()(local_res10);
    }
    else if (iVar10 != 3) {
      cVar7 = (**(code **)(this->_padding_ + 0x40))(this);
      pcVar1 = *(code **)(this->_padding_ + 0x50);
      if (cVar7 == '\0') {
        iVar10 = (*pcVar1)(this);
        iVar10 = iVar10 + 1;
      }
      else {
        iVar10 = (*pcVar1)();
      }
      if (iVar10 < 1) goto LAB_147a8ba4a;
    }
    pTVar11 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                        ((TBSpline<UE::Math::TQuat<double>,3> *)this_00,0);
    uVar13 = *(undefined4 *)&pTVar11->X;
    uVar14 = *(undefined4 *)((longlong)&pTVar11->X + 4);
    uVar15 = *(undefined4 *)&pTVar11->Y;
    uVar16 = *(undefined4 *)((longlong)&pTVar11->Y + 4);
    uVar18 = *(undefined4 *)&pTVar11->Z;
    uVar19 = *(undefined4 *)((longlong)&pTVar11->Z + 4);
    uVar20 = *(undefined4 *)&pTVar11->W;
    uVar21 = *(undefined4 *)((longlong)&pTVar11->W + 4);
  }
  GetValue(this,&local_e8,iVar9 + -1);
  bVar8 = IsAutoTangent(this,iVar9 + -1);
  if ((bVar8) && (bVar8 = IsAutoTangent(this,0), bVar8)) {
    auVar17._0_8_ = (double)CONCAT44(uVar19,uVar18);
    auVar17._8_4_ = uVar20;
    auVar17._12_4_ = uVar21;
    dVar2 = (double)(__real_3f800000 - this->Tension);
    dVar5 = ((double)CONCAT44(uVar14,uVar13) - local_e8.X) * dVar2;
    dVar6 = ((double)CONCAT44(uVar16,uVar15) - local_e8.Y) * dVar2;
    auVar12._0_8_ = (auVar17._0_8_ - local_e8.Z) * dVar2;
    auVar12._8_8_ = (auVar17._8_8_ - local_e8.W) * dVar2;
    local_108._0_8_ = 0.0 - dVar5;
    local_108._8_8_ = 0.0 - dVar6;
    local_108._16_8_ = 0.0 - auVar12._0_8_;
    local_108._24_8_ = 0.0 - auVar12._8_8_;
  }
  else {
    pTVar11 = GetTangentOut(this,(TQuat<double> *)local_108,iVar9 + -1);
    dVar5 = pTVar11->X;
    dVar6 = pTVar11->Y;
    auVar12._0_8_ = pTVar11->Z;
    auVar12._8_8_ = pTVar11->W;
    iVar9 = GetNumPoints(this);
    if (iVar9 < 2) {
      local_108._0_8_ = (undefined1 *)0x0;
      local_108._8_8_ = (longlong *)0x0;
      local_108._16_16_ = ZEXT816(0);
    }
    else {
      cVar7 = (**(code **)(this->_padding_ + 0x40))(this);
      if (cVar7 == '\0') {
        GetTangentOut(this,(TQuat<double> *)local_108,0);
      }
      else {
        GetTangentIn(this,(TQuat<double> *)local_108,iVar9);
      }
    }
  }
  local_e8.Y = dVar6 * _UNK_150aa23f8 + local_e8.Y;
  auVar3._8_8_ = (double)_UNK_15076be9c;
  auVar3._0_8_ = (double)_UNK_15076be98;
  auVar17 = divpd(auVar12,auVar3);
  auVar4._8_8_ = (double)_UNK_15076be9c;
  auVar4._0_8_ = (double)_UNK_15076be98;
  auVar12 = divpd(local_108._16_16_,auVar4);
  local_78 = auVar17._0_8_ + local_e8.Z;
  dStack_70 = auVar17._8_8_ + local_e8.W;
  dVar6 = (double)CONCAT44(uVar16,uVar15) - (double)local_108._8_8_ * _UNK_150aa23f8;
  dVar2 = (double)CONCAT44(uVar21,uVar20) - auVar12._8_8_;
  local_88._8_4_ = SUB84(local_e8.Y,0);
  local_88._0_8_ = dVar5 * ___xmm_3fd55555555555553fd5555555555555 + local_e8.X;
  local_88._12_4_ = (int)((ulonglong)local_e8.Y >> 0x20);
  local_a8._8_4_ = SUB84(dVar6,0);
  local_a8._0_8_ =
       (double)CONCAT44(uVar14,uVar13) -
       (double)local_108._0_8_ * ___xmm_3fd55555555555553fd5555555555555;
  local_a8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_98._8_4_ = SUB84(dVar2,0);
  local_98._0_8_ = (double)CONCAT44(uVar19,uVar18) - auVar12._0_8_;
  local_98._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_c8.X._0_4_ = uVar13;
  local_c8.X._4_4_ = uVar14;
  local_c8.Y._0_4_ = uVar15;
  local_c8.Y._4_4_ = uVar16;
  local_c8.Z._0_4_ = uVar18;
  local_c8.Z._4_4_ = uVar19;
  local_c8.W._0_4_ = uVar20;
  local_c8.W._4_4_ = uVar21;
  TPolyBezierSpline<UE::Math::TQuat<double>_>::GetLoopKnotDelta
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)this_00);
  (**(code **)(*this_00 + 0x38))(this_00,0);
  local_108._0_8_ = local_res8;
  local_108._8_8_ = this_00;
  pTVar11 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                      ((TBSpline<UE::Math::TQuat<double>,3> *)this_00,(int)this->_padding_ + -1);
  local_e8.X = pTVar11->X;
  local_e8.Y = pTVar11->Y;
  local_e8.Z = pTVar11->Z;
  local_e8.W = pTVar11->W;
  iVar9 = (int)this->_padding_;
  TPolyBezierSpline<UE::Math::TQuat<double>_>::AddBezierSegmentInternal
            ((TPolyBezierSpline<UE::Math::TQuat<double>_> *)this_00,
             (int)((iVar9 >> 0x1f & 3U) + iVar9) >> 2,&local_e8,(TQuat<double> *)local_88,
             (TQuat<double> *)local_a8,&local_c8,Centripetal,true);
  ScopeExitSupport::
  TScopeGuard<`UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::AppendBezierSegment_::__l2::<lambda_1>_>
            (local_108);
LAB_147a8bc68:
  *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  UpdateTangents(this);
  return;
}

// SetControlPoints @ 147a8d5b0

bool __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetControlPoints
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,
          TArray<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *pTVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  double dVar31;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_238;
  undefined1 local_228 [16];
  double local_218;
  longlong local_210;
  undefined1 local_208 [16];
  double local_1f8;
  longlong local_1f0;
  undefined1 local_1e8 [16];
  longlong local_1d8;
  FScriptContainerElement *local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined1 local_1b0 [16];
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_158;
  double local_140;
  int local_138 [2];
  longlong local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  
  iVar20 = param_1->ArrayNum;
  local_res18 = iVar20;
  (**(code **)(this->_padding_ + 8))();
  if (iVar20 < 2) {
    if (iVar20 == 1) {
      if ((param_1->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      bVar10 = InitializeFirstSegment
                         (this,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)
                               (param_1->AllocatorInstance).Data,local_138);
      return bVar10;
    }
  }
  else {
    iVar13 = iVar20 + -1;
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar19 = iVar13 * 4;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if (0 < (int)uVar19) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar19,&local_238.AllocatorInstance,0,&local_238.ArrayMax);
    }
    uVar19 = 0;
    local_130 = (longlong)iVar13;
    if (0 < iVar13) {
      uVar33 = SUB84(__real_3e45798ee2308c3a,0);
      uVar34 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
      uVar35 = SUB84(__real_3e45798ee0000000,0);
      uVar36 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      uVar37 = (undefined4)__real_3fd51eb860000000;
      uVar38 = (undefined4)((ulonglong)__real_3fd51eb860000000 >> 0x20);
      auVar39._8_8_ = 0;
      auVar39._0_8_ = __real_3ff0000000000000;
      local_210 = 0;
      local_1f0 = 0;
      local_1d8 = 1;
      local_res20 = 1;
      fVar30 = __real_3f800000;
      do {
        iVar20 = local_res20;
        uVar12 = 0;
        if ((int)uVar19 < param_1->ArrayNum) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        uVar22 = uVar19 + 1;
        pFVar18 = (param_1->AllocatorInstance).Data;
        uVar15 = ~uVar22 >> 0x1f;
        uVar12 = 0;
        if (iVar20 < param_1->ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        lVar14 = local_1d8;
        local_1d0 = (param_1->AllocatorInstance).Data;
        local_228 = *(undefined1 (*) [16])(pFVar18 + local_1f0);
        uVar28 = local_228._0_4_;
        uVar29 = local_228._4_4_;
        local_218 = *(double *)(pFVar18 + local_1f0 + 0x10);
        local_208 = *(undefined1 (*) [16])(local_1d0 + local_1d8 * 0x50);
        local_1f8 = *(double *)(local_1d0 + local_1d8 * 0x50 + 0x10);
        FVar2 = pFVar18[local_1f0 + 0x48];
        if ((FVar2 == (FScriptContainerElement)0x0) || (FVar2 == (FScriptContainerElement)0x1)) {
          if ((uVar19 == 0) && (2 < local_res18)) {
            if ((param_1->ArrayNum < 2) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            pFVar23 = (param_1->AllocatorInstance).Data;
            lVar16 = local_210;
            if ((param_1->ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               lVar16 = local_210, bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
          }
          else {
            if ((uVar19 == local_res18 - 2U) && (2 < local_res18)) {
              iVar20 = param_1->ArrayNum;
            }
            else {
              iVar20 = param_1->ArrayNum;
              if (local_res18 < 3) {
                uVar12 = 0;
                if ((int)uVar22 < iVar20) {
                  uVar12 = uVar15;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  uVar11 = (*pcVar4)();
                  return (bool)uVar11;
                }
                pFVar23 = (param_1->AllocatorInstance).Data;
                uVar12 = 0;
                if ((int)uVar19 < param_1->ArrayNum) {
                  uVar12 = ~uVar19 >> 0x1f;
                }
                lVar16 = local_210;
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), lVar16 = local_210, bVar10)) {
                  pcVar4 = (code *)swi(3);
                  uVar11 = (*pcVar4)();
                  return (bool)uVar11;
                }
                goto LAB_147a8db4a;
              }
            }
            uVar12 = 0;
            if ((int)uVar22 < iVar20) {
              uVar12 = uVar15;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            pFVar23 = (param_1->AllocatorInstance).Data;
            uVar12 = 0;
            if ((int)(uVar19 - 1) < param_1->ArrayNum) {
              uVar12 = -uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            lVar16 = local_210 + -1;
          }
LAB_147a8db4a:
          pFVar21 = (param_1->AllocatorInstance).Data;
          uVar28 = local_228._0_4_;
          uVar29 = local_228._4_4_;
          dVar24 = (double)(fVar30 - this->Tension);
          dVar5 = (*(double *)(pFVar23 + lVar14 * 0x50 + 0x10) -
                  *(double *)(pFVar21 + lVar16 * 0x50 + 0x10)) * dVar24;
          local_1e8._0_8_ =
               (*(double *)(pFVar23 + lVar14 * 0x50) - *(double *)(pFVar21 + lVar16 * 0x50)) *
               dVar24;
          uVar25 = (*(double *)(pFVar23 + lVar14 * 0x50 + 8) -
                   *(double *)(pFVar21 + lVar16 * 0x50 + 8)) * dVar24;
          local_1e8._8_8_ = 0;
          dVar24 = local_228._8_8_;
          local_158 = dVar5;
          if (pFVar18[local_1f0 + 0x48] == (FScriptContainerElement)0x1) {
            dVar27 = local_228._0_8_ - (double)local_208._0_8_;
            dVar26 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ +
                     (double)uVar25 * (double)uVar25 + dVar5 * dVar5;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = dVar26;
            auVar32 = sqrtpd(unaff_XMM8,auVar32);
            dVar27 = (double)((float)SQRT((dVar24 - (double)local_208._8_8_) *
                                          (dVar24 - (double)local_208._8_8_) + dVar27 * dVar27 +
                                          (local_218 - local_1f8) * (local_218 - local_1f8)) *
                             __real_3ea8f5c3);
            dVar31 = auVar32._0_8_;
            fVar30 = __real_3f800000;
            if ((dVar27 < dVar31) &&
               ((double)CONCAT44(uVar34,uVar33) <= dVar31 &&
                dVar31 != (double)CONCAT44(uVar34,uVar33))) {
              uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar34 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              if (dVar26 == auVar39._0_8_) {
                local_1c8._8_4_ = (int)uVar25;
                local_1c8._0_8_ = local_1e8._0_8_;
                local_1c8._12_4_ = (int)((ulonglong)uVar25 >> 0x20);
                local_1b8 = dVar5;
              }
              else if ((double)CONCAT44(uVar36,uVar35) <= dVar26) {
                local_128 = auVar39._0_8_ / SQRT(dVar26);
                local_1e8._0_8_ = (double)local_1e8._0_8_ * local_128;
                uVar25 = (double)uVar25 * local_128;
                local_1b8 = dVar5 * local_128;
                local_1c8._8_8_ = uVar25;
                local_1c8._0_8_ = local_1e8._0_8_;
              }
              else {
                local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_1c8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_1c8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_1e8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              }
              uVar25 = dVar27 * (double)uVar25;
              dVar5 = dVar27 * local_1b8;
              local_1e8._8_8_ = 0;
              local_1e8._0_8_ = dVar27 * (double)local_1e8._0_8_;
              goto LAB_147a8dd25;
            }
          }
LAB_147a8dd14:
          uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar34 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        else {
          dVar24 = local_228._8_8_;
          if (FVar2 == (FScriptContainerElement)0x4) {
            dVar5 = (local_1f8 - local_218) * (double)CONCAT44(uVar38,uVar37);
            uVar25 = ((double)local_208._8_8_ - dVar24) * (double)CONCAT44(uVar38,uVar37);
            local_1e8._8_4_ = local_208._8_4_;
            local_1e8._0_8_ = (local_208._0_8_ - local_228._0_8_) * (double)CONCAT44(uVar38,uVar37);
            local_1e8._12_4_ = local_208._12_4_;
            goto LAB_147a8dd14;
          }
          uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar34 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          if (FVar2 == (FScriptContainerElement)0x5) {
            local_108 = 0;
            dVar5 = 0.0;
            local_158 = 0.0;
            local_1e8 = ZEXT816(0);
            local_118 = 0;
            uStack_110 = 0;
            uVar25 = 0.0;
            fVar30 = __real_3f800000;
          }
          else {
            uVar25 = *(undefined8 *)(pFVar18 + local_1f0 + 0x30 + 8);
            local_1e8 = *(undefined1 (*) [16])(pFVar18 + local_1f0 + 0x30);
            dVar5 = *(double *)(pFVar18 + local_1f0 + 0x40);
            local_158 = dVar5;
          }
        }
LAB_147a8dd25:
        pFVar18 = local_1d0;
        iVar20 = local_res18;
        FVar2 = local_1d0[lVar14 * 0x50 + 0x48];
        if ((FVar2 == (FScriptContainerElement)0x0) || (FVar2 == (FScriptContainerElement)0x1)) {
          if ((uVar19 == 0xffffffff) && (2 < local_res18)) {
            iVar13 = param_1->ArrayNum;
LAB_147a8ddfd:
            uVar12 = 0;
            if ((int)(uVar19 + 2) < iVar13) {
              uVar12 = ~(uVar19 + 2) >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              uVar28 = local_228._0_4_;
              uVar29 = local_228._4_4_;
              uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar34 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              dVar24 = (double)local_228._8_8_;
            }
            lVar16 = local_210 + 2;
          }
          else {
            if ((uVar19 + 1 == local_res18 + -1) && (2 < local_res18)) {
              iVar13 = param_1->ArrayNum;
            }
            else {
              iVar13 = param_1->ArrayNum;
              if (2 < local_res18) goto LAB_147a8ddfd;
            }
            uVar12 = 0;
            if ((int)(uVar19 + 1) < iVar13) {
              uVar12 = ~(uVar19 + 1) >> 0x1f;
            }
            if (uVar12 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              uVar28 = local_228._0_4_;
              uVar29 = local_228._4_4_;
              uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar34 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              dVar24 = (double)local_228._8_8_;
            }
            lVar16 = local_210 + 1;
          }
          lVar9 = local_210;
          pFVar23 = (param_1->AllocatorInstance).Data + lVar16 * 0x50;
          uVar12 = 0;
          if ((int)uVar19 < param_1->ArrayNum) {
            uVar12 = ~uVar19 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            uVar28 = local_228._0_4_;
            uVar29 = local_228._4_4_;
            uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar34 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            dVar24 = (double)local_228._8_8_;
          }
          pFVar21 = (param_1->AllocatorInstance).Data;
          dVar26 = (double)(fVar30 - this->Tension);
          local_140 = (*(double *)(pFVar23 + 0x10) - *(double *)(pFVar21 + lVar9 * 0x50 + 0x10)) *
                      dVar26;
          uVar7 = (*(double *)(pFVar23 + 8) - *(double *)(pFVar21 + lVar9 * 0x50 + 8)) * dVar26;
          uVar6 = (*(double *)pFVar23 - *(double *)(pFVar21 + lVar9 * 0x50)) * dVar26;
          dVar26 = local_140;
          if (pFVar18[lVar14 * 0x50 + 0x48] == (FScriptContainerElement)0x1) {
            dVar27 = (double)CONCAT44(uVar29,uVar28) - (double)local_208._0_8_;
            dVar31 = (double)uVar6 * (double)uVar6 + (double)uVar7 * (double)uVar7 +
                     local_140 * local_140;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = dVar31;
            auVar39 = sqrtpd(auVar39,auVar8);
            dVar27 = (double)((float)SQRT((dVar24 - (double)local_208._8_8_) *
                                          (dVar24 - (double)local_208._8_8_) + dVar27 * dVar27 +
                                          (local_218 - local_1f8) * (local_218 - local_1f8)) *
                             __real_3ea8f5c3);
            if ((dVar27 < auVar39._0_8_) && (__real_3e45798ee2308c3a < auVar39._0_8_)) {
              if (dVar31 == __real_3ff0000000000000) {
                local_1b0._8_4_ = (int)uVar7;
                local_1b0._0_8_ = uVar6;
                local_1b0._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
                local_1a0 = local_140;
              }
              else if (__real_3e45798ee0000000 <= dVar31) {
                local_120 = __real_3ff0000000000000 / SQRT(dVar31);
                uVar6 = (double)uVar6 * local_120;
                uVar7 = (double)uVar7 * local_120;
                local_1a0 = local_140 * local_120;
                local_1b0._8_8_ = uVar7;
                local_1b0._0_8_ = uVar6;
              }
              else {
                local_1a0 = (double)CONCAT44(uVar34,uVar33);
                local_1b0._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_1b0._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              }
              uVar6 = (double)uVar6 * dVar27;
              uVar7 = (double)uVar7 * dVar27;
              dVar26 = dVar27 * local_1a0;
            }
            auVar39._8_8_ = 0;
            auVar39._0_8_ = __real_3ff0000000000000;
            uVar37 = (undefined4)__real_3fd51eb860000000;
            uVar38 = (undefined4)((ulonglong)__real_3fd51eb860000000 >> 0x20);
          }
        }
        else if (FVar2 == (FScriptContainerElement)0x4) {
          uVar6 = ((double)local_208._0_8_ - (double)CONCAT44(uVar29,uVar28)) *
                  (double)CONCAT44(uVar38,uVar37);
          uVar7 = ((double)local_208._8_8_ - dVar24) * (double)CONCAT44(uVar38,uVar37);
          dVar26 = (local_1f8 - local_218) * (double)CONCAT44(uVar38,uVar37);
        }
        else if (FVar2 == (FScriptContainerElement)0x5) {
          uVar6 = 0.0;
          local_f0 = 0;
          local_140 = 0.0;
          local_100 = 0;
          uStack_f8 = 0;
          uVar7 = 0.0;
          dVar26 = 0.0;
        }
        else {
          uVar6 = *(undefined8 *)(local_1d0 + lVar14 * 0x50 + 0x18);
          uVar7 = *(undefined8 *)(local_1d0 + lVar14 * 0x50 + 0x18 + 8);
          local_140 = *(double *)(local_1d0 + lVar14 * 0x50 + 0x28);
          dVar26 = local_140;
        }
        unaff_XMM8._8_8_ = 0;
        unaff_XMM8._0_8_ = __real_3fd5555555555555;
        local_198 = (double)local_1e8._0_8_ * __real_3fd5555555555555 +
                    (double)CONCAT44(uVar29,uVar28);
        dStack_190 = (double)uVar25 * __real_3fd5555555555555 + dVar24;
        local_180 = (double)local_208._0_8_ - (double)uVar6 * __real_3fd5555555555555;
        local_188 = dVar5 * __real_3fd5555555555555 + local_218;
        dStack_178 = (double)local_208._8_8_ - (double)uVar7 * __real_3fd5555555555555;
        local_170 = local_1f8 - dVar26 * __real_3fd5555555555555;
        if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)local_228) &&
            ((FScriptContainerElement *)local_228 <
             local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        if (local_238.ArrayNum == local_238.ArrayMax) {
          local_238.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_238.AllocatorInstance,&local_238.ArrayMax);
        }
        lVar14 = (longlong)local_238.ArrayNum;
        local_238.ArrayNum = local_238.ArrayNum + 1;
        *(undefined8 *)(local_238.AllocatorInstance.Data + lVar14 * 0x18) = local_228._0_8_;
        *(undefined8 *)(local_238.AllocatorInstance.Data + lVar14 * 0x18 + 8) = local_228._8_8_;
        *(double *)(local_238.AllocatorInstance.Data + lVar14 * 0x18 + 0x10) = local_218;
        if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)&local_198) &&
            ((FScriptContainerElement *)&local_198 <
             local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        if (local_238.ArrayNum == local_238.ArrayMax) {
          local_238.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_238.AllocatorInstance,&local_238.ArrayMax);
        }
        iVar13 = local_238.ArrayNum + 1;
        *(double *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18) =
             local_198;
        *(double *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18 + 8) =
             dStack_190;
        *(double *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18 + 0x10) =
             local_188;
        local_238.ArrayNum = iVar13;
        if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 <
             local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        if (local_238.ArrayNum == local_238.ArrayMax) {
          local_238.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_238.AllocatorInstance,&local_238.ArrayMax);
        }
        iVar13 = local_238.ArrayNum + 1;
        *(double *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18) =
             local_180;
        *(double *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18 + 8) =
             dStack_178;
        *(double *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18 + 0x10) =
             local_170;
        local_238.ArrayNum = iVar13;
        if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)local_208) &&
            ((FScriptContainerElement *)local_208 <
             local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        if (local_238.ArrayNum == local_238.ArrayMax) {
          local_238.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_238.AllocatorInstance,&local_238.ArrayMax);
        }
        fVar30 = __real_3f800000;
        local_1f0 = local_1f0 + 0x50;
        iVar13 = local_238.ArrayNum + 1;
        uVar19 = uVar19 + 1;
        uVar33 = SUB84(__real_3e45798ee2308c3a,0);
        uVar34 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
        uVar35 = SUB84(__real_3e45798ee0000000,0);
        uVar36 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        *(undefined8 *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18) =
             local_208._0_8_;
        *(undefined8 *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18 + 8)
             = local_208._8_8_;
        *(double *)(local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 0x18 + 0x10) =
             local_1f8;
        local_210 = local_210 + 1;
        local_1d8 = local_1d8 + 1;
        local_res20 = local_res20 + 1;
        local_238.ArrayNum = iVar13;
      } while (local_210 < local_130);
    }
    pTVar17 = &this->TangentModes;
    TPolyBezierSpline<UE::Math::TVector<double>_>::SetControlPoints
              ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_238,
               Centripetal);
    piVar1 = &(this->TangentModes).ArrayMax;
    (this->TangentModes).ArrayNum = 0;
    if ((this->TangentModes).ArrayMax < iVar20) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar20,&pTVar17->AllocatorInstance,0,piVar1);
    }
    iVar20 = param_1->ArrayNum;
    pFVar23 = (param_1->AllocatorInstance).Data;
    pFVar18 = pFVar23 + 0x48;
    pFVar21 = pFVar23 + (longlong)iVar20 * 0x50;
    while( true ) {
      if (param_1->ArrayNum != iVar20) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar23 == pFVar21) break;
      pFVar3 = (pTVar17->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar18) && (pFVar18 < pFVar3 + *piVar1)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      iVar13 = (this->TangentModes).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar17->AllocatorInstance,piVar1);
        (this->TangentModes).ArrayNum = iVar13;
      }
      (this->TangentModes).ArrayNum = iVar13 + 1;
      pFVar23 = pFVar23 + 0x50;
      FVar2 = *pFVar18;
      pFVar18 = pFVar18 + 0x50;
      (pTVar17->AllocatorInstance).Data[iVar13] = FVar2;
    }
    UpdateTangents(this);
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
  }
  return true;
}

// SetParameter @ 147a91a00

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter
          (TTangentBezierSpline<float> *this,int param_1,float param_2)

{
  int iVar1;
  undefined4 in_register_00000014;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_00000014,param_1);
  if (param_1 != 0) {
    uVar2 = (ulonglong)(param_1 * 4 - 1);
  }
  iVar1 = (**(code **)(this->_padding_ + 0xa0))(&this->_padding_,uVar2);
  iVar1 = (int)(iVar1 + 1 + (iVar1 + 1 >> 0x1f & 3U)) >> 2;
  if (iVar1 != param_1) {
    UpdateTangents(this);
    if (5 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(int,float)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (5 < (byte)Spline::LogSpline._0_1_) {
        Logging::Private::BasicLog<6>
                  (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(int,float)___ptr64'
                    ::__l23::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
    }
    TBSpline<float,3>::Dump((TBSpline<float,3> *)&this->_padding_);
  }
  return iVar1;
}

// SetParameter @ 147a91ab0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetParameter
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,float param_2)

{
  int iVar1;
  undefined4 in_register_00000014;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_00000014,param_1);
  if (param_1 != 0) {
    uVar2 = (ulonglong)(param_1 * 4 - 1);
  }
  iVar1 = (**(code **)(this->_padding_ + 0xa0))(&this->_padding_,uVar2);
  iVar1 = (int)(iVar1 + 1 + (iVar1 + 1 >> 0x1f & 3U)) >> 2;
  if (iVar1 != param_1) {
    UpdateTangents(this);
    if (5 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetParameter(int,float)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (5 < (byte)Spline::LogSpline._0_1_) {
        Logging::Private::BasicLog<6>
                  (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetParameter(int,float)___ptr64'
                    ::__l23::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
    }
    TBSpline<UE::Math::TQuat<double>,3>::Dump
              ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_);
  }
  return iVar1;
}

// SetParameter @ 147a91b60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,float param_2)

{
  int iVar1;
  undefined4 in_register_00000014;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_00000014,param_1);
  if (param_1 != 0) {
    uVar2 = (ulonglong)(param_1 * 4 - 1);
  }
  iVar1 = (**(code **)(this->_padding_ + 0xa0))(&this->_padding_,uVar2);
  iVar1 = (int)(iVar1 + 1 + (iVar1 + 1 >> 0x1f & 3U)) >> 2;
  if (iVar1 != param_1) {
    UpdateTangents(this);
    if (5 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<6>
                (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (5 < (byte)Spline::LogSpline._0_1_) {
        Logging::Private::BasicLog<6>
                  (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                    ::__l23::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
    }
    TBSpline<UE::Math::TVector<double>,3>::Dump
              ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_);
  }
  return iVar1;
}

// SetPointTangentMode @ 147a920b0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::SetPointTangentMode
          (TTangentBezierSpline<float> *this,int param_1,ETangentMode param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < param_1) {
    iVar3 = GetNumPoints(this);
    if (param_1 <= iVar3) {
      uVar4 = 0;
      if (param_1 < (this->TangentModes).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->TangentModes).AllocatorInstance.Data[param_1] = (FScriptContainerElement)param_2;
      UpdatePointTangents(this,param_1,param_2);
    }
  }
  return;
}

// SetPointTangentMode @ 147a92160

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetPointTangentMode
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,ETangentMode param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < param_1) {
    iVar3 = GetNumPoints(this);
    if (param_1 <= iVar3) {
      uVar4 = 0;
      if (param_1 < (this->TangentModes).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->TangentModes).AllocatorInstance.Data[param_1] = (FScriptContainerElement)param_2;
      UpdatePointTangents(this,param_1,param_2);
    }
  }
  return;
}

// SetPointTangentMode @ 147a92210

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetPointTangentMode
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,ETangentMode param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < param_1) {
    iVar3 = GetNumPoints(this);
    if (param_1 <= iVar3) {
      uVar4 = 0;
      if (param_1 < (this->TangentModes).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->TangentModes).AllocatorInstance.Data[param_1] = (FScriptContainerElement)param_2;
      UpdatePointTangents(this,param_1,param_2);
    }
  }
  return;
}

// SetTangentIn @ 147a92b20

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::SetTangentIn
          (TTangentBezierSpline<float> *this,int param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float local_res10 [2];
  
  if ((-1 < param_1) && (iVar5 = GetNumPoints(this), param_1 < iVar5)) {
    if (param_1 == 0) {
      cVar3 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
      if ((cVar3 != '\0') && (iVar5 = (**(code **)(this->_padding_ + 0x50))(this), 0 < iVar5)) {
        iVar5 = (**(code **)(this->_padding_ + 0x50))(this);
        pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,iVar5 * 4 + -1);
        local_res10[0] = *pfVar6 - *param_2 * __real_3eaaaaab;
        UpdateBezierControlPoint(this,iVar5 * 4 + -2,local_res10);
        return;
      }
    }
    else {
      iVar5 = param_1 * 4;
      iVar7 = iVar5 + -2;
      if (iVar7 < (int)this->_padding_) {
        pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,iVar5 + -1);
        fVar8 = *param_2 * __real_3eaaaaab;
        fVar1 = *pfVar6;
        if ((iVar7 < (int)this->_padding_) && (-1 < iVar7)) {
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(float *)(this->_padding_ + -8 + (longlong)iVar5 * 4) = fVar1 - fVar8;
        }
      }
    }
  }
  return;
}

// SetTangentIn @ 147a92c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetTangentIn
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,TQuat<double> *param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  TQuat<double> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if ((-1 < param_1) && (iVar3 = GetNumPoints(this), param_1 < iVar3)) {
    if (param_1 == 0) {
      cVar2 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
      if (cVar2 == '\0') {
        return;
      }
      iVar3 = (**(code **)(this->_padding_ + 0x50))(this);
      if (iVar3 < 1) {
        return;
      }
      iVar3 = (**(code **)(this->_padding_ + 0x50))(this);
      pTVar4 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                         ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,iVar3 * 4 + -1);
      iVar3 = iVar3 * 4 + -2;
    }
    else {
      iVar3 = param_1 * 4 + -2;
      if ((int)this->_padding_ <= iVar3) {
        return;
      }
      pTVar4 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                         ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,param_1 * 4 + -1);
    }
    dVar1 = pTVar4->Y - _UNK_150aa23f8 * param_2->Y;
    auVar5._0_8_ = (double)_UNK_15076be98;
    auVar5._8_8_ = (double)_UNK_15076be9c;
    auVar6._0_8_ = param_2->Z;
    auVar6._8_8_ = param_2->W;
    auVar6 = divpd(auVar6,auVar5);
    local_28._8_4_ = SUB84(dVar1,0);
    local_28._0_8_ = pTVar4->X - ___xmm_3fd55555555555553fd5555555555555 * param_2->X;
    local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    dVar1 = pTVar4->W - auVar6._8_8_;
    local_18._8_4_ = SUB84(dVar1,0);
    local_18._0_8_ = pTVar4->Z - auVar6._0_8_;
    local_18._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    UpdateBezierControlPoint(this,iVar3,(TQuat<double> *)local_28);
  }
  return;
}

// SetTangentIn @ 147a92d80

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetTangentIn
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,
          TVector<double> *param_2)

{
  char cVar1;
  int iVar2;
  TVector<double> *pTVar3;
  TVector<double>_u_0 local_38 [2];
  
  if ((-1 < param_1) && (iVar2 = GetNumPoints(this), param_1 < iVar2)) {
    if (param_1 == 0) {
      cVar1 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
      if (cVar1 == '\0') {
        return;
      }
      iVar2 = (**(code **)(this->_padding_ + 0x50))(this);
      if (iVar2 < 1) {
        return;
      }
      iVar2 = (**(code **)(this->_padding_ + 0x50))(this);
      pTVar3 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                         ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar2 * 4 + -1);
      iVar2 = iVar2 * 4 + -2;
    }
    else {
      iVar2 = param_1 * 4 + -2;
      if ((int)this->_padding_ <= iVar2) {
        return;
      }
      pTVar3 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                         ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,param_1 * 4 + -1
                         );
    }
    local_38[0]._0_8_ =
         (pTVar3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X * __real_3fd5555555555555;
    local_38[0]._8_8_ =
         (pTVar3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y * __real_3fd5555555555555;
    local_38[0]._16_8_ =
         (pTVar3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z * __real_3fd5555555555555;
    UpdateBezierControlPoint(this,iVar2,(TVector<double> *)&local_38[0]._s_0);
  }
  return;
}

// SetTangentOut @ 147a92e90

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::SetTangentOut
          (TTangentBezierSpline<float> *this,int param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  
  iVar5 = GetNumPoints(this);
  if ((param_1 != iVar5 + -1) ||
     (cVar3 = (**(code **)(this->_padding_ + 0x40))(this), cVar3 != '\0')) {
    iVar5 = param_1 * 4;
    iVar7 = iVar5 + 1;
    if (iVar7 < (int)this->_padding_) {
      pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,iVar5);
      fVar8 = *param_2 * __real_3eaaaaab;
      fVar1 = *pfVar6;
      if ((iVar7 < (int)this->_padding_) && (-1 < iVar7)) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)(this->_padding_ + 4 + (longlong)iVar5 * 4) = fVar8 + fVar1;
      }
    }
  }
  return;
}

// SetTangentOut @ 147a92f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetTangentOut
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,TQuat<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  TQuat<double> *pTVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  
  iVar11 = GetNumPoints(this);
  if ((param_1 != iVar11 + -1) ||
     (cVar9 = (**(code **)(this->_padding_ + 0x40))(this), cVar9 != '\0')) {
    iVar11 = param_1 * 4;
    iVar14 = iVar11 + 1;
    if (iVar14 < (int)this->_padding_) {
      pTVar12 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,iVar11);
      dVar15 = ___xmm_3fd55555555555553fd5555555555555 * param_2->X;
      dVar16 = _UNK_150aa23f8 * param_2->Y;
      dVar5 = pTVar12->X;
      dVar6 = pTVar12->Y;
      auVar17._0_8_ = param_2->Z;
      auVar17._8_8_ = param_2->W;
      dVar7 = pTVar12->Z;
      dVar8 = pTVar12->W;
      auVar4._8_4_ = SUB84((double)_UNK_15076be9c,0);
      auVar4._0_8_ = (double)_UNK_15076be98;
      auVar4._12_4_ = (int)((ulonglong)(double)_UNK_15076be9c >> 0x20);
      auVar17 = divpd(auVar17,auVar4);
      if ((iVar14 < (int)this->_padding_) && (-1 < iVar14)) {
        if ((iVar14 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = this->_padding_;
        lVar13 = ((longlong)iVar11 + 1) * 0x20;
        pdVar1 = (double *)(lVar13 + lVar2);
        *pdVar1 = dVar15 + dVar5;
        pdVar1[1] = dVar16 + dVar6;
        pdVar1 = (double *)(lVar13 + 0x10 + lVar2);
        *pdVar1 = auVar17._0_8_ + dVar7;
        pdVar1[1] = auVar17._8_8_ + dVar8;
      }
    }
  }
  return;
}

// SetTangentOut @ 147a930c0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetTangentOut
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this,int param_1,
          TVector<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  int iVar14;
  
  iVar11 = GetNumPoints(this);
  if ((param_1 != iVar11 + -1) ||
     (cVar9 = (**(code **)(this->_padding_ + 0x40))(this), cVar9 != '\0')) {
    iVar11 = param_1 * 4;
    iVar14 = iVar11 + 1;
    if (iVar14 < (int)this->_padding_) {
      pTVar12 = TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar11);
      dVar7 = (pTVar12->field0_0x0)._s_0.X;
      dVar8 = (pTVar12->field0_0x0)._s_0.Y;
      dVar1 = (pTVar12->field0_0x0)._s_0.Z;
      dVar4 = (param_2->field0_0x0)._s_0.X * __real_3fd5555555555555;
      dVar5 = (param_2->field0_0x0)._s_0.Y * __real_3fd5555555555555;
      dVar6 = (param_2->field0_0x0)._s_0.Z * __real_3fd5555555555555;
      if ((iVar14 < (int)this->_padding_) && (-1 < iVar14)) {
        if ((iVar14 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar13 = (longlong)iVar11 + 1;
        lVar2 = this->_padding_;
        *(double *)(lVar2 + lVar13 * 0x18) = dVar4 + dVar7;
        *(double *)(lVar2 + 8 + lVar13 * 0x18) = dVar5 + dVar8;
        *(double *)(lVar2 + 0x10 + lVar13 * 0x18) = dVar6 + dVar1;
      }
    }
  }
  return;
}

// UpdateBezierControlPoint @ 147a9a350

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::UpdateBezierControlPoint
          (TTangentBezierSpline<float> *this,int param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1 < (int)this->_padding_) && (-1 < param_1)) {
    fVar1 = *param_2;
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)(this->_padding_ + (longlong)param_1 * 4) = fVar1;
  }
  return;
}

// UpdateBezierControlPoint @ 147a9a3d0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateBezierControlPoint
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,TQuat<double> *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  
  if ((param_1 < (int)this->_padding_) && (-1 < param_1)) {
    uVar5 = *(undefined4 *)&param_2->X;
    uVar6 = *(undefined4 *)((longlong)&param_2->X + 4);
    uVar7 = *(undefined4 *)&param_2->Y;
    uVar8 = *(undefined4 *)((longlong)&param_2->Y + 4);
    dVar9 = param_2->Z;
    dVar10 = param_2->W;
    if ((param_1 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = this->_padding_;
    puVar1 = (undefined4 *)((longlong)param_1 * 0x20 + lVar3);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    pdVar2 = (double *)((longlong)param_1 * 0x20 + 0x10 + lVar3);
    *pdVar2 = dVar9;
    pdVar2[1] = dVar10;
  }
  return;
}

// UpdatePointTangents @ 147a9cd10

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::UpdatePointTangents
          (TTangentBezierSpline<float> *this,int param_1,ETangentMode param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res10 [2];
  float local_res20 [2];
  
  iVar4 = GetNumPoints(this);
  if (param_1 < 0) {
    return;
  }
  if (iVar4 <= param_1) {
    return;
  }
  if ((byte)(param_2 - User) < 2) {
    return;
  }
  fVar7 = GetValue(this,param_1);
  iVar1 = iVar4 + -1;
  if (param_1 < 1) {
    cVar3 = (**(code **)(this->_padding_ + 0x40))();
    fVar8 = fVar7;
    if (cVar3 != '\0') {
      fVar8 = GetValue(this,iVar1);
    }
  }
  else {
    fVar8 = GetValue(this,param_1 + -1);
  }
  if (param_1 < iVar1) {
    fVar9 = GetValue(this,param_1 + 1);
    goto LAB_147a9ce64;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x40))();
  fVar9 = fVar7;
  if (cVar3 == '\0') goto LAB_147a9ce64;
  iVar5 = (int)this->_padding_;
  if (iVar5 == 0) {
LAB_147a9ce3a:
    fVar9 = 0.0;
  }
  else {
    if ((iVar5 == 1) || (iVar5 == 2)) {
      `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>::
      operator()(local_res10);
    }
    else if (iVar5 != 3) {
      cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
      pcVar2 = *(code **)(this->_padding_ + 0x50);
      if (cVar3 == '\0') {
        iVar5 = (*pcVar2)(this);
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = (*pcVar2)();
      }
      if (iVar5 < 1) goto LAB_147a9ce3a;
    }
    pfVar6 = TBSpline<float,3>::GetValue((TBSpline<float,3> *)&this->_padding_,0);
    fVar9 = *pfVar6;
  }
LAB_147a9ce64:
  iVar5 = param_1 + -1;
  if ((param_1 < 1) &&
     (cVar3 = (**(code **)(this->_padding_ + 0x40))(this), iVar5 = param_1, cVar3 != '\0')) {
    iVar5 = iVar1;
  }
  fVar16 = (float)param_1;
  fVar12 = (float)iVar5;
  if (param_1 < iVar1) {
    fVar14 = (float)(param_1 + 1);
  }
  else {
    cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
    fVar14 = fVar16;
    if (cVar3 != '\0') {
      fVar14 = 0.0;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
  if ((cVar3 == '\0') || (param_1 != 0)) {
    cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
    if ((cVar3 != '\0') && (param_1 == iVar1)) {
      fVar14 = fVar14 + (float)iVar4;
    }
  }
  else {
    fVar12 = fVar12 - (float)iVar4;
  }
  local_res10[0] = GetTangentIn(this,param_1);
  local_res20[0] = GetTangentOut(this,param_1);
  fVar10 = local_res10[0];
  fVar13 = local_res20[0];
  switch(param_2) {
  case Auto:
  case AutoClamped:
    fVar10 = fVar14 - fVar12;
    if (fVar14 - fVar12 <= __real_38d1b717) {
      fVar10 = __real_38d1b717;
    }
    fVar13 = ((fVar9 - fVar8) / fVar10) * (__real_3f800000 - this->Tension);
    fVar10 = fVar13;
    if (param_2 == AutoClamped) {
      fVar15 = fVar14 - fVar16;
      if (fVar14 - fVar16 <= __real_38d1b717) {
        fVar15 = __real_38d1b717;
      }
      fVar14 = fVar16 - fVar12;
      if (fVar16 - fVar12 <= __real_38d1b717) {
        fVar14 = __real_38d1b717;
      }
      dVar11 = (double)(float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar9 = (float)((uint)((fVar9 - fVar7) / fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar7 = (float)((uint)((fVar7 - fVar8) / fVar14) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar7 <= fVar9) {
        fVar9 = fVar7;
      }
      if (((double)fVar9 < dVar11) && (__real_3e45798ee2308c3a < dVar11)) {
        if (__real_3f1a36e2e0000000 <= dVar11) {
          fVar10 = fVar9;
          if (fVar13 <= 0.0) {
            fVar10 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
          }
        }
        else {
          fVar10 = 0.0;
        }
      }
    }
    fVar13 = fVar10;
    if ((this->bStationaryEndpoint != false) &&
       (((param_1 == 0 || (param_1 == iVar1)) &&
        (cVar3 = (**(code **)(this->_padding_ + 0x40))(this), cVar3 == '\0')))) {
      fVar10 = 0.0;
      fVar13 = 0.0;
    }
    break;
  case User:
    break;
  default:
    fVar10 = (__real_3f800000 - this->Tension) * (fVar9 - fVar8);
    fVar13 = fVar10;
    break;
  case Linear:
    if ((param_1 < 1) && (cVar3 = (**(code **)(this->_padding_ + 0x40))(this), cVar3 == '\0')) {
      local_res10[0] = 0.0;
    }
    else {
      local_res10[0] = fVar7 - fVar8;
    }
    if ((param_1 < iVar1) ||
       (cVar3 = (**(code **)(this->_padding_ + 0x40))(this), fVar10 = local_res10[0], fVar13 = 0.0,
       cVar3 != '\0')) {
      fVar10 = local_res10[0];
      fVar13 = fVar9 - fVar7;
    }
    break;
  case Constant:
    local_res10[0] = 0.0;
    local_res20[0] = 0.0;
    fVar10 = local_res10[0];
    fVar13 = local_res20[0];
  }
  local_res20[0] = fVar13;
  local_res10[0] = fVar10;
  SetTangentIn(this,param_1,local_res10);
  SetTangentOut(this,param_1,local_res20);
  return;
}

// UpdatePointTangents @ 147a9d170

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdatePointTangents
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this,int param_1,ETangentMode param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  TQuat<double> *pTVar17;
  TQuat<double> *pTVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float local_res10 [2];
  TQuat<double> local_188;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  TQuat<double> local_148;
  TQuat<double> local_128;
  TQuat<double> local_108;
  TQuat<double> local_e8 [6];
  
  iVar15 = GetNumPoints(this);
  if (param_1 < 0) {
    return;
  }
  if (iVar15 <= param_1) {
    return;
  }
  if ((byte)(param_2 - User) < 2) {
    return;
  }
  GetValue(this,&local_188,param_1);
  dVar13 = local_188.W;
  dVar12 = local_188.Z;
  dVar26 = local_188.Y;
  dVar19 = local_188.X;
  iVar1 = iVar15 + -1;
  if (param_1 < 1) {
    cVar14 = (**(code **)(this->_padding_ + 0x40))();
    if (cVar14 == '\0') {
      local_188.X = dVar19;
      local_188.Y = dVar26;
      pTVar18 = &local_188;
      local_188.Z = dVar12;
      local_188.W = dVar13;
    }
    else {
      pTVar18 = GetValue(this,local_e8,iVar1);
    }
    pTVar17 = &local_128;
    local_128.X = pTVar18->X;
    local_128.Y = pTVar18->Y;
    local_128.Z = pTVar18->Z;
    local_128.W = pTVar18->W;
  }
  else {
    pTVar17 = GetValue(this,&local_108,param_1 + -1);
  }
  dVar4 = pTVar17->X;
  dVar5 = pTVar17->Y;
  dVar6 = pTVar17->Z;
  dVar7 = pTVar17->W;
  if (param_1 < iVar1) {
    pTVar17 = GetValue(this,local_e8,param_1 + 1);
    goto LAB_147a9d363;
  }
  cVar14 = (**(code **)(this->_padding_ + 0x40))();
  if (cVar14 == '\0') {
    local_128.X = dVar19;
    local_128.Y = dVar26;
    pTVar18 = &local_128;
    local_128.Z = dVar12;
    local_128.W = dVar13;
  }
  else {
    iVar16 = (int)this->_padding_;
    if (iVar16 == 0) {
LAB_147a9d2ff:
      pTVar18 = &local_188;
      local_188.Z = 0.0;
      local_188.W = 0.0;
      local_188.X = 0.0;
      local_188.Y = 0.0;
    }
    else {
      if ((iVar16 == 1) || (iVar16 == 2)) {
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints'::__l4::
        <lambda_1>::operator()(local_res10);
      }
      else if (iVar16 != 3) {
        cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
        pcVar2 = *(code **)(this->_padding_ + 0x50);
        if (cVar14 == '\0') {
          iVar16 = (*pcVar2)(this);
          iVar16 = iVar16 + 1;
        }
        else {
          iVar16 = (*pcVar2)();
        }
        if (iVar16 < 1) goto LAB_147a9d2ff;
      }
      pTVar17 = TBSpline<UE::Math::TQuat<double>,3>::GetValue
                          ((TBSpline<UE::Math::TQuat<double>,3> *)&this->_padding_,0);
      pTVar18 = &local_188;
      local_188.Z = pTVar17->Z;
      local_188.W = pTVar17->W;
      local_188.X = pTVar17->X;
      local_188.Y = pTVar17->Y;
    }
  }
  pTVar17 = &local_108;
  local_108.X = pTVar18->X;
  local_108.Y = pTVar18->Y;
  local_108.Z = pTVar18->Z;
  local_108.W = pTVar18->W;
LAB_147a9d363:
  dVar8 = pTVar17->X;
  dVar9 = pTVar17->Y;
  dVar10 = pTVar17->Z;
  dVar11 = pTVar17->W;
  iVar16 = param_1 + -1;
  if ((param_1 < 1) &&
     (cVar14 = (**(code **)(this->_padding_ + 0x40))(this), iVar16 = param_1, cVar14 != '\0')) {
    iVar16 = iVar1;
  }
  fVar34 = (float)param_1;
  fVar30 = (float)iVar16;
  local_res10[0] = fVar34;
  if (param_1 < iVar1) {
    fVar34 = (float)(param_1 + 1);
  }
  else {
    cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar14 != '\0') {
      fVar34 = 0.0;
    }
  }
  cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  if ((cVar14 == '\0') || (param_1 != 0)) {
    cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
    if ((cVar14 != '\0') && (param_1 == iVar1)) {
      fVar34 = fVar34 + (float)iVar15;
    }
  }
  else {
    fVar30 = fVar30 - (float)iVar15;
  }
  GetTangentIn(this,(TQuat<double> *)local_168,param_1);
  GetTangentOut(this,&local_148,param_1);
  switch(param_2) {
  case Auto:
  case AutoClamped:
    auVar32._0_8_ = dVar8 - dVar4;
    auVar32._8_8_ = dVar9 - dVar5;
    fVar25 = fVar34 - fVar30;
    if (fVar34 - fVar30 <= __real_38d1b717) {
      fVar25 = __real_38d1b717;
    }
    dVar36 = (double)(__real_3f800000 - this->Tension);
    auVar29._0_8_ = (double)fVar25;
    auVar29._8_8_ = (double)fVar25;
    auVar32 = divpd(auVar32,auVar29);
    auVar40._0_8_ = dVar10 - dVar6;
    auVar40._8_8_ = dVar11 - dVar7;
    auVar38._0_8_ = (double)fVar25;
    auVar38._8_8_ = (double)fVar25;
    dVar31 = auVar32._0_8_ * dVar36;
    dVar33 = auVar32._8_8_ * dVar36;
    auVar32 = divpd(auVar40,auVar38);
    dVar35 = auVar32._0_8_ * dVar36;
    dVar36 = auVar32._8_8_ * dVar36;
    if (param_2 == AutoClamped) {
      auVar27._0_8_ = dVar19 - dVar4;
      auVar27._8_8_ = dVar26 - dVar5;
      fVar25 = local_res10[0] - fVar30;
      if (local_res10[0] - fVar30 <= __real_38d1b717) {
        fVar25 = __real_38d1b717;
      }
      fVar30 = fVar34 - local_res10[0];
      if (fVar34 - local_res10[0] <= __real_38d1b717) {
        fVar30 = __real_38d1b717;
      }
      auVar28._0_8_ = dVar12 - dVar6;
      auVar28._8_8_ = dVar13 - dVar7;
      auVar20._0_8_ = (double)fVar25;
      auVar20._8_8_ = (double)fVar25;
      auVar32 = divpd(auVar27,auVar20);
      auVar21._0_8_ = (double)fVar25;
      auVar21._8_8_ = (double)fVar25;
      auVar37._0_8_ = dVar8 - dVar19;
      auVar37._8_8_ = dVar9 - dVar26;
      auVar29 = divpd(auVar28,auVar21);
      auVar39._0_8_ = dVar10 - dVar12;
      auVar39._8_8_ = dVar11 - dVar13;
      auVar22._0_8_ = (double)fVar30;
      auVar22._8_8_ = (double)fVar30;
      auVar38 = divpd(auVar37,auVar22);
      auVar23._0_8_ = (double)fVar30;
      auVar23._8_8_ = (double)fVar30;
      auVar40 = divpd(auVar39,auVar23);
      fVar34 = (float)SQRT(auVar38._0_8_ * auVar38._0_8_ + auVar38._8_8_ * auVar38._8_8_ +
                           auVar40._0_8_ * auVar40._0_8_ + auVar40._8_8_ * auVar40._8_8_);
      fVar30 = (float)SQRT(auVar32._0_8_ * auVar32._0_8_ + auVar32._8_8_ * auVar32._8_8_ +
                           auVar29._0_8_ * auVar29._0_8_ + auVar29._8_8_ * auVar29._8_8_);
      if (fVar30 <= fVar34) {
        fVar34 = fVar30;
      }
      dVar26 = (double)fVar34;
      auVar3._4_8_ = dVar33;
      auVar3._0_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar24._0_8_ = auVar3._0_8_ << 0x20;
      auVar24._8_4_ = SUB84(dVar36,0);
      auVar24._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      dVar19 = SQRT(dVar31 * dVar31 + dVar33 * dVar33 +
                    dVar35 * dVar35 + auVar24._8_8_ * auVar24._8_8_);
      if ((dVar26 < dVar19) && (__real_3e45798ee2308c3a < dVar19)) {
        dVar31 = dVar26 * dVar31;
        dVar33 = dVar26 * dVar33;
        dVar35 = dVar26 * dVar35;
        dVar36 = dVar26 * dVar36;
      }
    }
    if ((this->bStationaryEndpoint != false) &&
       (((param_1 == 0 || (param_1 == iVar1)) &&
        (cVar14 = (**(code **)(this->_padding_ + 0x40))(this), cVar14 == '\0')))) {
      dVar31 = 0.0;
      dVar33 = 0.0;
      dVar35 = 0.0;
      dVar36 = 0.0;
    }
    local_168._8_8_ = dVar33;
    local_168._0_8_ = dVar31;
    local_158 = dVar35;
    dStack_150 = dVar36;
    local_148.X = dVar31;
    local_148.Y = dVar33;
    local_148.Z = dVar35;
    local_148.W = dVar36;
    break;
  case User:
    break;
  default:
    dStack_150 = (double)(__real_3f800000 - this->Tension);
    local_148.X = (dVar8 - dVar4) * dStack_150;
    local_148.Y = (dVar9 - dVar5) * dStack_150;
    local_158 = (dVar10 - dVar6) * dStack_150;
    dStack_150 = (dVar11 - dVar7) * dStack_150;
    local_168._8_8_ = local_148.Y;
    local_168._0_8_ = local_148.X;
    local_148.Z = local_158;
    local_148.W = dStack_150;
    break;
  case Linear:
    if ((param_1 < 1) && (cVar14 = (**(code **)(this->_padding_ + 0x40))(this), cVar14 == '\0')) {
      local_158 = 0.0;
      dStack_150 = 0.0;
      local_168 = ZEXT816(0);
    }
    else {
      local_158 = dVar12 - dVar6;
      dStack_150 = dVar13 - dVar7;
      local_168._8_4_ = SUB84(dVar26 - dVar5,0);
      local_168._0_8_ = dVar19 - dVar4;
      local_168._12_4_ = (int)((ulonglong)(dVar26 - dVar5) >> 0x20);
    }
    if ((param_1 < iVar1) || (cVar14 = (**(code **)(this->_padding_ + 0x40))(this), cVar14 != '\0'))
    {
      local_148.X = dVar8 - dVar19;
      local_148.Y = dVar9 - dVar26;
      local_148.Z = dVar10 - dVar12;
      local_148.W = dVar11 - dVar13;
    }
    else {
      local_148.X = 0.0;
      local_148.Y = 0.0;
      local_148.Z = 0.0;
      local_148.W = 0.0;
    }
    break;
  case Constant:
    local_168 = ZEXT816(0);
    local_158 = 0.0;
    dStack_150 = 0.0;
    local_148.X = 0.0;
    local_148.Y = 0.0;
    local_148.Z = 0.0;
    local_148.W = 0.0;
  }
  SetTangentIn(this,param_1,(TQuat<double> *)local_168);
  SetTangentOut(this,param_1,&local_148);
  return;
}

// UpdateTangents @ 147a9e3b0

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<float>::UpdateTangents(TTangentBezierSpline<float> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = GetNumPoints(this);
  if (1 < iVar3) {
    uVar5 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < (this->TangentModes).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UpdatePointTangents(this,uVar5,
                            (ETangentMode)(this->TangentModes).AllocatorInstance.Data[lVar6]);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
  return;
}

// UpdateTangents @ 147a9e480

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents
          (TTangentBezierSpline<UE::Math::TQuat<double>_> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = GetNumPoints(this);
  if (1 < iVar3) {
    uVar5 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < (this->TangentModes).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UpdatePointTangents(this,uVar5,
                            (ETangentMode)(this->TangentModes).AllocatorInstance.Data[lVar6]);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
  return;
}

// UpdateTangents @ 147a9e550

void __thiscall
UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
          (TTangentBezierSpline<UE::Math::TVector<double>_> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = GetNumPoints(this);
  if (1 < iVar3) {
    uVar5 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < (this->TangentModes).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UpdatePointTangents(this,uVar5,
                            (ETangentMode)(this->TangentModes).AllocatorInstance.Data[lVar6]);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
  return;
}

// operator() @ 150516a90

bool __thiscall
`UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1057025785514165567>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1057025785514165567>,
                       &`public:___cdecl_`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(void)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516ad0

bool __thiscall
`UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints'::__l4::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1057025785514165567>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1057025785514165567>,
                       &`public:___cdecl_`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints(void)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

