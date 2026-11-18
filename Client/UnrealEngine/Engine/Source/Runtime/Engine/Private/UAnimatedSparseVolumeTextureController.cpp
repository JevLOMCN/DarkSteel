// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 148703130

UClass * __cdecl UAnimatedSparseVolumeTextureController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimatedSparseVolumeTextureController",
               &Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton,
               StaticRegisterNativesUAnimatedSparseVolumeTextureController,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimatedSparseVolumeTextureController>,
               InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTextureController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton;
}

// UAnimatedSparseVolumeTextureController @ 148712d50

UAnimatedSparseVolumeTextureController * __thiscall
UAnimatedSparseVolumeTextureController::UAnimatedSparseVolumeTextureController
          (UAnimatedSparseVolumeTextureController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FrameRate = 24.0;
  this->MipLevel = 0;
  this->_padding_ = (longlong)&___7UAnimatedSparseVolumeTextureController__6B_;
  (this->SparseVolumeTexture).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  this->bBlockingStreamingRequests = false;
  return this;
}

// UAnimatedSparseVolumeTextureController @ 148712d90

UAnimatedSparseVolumeTextureController * __thiscall
UAnimatedSparseVolumeTextureController::UAnimatedSparseVolumeTextureController
          (UAnimatedSparseVolumeTextureController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FrameRate = 24.0;
  this->MipLevel = 0;
  this->_padding_ = (longlong)&___7UAnimatedSparseVolumeTextureController__6B_;
  (this->SparseVolumeTexture).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  this->bBlockingStreamingRequests = false;
  return this;
}

// ~UAnimatedSparseVolumeTextureController @ 148714ba0

void __thiscall
UAnimatedSparseVolumeTextureController::~UAnimatedSparseVolumeTextureController
          (UAnimatedSparseVolumeTextureController *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetCurrentFrame @ 14873aa10

USparseVolumeTextureFrame * __thiscall
UAnimatedSparseVolumeTextureController::GetCurrentFrame
          (UAnimatedSparseVolumeTextureController *this)

{
  USparseVolumeTexture *pUVar1;
  int iVar2;
  USparseVolumeTextureFrame *pUVar3;
  uint uVar4;
  float fVar5;
  
  pUVar1 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
  if ((pUVar1 != (USparseVolumeTexture *)0x0) && ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0)) {
    pUVar1 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
    if ((pUVar1 == (USparseVolumeTexture *)0x0) || ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) != 0))
    {
      fVar5 = 0.0;
    }
    else {
      iVar2 = (**(code **)(*(longlong *)(this->SparseVolumeTexture).field0_0x0.DebugPtr + 0x2c8))();
      fVar5 = FGenericPlatformMath::Fmod(this->Time * this->FrameRate,(float)iVar2);
    }
    uVar4 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    pUVar3 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       ((this->SparseVolumeTexture).field0_0x0.DebugPtr,uVar4 >> 0x10 ^ uVar4,
                        this->FrameRate,fVar5,(float)this->MipLevel,this->bBlockingStreamingRequests
                        ,true);
    return pUVar3;
  }
  return (USparseVolumeTextureFrame *)0x0;
}

// GetCurrentFramesForInterpolation @ 14873aae0

void __thiscall
UAnimatedSparseVolumeTextureController::GetCurrentFramesForInterpolation
          (UAnimatedSparseVolumeTextureController *this,USparseVolumeTextureFrame **param_1,
          USparseVolumeTextureFrame **param_2,float *param_3)

