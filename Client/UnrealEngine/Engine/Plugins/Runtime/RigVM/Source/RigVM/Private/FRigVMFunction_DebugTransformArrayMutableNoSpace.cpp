// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1632b0

UScriptStruct * __cdecl FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace,
                         (UObject *)pUVar1,L"RigVMFunction_DebugTransformArrayMutableNoSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace
                    .OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a163330

UScriptStruct * __thiscall
FRigVMFunction_DebugTransformArrayMutableNoSpace::GetExecuteContextStruct
          (FRigVMFunction_DebugTransformArrayMutableNoSpace *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a163510

/* WARNING: Type propagation algorithm not settling */
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
FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute
          (FRigVMFunction_DebugTransformArrayMutableNoSpace *this)

{
  float fVar1;
  float fVar2;
  ERigUnitDebugTransformMode EVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  TTransform<double> *pTVar7;
  code *pcVar8;
  FRigVMDrawInterface *this_00;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TTransform<double> *pTVar12;
  uint uVar13;
  VectorRegister4Double *pVVar14;
  FScriptContainerElement *pFVar15;
  FRigVMExecuteContext local_188;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60 [2];
  
  local_188.FramesPerSecond = __real_3f91111111111111;
  local_188.DeltaTime = 0.0;
  local_188.AbsoluteTime = 0.0;
  local_188.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_188.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_188.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_188.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_188._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_188.EventName.ComparisonIndex.Value = 0;
  local_188.EventName.Number = 0;
  local_188.FunctionName.ComparisonIndex.Value = 0;
  local_188.FunctionName.Number = 0;
  local_188.InstructionIndex = 0;
  local_188.NumExecutions = 0;
  local_188.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_188.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_188.Traits.ArrayNum = 0;
  local_188.Traits.ArrayMax = 0;
  local_188.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_188.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_188.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  local_188.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_188.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_188.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_188.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_188.RuntimeSettings.MaximumArraySize = 0x800;
  local_188.RuntimeSettings._4_4_ = 0;
  local_188.OwningObject = (UObject *)0x0;
  local_188.OwningActor = (AActor *)0x0;
  local_188.World = (UWorld *)0x0;
  local_188.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  iVar5 = (this->Transforms).ArrayNum;
  pTVar7 = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  local_188.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  if ((iVar5 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar6 = (this->ParentIndices).ArrayNum;
  pFVar15 = (this->ParentIndices).AllocatorInstance.Data;
  if ((iVar6 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = this->Scale;
  fVar2 = this->Thickness;
  EVar3 = this->Mode;
  if (((local_188.DrawInterfacePtr != (FRigVMDrawInterface *)0x0) &&
      (bVar9 = this->bEnabled, bVar9 != false)) && (iVar5 != 0)) {
    for (pTVar12 = pTVar7; pTVar12 != pTVar7 + iVar5; pTVar12 = pTVar12 + 1) {
      FRigVMFunction_DebugTransformMutableNoSpace::StaticExecute
                (&local_188,pTVar12,EVar3,&this->Color,fVar2,fVar1,&this->WorldOffset,bVar9,
                 (FRigVMDebugDrawSettings *)&this->field_0x10);
    }
    if ((iVar6 == iVar5) && (uVar13 = 0, 0 < iVar6)) {
      pVVar14 = &pTVar7->Translation;
      do {
        this_00 = local_188.DrawInterfacePtr;
        if ((-1 < (int)*(uint *)pFVar15) && ((int)*(uint *)pFVar15 < iVar5)) {
          fVar1 = *(float *)&this->field_0x14;
          bVar4 = this->field_0x10;
          if (((int)uVar13 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = *(uint *)pFVar15;
          uVar10 = 0;
          if ((int)uVar11 < iVar5) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_78._s_0.X = pTVar7[(int)uVar11].Translation.XY.m128d_f64[0];
          local_78._s_0.Y = pTVar7[(int)uVar11].Translation.XY.m128d_f64[1];
          local_78._s_0.Z = pTVar7[(int)uVar11].Translation.ZW.m128d_f64[0];
          uVar11 = 0;
          if ((int)uVar13 < iVar5) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_60[0]._0_8_ = (pVVar14->XY).m128d_f64[0];
          local_60[0]._8_8_ = (pVVar14->XY).m128d_f64[1];
          local_60[0]._16_8_ = (pVVar14->ZW).m128d_f64[0];
          FRigVMDrawInterface::DrawLine
                    (this_00,&this->WorldOffset,(TVector<double> *)&local_60[0]._s_0,
                     (TVector<double> *)&local_78._s_0,&this->Color,fVar2,(uint)bVar4,fVar1);
        }
        uVar13 = uVar13 + 1;
        pFVar15 = pFVar15 + 4;
        pVVar14 = pVVar14 + 3;
      } while ((int)uVar13 < iVar6);
    }
  }
  if (local_188.AdditionalTraitMemoryHandles.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AdditionalTraitMemoryHandles.AllocatorInstance.Data);
  }
  if (local_188.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// FRigVMFunction_DebugTransformArrayMutableNoSpace @ 14a18cf40

FRigVMFunction_DebugTransformArrayMutableNoSpace * __thiscall
FRigVMFunction_DebugTransformArrayMutableNoSpace::FRigVMFunction_DebugTransformArrayMutableNoSpace
          (FRigVMFunction_DebugTransformArrayMutableNoSpace *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  
  this->field_0x10 = 1;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined4 *)&this->field_0x14 = 0xbf800000;
  *(undefined ***)this = &___7FRigVMFunction_DebugTransformArrayMutableNoSpace__6B_;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  (this->Transforms).ArrayMax = 0;
  (this->ParentIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentIndices).ArrayNum = 0;
  (this->ParentIndices).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.ZW.m128d_f64 = auVar8;
  *&(this->WorldOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->WorldOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->WorldOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->WorldOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->WorldOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->WorldOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->Mode = Axes;
  FVar9 = FLinearColor::White;
  this->Thickness = 0.0;
  this->Scale = 10.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  this->bEnabled = true;
  return this;
}

// Execute @ 14a19e5f0

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
FRigVMFunction_DebugTransformArrayMutableNoSpace::Execute
          (FRigVMFunction_DebugTransformArrayMutableNoSpace *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<int_const_,int> local_28;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  local_18.DataPtr = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  iVar1 = (this->Transforms).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.DataPtr = (int *)(this->ParentIndices).AllocatorInstance.Data;
  iVar2 = (this->ParentIndices).ArrayNum;
  local_18.ArrayNum = iVar1;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.ArrayNum = iVar2;
  StaticExecute(param_1,&local_18,&local_28,this->Mode,&this->Color,this->Thickness,this->Scale,
                &this->WorldOffset,this->bEnabled,(FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a1b8640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_DebugTransformArrayMutableNoSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigUnitDebugTransformMode EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  uchar *puVar9;
  ERigUnitDebugTransformMode *pEVar10;
  FRigVMMemoryHandle *pFVar11;
  FLinearColor *pFVar12;
  float *pfVar13;
  TTransform<double> *pTVar14;
  uchar *puVar15;
  FRigVMDebugDrawSettings *pFVar16;
  FRigVMExecuteContext *pFVar17;
  TArrayView<int_const_,int> local_68;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_58 [3];
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar11->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar11[1].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar10 = pFVar11[2].Ptr;
  }
  else {
    pEVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  EVar3 = *pEVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar12 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar14 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar6 = (bool)*puVar15;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar16 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  local_68.DataPtr = *(int **)puVar9;
  local_68.ArrayNum = *(int *)(puVar9 + 8);
  if (local_68.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_58[0].DataPtr = *(TTransform<double> **)puVar8;
  iVar4 = *(int *)(puVar8 + 8);
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_58[0].ArrayNum = iVar4;
  pFVar17 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar17,local_58,&local_68,EVar3,pFVar12,fVar1,fVar2,pTVar14,bVar6,pFVar16);
  return;
}

// StaticExecute @ 14a1dac30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticExecute
          (FRigVMExecuteContext *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,ERigUnitDebugTransformMode param_4,
          FLinearColor *param_5,float param_6,float param_7,TTransform<double> *param_8,bool param_9
          ,FRigVMDebugDrawSettings *param_10)

{
  float fVar1;
  byte bVar2;
  FRigVMDrawInterface *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  TTransform<double> *pTVar7;
  int iVar8;
  uint uVar9;
  TTransform<double> *pTVar10;
  longlong lVar11;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [2];
  
  if (((param_1->DrawInterfacePtr != (FRigVMDrawInterface *)0x0) && (param_9)) &&
     (param_2->ArrayNum != 0)) {
    pTVar7 = param_2->DataPtr;
    pTVar10 = pTVar7 + param_2->ArrayNum;
    for (; pTVar7 != pTVar10; pTVar7 = pTVar7 + 1) {
      FRigVMFunction_DebugTransformMutableNoSpace::StaticExecute
                (param_1,pTVar7,param_4,param_5,param_6,param_7,param_8,true,param_10);
    }
    iVar8 = param_3->ArrayNum;
    if ((iVar8 == param_2->ArrayNum) && (uVar9 = 0, 0 < iVar8)) {
      lVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar8) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(lVar11 + (longlong)param_3->DataPtr);
        if ((-1 < iVar8) && (iVar8 < param_2->ArrayNum)) {
          this = param_1->DrawInterfacePtr;
          fVar1 = param_10->Lifetime;
          bVar2 = (param_10->DepthPriority).Value;
          piVar6 = TArrayView<int_const_,int>::operator[](param_3,uVar9);
          pTVar7 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_2,*piVar6);
          local_88._s_0.X = (pTVar7->Translation).XY.m128d_f64[0];
          local_88._s_0.Y = (pTVar7->Translation).XY.m128d_f64[1];
          local_88._s_0.Z = (pTVar7->Translation).ZW.m128d_f64[0];
          pTVar7 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_2,uVar9);
          local_70[0]._0_8_ = (pTVar7->Translation).XY.m128d_f64[0];
          local_70[0]._8_8_ = (pTVar7->Translation).XY.m128d_f64[1];
          local_70[0]._16_8_ = (pTVar7->Translation).ZW.m128d_f64[0];
          FRigVMDrawInterface::DrawLine
                    (this,param_8,(TVector<double> *)&local_70[0]._s_0,
                     (TVector<double> *)&local_88._s_0,param_5,param_6,(uint)bVar2,fVar1);
        }
        iVar8 = param_3->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 4;
      } while ((int)uVar9 < iVar8);
    }
  }
  return;
}

