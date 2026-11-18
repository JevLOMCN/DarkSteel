// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 17

// StaticClass @ 149664940

UClass * __cdecl UTransformProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTransformProxy.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"TransformProxy",
               &Z_Registration_Info_UClass_UTransformProxy.InnerSingleton,
               StaticRegisterNativesUTransformProxy,0x1e0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformProxy>,
               InternalVTableHelperCtorCaller<UTransformProxy>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformProxy.InnerSingleton;
}

// UTransformProxy @ 149688500

UTransformProxy * __thiscall
UTransformProxy::UTransformProxy(UTransformProxy *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTransformProxy__6B_;
  *(undefined8 *)&this->OnTransformChanged = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTransformChangedUndoRedo = 0;
  *(undefined8 *)&(this->OnTransformChangedUndoRedo).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformChangedUndoRedo).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginTransformEdit = 0;
  *(undefined8 *)&(this->OnBeginTransformEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginTransformEdit).field_0x10 = 0;
  *(undefined8 *)&this->OnEndTransformEdit = 0;
  *(undefined8 *)&(this->OnEndTransformEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndTransformEdit).field_0x10 = 0;
  *(undefined8 *)&this->OnPivotChanged = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginPivotEdit = 0;
  *(undefined8 *)&(this->OnBeginPivotEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginPivotEdit).field_0x10 = 0;
  *(undefined8 *)&this->OnEndPivotEdit = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x10 = 0;
  this->bRotatePerObject = false;
  this->bSetPivotMode = false;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnTransformChangedUndoRedo).field_0x18 = 2;
  *(undefined8 *)&(this->OnBeginTransformEdit).field_0x18 = 2;
  *(undefined8 *)&(this->OnEndTransformEdit).field_0x18 = 2;
  *(undefined8 *)&(this->OnPivotChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnBeginPivotEdit).field_0x18 = 2;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x18 = 2;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->SharedTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->SharedTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->SharedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SharedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->SharedTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->SharedTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->SharedTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SharedTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->SharedTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->SharedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->SharedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->SharedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialSharedTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialSharedTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UTransformProxy @ 1496886c0

UTransformProxy * __thiscall
UTransformProxy::UTransformProxy(UTransformProxy *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTransformProxy__6B_;
  *(undefined8 *)&this->OnTransformChanged = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTransformChangedUndoRedo = 0;
  *(undefined8 *)&(this->OnTransformChangedUndoRedo).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransformChangedUndoRedo).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginTransformEdit = 0;
  *(undefined8 *)&(this->OnBeginTransformEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginTransformEdit).field_0x10 = 0;
  *(undefined8 *)&this->OnEndTransformEdit = 0;
  *(undefined8 *)&(this->OnEndTransformEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndTransformEdit).field_0x10 = 0;
  *(undefined8 *)&this->OnPivotChanged = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginPivotEdit = 0;
  *(undefined8 *)&(this->OnBeginPivotEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginPivotEdit).field_0x10 = 0;
  *(undefined8 *)&this->OnEndPivotEdit = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x10 = 0;
  this->bRotatePerObject = false;
  this->bSetPivotMode = false;
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  *(undefined8 *)&(this->OnTransformChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnTransformChangedUndoRedo).field_0x18 = 2;
  *(undefined8 *)&(this->OnBeginTransformEdit).field_0x18 = 2;
  *(undefined8 *)&(this->OnEndTransformEdit).field_0x18 = 2;
  *(undefined8 *)&(this->OnPivotChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnBeginPivotEdit).field_0x18 = 2;
  *(undefined8 *)&(this->OnEndPivotEdit).field_0x18 = 2;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->SharedTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->SharedTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->SharedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SharedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->SharedTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->SharedTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->SharedTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->SharedTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->SharedTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->SharedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->SharedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->SharedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialSharedTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialSharedTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UTransformProxy @ 14968ab10

void __thiscall UTransformProxy::~UTransformProxy(UTransformProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UTransformProxy__6B_;
  DestructItems<UTransformProxy::FRelativeObject,int>
            ((FRelativeObject *)(this->Objects).AllocatorInstance.Data,(this->Objects).ArrayNum);
  pFVar1 = (this->Objects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEndPivotEdit).field_0x8,*(int *)&(this->OnEndPivotEdit).field_0x10);
  pvVar2 = *(void **)&(this->OnEndPivotEdit).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndPivotEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBeginPivotEdit).field_0x8,*(int *)&(this->OnBeginPivotEdit).field_0x10);
  pvVar2 = *(void **)&(this->OnBeginPivotEdit).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeginPivotEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPivotChanged).field_0x8,*(int *)&(this->OnPivotChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnPivotChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPivotChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEndTransformEdit).field_0x8,*(int *)&(this->OnEndTransformEdit).field_0x10);
  pvVar2 = *(void **)&(this->OnEndTransformEdit).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndTransformEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBeginTransformEdit).field_0x8,
             *(int *)&(this->OnBeginTransformEdit).field_0x10);
  pvVar2 = *(void **)&(this->OnBeginTransformEdit).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeginTransformEdit);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformChangedUndoRedo).field_0x8,
             *(int *)&(this->OnTransformChangedUndoRedo).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformChangedUndoRedo).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformChangedUndoRedo);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransformChanged).field_0x8,*(int *)&(this->OnTransformChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnTransformChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransformChanged);
  UObject::~UObject((UObject *)this);
  return;
}

