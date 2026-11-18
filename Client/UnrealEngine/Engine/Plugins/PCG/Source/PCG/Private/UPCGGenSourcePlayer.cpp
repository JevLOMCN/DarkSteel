// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149f1d160

UClass * __cdecl UPCGGenSourcePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourcePlayer",
               &Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton,
               StaticRegisterNativesUPCGGenSourcePlayer,0x250,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGenSourcePlayer>,
               InternalVTableHelperCtorCaller<UPCGGenSourcePlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton;
}

// UPCGGenSourcePlayer @ 149f32390

UPCGGenSourcePlayer * __thiscall
UPCGGenSourcePlayer::UPCGGenSourcePlayer(UPCGGenSourcePlayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGenSourceBase__;
  (this->PlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ViewFrustum).bIsSet = false;
  return this;
}

// UPCGGenSourcePlayer @ 149f323d0

UPCGGenSourcePlayer * __thiscall
UPCGGenSourcePlayer::UPCGGenSourcePlayer(UPCGGenSourcePlayer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGenSourceBase__;
  (this->PlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ViewFrustum).bIsSet = false;
  return this;
}

// ~UPCGGenSourcePlayer @ 149f34750

void __thiscall UPCGGenSourcePlayer::~UPCGGenSourcePlayer(UPCGGenSourcePlayer *this)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGenSourceBase__;
  if ((this->ViewFrustum).bIsSet != false) {
    FVar1 = (this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar1 = (this->ViewFrustum).TypedValue.Planes.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
  }
  this->_padding_ = (longlong)&___7IPCGGenSourceBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 149f49780

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourcePlayer::GetDirection
          (UPCGGenSourcePlayer *this,TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  TRotator<double> local_58;
  undefined1 local_40 [24];
  TVector<double> local_28;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar4 + 0x840))(pUVar4,local_40,&local_58);
    pTVar5 = UE::Math::TRotator<double>::Vector(&local_58,&local_28);
    __return_storage_ptr__->bIsSet = true;
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    dVar1 = (pTVar5->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar2;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetPosition @ 149f4ca90

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourcePlayer::GetPosition
          (UPCGGenSourcePlayer *this,TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20 [24];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x840))(pUVar2,&local_38,local_20);
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = local_38;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dStack_30;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = local_28;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4d220

UClass * __cdecl UPCGGenSourcePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourcePlayer",
               &Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton,
               StaticRegisterNativesUPCGGenSourcePlayer,0x250,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGenSourcePlayer>,
               InternalVTableHelperCtorCaller<UPCGGenSourcePlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourcePlayer.InnerSingleton;
}

// GetViewFrustum @ 149f502a0

/* WARNING: Type propagation algorithm not settling */

TOptional<FConvexVolume> * __thiscall
UPCGGenSourcePlayer::GetViewFrustum
          (UPCGGenSourcePlayer *this,TOptional<FConvexVolume> *__return_storage_ptr__,bool param_1)

{
  bool bVar1;
  
  __return_storage_ptr__->bIsSet = false;
  bVar1 = (bool)(this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData[0xf8];
  __return_storage_ptr__->bIsSet = bVar1;
  if (bVar1 != false) {
    FConvexVolume::FConvexVolume
              (&__return_storage_ptr__->TypedValue,(FConvexVolume *)&this->_padding_);
  }
  return __return_storage_ptr__;
}

// IsLocal @ 149f52690

bool __thiscall UPCGGenSourcePlayer::IsLocal(UPCGGenSourcePlayer *this)

{
  undefined1 uVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar2 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f526b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)pUVar2 + 0x7f0))
                      (pUVar2,*(code **)(*(longlong *)pUVar2 + 0x7f0));
    return (bool)uVar1;
  }
  return false;
}

// SetPlayerController @ 149f61230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGGenSourcePlayer::SetPlayerController(UPCGGenSourcePlayer *this,APlayerController *param_1)

{
  APlayerController *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APlayerController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->PlayerController).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUPCGGenSourcePlayer @ 149f63960

void __cdecl UPCGGenSourcePlayer::StaticRegisterNativesUPCGGenSourcePlayer(void)

{
  return;
}

// Tick @ 149f64da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGGenSourcePlayer::Tick(UPCGGenSourcePlayer *this)