{
  bool bVar1;
  USparseVolumeTexture *pUVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EAX;
  USparseVolumeTextureFrame *pUVar5;
  int iVar6;
  undefined1 extraout_var [12];
  float fVar7;
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 uVar11;
  undefined1 auVar8 [16];
  
  pUVar2 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
  if ((pUVar2 != (USparseVolumeTexture *)0x0) && ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0)) {
    pUVar2 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
    uVar3 = 0;
    if ((pUVar2 == (USparseVolumeTexture *)0x0) ||
       (uVar3 = *(uint *)&pUVar2->field_0x8, (uVar3 >> 0x1e & 1) != 0)) {
      fVar10 = 0.0;
      uVar11 = 0;
    }
    else {
      iVar6 = (**(code **)(*(longlong *)(this->SparseVolumeTexture).field0_0x0.DebugPtr + 0x2c8))();
      fVar10 = FGenericPlatformMath::Fmod(this->Time * this->FrameRate,(float)iVar6);
      uVar11 = extraout_var._0_4_;
      uVar3 = extraout_EAX;
    }
    auVar9._4_4_ = uVar11;
    auVar9._0_4_ = fVar10;
    iVar6 = (int)fVar10;
    fVar7 = fVar10;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar10)) {
      auVar9._8_4_ = uVar11;
      auVar9._12_4_ = uVar11;
      auVar8._8_8_ = auVar9._8_8_;
      auVar8._4_4_ = fVar10;
      auVar8._0_4_ = fVar10;
      uVar3 = movmskps(uVar3,auVar8);
      fVar7 = (float)(int)(iVar6 - (uVar3 & 1));
    }
    *param_3 = fVar10 - fVar7;
    uVar3 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    pUVar5 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       ((this->SparseVolumeTexture).field0_0x0.DebugPtr,uVar3,this->FrameRate,fVar10
                        ,(float)this->MipLevel,this->bBlockingStreamingRequests,true);
    *param_1 = pUVar5;
    iVar6 = this->MipLevel;
    bVar1 = this->bBlockingStreamingRequests;
    iVar4 = (**(code **)(*(longlong *)(this->SparseVolumeTexture).field0_0x0.DebugPtr + 0x2c8))();
    pUVar5 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       ((this->SparseVolumeTexture).field0_0x0.DebugPtr,uVar3,this->FrameRate,
                        (float)(((int)fVar10 + 1) % iVar4),(float)iVar6,bVar1,true);
    *param_2 = pUVar5;
  }
  return;
}

// GetDuration @ 14873ae00

float __thiscall
UAnimatedSparseVolumeTextureController::GetDuration(UAnimatedSparseVolumeTextureController *this)

{
  USparseVolumeTexture *pUVar1;
  int iVar2;
  
  pUVar1 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
  if ((pUVar1 != (USparseVolumeTexture *)0x0) && ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0)) {
    iVar2 = (**(code **)(*(longlong *)(this->SparseVolumeTexture).field0_0x0.DebugPtr + 0x2c8))();
    return (float)iVar2 / (this->FrameRate + __real_322bcc77);
  }
  return 0.0;
}

// GetFractionalFrameIndex @ 14873bdb0

float __thiscall
UAnimatedSparseVolumeTextureController::GetFractionalFrameIndex
          (UAnimatedSparseVolumeTextureController *this)

{
  USparseVolumeTexture *pUVar1;
  int iVar2;
  float fVar3;
  
  pUVar1 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
  if ((pUVar1 != (USparseVolumeTexture *)0x0) && ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0)) {
    iVar2 = (**(code **)(*(longlong *)(this->SparseVolumeTexture).field0_0x0.DebugPtr + 0x2c8))();
    fVar3 = FGenericPlatformMath::Fmod(this->FrameRate * this->Time,(float)iVar2);
    return fVar3;
  }
  return 0.0;
}

// GetFrameByIndex @ 14873bf90

USparseVolumeTextureFrame * __thiscall
UAnimatedSparseVolumeTextureController::GetFrameByIndex
          (UAnimatedSparseVolumeTextureController *this,int param_1)

{
  USparseVolumeTexture *pUVar1;
  USparseVolumeTextureFrame *pUVar2;
  uint uVar3;
  
  pUVar1 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
  if ((pUVar1 != (USparseVolumeTexture *)0x0) && ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0)) {
    uVar3 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    pUVar2 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       ((this->SparseVolumeTexture).field0_0x0.DebugPtr,uVar3 >> 0x10 ^ uVar3,0.0,
                        (float)param_1,(float)this->MipLevel,this->bBlockingStreamingRequests,false)
    ;
    return pUVar2;
  }
  return (USparseVolumeTextureFrame *)0x0;
}

// GetPrivateStaticClass @ 14873e6a0

UClass * __cdecl UAnimatedSparseVolumeTextureController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimatedSparseVolumeTextureController",
               &Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton,
               StaticRegisterNativesUAnimatedSparseVolumeTextureController,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimatedSparseVolumeTextureController>,
               InternalVTableHelperCtorCaller<UAnimatedSparseVolumeTextureController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.InnerSingleton;
}