// AddComponent @ 149690dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformProxy::AddComponent(UTransformProxy *this,USceneComponent *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  int iVar19;
  undefined8 uVar20;
  FWeakObjectPtr FVar21;
  FWeakObjectPtr FVar22;
  FWeakObjectPtr *this_00;
  undefined1 auStack_178 [32];
  USceneComponent *local_158 [2];
  TTransform<double> local_148;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr FStack_e0;
  FWeakObjectPtr local_d8;
  FWeakObjectPtr FStack_d0;
  FWeakObjectPtr local_c8;
  FWeakObjectPtr FStack_c0;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr FStack_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr FStack_a0;
  FWeakObjectPtr local_98;
  FWeakObjectPtr FStack_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr FStack_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr FStack_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr FStack_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr FStack_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr FStack_40;
  FWeakObjectPtr local_38;
  FWeakObjectPtr FStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (param_1 == (USceneComponent *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Component",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformProxy.cpp"
                        ,0xf,L"");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar19 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x140,0x10,&(this->Objects).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  (this->Objects).ArrayNum = iVar19 + 1;
  this_00 = (FWeakObjectPtr *)(pFVar2 + (longlong)iVar19 * 0x140);
  memset(this_00,0,0x140);
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x10) = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x12) = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x14) = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x16) = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x18) = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x1a) = auVar11;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x1c) = auVar12;
  auVar13._8_4_ = SUB84((double)fVar5,0);
  auVar13._0_8_ = (double)fVar4;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x1e) = auVar13;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x20) = auVar14;
  auVar15._8_4_ = SUB84((double)fVar5,0);
  auVar15._0_8_ = (double)fVar4;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x22) = auVar15;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x24) = auVar16;
  auVar17._8_4_ = SUB84((double)fVar5,0);
  auVar17._0_8_ = (double)fVar4;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x26) = auVar17;
  local_158[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)local_158);
  *(bool *)&this_00[1].ObjectIndex = param_2;
  local_e8 = this_00[4];
  FVar22 = this_00[5];
  local_d8 = this_00[6];
  FStack_d0 = this_00[7];
  FVar21 = this_00[8];
  FStack_c0 = this_00[9];
  this_00[4] = (FWeakObjectPtr)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UTransformProxy::AddComponent'::__l2::<lambda_1>,UE::Math::TTransform<double>_>
               ::Call;
  this_00[5] = FStack_e0;
  this_00[6].ObjectIndex = 0x51e9f288;
  this_00[6].ObjectSerialNumber = 1;
  this_00[7] = (FWeakObjectPtr)param_1;
  this_00[8].ObjectIndex = local_c8.ObjectIndex;
  this_00[8].ObjectSerialNumber = local_c8.ObjectSerialNumber;
  this_00[9].ObjectIndex = 0;
  this_00[9].ObjectSerialNumber = 0;
  local_c8 = FVar21;
  FStack_e0 = FVar22;
  if (local_e8 != (FWeakObjectPtr)0x0) {
    FVar21 = (FWeakObjectPtr)&local_d8;
    if (FStack_c0 != (FWeakObjectPtr)0x0) {
      FVar21 = FStack_c0;
    }
    (**(code **)((longlong)*(FWeakObjectPtr *)FVar21 + 0x10))();
  }
  local_b8 = this_00[10];
  FVar22 = this_00[0xb];
  local_a8 = this_00[0xc];
  FStack_a0 = this_00[0xd];
  FVar21 = this_00[0xe];
  FStack_90 = this_00[0xf];
  this_00[10] = (FWeakObjectPtr)
                UE::Core::Private::Function::
                TFunctionRefCaller<`UTransformProxy::AddComponent'::__l2::<lambda_2>,void,UE::Math::TTransform<double>_const_&>
                ::Call;
  this_00[0xb] = FStack_b0;
  this_00[0xc].ObjectIndex = 0x51e9f2a8;
  this_00[0xc].ObjectSerialNumber = 1;
  this_00[0xd] = (FWeakObjectPtr)param_1;
  this_00[0xe].ObjectIndex = local_98.ObjectIndex;
  this_00[0xe].ObjectSerialNumber = local_98.ObjectSerialNumber;
  this_00[0xf].ObjectIndex = 0;
  this_00[0xf].ObjectSerialNumber = 0;
  FStack_b0 = FVar22;
  local_98 = FVar21;
  if (local_b8 != (FWeakObjectPtr)0x0) {
    FVar21 = (FWeakObjectPtr)&local_a8;
    if (FStack_90 != (FWeakObjectPtr)0x0) {
      FVar21 = FStack_90;
    }
    (**(code **)((longlong)*(FWeakObjectPtr *)FVar21 + 0x10))();
  }
  this_00[2].ObjectIndex = 0;
  this_00[2].ObjectSerialNumber = 0;
  UE::Core::Private::Function::CheckCallable((void *)this_00[4]);
  FVar21 = this_00[4];
  FVar22 = (FWeakObjectPtr)(this_00 + 6);
  if (this_00[9] != (FWeakObjectPtr)0x0) {
    FVar22 = this_00[9];
  }
  uVar20 = (**(code **)(*(longlong *)FVar22 + 8))();
  (*(code *)FVar21)(&local_88,uVar20);
  this_00[0x10] = local_88;
  this_00[0x11] = FStack_80;
  this_00[0x12] = local_78;
  this_00[0x13] = FStack_70;
  this_00[0x14] = local_68;
  this_00[0x15] = FStack_60;
  this_00[0x16] = local_58;
  this_00[0x17] = FStack_50;
  this_00[0x18] = local_48;
  this_00[0x19] = FStack_40;
  this_00[0x1a] = local_38;
  this_00[0x1b] = FStack_30;
  *(double (*) [2])(this_00 + 0x1c) = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])(this_00 + 0x1e) = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])(this_00 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])(this_00 + 0x22) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])(this_00 + 0x24) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])(this_00 + 0x26) = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (**(code **)(this->_padding_ + 0x2f0))(this);
  local_148.Rotation.XY.m128d_f64[0] = (this->SharedTransform).Rotation.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = (this->SharedTransform).Rotation.XY.m128d_f64[1];
  local_148.Rotation.ZW.m128d_f64[0] = (this->SharedTransform).Rotation.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] = (this->SharedTransform).Rotation.ZW.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = (this->SharedTransform).Translation.XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] = (this->SharedTransform).Translation.XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] = (this->SharedTransform).Translation.ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] = (this->SharedTransform).Translation.ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] = (this->SharedTransform).Scale3D.XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] = (this->SharedTransform).Scale3D.XY.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (this->SharedTransform).Scale3D.ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = (this->SharedTransform).Scale3D.ZW.m128d_f64[1];
  TMulticastDelegate<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnPivotChanged,this,&local_148);
  return;
}

// AddComponentCustom @ 1496911a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTransformProxy::AddComponentCustom
          (UTransformProxy *this,USceneComponent *param_1,
          TUniqueFunction<UE::Math::TTransform<double>___cdecl(void)> *param_2,
          TUniqueFunction<void___cdecl(UE::Math::TTransform<double>_const_&)> *param_3,
          long64 param_4,bool param_5)

{
  int *piVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  int iVar33;
  undefined8 uVar34;
  FWeakObjectPtr FVar35;
  longlong *plVar36;
  FWeakObjectPtr *this_00;
  undefined1 auStack_138 [32];
  USceneComponent *local_118 [2];
  TTransform<double> local_108;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr FStack_a0;
  FWeakObjectPtr local_98;
  FWeakObjectPtr FStack_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr FStack_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr FStack_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr FStack_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr FStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (param_1 == (USceneComponent *)0x0) {
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("Component",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\TransformProxy.cpp"
                        ,0x2b,L"");
    if (bVar32) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar33 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar33 == *piVar1) {
    iVar33 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x140,0x10,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar33 + 1;
  this_00 = (FWeakObjectPtr *)((this->Objects).AllocatorInstance.Data + (longlong)iVar33 * 0x140);
  memset(this_00,0,0x140);
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x10) = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x12) = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x14) = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x16) = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x18) = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x1a) = auVar11;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x1c) = auVar12;
  auVar13._8_4_ = SUB84((double)fVar5,0);
  auVar13._0_8_ = (double)fVar4;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x1e) = auVar13;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x20) = auVar14;
  auVar15._8_4_ = SUB84((double)fVar5,0);
  auVar15._0_8_ = (double)fVar4;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x22) = auVar15;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x24) = auVar16;
  auVar17._8_4_ = SUB84((double)fVar5,0);
  auVar17._0_8_ = (double)fVar4;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this_00 + 0x26) = auVar17;
  local_118[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)local_118);
  *(bool *)&this_00[1].ObjectIndex = param_5;
  uVar18 = *(undefined4 *)&param_2->field_0x4;
  uVar19 = *(undefined4 *)&param_2->field_0x8;
  uVar20 = *(undefined4 *)&param_2->field_0xc;
  iVar33 = this_00[4].ObjectIndex;
  iVar21 = this_00[4].ObjectSerialNumber;
  iVar22 = this_00[5].ObjectIndex;
  iVar23 = this_00[5].ObjectSerialNumber;
  iVar24 = this_00[6].ObjectIndex;
  iVar25 = this_00[6].ObjectSerialNumber;
  iVar26 = this_00[7].ObjectIndex;
  iVar27 = this_00[7].ObjectSerialNumber;
  iVar28 = this_00[8].ObjectIndex;
  iVar29 = this_00[8].ObjectSerialNumber;
  iVar30 = this_00[9].ObjectIndex;
  iVar31 = this_00[9].ObjectSerialNumber;
  this_00[4].ObjectIndex = *(undefined4 *)&param_2->field_0x0;
  this_00[4].ObjectSerialNumber = uVar18;
  this_00[5].ObjectIndex = uVar19;
  this_00[5].ObjectSerialNumber = uVar20;
  uVar18 = *(undefined4 *)&param_2->field_0x14;
  uVar19 = *(undefined4 *)&param_2->field_0x18;
  uVar20 = *(undefined4 *)&param_2->field_0x1c;
  this_00[6].ObjectIndex = *(undefined4 *)&param_2->field_0x10;
  this_00[6].ObjectSerialNumber = uVar18;
  this_00[7].ObjectIndex = uVar19;
  this_00[7].ObjectSerialNumber = uVar20;
  uVar18 = *(undefined4 *)&param_2->field_0x24;
  uVar19 = *(undefined4 *)&param_2->field_0x28;
  uVar20 = *(undefined4 *)&param_2->field_0x2c;
  this_00[8].ObjectIndex = *(undefined4 *)&param_2->field_0x20;
  this_00[8].ObjectSerialNumber = uVar18;
  this_00[9].ObjectIndex = uVar19;
  this_00[9].ObjectSerialNumber = uVar20;
  *(int *)&param_2->field_0x0 = iVar33;
  *(int *)&param_2->field_0x4 = iVar21;
  *(int *)&param_2->field_0x8 = iVar22;
  *(int *)&param_2->field_0xc = iVar23;
  *(int *)&param_2->field_0x10 = iVar24;
  *(int *)&param_2->field_0x14 = iVar25;
  *(int *)&param_2->field_0x18 = iVar26;
  *(int *)&param_2->field_0x1c = iVar27;
  *(int *)&param_2->field_0x20 = iVar28;
  *(int *)&param_2->field_0x24 = iVar29;
  *(int *)&param_2->field_0x28 = iVar30;
  *(int *)&param_2->field_0x2c = iVar31;
  uVar18 = *(undefined4 *)&param_3->field_0x4;
  uVar19 = *(undefined4 *)&param_3->field_0x8;
  uVar20 = *(undefined4 *)&param_3->field_0xc;
  iVar33 = this_00[10].ObjectIndex;
  iVar21 = this_00[10].ObjectSerialNumber;
  iVar22 = this_00[0xb].ObjectIndex;
  iVar23 = this_00[0xb].ObjectSerialNumber;
  iVar24 = this_00[0xc].ObjectIndex;
  iVar25 = this_00[0xc].ObjectSerialNumber;
  iVar26 = this_00[0xd].ObjectIndex;
  iVar27 = this_00[0xd].ObjectSerialNumber;
  iVar28 = this_00[0xe].ObjectIndex;
  iVar29 = this_00[0xe].ObjectSerialNumber;
  iVar30 = this_00[0xf].ObjectIndex;
  iVar31 = this_00[0xf].ObjectSerialNumber;
  this_00[10].ObjectIndex = *(undefined4 *)&param_3->field_0x0;
  this_00[10].ObjectSerialNumber = uVar18;
  this_00[0xb].ObjectIndex = uVar19;
  this_00[0xb].ObjectSerialNumber = uVar20;
  uVar18 = *(undefined4 *)&param_3->field_0x14;
  uVar19 = *(undefined4 *)&param_3->field_0x18;
  uVar20 = *(undefined4 *)&param_3->field_0x1c;
  this_00[0xc].ObjectIndex = *(undefined4 *)&param_3->field_0x10;
  this_00[0xc].ObjectSerialNumber = uVar18;
  this_00[0xd].ObjectIndex = uVar19;
  this_00[0xd].ObjectSerialNumber = uVar20;
  uVar18 = *(undefined4 *)&param_3->field_0x24;
  uVar19 = *(undefined4 *)&param_3->field_0x28;
  uVar20 = *(undefined4 *)&param_3->field_0x2c;
  this_00[0xe].ObjectIndex = *(undefined4 *)&param_3->field_0x20;
  this_00[0xe].ObjectSerialNumber = uVar18;
  this_00[0xf].ObjectIndex = uVar19;
  this_00[0xf].ObjectSerialNumber = uVar20;
  *(int *)&param_3->field_0x0 = iVar33;
  *(int *)&param_3->field_0x4 = iVar21;
  *(int *)&param_3->field_0x8 = iVar22;
  *(int *)&param_3->field_0xc = iVar23;
  *(int *)&param_3->field_0x10 = iVar24;
  *(int *)&param_3->field_0x14 = iVar25;
  *(int *)&param_3->field_0x18 = iVar26;
  *(int *)&param_3->field_0x1c = iVar27;
  *(int *)&param_3->field_0x20 = iVar28;
  *(int *)&param_3->field_0x24 = iVar29;
  *(int *)&param_3->field_0x28 = iVar30;
  *(int *)&param_3->field_0x2c = iVar31;
  this_00[2].ObjectIndex = (undefined4)param_4;
  this_00[2].ObjectSerialNumber = param_4._4_4_;
  UE::Core::Private::Function::CheckCallable((void *)this_00[4]);
  FVar2 = this_00[4];
  FVar35 = (FWeakObjectPtr)(this_00 + 6);
  if (this_00[9] != (FWeakObjectPtr)0x0) {
    FVar35 = this_00[9];
  }
  uVar34 = (**(code **)(*(longlong *)FVar35 + 8))();
  (*(code *)FVar2)(&local_a8,uVar34);
  this_00[0x10] = local_a8;
  this_00[0x11] = FStack_a0;
  this_00[0x12] = local_98;
  this_00[0x13] = FStack_90;
  this_00[0x14] = local_88;
  this_00[0x15] = FStack_80;
  this_00[0x16] = local_78;
  this_00[0x17] = FStack_70;
  this_00[0x18] = local_68;
  this_00[0x19] = FStack_60;
  this_00[0x1a] = local_58;
  this_00[0x1b] = FStack_50;
  *(double (*) [2])(this_00 + 0x1c) = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])(this_00 + 0x1e) = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])(this_00 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])(this_00 + 0x22) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])(this_00 + 0x24) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])(this_00 + 0x26) = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (**(code **)(this->_padding_ + 0x2f0))(this);
  local_108.Rotation.XY.m128d_f64[0] = (this->SharedTransform).Rotation.XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1] = (this->SharedTransform).Rotation.XY.m128d_f64[1];
  local_108.Rotation.ZW.m128d_f64[0] = (this->SharedTransform).Rotation.ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1] = (this->SharedTransform).Rotation.ZW.m128d_f64[1];
  local_108.Translation.XY.m128d_f64[0] = (this->SharedTransform).Translation.XY.m128d_f64[0];
  local_108.Translation.XY.m128d_f64[1] = (this->SharedTransform).Translation.XY.m128d_f64[1];
  local_108.Translation.ZW.m128d_f64[0] = (this->SharedTransform).Translation.ZW.m128d_f64[0];
  local_108.Translation.ZW.m128d_f64[1] = (this->SharedTransform).Translation.ZW.m128d_f64[1];
  local_108.Scale3D.XY.m128d_f64[0] = (this->SharedTransform).Scale3D.XY.m128d_f64[0];
  local_108.Scale3D.XY.m128d_f64[1] = (this->SharedTransform).Scale3D.XY.m128d_f64[1];
  local_108.Scale3D.ZW.m128d_f64[0] = (this->SharedTransform).Scale3D.ZW.m128d_f64[0];
  local_108.Scale3D.ZW.m128d_f64[1] = (this->SharedTransform).Scale3D.ZW.m128d_f64[1];
  TMulticastDelegate<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnPivotChanged,this,&local_108);
  if (*(longlong *)param_2 != 0) {
    plVar36 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar36 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar36 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar36 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar36 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar36 + 0x10))();
  }
  return;
}

// BeginPivotEditSequence @ 149693550

void __thiscall UTransformProxy::BeginPivotEditSequence(UTransformProxy *this)

{
  TMulticastDelegate<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBeginPivotEdit,this);
  return;
}

// BeginTransformEditSequence @ 149693570

void __thiscall UTransformProxy::BeginTransformEditSequence(UTransformProxy *this)

{
  TMulticastDelegate<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBeginTransformEdit,this);
  return;
}

// EndPivotEditSequence @ 14969dcc0

void __thiscall UTransformProxy::EndPivotEditSequence(UTransformProxy *this)

{
  TMulticastDelegate<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnEndPivotEdit,this);
  return;
}

// EndTransformEditSequence @ 14969dce0

void __thiscall UTransformProxy::EndTransformEditSequence(UTransformProxy *this)

{
  TMulticastDelegate<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnEndTransformEdit,this);
  return;
}

// GetPrivateStaticClass @ 1496a78e0

UClass * __cdecl UTransformProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"TransformProxy",
               &Z_Registration_Info_UClass_UTransformProxy.InnerSingleton,
               StaticRegisterNativesUTransformProxy,0x1e0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformProxy>,
               InternalVTableHelperCtorCaller<UTransformProxy>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformProxy.InnerSingleton;
}

// GetTransform @ 1496a9240

TTransform<double> * __thiscall
UTransformProxy::GetTransform(UTransformProxy *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->SharedTransform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->SharedTransform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->SharedTransform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->SharedTransform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->SharedTransform).Translation.XY.m128d_f64[0];
  dVar4 = (this->SharedTransform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->SharedTransform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->SharedTransform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->SharedTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->SharedTransform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->SharedTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->SharedTransform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// SetTransform @ 1496c05e0

void __thiscall UTransformProxy::SetTransform(UTransformProxy *this,TTransform<double> *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  TMulticastDelegate<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  *this_00;
  TTransform<double> local_68;
  
  bVar1 = this->bSetPivotMode;
  dVar6 = (param_1->Rotation).XY.m128d_f64[1];
  lVar2 = this->_padding_;
  (this->SharedTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->SharedTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->SharedTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->SharedTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  (this->SharedTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->SharedTransform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Translation).ZW.m128d_f64[1];
  (this->SharedTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->SharedTransform).Translation.ZW.m128d_f64[1] = dVar6;
  uVar3 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
  uVar4 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
  uVar5 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  *(undefined4 *)(this->SharedTransform).Scale3D.XY.m128d_f64 =
       *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
  *(undefined4 *)((longlong)(this->SharedTransform).Scale3D.XY.m128d_f64 + 4) = uVar3;
  *(undefined4 *)((this->SharedTransform).Scale3D.XY.m128d_f64 + 1) = uVar4;
  *(undefined4 *)((longlong)(this->SharedTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar5;
  uVar3 = *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4);
  uVar4 = *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1);
  uVar5 = *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
  *(undefined4 *)(this->SharedTransform).Scale3D.ZW.m128d_f64 =
       *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64;
  *(undefined4 *)((longlong)(this->SharedTransform).Scale3D.ZW.m128d_f64 + 4) = uVar3;
  *(undefined4 *)((this->SharedTransform).Scale3D.ZW.m128d_f64 + 1) = uVar4;
  *(undefined4 *)((longlong)(this->SharedTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar5;
  if (bVar1 == false) {
    (**(code **)(lVar2 + 0x300))();
    this_00 = &this->OnTransformChanged;
  }
  else {
    (**(code **)(lVar2 + 0x2f8))();
    this_00 = &this->OnPivotChanged;
  }
  local_68.Rotation.XY.m128d_f64[0] = (this->SharedTransform).Rotation.XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (this->SharedTransform).Rotation.XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (this->SharedTransform).Rotation.ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (this->SharedTransform).Rotation.ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (this->SharedTransform).Translation.XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (this->SharedTransform).Translation.XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (this->SharedTransform).Translation.ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (this->SharedTransform).Translation.ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (this->SharedTransform).Scale3D.XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (this->SharedTransform).Scale3D.XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (this->SharedTransform).Scale3D.ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (this->SharedTransform).Scale3D.ZW.m128d_f64[1];
  TMulticastDelegate<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::Broadcast(this_00,this,&local_68);
  return;
}

// StaticRegisterNativesUTransformProxy @ 1496c2da0

void __cdecl UTransformProxy::StaticRegisterNativesUTransformProxy(void)

{
  return;
}

// UpdateObjectTransforms @ 1496c4630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTransformProxy::UpdateObjectTransforms(UTransformProxy *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  FWeakObjectPtr local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar1 = (this->Objects).ArrayNum;
  this_00 = (this->Objects).AllocatorInstance.Data;
  pFVar12 = this_00 + (longlong)iVar1 * 0x140;
  while( true ) {
    if ((this->Objects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UTransformProxy::FRelativeObject,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (this_00 == pFVar12) break;
    bVar9 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *)this_00,(void *)0x0);
    if (!bVar9) {
      UE::Core::Private::Function::CheckCallable(*(void **)(this_00 + 0x20));
      pcVar2 = *(code **)(this_00 + 0x20);
      pFVar11 = this_00 + 0x30;
      if (*(FScriptContainerElement **)(this_00 + 0x48) != (FScriptContainerElement *)0x0) {
        pFVar11 = *(FScriptContainerElement **)(this_00 + 0x48);
      }
      uVar10 = (**(code **)(*(longlong *)pFVar11 + 8))();
      (*pcVar2)(&local_88,uVar10);
      *(FWeakObjectPtr *)(this_00 + 0x80) = local_88;
      *(undefined8 *)(this_00 + 0x88) = uStack_80;
      *(undefined8 *)(this_00 + 0x90) = local_78;
      *(undefined8 *)(this_00 + 0x98) = uStack_70;
      *(undefined8 *)(this_00 + 0xa0) = local_68;
      *(undefined8 *)(this_00 + 0xa8) = uStack_60;
      *(undefined8 *)(this_00 + 0xb0) = local_58;
      *(undefined8 *)(this_00 + 0xb8) = uStack_50;
      *(undefined8 *)(this_00 + 0xc0) = local_48;
      *(undefined8 *)(this_00 + 200) = uStack_40;
      *(undefined8 *)(this_00 + 0xd0) = local_38;
      *(undefined8 *)(this_00 + 0xd8) = uStack_30;
    }
    uVar10 = *(undefined8 *)(this_00 + 0x88);
    uVar3 = *(undefined8 *)(this_00 + 0x90);
    uVar4 = *(undefined8 *)(this_00 + 0x98);
    (((TTransform<double> *)(this_00 + 0xe0))->Rotation).XY.m128d_f64[0] =
         *(double *)(this_00 + 0x80);
    *(undefined8 *)(this_00 + 0xe8) = uVar10;
    *(undefined8 *)(this_00 + 0xf0) = uVar3;
    *(undefined8 *)(this_00 + 0xf8) = uVar4;
    *(undefined8 *)(this_00 + 0x100) = *(undefined8 *)(this_00 + 0xa0);
    *(undefined8 *)(this_00 + 0x108) = *(undefined8 *)(this_00 + 0xa8);
    *(undefined8 *)(this_00 + 0x110) = *(undefined8 *)(this_00 + 0xb0);
    *(undefined8 *)(this_00 + 0x118) = *(undefined8 *)(this_00 + 0xb8);
    *(undefined8 *)(this_00 + 0x120) = *(undefined8 *)(this_00 + 0xc0);
    *(undefined8 *)(this_00 + 0x128) = *(undefined8 *)(this_00 + 200);
    *(undefined8 *)(this_00 + 0x130) = *(undefined8 *)(this_00 + 0xd0);
    *(undefined8 *)(this_00 + 0x138) = *(undefined8 *)(this_00 + 0xd8);
    UE::Math::TTransform<double>::SetToRelativeTransform
              ((TTransform<double> *)(this_00 + 0xe0),&this->SharedTransform);
    this_00 = this_00 + 0x140;
  }
  dVar5 = (this->SharedTransform).Rotation.XY.m128d_f64[1];
  dVar6 = (this->SharedTransform).Rotation.ZW.m128d_f64[0];
  dVar7 = (this->SharedTransform).Rotation.ZW.m128d_f64[1];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[0] =
       (this->SharedTransform).Rotation.XY.m128d_f64[0];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->SharedTransform).Translation.XY.m128d_f64[0];
  dVar8 = (this->SharedTransform).Translation.XY.m128d_f64[1];
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar6 = (this->SharedTransform).Translation.ZW.m128d_f64[0];
  dVar7 = (this->SharedTransform).Translation.ZW.m128d_f64[1];
  (this->InitialSharedTransform).Translation.XY.m128d_f64[0] = dVar5;
  (this->InitialSharedTransform).Translation.XY.m128d_f64[1] = dVar8;
  dVar5 = (this->SharedTransform).Scale3D.XY.m128d_f64[0];
  dVar8 = (this->SharedTransform).Scale3D.XY.m128d_f64[1];
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[0] = dVar6;
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[1] = dVar7;
  dVar6 = (this->SharedTransform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->SharedTransform).Scale3D.ZW.m128d_f64[1];
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[0] = dVar5;
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[1] = dVar8;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[0] = dVar6;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
  return;
}

// UpdateObjects @ 1496c4800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTransformProxy::UpdateObjects(UTransformProxy *this)

{
  undefined1 auVar1 [16];
  int iVar2;
  FWeakObjectPtr FVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined8 uVar17;
  FWeakObjectPtr FVar18;
  FWeakObjectPtr *pFVar19;
  FWeakObjectPtr *this_00;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  undefined1 local_148 [32];
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_178;
  iVar2 = (this->Objects).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->Objects).AllocatorInstance.Data;
  pFVar19 = this_00 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Objects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UTransformProxy::FRelativeObject,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_158);
    }
    if (this_00 == pFVar19) break;
    local_128.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_128.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_128.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_128.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_128.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_128.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    if ((this->bRotatePerObject == false) || ((this->Objects).ArrayNum < 2)) {
      UE::Math::TTransform<double>::Multiply
                (&local_128,(TTransform<double> *)(this_00 + 0x1c),&this->SharedTransform);
    }
    else {
      auVar1 = *(undefined1 (*) [16])(this_00 + 0x10);
      FVar3 = this_00[0x12];
      FVar18 = this_00[0x13];
      dVar10 = auVar1._0_8_;
      auVar4._8_4_ = auVar1._0_4_;
      auVar4._0_8_ = dVar10;
      auVar4._12_4_ = auVar1._4_4_;
      dVar11 = auVar1._8_8_;
      dVar6 = (double)this_00[0x15] +
              ((this->SharedTransform).Translation.XY.m128d_f64[1] -
              (this->InitialSharedTransform).Translation.XY.m128d_f64[1]);
      local_128.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_128.Translation.XY.m128d_f64[0] =
           (double)this_00[0x14] +
           ((this->SharedTransform).Translation.XY.m128d_f64[0] -
           (this->InitialSharedTransform).Translation.XY.m128d_f64[0]);
      local_128.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar5 = (this->InitialSharedTransform).Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar7 = (this->InitialSharedTransform).Rotation.ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      local_128.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)this_00[0x17] + 0.0,0);
      local_128.Translation.ZW.m128d_f64[0] =
           (double)this_00[0x16] +
           ((this->SharedTransform).Translation.ZW.m128d_f64[0] -
           (this->InitialSharedTransform).Translation.ZW.m128d_f64[0]);
      local_128.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)((double)this_00[0x17] + 0.0) >> 0x20);
      dVar8 = (this->InitialSharedTransform).Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar9 = (this->InitialSharedTransform).Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar12 = dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               (double)FVar18 * dVar8 +
               dVar11 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               (double)FVar3 * dVar9 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar13 = dVar10 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               (double)FVar18 * dVar9 +
               dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               (double)FVar3 * dVar8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_148._8_8_ = auVar4._8_8_;
      dVar14 = (this->SharedTransform).Rotation.ZW.m128d_f64[0];
      dVar15 = (this->SharedTransform).Rotation.ZW.m128d_f64[1];
      dVar6 = dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              (double)FVar18 * dVar5 +
              dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              (double)FVar3 * dVar7 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar5 = (double)local_148._8_8_ * dVar8 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              (double)FVar18 * dVar7 +
              dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              (double)FVar3 * dVar5 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar9 = (this->SharedTransform).Rotation.XY.m128d_f64[0];
      dVar10 = (this->SharedTransform).Rotation.XY.m128d_f64[1];
      local_148._8_4_ = SUB84(dVar6,0);
      local_148._0_8_ = dVar6;
      local_148._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar7 = dVar12 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar10 * dVar5 +
              dVar15 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              (double)local_148._8_8_ * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_128.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
      local_128.Rotation.XY.m128d_f64[0] =
           dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar9 * dVar5 +
           dVar14 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_128.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar7 = dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar15 * dVar5 +
              dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              (double)local_148._8_8_ * dVar14 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar8 = ((double)this_00[0x19] * (this->SharedTransform).Scale3D.XY.m128d_f64[1]) /
              (this->InitialSharedTransform).Scale3D.XY.m128d_f64[1];
      local_128.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
      local_128.Rotation.ZW.m128d_f64[0] =
           dVar12 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar14 * dVar5 +
           dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar6 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_128.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_128.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
      local_128.Scale3D.XY.m128d_f64[0] =
           ((double)this_00[0x18] * (this->SharedTransform).Scale3D.XY.m128d_f64[0]) /
           (this->InitialSharedTransform).Scale3D.XY.m128d_f64[0];
      local_128.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_128.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_128.Scale3D.ZW.m128d_f64[0] =
           ((double)this_00[0x1a] * (this->SharedTransform).Scale3D.ZW.m128d_f64[0]) /
           (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[0];
    }
    bVar16 = FWeakObjectPtr::IsValid(this_00);
    if (bVar16) {
      if ((char)this_00[1].ObjectIndex != '\0') {
        FWeakObjectPtr::Get(this_00);
      }
      UE::Core::Private::Function::CheckCallable((void *)this_00[10]);
      FVar3 = this_00[10];
      FVar18 = (FWeakObjectPtr)(this_00 + 0xc);
      if (this_00[0xf] != (FWeakObjectPtr)0x0) {
        FVar18 = this_00[0xf];
      }
      uVar17 = (**(code **)(*(longlong *)FVar18 + 8))();
      (*(code *)FVar3)(uVar17,&local_128);
    }
    this_00 = this_00 + 0x28;
  }
  return;
}

// UpdateSharedTransform @ 1496c55d0

void __thiscall UTransformProxy::UpdateSharedTransform(UTransformProxy *this)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  __m128d _Var18;
  __m128d _Var19;
  __m128d _Var20;
  __m128d _Var21;
  __m128d _Var22;
  __m128d _Var23;
  bool bVar24;
  TTransform<double> *this_00;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar1 = (this->Objects).ArrayNum;
  if (iVar1 == 0) {
    *&(this->SharedTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->SharedTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->SharedTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->SharedTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->SharedTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->SharedTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else if (iVar1 == 1) {
    pFVar25 = (this->Objects).AllocatorInstance.Data;
    dVar11 = *(double *)(pFVar25 + 0x88);
    (this->SharedTransform).Rotation.XY.m128d_f64[0] = *(double *)(pFVar25 + 0x80);
    (this->SharedTransform).Rotation.XY.m128d_f64[1] = dVar11;
    dVar11 = *(double *)(pFVar25 + 0x98);
    (this->SharedTransform).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar25 + 0x90);
    (this->SharedTransform).Rotation.ZW.m128d_f64[1] = dVar11;
    dVar11 = *(double *)(pFVar25 + 0xa8);
    (this->SharedTransform).Translation.XY.m128d_f64[0] = *(double *)(pFVar25 + 0xa0);
    (this->SharedTransform).Translation.XY.m128d_f64[1] = dVar11;
    dVar11 = *(double *)(pFVar25 + 0xb8);
    (this->SharedTransform).Translation.ZW.m128d_f64[0] = *(double *)(pFVar25 + 0xb0);
    (this->SharedTransform).Translation.ZW.m128d_f64[1] = dVar11;
    dVar11 = *(double *)(pFVar25 + 200);
    (this->SharedTransform).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar25 + 0xc0);
    (this->SharedTransform).Scale3D.XY.m128d_f64[1] = dVar11;
    dVar11 = *(double *)(pFVar25 + 0xd8);
    (this->SharedTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar25 + 0xd0);
    (this->SharedTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
    _Var23 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    _Var22 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    _Var21 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    _Var20 = UE::Math::TTransform<double>::Identity.Translation.XY;
    _Var19 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    _Var18 = UE::Math::TTransform<double>::Identity.Rotation.XY;
    if (((this->Objects).ArrayNum < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar25 = (this->Objects).AllocatorInstance.Data;
    *(double (*) [2])(pFVar25 + 0xe0) = _Var18.m128d_f64;
    *(double (*) [2])(pFVar25 + 0xf0) = _Var19.m128d_f64;
    *(double (*) [2])(pFVar25 + 0x100) = _Var20.m128d_f64;
    *(double (*) [2])(pFVar25 + 0x110) = _Var21.m128d_f64;
    *(double (*) [2])(pFVar25 + 0x120) = _Var22.m128d_f64;
    *(double (*) [2])(pFVar25 + 0x130) = _Var23.m128d_f64;
  }
  else {
    pFVar26 = (this->Objects).AllocatorInstance.Data;
    pFVar25 = pFVar26 + 0xa0;
    pFVar27 = pFVar26 + (longlong)iVar1 * 0x140;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    while( true ) {
      if ((this->Objects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UTransformProxy::FRelativeObject,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar26 == pFVar27) break;
      pFVar26 = pFVar26 + 0x140;
      uVar12 = (double)uVar12 + *(double *)pFVar25;
      uVar14 = (double)uVar14 + *(double *)(pFVar25 + 0x10);
      uVar13 = (double)uVar13 + *(double *)(pFVar25 + 8);
      pFVar25 = pFVar25 + 0x140;
    }
    iVar1 = (this->Objects).ArrayNum;
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
    dVar11 = __real_3ff0000000000000 / (double)iVar1;
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
    (this->SharedTransform).Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (this->SharedTransform).Rotation.XY.m128d_f64[1] = (double)fVar4;
    (this->SharedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar6;
    (this->SharedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar8;
    auVar10._8_4_ = SUB84(dVar11 * (double)uVar13,0);
    auVar10._0_8_ = dVar11 * (double)uVar12;
    auVar10._12_4_ = (int)((ulonglong)(dVar11 * (double)uVar13) >> 0x20);
    *(undefined1 (*) [16])(this->SharedTransform).Translation.XY.m128d_f64 = auVar10;
    (this->SharedTransform).Translation.ZW.m128d_f64[0] = dVar11 * (double)uVar14;
    (this->SharedTransform).Translation.ZW.m128d_f64[1] = 0.0;
    (this->SharedTransform).Scale3D.XY.m128d_f64[0] = (double)fVar3;
    (this->SharedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar5;
    (this->SharedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar7;
    (this->SharedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar9;
    pFVar25 = (this->Objects).AllocatorInstance.Data;
    pFVar26 = pFVar25 + (longlong)iVar1 * 0x140;
    this_00 = (TTransform<double> *)(pFVar25 + 0xe0);
    while( true ) {
      if ((this->Objects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UTransformProxy::FRelativeObject,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar25 == pFVar26) break;
      dVar11 = this_00[-1].Rotation.XY.m128d_f64[1];
      dVar15 = this_00[-1].Rotation.ZW.m128d_f64[0];
      dVar16 = this_00[-1].Rotation.ZW.m128d_f64[1];
      (this_00->Rotation).XY.m128d_f64[0] = this_00[-1].Rotation.XY.m128d_f64[0];
      (this_00->Rotation).XY.m128d_f64[1] = dVar11;
      dVar11 = this_00[-1].Translation.XY.m128d_f64[0];
      dVar17 = this_00[-1].Translation.XY.m128d_f64[1];
      (this_00->Rotation).ZW.m128d_f64[0] = dVar15;
      (this_00->Rotation).ZW.m128d_f64[1] = dVar16;
      dVar15 = this_00[-1].Translation.ZW.m128d_f64[0];
      dVar16 = this_00[-1].Translation.ZW.m128d_f64[1];
      (this_00->Translation).XY.m128d_f64[0] = dVar11;
      (this_00->Translation).XY.m128d_f64[1] = dVar17;
      dVar11 = this_00[-1].Scale3D.XY.m128d_f64[0];
      dVar17 = this_00[-1].Scale3D.XY.m128d_f64[1];
      (this_00->Translation).ZW.m128d_f64[0] = dVar15;
      (this_00->Translation).ZW.m128d_f64[1] = dVar16;
      dVar15 = this_00[-1].Scale3D.ZW.m128d_f64[0];
      dVar16 = this_00[-1].Scale3D.ZW.m128d_f64[1];
      (this_00->Scale3D).XY.m128d_f64[0] = dVar11;
      (this_00->Scale3D).XY.m128d_f64[1] = dVar17;
      (this_00->Scale3D).ZW.m128d_f64[0] = dVar15;
      (this_00->Scale3D).ZW.m128d_f64[1] = dVar16;
      UE::Math::TTransform<double>::SetToRelativeTransform(this_00,&this->SharedTransform);
      pFVar25 = pFVar25 + 0x140;
      this_00 = (TTransform<double> *)&this_00[3].Translation;
    }
  }
  dVar11 = (this->SharedTransform).Rotation.XY.m128d_f64[1];
  dVar15 = (this->SharedTransform).Rotation.ZW.m128d_f64[0];
  dVar16 = (this->SharedTransform).Rotation.ZW.m128d_f64[1];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[0] =
       (this->SharedTransform).Rotation.XY.m128d_f64[0];
  (this->InitialSharedTransform).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (this->SharedTransform).Translation.XY.m128d_f64[0];
  dVar17 = (this->SharedTransform).Translation.XY.m128d_f64[1];
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[0] = dVar15;
  (this->InitialSharedTransform).Rotation.ZW.m128d_f64[1] = dVar16;
  dVar15 = (this->SharedTransform).Translation.ZW.m128d_f64[0];
  dVar16 = (this->SharedTransform).Translation.ZW.m128d_f64[1];
  (this->InitialSharedTransform).Translation.XY.m128d_f64[0] = dVar11;
  (this->InitialSharedTransform).Translation.XY.m128d_f64[1] = dVar17;
  dVar11 = (this->SharedTransform).Scale3D.XY.m128d_f64[0];
  dVar17 = (this->SharedTransform).Scale3D.XY.m128d_f64[1];
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[0] = dVar15;
  (this->InitialSharedTransform).Translation.ZW.m128d_f64[1] = dVar16;
  dVar15 = (this->SharedTransform).Scale3D.ZW.m128d_f64[0];
  dVar16 = (this->SharedTransform).Scale3D.ZW.m128d_f64[1];
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[0] = dVar11;
  (this->InitialSharedTransform).Scale3D.XY.m128d_f64[1] = dVar17;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[0] = dVar15;
  (this->InitialSharedTransform).Scale3D.ZW.m128d_f64[1] = dVar16;
  return;
}

