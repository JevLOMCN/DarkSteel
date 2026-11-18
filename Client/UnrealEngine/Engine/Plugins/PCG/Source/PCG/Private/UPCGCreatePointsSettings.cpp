// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b30780

UClass * __cdecl UPCGCreatePointsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePointsSettings",
               &Z_Registration_Info_UClass_UPCGCreatePointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePointsSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCreatePointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePointsSettings.InnerSingleton;
}

// UPCGCreatePointsSettings @ 149b55dd0

UPCGCreatePointsSettings * __thiscall
UPCGCreatePointsSettings::UPCGCreatePointsSettings
          (UPCGCreatePointsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCreatePointsSettings__6B_;
  (this->PointsToCreate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsToCreate).ArrayNum = 0;
  (this->PointsToCreate).ArrayMax = 0;
  this->CoordinateSpace = World;
  this->bCullPointsOutsideVolume = false;
  return this;
}

// UPCGCreatePointsSettings @ 149b55e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UPCGCreatePointsSettings * __thiscall
UPCGCreatePointsSettings::UPCGCreatePointsSettings(UPCGCreatePointsSettings *this)

{
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FObjectInitializer *pFVar5;
  UPCGCreatePointsSettings *pUVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_138 [32];
  double *local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar5 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar5);
  local_88 = 0x3f800000;
  this->CoordinateSpace = World;
  this->bCullPointsOutsideVolume = false;
  this->_padding_ = (longlong)&___7UPCGCreatePointsSettings__6B_;
  pTVar1 = &this->PointsToCreate;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PointsToCreate).ArrayNum = 0;
  (this->PointsToCreate).ArrayMax = 0;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  uStack_50 = 0;
  local_28 = 0x3f000000;
  uStack_20 = 0xffffffffffffffff;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar10,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar9);
  uStack_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                             0x20) ^ uVar10,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar9);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  uStack_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar10,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar9);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  bVar3 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar3) {
    local_28 = CONCAT44(local_28._4_4_,0x3f800000);
  }
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_e8) &&
     (lVar7 = (longlong)(this->PointsToCreate).ArrayMax,
     (FScriptContainerElement *)&local_e8 < pFVar8 + lVar7 * 0xd0)) {
    local_100 = (longlong)(this->PointsToCreate).ArrayNum;
    local_f8 = 0xd0;
    local_118 = &local_e8;
    local_110 = pFVar8;
    local_108 = lVar7;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UPCGCreatePointsSettings *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar4 = (this->PointsToCreate).ArrayNum;
  if (iVar4 == (this->PointsToCreate).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10d0,&pTVar1->AllocatorInstance,&(this->PointsToCreate).ArrayMax);
  }
  (this->PointsToCreate).ArrayNum = iVar4 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0xd0;
  *(double *)pFVar8 = local_e8;
  *(double *)(pFVar8 + 8) = dStack_e0;
  *(double *)(pFVar8 + 0x10) = local_d8;
  *(double *)(pFVar8 + 0x18) = dStack_d0;
  *(undefined8 *)(pFVar8 + 0x20) = local_c8._0_8_;
  *(undefined8 *)(pFVar8 + 0x28) = local_c8._8_8_;
  *(double *)(pFVar8 + 0x30) = local_b8;
  *(double *)(pFVar8 + 0x38) = dStack_b0;
  *(undefined8 *)(pFVar8 + 0x40) = local_a8._0_8_;
  *(undefined8 *)(pFVar8 + 0x48) = local_a8._8_8_;
  *(double *)(pFVar8 + 0x50) = local_98;
  *(double *)(pFVar8 + 0x58) = dStack_90;
  *(undefined8 *)(pFVar8 + 0x60) = local_88;
  *(undefined8 *)(pFVar8 + 0x68) = uStack_80;
  *(undefined8 *)(pFVar8 + 0x70) = local_78;
  *(undefined8 *)(pFVar8 + 0x78) = uStack_70;
  *(double *)(pFVar8 + 0x80) = local_68;
  *(double *)(pFVar8 + 0x88) = dStack_60;
  *(double *)(pFVar8 + 0x90) = local_58;
  *(undefined8 *)(pFVar8 + 0x98) = uStack_50;
  *(undefined8 *)(pFVar8 + 0xa0) = local_48;
  *(undefined8 *)(pFVar8 + 0xa8) = uStack_40;
  *(undefined8 *)(pFVar8 + 0xb0) = local_38;
  *(undefined8 *)(pFVar8 + 0xb8) = uStack_30;
  *(undefined8 *)(pFVar8 + 0xc0) = local_28;
  *(undefined8 *)(pFVar8 + 200) = uStack_20;
  return this;
}

// ~UPCGCreatePointsSettings @ 149b58d20

void __thiscall UPCGCreatePointsSettings::~UPCGCreatePointsSettings(UPCGCreatePointsSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGCreatePointsSettings__6B_;
  pFVar1 = (this->PointsToCreate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a510

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreatePointsSettings::CreateElement
          (UPCGCreatePointsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGCreatePointsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreatePointsElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b90200

UClass * __cdecl UPCGCreatePointsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePointsSettings",
               &Z_Registration_Info_UClass_UPCGCreatePointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePointsSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCreatePointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePointsSettings.InnerSingleton;
}

// InputPinProperties @ 149b92220

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePointsSettings::InputPinProperties
          (UPCGCreatePointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93f10

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePointsSettings::OutputPinProperties
          (UPCGCreatePointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95970

void __thiscall UPCGCreatePointsSettings::PostLoad(UPCGCreatePointsSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGCreatePointsSettings @ 149b983e0

void __cdecl UPCGCreatePointsSettings::StaticRegisterNativesUPCGCreatePointsSettings(void)

{
  return;
}