// Pause @ 14874ee30

void __thiscall
UAnimatedSparseVolumeTextureController::Pause(UAnimatedSparseVolumeTextureController *this)

{
  this->bIsPlaying = false;
  return;
}

// Play @ 14874ee40

void __thiscall
UAnimatedSparseVolumeTextureController::Play(UAnimatedSparseVolumeTextureController *this)

{
  this->bIsPlaying = true;
  return;
}

// StaticRegisterNativesUAnimatedSparseVolumeTextureController @ 14875d0f0

void __cdecl
UAnimatedSparseVolumeTextureController::StaticRegisterNativesUAnimatedSparseVolumeTextureController
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 14875d200

void __thiscall
UAnimatedSparseVolumeTextureController::Stop(UAnimatedSparseVolumeTextureController *this)

{
  if (this->bIsPlaying != false) {
    this->bIsPlaying = false;
    this->Time = 0.0;
  }
  return;
}

// Update @ 14875e400

void __thiscall
UAnimatedSparseVolumeTextureController::Update
          (UAnimatedSparseVolumeTextureController *this,float param_1)

{
  USparseVolumeTexture *pUVar1;
  float fVar2;
  
  pUVar1 = (this->SparseVolumeTexture).field0_0x0.DebugPtr;
  if (((pUVar1 != (USparseVolumeTexture *)0x0) && ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0))
     && (this->bIsPlaying != false)) {
    fVar2 = GetDuration(this);
    fVar2 = FGenericPlatformMath::Fmod(param_1 + this->Time,fVar2 + __real_322bcc77);
    this->Time = fVar2;
  }
  return;
}

// execGetCurrentFrame @ 148760a70

void __cdecl
UAnimatedSparseVolumeTextureController::execGetCurrentFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  USparseVolumeTextureFrame *pUVar2;
  uint uVar3;
  float fVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 1) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 1) + 8) >> 0x1e & 1) == 0)) {
    if ((*(longlong *)(param_1 + 1) == 0) ||
       ((*(uint *)(*(longlong *)(param_1 + 1) + 8) >> 0x1e & 1) != 0)) {
      fVar4 = 0.0;
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 1) + 0x2c8))();
      fVar4 = FGenericPlatformMath::Fmod
                        (*(float *)&param_1[1].field_0x8 * *(float *)&param_1[1].field_0x10,
                         (float)iVar1);
    }
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    pUVar2 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       (*(USparseVolumeTexture **)(param_1 + 1),uVar3 >> 0x10 ^ uVar3,
                        *(float *)&param_1[1].field_0x10,fVar4,(float)*(int *)&param_1[1].field_0x14
                        ,(bool)param_1[1].field_0x18,true);
    *(USparseVolumeTextureFrame **)param_3 = pUVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentFramesForInterpolation @ 148760b70

