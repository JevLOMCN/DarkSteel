// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4dc4d0

UClass * __cdecl UDS_LineBatchComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LineBatchComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LineBatchComponent",
               &Z_Registration_Info_UClass_UDS_LineBatchComponent.InnerSingleton,
               StaticRegisterNativesUDS_LineBatchComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LineBatchComponent>,
               InternalVTableHelperCtorCaller<UDS_LineBatchComponent>,local_res8,
               ULineBatchComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LineBatchComponent.InnerSingleton;
}

// UDS_LineBatchComponent @ 14b4dfcf0

UDS_LineBatchComponent * __thiscall
UDS_LineBatchComponent::UDS_LineBatchComponent(UDS_LineBatchComponent *this,FVTableHelper *param_1)

{
  ULineBatchComponent::ULineBatchComponent((ULineBatchComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UDS_LineBatchComponent @ 14b4dfd60

UDS_LineBatchComponent * __thiscall
UDS_LineBatchComponent::UDS_LineBatchComponent
          (UDS_LineBatchComponent *this,FObjectInitializer *param_1)

{
  ULineBatchComponent::ULineBatchComponent((ULineBatchComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UDS_LineBatchComponent @ 14b4e03b0

void __thiscall UDS_LineBatchComponent::~UDS_LineBatchComponent(UDS_LineBatchComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  ULineBatchComponent::~ULineBatchComponent((ULineBatchComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e2140

UClass * __cdecl UDS_LineBatchComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LineBatchComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LineBatchComponent",
               &Z_Registration_Info_UClass_UDS_LineBatchComponent.InnerSingleton,
               StaticRegisterNativesUDS_LineBatchComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LineBatchComponent>,
               InternalVTableHelperCtorCaller<UDS_LineBatchComponent>,local_res8,
               ULineBatchComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LineBatchComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_LineBatchComponent @ 14b4e28a0

void __cdecl UDS_LineBatchComponent::StaticRegisterNativesUDS_LineBatchComponent(void)

{
  return;
}

// DrawDebugCircle @ 14bc39240

void __thiscall
UDS_LineBatchComponent::DrawDebugCircle
          (UDS_LineBatchComponent *this,TVector<double> *param_1,float param_2,int param_3,
          FColor *param_4,bool param_5,float param_6,uchar param_7,float param_8,
          TVector<double> *param_9,TVector<double> *param_10,bool param_11)

{
  int iVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  ULineBatchComponent *this_00;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uchar *puVar10;
  float extraout_XMM0_Da;
  undefined4 uVar11;
  float extraout_XMM0_Db;
  undefined4 uVar12;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ForAnyElementType local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  float local_268;
  float local_264;
  float local_260;
  double local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ULineBatchComponent *local_120;
  FBatchedLine *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FBatchedLine *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<FBatchedLine,int> local_f8;
  TArrayView<FBatchedLine,int> local_e8 [11];
  
  uVar9 = 4;
  if (4 < param_3) {
    uVar9 = param_3;
  }
  local_240 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8);
  uVar11 = (undefined4)local_240;
  uVar12 = (undefined4)((ulonglong)local_240 >> 0x20);
  local_238 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 0x10);
  uVar13 = (undefined4)local_238;
  uVar14 = (undefined4)((ulonglong)local_238 >> 0x20);
  local_230 = *(undefined8 *)&param_10->field0_0x0;
  uVar15 = (undefined4)local_230;
  uVar16 = (undefined4)((ulonglong)local_230 >> 0x20);
  local_228 = *(undefined8 *)((longlong)&param_10->field0_0x0 + 8);
  uVar17 = (undefined4)local_228;
  uVar19 = (undefined4)((ulonglong)local_228 >> 0x20);
  local_218 = *(undefined8 *)&param_1->field0_0x0;
  uVar23 = (undefined4)local_218;
  uVar25 = (undefined4)((ulonglong)local_218 >> 0x20);
  local_250 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  uVar27 = (undefined4)local_250;
  uVar28 = (undefined4)((ulonglong)local_250 >> 0x20);
  local_248 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar29 = (undefined4)local_248;
  uVar30 = (undefined4)((ulonglong)local_248 >> 0x20);
  local_220 = *(undefined8 *)((longlong)&param_10->field0_0x0 + 0x10);
  uVar20 = (undefined4)local_220;
  uVar22 = (undefined4)((ulonglong)local_220 >> 0x20);
  dVar2 = (param_9->field0_0x0)._s_0.X;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_26c = 0;
  local_268 = __real_40c90fdb / (float)(int)uVar9;
  local_260 = param_2;
  local_120 = (ULineBatchComponent *)this;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  local_270 = 0;
  if (uVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar9,&local_278,0,&local_26c);
    local_258 = (double)param_2;
    fVar26 = 0.0;
    do {
      fVar26 = fVar26 + local_268;
      uVar9 = uVar9 - 1;
      __libm_sse2_sincosf4_();
      dVar4 = (double)extraout_XMM0_Dc;
      dVar18 = (double)extraout_XMM0_Da;
      dVar21 = (double)extraout_XMM0_Db;
      dVar24 = (double)extraout_XMM0_Dd;
      local_210 = ((double)CONCAT44(uVar16,uVar15) * dVar18 + dVar2 * dVar21) * local_258 +
                  (double)CONCAT44(uVar25,uVar23);
      dStack_208 = ((double)CONCAT44(uVar19,uVar17) * dVar18 +
                   (double)CONCAT44(uVar12,uVar11) * dVar21) * local_258 +
                   (double)CONCAT44(uVar28,uVar27);
      local_200 = ((double)CONCAT44(uVar22,uVar20) * dVar18 +
                  (double)CONCAT44(uVar14,uVar13) * dVar21) * local_258 +
                  (double)CONCAT44(uVar30,uVar29);
      dStack_1f8 = (dVar4 * (double)CONCAT44(uVar16,uVar15) + dVar24 * dVar2) * local_258 +
                   (double)CONCAT44(uVar25,uVar23);
      local_1e0 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
      fStack_1dc = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
      fStack_1d8 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
      local_1f0 = (dVar4 * (double)CONCAT44(uVar19,uVar17) +
                  dVar24 * (double)CONCAT44(uVar12,uVar11)) * local_258 +
                  (double)CONCAT44(uVar28,uVar27);
      dStack_1e8 = (dVar4 * (double)CONCAT44(uVar22,uVar20) +
                   dVar24 * (double)CONCAT44(uVar14,uVar13)) * local_258 +
                   (double)CONCAT44(uVar30,uVar29);
      local_1d0 = param_8;
      fStack_1cc = param_6;
      uStack_1c8 = CONCAT31(uStack_1c8._1_3_,param_7);
      uStack_1c4 = 0;
      fStack_1d4 = (float)(param_4->field0_0x0)._s_0.A * __real_3b808081;
      local_264 = fVar26;
      if (local_278.Data <= (FScriptContainerElement *)&local_210) {
        uVar11 = (undefined4)local_240;
        uVar12 = (undefined4)((ulonglong)local_240 >> 0x20);
        uVar13 = (undefined4)local_238;
        uVar14 = (undefined4)((ulonglong)local_238 >> 0x20);
        uVar15 = (undefined4)local_230;
        uVar16 = (undefined4)((ulonglong)local_230 >> 0x20);
        uVar17 = (undefined4)local_228;
        uVar19 = (undefined4)((ulonglong)local_228 >> 0x20);
        uVar27 = (undefined4)local_250;
        uVar28 = (undefined4)((ulonglong)local_250 >> 0x20);
        uVar20 = (undefined4)local_220;
        uVar22 = (undefined4)((ulonglong)local_220 >> 0x20);
        uVar29 = (undefined4)local_248;
        uVar30 = (undefined4)((ulonglong)local_248 >> 0x20);
        uVar23 = (undefined4)local_218;
        uVar25 = (undefined4)((ulonglong)local_218 >> 0x20);
        if (((FScriptContainerElement *)&local_210 < local_278.Data + (longlong)local_26c * 0x50) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_270 == local_26c) {
        local_270 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&local_278,&local_26c);
      }
      iVar7 = local_270 + 1;
      lVar8 = (longlong)local_270;
      local_240 = CONCAT44(uVar12,uVar11);
      local_238 = CONCAT44(uVar14,uVar13);
      local_230 = CONCAT44(uVar16,uVar15);
      local_228 = CONCAT44(uVar19,uVar17);
      local_220 = CONCAT44(uVar22,uVar20);
      local_218 = CONCAT44(uVar25,uVar23);
      local_250 = CONCAT44(uVar28,uVar27);
      local_248 = CONCAT44(uVar30,uVar29);
      *(double *)&local_278.Data[lVar8 * 0x50].field_0x0 = local_210;
      *(double *)(local_278.Data + lVar8 * 0x50 + 8) = dStack_208;
      *(double *)(local_278.Data + lVar8 * 0x50 + 0x10) = local_200;
      *(double *)(local_278.Data + lVar8 * 0x50 + 0x10 + 8) = dStack_1f8;
      *(double *)(local_278.Data + lVar8 * 0x50 + 0x20) = local_1f0;
      *(double *)(local_278.Data + lVar8 * 0x50 + 0x20 + 8) = dStack_1e8;
      *(ulonglong *)(local_278.Data + lVar8 * 0x50 + 0x30) = CONCAT44(fStack_1dc,local_1e0);
      *(ulonglong *)(local_278.Data + lVar8 * 0x50 + 0x30 + 8) = CONCAT44(fStack_1d4,fStack_1d8);
      *(ulonglong *)(local_278.Data + lVar8 * 0x50 + 0x40) = CONCAT44(fStack_1cc,local_1d0);
      *(ulonglong *)(local_278.Data + lVar8 * 0x50 + 0x40 + 8) = CONCAT44(uStack_1c4,uStack_1c8);
      fVar26 = local_264;
      local_270 = iVar7;
    } while (uVar9 != 0);
  }
  fVar26 = local_260;
  iVar7 = local_270;
  puVar10 = &(param_4->field0_0x0)._s_0.R;
  local_118 = (FBatchedLine *)local_278.Data;
  if ((local_270 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = local_120;
  local_f8._12_4_ = uStack_10c;
  local_f8.ArrayNum = iVar7;
  local_f8.DataPtr = local_118;
  iStack_110 = iVar7;
  ULineBatchComponent::DrawLines(local_120,&local_f8);
  if (param_11) {
    local_288.Data = (FScriptContainerElement *)0x0;
    local_280 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,2,&local_288,0,(int *)((longlong)&local_280 + 4));
    fVar5 = __real_3b808081;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar4 = (param_1->field0_0x0)._s_0.Z;
    dVar18 = (param_1->field0_0x0)._s_0.Y;
    dVar21 = (double)fVar26;
    uStack_178 = CONCAT31(uStack_178._1_3_,param_7);
    uStack_174 = 0;
    local_180 = param_8;
    fStack_17c = param_6;
    dStack_1a8 = dVar21 * (param_9->field0_0x0)._s_0.X;
    dStack_198 = dVar21 * (param_9->field0_0x0)._s_0.Z;
    local_1a0 = dVar21 * (param_9->field0_0x0)._s_0.Y;
    local_1c0 = dVar2 - dStack_1a8;
    dStack_1b8 = dVar18 - local_1a0;
    local_1b0 = dVar4 - dStack_198;
    dStack_1a8 = dVar2 + dStack_1a8;
    local_1a0 = dVar18 + local_1a0;
    dStack_198 = dVar4 + dStack_198;
    local_190 = FLinearColor::sRGBToLinearTable[*puVar10];
    fStack_18c = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    fStack_188 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    fStack_184 = (float)(param_4->field0_0x0)._s_0.A * __real_3b808081;
    if (((local_288.Data <= (FScriptContainerElement *)&local_1c0) &&
        ((FScriptContainerElement *)&local_1c0 < local_288.Data + (longlong)local_280._4_4_ * 0x50))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (int)local_280;
    if ((int)local_280 == local_280._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&local_288,(int *)((longlong)&local_280 + 4));
    }
    iVar1 = iVar7 + 1;
    lVar8 = (longlong)iVar7;
    local_130 = param_8;
    dStack_158 = dVar21 * (param_10->field0_0x0)._s_0.X;
    dStack_148 = dVar21 * (param_10->field0_0x0)._s_0.Z;
    uStack_128 = CONCAT31(uStack_128._1_3_,param_7);
    dVar21 = dVar21 * (param_10->field0_0x0)._s_0.Y;
    uStack_124 = 0;
    fStack_12c = param_6;
    *(double *)&local_288.Data[lVar8 * 0x50].field_0x0 = local_1c0;
    *(double *)(local_288.Data + lVar8 * 0x50 + 8) = dStack_1b8;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x10) = local_1b0;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x10 + 8) = dStack_1a8;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x20) = local_1a0;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x20 + 8) = dStack_198;
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x30) = CONCAT44(fStack_18c,local_190);
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x30 + 8) = CONCAT44(fStack_184,fStack_188);
    local_150 = dVar18 + dVar21;
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x40) = CONCAT44(fStack_17c,local_180);
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x40 + 8) = CONCAT44(uStack_174,uStack_178);
    dStack_168 = dVar18 - dVar21;
    local_170 = dVar2 - dStack_158;
    dStack_158 = dStack_158 + dVar2;
    local_160 = dVar4 - dStack_148;
    dStack_148 = dVar4 + dStack_148;
    local_140 = FLinearColor::sRGBToLinearTable[*puVar10];
    fStack_13c = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    fStack_138 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    fStack_134 = (float)(param_4->field0_0x0)._s_0.A * fVar5;
    local_280._0_4_ = iVar1;
    if (((local_288.Data <= (FScriptContainerElement *)&local_170) &&
        ((FScriptContainerElement *)&local_170 < local_288.Data + (longlong)local_280._4_4_ * 0x50))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((int)local_280 == local_280._4_4_) {
      local_280._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x850,&local_288,(int *)((longlong)&local_280 + 4));
    }
    iVar7 = (int)local_280 + 1;
    lVar8 = (longlong)(int)local_280;
    local_280 = CONCAT44(local_280._4_4_,iVar7);
    *(double *)&local_288.Data[lVar8 * 0x50].field_0x0 = local_170;
    *(double *)(local_288.Data + lVar8 * 0x50 + 8) = dStack_168;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x10) = local_160;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x10 + 8) = dStack_158;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x20) = local_150;
    *(double *)(local_288.Data + lVar8 * 0x50 + 0x20 + 8) = dStack_148;
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x30) = CONCAT44(fStack_13c,local_140);
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x30 + 8) = CONCAT44(fStack_134,fStack_138);
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x40) = CONCAT44(fStack_12c,local_130);
    *(ulonglong *)(local_288.Data + lVar8 * 0x50 + 0x40 + 8) = CONCAT44(uStack_124,uStack_128);
    local_108 = (FBatchedLine *)local_288.Data;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_e8[0]._12_4_ = uStack_fc;
    local_e8[0].ArrayNum = iVar7;
    local_e8[0].DataPtr = local_108;
    iStack_100 = iVar7;
    ULineBatchComponent::DrawLines(this_00,local_e8);
    if (local_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data);
    }
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  return;
}