{
  longlong *plVar1;
  uchar *puVar2;
  ForElementType<UE::Math::TPlane<double>_> *pFVar3;
  void *pvVar4;
  UGameViewportClient *pUVar5;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  bool bVar8;
  char cVar9;
  APlayerController *this_00;
  ULocalPlayer *pUVar10;
  longlong *_Dst;
  ForElementType<UE::Math::TPlane<double>_> *_Dst_00;
  ForElementType<UE::Math::TPlane<double>_> FVar11;
  longlong lVar12;
  undefined1 auStackY_798 [32];
  ForElementType<UE::Math::TPlane<double>_> local_758 [2];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  TMatrix<double> local_528;
  TMatrix<double> local_4a8;
  undefined8 local_428;
  undefined8 uStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  TMatrix<double> local_3e8;
  FConvexVolume local_368;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_798;
  plVar1 = &this->_padding_;
  if ((local_758 != (ForElementType<UE::Math::TPlane<double>_> *)plVar1) &&
     ((this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData[0xf8] != '\0')) {
    pvVar4 = *(void **)((this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData +
                       0xd8);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    pvVar4 = *(void **)((this->ViewFrustum).TypedValue.Planes.AllocatorInstance.InlineData + 0x98);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    (this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData[0xf8] = '\0';
  }
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar8) {
    this_00 = (APlayerController *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar10 = APlayerController::GetLocalPlayer(this_00);
    if ((pUVar10 != (ULocalPlayer *)0x0) &&
       (pUVar5 = (pUVar10->ViewportClient).field0_0x0.DebugPtr, pUVar5 != (UGameViewportClient *)0x0
       )) {
      local_528.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_528.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_4a8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_4a8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_400 = 0;
      local_538 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
      local_548 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      uStack_540 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      local_418 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_410 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_528.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_528.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_528.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_528.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_528.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_528.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_528.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_528.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_528.M[2][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
      local_528.M[2][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
      local_528.M[2][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
      local_528.M[2][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
      local_528.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_528.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_528.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_528.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_4a8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_4a8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_4a8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_4a8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_4a8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_4a8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_4a8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_4a8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_4a8.M[2][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
      local_4a8.M[2][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
      local_4a8.M[2][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
      local_4a8.M[2][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
      local_4a8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_4a8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_4a8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_4a8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_428 = 0;
      uStack_420 = 0;
      local_408 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3f8 = 0;
      cVar9 = (**(code **)(pUVar10->_padding_ + 0x368))
                        (pUVar10,pUVar5->Viewport,&local_548,0xffffffff);
      if (cVar9 != '\0') {
        local_3e8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
        local_3e8.M[1][1] = _UNK_15061cbc8;
        local_3e8.M[0][2] = 0.0;
        local_3e8.M[0][3] = 0.0;
        local_3e8.M[1][2] = 0.0;
        local_3e8.M[1][3] = 0.0;
        local_3e8.M[2][0] = 0.0;
        local_3e8.M[2][1] = 0.0;
        local_3e8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
        local_3e8.M[0][1] = _UNK_150689518;
        local_3e8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
        local_3e8.M[2][3] = _UNK_150689518;
        local_3e8.M[3][0]._0_4_ = (uint)local_548 ^ (uint)__xmm_80000000000000008000000000000000;
        local_3e8.M[3][0]._4_4_ = local_548._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
        local_3e8.M[3][1]._0_4_ = (uint)uStack_540 ^ _UNK_15066df78;
        local_3e8.M[3][1]._4_4_ = uStack_540._4_4_ ^ _UNK_15066df7c;
        local_368.Planes.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Math::TPlane<double>_>)0x0;
        local_3e8.M[3][2] =
             (double)CONCAT44((uint)((ulonglong)local_538 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)local_538 ^ (uint)__xmm_80000000000000008000000000000000);
        local_3e8.M[3][3] = __real_3ff0000000000000;
        local_368.Planes.ArrayNum = 0;
        local_368.Planes.ArrayMax = 6;
        local_368.PermutedPlanes.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Math::TPlane<double>_>)0x0;
        local_368.PermutedPlanes.ArrayNum = 0;
        local_368.PermutedPlanes.ArrayMax = 8;
        VectorMatrixMultiply(&local_168,&local_3e8,&local_528);
        VectorMatrixMultiply(&local_e8,&local_168,&local_4a8);
        GetViewFrustumBounds(&local_368,&local_e8,true,true);
        if (&local_368 != (FConvexVolume *)plVar1) {
          if ((this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData[0xf8] !=
              '\0') {
            pvVar4 = *(void **)((this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.
                                InlineData + 0xd8);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            pvVar4 = *(void **)((this->ViewFrustum).TypedValue.Planes.AllocatorInstance.InlineData +
                               0x98);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
          }
          lVar12 = (longlong)local_368.Planes.ArrayNum;
          puVar2 = (this->ViewFrustum).TypedValue.Planes.AllocatorInstance.InlineData + 0xac;
          pTVar6 = &(this->ViewFrustum).TypedValue.Planes;
          (pTVar6->AllocatorInstance).InlineData[0x98] = '\0';
          (pTVar6->AllocatorInstance).InlineData[0x99] = '\0';
          (pTVar6->AllocatorInstance).InlineData[0x9a] = '\0';
          (pTVar6->AllocatorInstance).InlineData[0x9b] = '\0';
          (pTVar6->AllocatorInstance).InlineData[0x9c] = '\0';
          (pTVar6->AllocatorInstance).InlineData[0x9d] = '\0';
          (pTVar6->AllocatorInstance).InlineData[0x9e] = '\0';
          (pTVar6->AllocatorInstance).InlineData[0x9f] = '\0';
          *(int *)((this->ViewFrustum).TypedValue.Planes.AllocatorInstance.InlineData + 0xa8) =
               local_368.Planes.ArrayNum;
          FVar11 = (ForElementType<UE::Math::TPlane<double>_>)&local_368;
          if (local_368.Planes.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Math::TPlane<double>_>)0x0) {
            FVar11 = local_368.Planes.AllocatorInstance.SecondaryData;
          }
          if (local_368.Planes.ArrayNum == 0) {
            puVar2[0] = '\x06';
            puVar2[1] = '\0';
            puVar2[2] = '\0';
            puVar2[3] = '\0';
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                      (0x20,0x10,local_368.Planes.ArrayNum,0,
                       (ForElementType<UE::Math::TPlane<double>_> *)plVar1,local_368.Planes.ArrayNum
                       ,(int *)puVar2);
            _Dst = *(longlong **)
                    ((this->ViewFrustum).TypedValue.Planes.AllocatorInstance.InlineData + 0x98);
            if (_Dst == (longlong *)0x0) {
              _Dst = plVar1;
            }
            memcpy(_Dst,(void *)FVar11,lVar12 << 5);
          }
          lVar12 = (longlong)local_368.PermutedPlanes.ArrayNum;
          pFVar3 = (ForElementType<UE::Math::TPlane<double>_> *)
                   ((this->ViewFrustum).TypedValue.Planes.AllocatorInstance.InlineData + 0xb8);
          pTVar7 = &(this->ViewFrustum).TypedValue.PermutedPlanes;
          (pTVar7->AllocatorInstance).InlineData[0xd8] = '\0';
          (pTVar7->AllocatorInstance).InlineData[0xd9] = '\0';
          (pTVar7->AllocatorInstance).InlineData[0xda] = '\0';
          (pTVar7->AllocatorInstance).InlineData[0xdb] = '\0';
          (pTVar7->AllocatorInstance).InlineData[0xdc] = '\0';
          (pTVar7->AllocatorInstance).InlineData[0xdd] = '\0';
          (pTVar7->AllocatorInstance).InlineData[0xde] = '\0';
          (pTVar7->AllocatorInstance).InlineData[0xdf] = '\0';
          *(int *)((this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData + 0xe8
                  ) = local_368.PermutedPlanes.ArrayNum;
          puVar2 = (this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData + 0xec
          ;
          FVar11 = (ForElementType<UE::Math::TPlane<double>_>)&local_368.PermutedPlanes;
          if (local_368.PermutedPlanes.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Math::TPlane<double>_>)0x0) {
            FVar11 = local_368.PermutedPlanes.AllocatorInstance.SecondaryData;
          }
          if (local_368.PermutedPlanes.ArrayNum == 0) {
            puVar2[0] = '\b';
            puVar2[1] = '\0';
            puVar2[2] = '\0';
            puVar2[3] = '\0';
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                      (0x20,0x10,local_368.PermutedPlanes.ArrayNum,0,pFVar3,
                       local_368.PermutedPlanes.ArrayNum,(int *)puVar2);
            _Dst_00 = *(ForElementType<UE::Math::TPlane<double>_> **)
                       ((this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData +
                       0xd8);
            if (_Dst_00 == (ForElementType<UE::Math::TPlane<double>_> *)0x0) {
              _Dst_00 = pFVar3;
            }
            memcpy(_Dst_00,(void *)FVar11,lVar12 << 5);
          }
          (this->ViewFrustum).TypedValue.PermutedPlanes.AllocatorInstance.InlineData[0xf8] = '\x01';
        }
        if (local_368.PermutedPlanes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_368.PermutedPlanes.AllocatorInstance.SecondaryData);
        }
        if (local_368.Planes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FMemory::Free((void *)local_368.Planes.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return;
}

// _getUObject @ 149f6f600

UObject * __thiscall UPCGGenSourcePlayer::_getUObject(UPCGGenSourcePlayer *this)

{
  return (UObject *)&this[-1].ViewFrustum.TypedValue.PermutedPlanes.AllocatorInstance.field_0x108;
}