void __cdecl
UAnimatedSparseVolumeTextureController::execGetCurrentFramesForInterpolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  bool bVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  int iVar5;
  uint extraout_EAX;
  uint uVar6;
  int iVar7;
  USparseVolumeTextureFrame *pUVar8;
  uchar *puVar9;
  float *pfVar10;
  uchar *puVar11;
  undefined1 extraout_var [12];
  float fVar12;
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 uVar16;
  float local_res8 [2];
  uchar local_res10 [16];
  uchar local_res20 [8];
  undefined1 auVar13 [16];
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_res10;
  if (puVar3 != (uchar *)0x0) {
    puVar9 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res8[0] = 0.0;
  fVar15 = 0.0;
  uVar16 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar11 = local_res20;
  if (puVar3 != (uchar *)0x0) {
    puVar11 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pfVar10 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar10 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 1) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 1) + 8) >> 0x1e & 1) == 0)) {
    uVar6 = 0;
    if ((*(longlong *)(param_1 + 1) != 0) &&
       (uVar6 = *(uint *)(*(longlong *)(param_1 + 1) + 8), (uVar6 >> 0x1e & 1) == 0)) {
      iVar5 = (**(code **)(**(longlong **)(param_1 + 1) + 0x2c8))();
      fVar15 = FGenericPlatformMath::Fmod
                         (*(float *)&param_1[1].field_0x8 * *(float *)&param_1[1].field_0x10,
                          (float)iVar5);
      uVar16 = extraout_var._0_4_;
      uVar6 = extraout_EAX;
    }
    auVar14._4_4_ = uVar16;
    auVar14._0_4_ = fVar15;
    iVar5 = (int)fVar15;
    fVar12 = fVar15;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar15)) {
      auVar14._8_4_ = uVar16;
      auVar14._12_4_ = uVar16;
      auVar13._8_8_ = auVar14._8_8_;
      auVar13._4_4_ = fVar15;
      auVar13._0_4_ = fVar15;
      uVar6 = movmskps(uVar6,auVar13);
      fVar12 = (float)(int)(iVar5 - (uVar6 & 1));
    }
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    *pfVar10 = fVar15 - fVar12;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    pUVar8 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       (*(USparseVolumeTexture **)(param_1 + 1),uVar6,
                        *(float *)&param_1[1].field_0x10,fVar15,
                        (float)*(int *)&param_1[1].field_0x14,(bool)param_1[1].field_0x18,true);
    *(USparseVolumeTextureFrame **)puVar9 = pUVar8;
    iVar5 = *(int *)&param_1[1].field_0x14;
    bVar2 = (bool)param_1[1].field_0x18;
    iVar7 = (**(code **)(**(longlong **)(param_1 + 1) + 0x2c8))();
    pUVar8 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       (*(USparseVolumeTexture **)(param_1 + 1),uVar6,
                        *(float *)&param_1[1].field_0x10,(float)(((int)fVar15 + 1) % iVar7),
                        (float)iVar5,bVar2,true);
    *(USparseVolumeTextureFrame **)puVar11 = pUVar8;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)puVar9 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(*(UObject **)puVar9);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)puVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)puVar11);
    }
  }
  return;
}

// execGetDuration @ 148760e60

void __cdecl
UAnimatedSparseVolumeTextureController::execGetDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 1) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 1) + 8) >> 0x1e & 1) == 0)) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 1) + 0x2c8))();
    *(float *)param_3 = (float)iVar1 / (*(float *)&param_1[1].field_0x10 + __real_322bcc77);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetFractionalFrameIndex @ 148760ef0

void __cdecl
UAnimatedSparseVolumeTextureController::execGetFractionalFrameIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  float fVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 1) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 1) + 8) >> 0x1e & 1) == 0)) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 1) + 0x2c8))();
    fVar2 = FGenericPlatformMath::Fmod
                      (*(float *)&param_1[1].field_0x10 * *(float *)&param_1[1].field_0x8,
                       (float)iVar1);
    *(float *)param_3 = fVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetFrameByIndex @ 148760f80

void __cdecl
UAnimatedSparseVolumeTextureController::execGetFrameByIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USparseVolumeTextureFrame *pUVar2;
  uint uVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 1) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 1) + 8) >> 0x1e & 1) == 0)) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    pUVar2 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                       (*(USparseVolumeTexture **)(param_1 + 1),uVar3 >> 0x10 ^ uVar3,0.0,
                        (float)local_res8[0],(float)*(int *)&param_1[1].field_0x14,
                        (bool)param_1[1].field_0x18,false);
    *(USparseVolumeTextureFrame **)param_3 = pUVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execPause @ 148761eb0

void __cdecl
UAnimatedSparseVolumeTextureController::execPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0xc = 0;
  return;
}

// execPlay @ 148761ed0

void __cdecl
UAnimatedSparseVolumeTextureController::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0xc = 1;
  return;
}

// execStop @ 148762670

void __cdecl
UAnimatedSparseVolumeTextureController::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[1].field_0xc != '\0') {
    param_1[1].field_0xc = 0;
    *(undefined4 *)&param_1[1].field_0x8 = 0;
  }
  return;
}

// execUpdate @ 1487626a0

void __cdecl
UAnimatedSparseVolumeTextureController::execUpdate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(longlong *)(param_1 + 1) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 1) + 8) >> 0x1e & 1) == 0)) &&
     (param_1[1].field_0xc != '\0')) {
    fVar2 = GetDuration((UAnimatedSparseVolumeTextureController *)param_1);
    fVar3 = FGenericPlatformMath::Fmod
                      (fVar3 + *(float *)&param_1[1].field_0x8,fVar2 + __real_322bcc77);
    *(float *)&param_1[1].field_0x8 = fVar3;
  }
  return;
}

