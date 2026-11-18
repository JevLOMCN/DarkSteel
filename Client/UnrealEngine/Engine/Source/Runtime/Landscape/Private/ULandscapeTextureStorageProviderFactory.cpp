// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 17

// StaticClass @ 145fadfc0

UClass * __cdecl ULandscapeTextureStorageProviderFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureStorageProviderFactory",
               &Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton,
               StaticRegisterNativesULandscapeTextureStorageProviderFactory,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTextureStorageProviderFactory>
               ,InternalVTableHelperCtorCaller<ULandscapeTextureStorageProviderFactory>,local_res8,
               UTextureAllMipDataProviderFactory::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton;
}

// ULandscapeTextureStorageProviderFactory @ 145fb5990

ULandscapeTextureStorageProviderFactory * __thiscall
ULandscapeTextureStorageProviderFactory::ULandscapeTextureStorageProviderFactory
          (ULandscapeTextureStorageProviderFactory *this,FVTableHelper *param_1)

{
  UTextureAllMipDataProviderFactory::UTextureAllMipDataProviderFactory
            ((UTextureAllMipDataProviderFactory *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeTextureStorageProviderFactory__6B_;
  this->NumNonOptionalMips = 0;
  this->NumNonStreamingMips = 0;
  (this->LandscapeGridScale).field0_0x0._s_0.X = 0.0;
  (this->LandscapeGridScale).field0_0x0._s_0.Y = 0.0;
  (this->LandscapeGridScale).field0_0x0._s_0.Z = 0.0;
  (this->Mips).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mips).ArrayNum = 0;
  (this->Mips).ArrayMax = 0;
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->EdgeFixup).field0_0x0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  return this;
}

// ULandscapeTextureStorageProviderFactory @ 145fb59e0

ULandscapeTextureStorageProviderFactory * __thiscall
ULandscapeTextureStorageProviderFactory::ULandscapeTextureStorageProviderFactory
          (ULandscapeTextureStorageProviderFactory *this,FObjectInitializer *param_1)

{
  UTextureAllMipDataProviderFactory::UTextureAllMipDataProviderFactory
            ((UTextureAllMipDataProviderFactory *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeTextureStorageProviderFactory__6B_;
  this->NumNonOptionalMips = 0;
  this->NumNonStreamingMips = 0;
  (this->LandscapeGridScale).field0_0x0._s_0.X = 0.0;
  (this->LandscapeGridScale).field0_0x0._s_0.Y = 0.0;
  (this->LandscapeGridScale).field0_0x0._s_0.Z = 0.0;
  (this->Mips).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mips).ArrayNum = 0;
  (this->Mips).ArrayMax = 0;
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->EdgeFixup).field0_0x0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  return this;
}

// ~ULandscapeTextureStorageProviderFactory @ 145fb6ad0

void __thiscall
ULandscapeTextureStorageProviderFactory::~ULandscapeTextureStorageProviderFactory
          (ULandscapeTextureStorageProviderFactory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeTextureStorageProviderFactory__6B_;
  DestructItems<FLandscapeTexture2DMipMap,int>
            ((FLandscapeTexture2DMipMap *)(this->Mips).AllocatorInstance.Data,(this->Mips).ArrayNum)
  ;
  pFVar1 = (this->Mips).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTextureAllMipDataProviderFactory::~UTextureAllMipDataProviderFactory
            ((UTextureAllMipDataProviderFactory *)this);
  return;
}

// AddReferencedObjects @ 145fb9cb0

void __cdecl
ULandscapeTextureStorageProviderFactory::AddReferencedObjects
          (UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 != (UObject *)0x0) {
    pUVar2 = GetPrivateStaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_145fb9cef;
  }
  param_1 = (UObject *)0x0;
LAB_145fb9cef:
  (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[2].field_0x8,0,0);
                    /* WARNING: Could not recover jumptable at 0x000145fb9d1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[2].field_0x10,0,0);
  return;
}

// AllocateMipDataProvider @ 145fb9fe0

FTextureMipDataProvider * __thiscall
ULandscapeTextureStorageProviderFactory::AllocateMipDataProvider
          (ULandscapeTextureStorageProviderFactory *this,UTexture *param_1)

{
  FTextureMipDataProvider *this_00;
  
  this_00 = ::operator_new(0x4c0);
  if (this_00 != (FTextureMipDataProvider *)0x0) {
    FTextureMipDataProvider::FTextureMipDataProvider
              (this_00,(UTexture *)(this->Texture).field0_0x0.DebugPtr,Init,Async);
    this_00->_padding_ = (longlong)&___7FLandscapeTextureStorageMipProvider__6B_;
    this_00[0xc].CurrentFirstLODIdx = 0;
    this_00[0xc].PendingFirstLODIdx = 0;
    this_00[0xc].NextTickState = Init;
    this_00[0xc].NextTickThread = 0xf;
    this_00[0x23].CurrentFirstLODIdx = 0;
    this_00[0x23].PendingFirstLODIdx = 0;
    this_00[0x23].NextTickState = Init;
    this_00[0x23].NextTickThread = 0xf;
    *(undefined8 *)((longlong)&this_00[0x24]._padding_ + 4) = 0;
    this_00[0x24].CurrentFirstLODIdx = 0;
    this_00[0x24].PendingFirstLODIdx = 0;
    this_00[0x25].NextTickState = Init;
    this_00[0x25].NextTickThread = Async;
    *(undefined2 *)((longlong)&this_00[0x24].ResourceState.field0_0x0 + 4) = 0;
    this_00[0x24].ResourceState.field0_0x0._s_0.NumRequestedLODs = '\0';
    *(undefined4 *)&this_00[0x24]._padding_ = 0xffffffff;
    this_00[1]._padding_ = (longlong)this;
    *(longlong *)((longlong)&this_00[0x24]._padding_ + 4) =
         ((this->Texture).field0_0x0.DebugPtr)->_padding_;
    return this_00;
  }
  return (FTextureMipDataProvider *)0x0;
}

// CompressMipToBulkData @ 145fbb3b0

void __cdecl
ULandscapeTextureStorageProviderFactory::CompressMipToBulkData
          (int param_1,int param_2,int param_3,uchar *param_4,int param_5,
          TBulkData<unsigned_char> *param_6)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uchar uVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  byte *pbVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  short sVar18;
  short sVar19;
  ulonglong uVar20;
  uchar *puVar21;
  int iVar22;
  bool bVar23;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId827,
               "ULandscapeTextureStorageProviderFactory::CompressMipToBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
               ,0x33b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId827);
  }
  FBulkData::Lock((FBulkData *)param_6,2);
  iVar15 = param_2 * param_3;
  if ((param_5 != iVar15 * 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceDataBytes == TotalPixels * 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x340,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((iVar15 < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalPixels >= 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x341,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = (iVar15 + (param_3 + -2 + param_2) * 2) * 2;
  pvVar8 = FBulkData::Realloc((FBulkData *)param_6,(longlong)(int)uVar5,1);
  uVar20 = 0;
  uVar10 = uVar20;
  if (0 < param_5) {
    pbVar14 = param_4 + 1;
    lVar16 = ((longlong)param_5 - 1U >> 2) + 1;
    uVar17 = uVar20;
    sVar18 = -0x8000;
    do {
      bVar3 = *pbVar14;
      pbVar2 = pbVar14 + 1;
      pbVar14 = pbVar14 + 4;
      sVar19 = (ushort)*pbVar2 * 0x100 + (ushort)bVar3;
      iVar15 = (int)uVar17;
      sVar18 = sVar19 - sVar18;
      *(char *)((longlong)iVar15 + (longlong)pvVar8) = (char)((ushort)sVar18 >> 8);
      uVar10 = (ulonglong)(iVar15 + 2U);
      uVar17 = (ulonglong)(iVar15 + 2U);
      *(char *)((longlong)iVar15 + 1 + (longlong)pvVar8) = (char)sVar18;
      lVar16 = lVar16 + -1;
      sVar18 = sVar19;
    } while (lVar16 != 0);
  }
  uVar12 = 0x80;
  uVar11 = 0x80;
  uVar17 = uVar10;
  uVar7 = uVar11;
  uVar13 = uVar12;
  if (0 < param_2) {
    do {
      uVar11 = param_4[uVar20 * 4];
      uVar13 = param_4[uVar20 * 4 + 3];
      uVar20 = uVar20 + 1;
      iVar15 = (int)uVar17;
      *(uchar *)((longlong)iVar15 + (longlong)pvVar8) = uVar11 - uVar7;
      uVar10 = (ulonglong)(iVar15 + 2U);
      *(uchar *)((longlong)iVar15 + 1 + (longlong)pvVar8) = uVar13 - uVar12;
      uVar17 = (ulonglong)(iVar15 + 2U);
      uVar7 = uVar11;
      uVar12 = uVar13;
    } while ((longlong)uVar20 < (longlong)param_2);
  }
  if (1 < param_3) {
    lVar16 = (longlong)(param_2 * 8) + -1;
    puVar21 = param_4 + lVar16;
    uVar17 = (ulonglong)(param_3 - 1);
    uVar20 = uVar10;
    uVar12 = uVar13;
    uVar7 = uVar11;
    do {
      uVar11 = puVar21[(param_2 * 8 - lVar16) + -4];
      uVar13 = *puVar21;
      iVar15 = (int)uVar20;
      puVar21 = puVar21 + param_2 * 4;
      *(uchar *)((longlong)iVar15 + (longlong)pvVar8) = uVar11 - uVar7;
      uVar10 = (ulonglong)(iVar15 + 2U);
      uVar20 = (ulonglong)(iVar15 + 2U);
      *(uchar *)((longlong)iVar15 + 1 + (longlong)pvVar8) = uVar13 - uVar12;
      uVar17 = uVar17 - 1;
      uVar12 = uVar13;
      uVar7 = uVar11;
    } while (uVar17 != 0);
  }
  iVar15 = param_2 + -2;
  if (-1 < iVar15) {
    puVar21 = param_4 + ((param_3 + -1) * param_2 + iVar15) * 4;
    uVar20 = uVar10;
    uVar12 = uVar13;
    uVar7 = uVar11;
    do {
      uVar11 = *puVar21;
      uVar13 = puVar21[3];
      puVar21 = puVar21 + -4;
      iVar22 = (int)uVar20;
      *(uchar *)((longlong)iVar22 + (longlong)pvVar8) = uVar11 - uVar7;
      iVar15 = iVar15 + -1;
      uVar10 = (ulonglong)(iVar22 + 2U);
      uVar20 = (ulonglong)(iVar22 + 2U);
      *(uchar *)((longlong)iVar22 + 1 + (longlong)pvVar8) = uVar13 - uVar12;
      uVar12 = uVar13;
      uVar7 = uVar11;
    } while (-1 < iVar15);
  }
  uVar9 = (uint)uVar10;
  uVar1 = param_3 - 2;
  if (0 < (int)uVar1) {
    uVar20 = (ulonglong)uVar1;
    puVar21 = param_4 + (int)(uVar1 * param_2 * 4);
    do {
      uVar7 = *puVar21;
      uVar12 = puVar21[3];
      iVar15 = (int)uVar10;
      puVar21 = puVar21 + param_2 * -4;
      *(uchar *)((longlong)iVar15 + (longlong)pvVar8) = uVar7 - uVar11;
      uVar9 = iVar15 + 2;
      uVar10 = (ulonglong)uVar9;
      *(uchar *)((longlong)iVar15 + 1 + (longlong)pvVar8) = uVar12 - uVar13;
      uVar20 = uVar20 - 1;
      uVar11 = uVar7;
      uVar13 = uVar12;
    } while (uVar20 != 0);
  }
  if ((uVar9 != uVar5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestOffset == DestBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x37d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FBulkData::Unlock((FBulkData *)param_6);
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopyMipToBulkData @ 145fbb890

void __cdecl
ULandscapeTextureStorageProviderFactory::CopyMipToBulkData
          (int param_1,int param_2,int param_3,uchar *param_4,int param_5,
          TBulkData<unsigned_char> *param_6)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId811,
               "ULandscapeTextureStorageProviderFactory::CopyMipToBulkData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
               ,0x32b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId811);
  }
  FBulkData::Lock((FBulkData *)param_6,2);
  if ((param_5 != param_2 * param_3 * 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceDataBytes == TotalPixels * 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x32f,
                         L"SourceDataBytes: %d TotalPixels: %d MipIndex: %d MipSizeX: %d MipSizeY: %d"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _Dst = FBulkData::Realloc((FBulkData *)param_6,(longlong)param_5,1);
  memcpy(_Dst,param_4,(longlong)param_5);
  FBulkData::Unlock((FBulkData *)param_6);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DecompressMip @ 145fbc590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULandscapeTextureStorageProviderFactory::DecompressMip
          (ULandscapeTextureStorageProviderFactory *this,uchar *param_1,long64 param_2,
          uchar *param_3,long64 param_4,int param_5)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForElementType<UE::Math::TVector<float>_> FVar10;
  uchar *puVar11;
  byte *pbVar12;
  ushort uVar13;
  ushort uVar14;
  uchar *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uchar uVar18;
  uint uVar19;
  byte *pbVar20;
  uchar uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStackY_19a8 [32];
  undefined4 local_1974;
  undefined4 local_1970;
  undefined4 local_196c;
  float local_1964;
  float local_1960;
  float local_195c;
  float local_1958;
  float local_1954;
  float local_1950;
  uint local_1944;
  ForElementType<UE::Math::TVector<float>_> local_18f8;
  int local_f0 [2];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_19a8;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1038,
               "ULandscapeTextureStorageProviderFactory::DecompressMip",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
               ,0x40e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1038);
  }
  if (((param_1 == (uchar *)0x0) || (param_3 == (uchar *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceData && DestData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x410,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar24 = 0;
  uVar9 = 0;
  if (param_5 < (this->Mips).ArrayNum) {
    uVar9 = (uint)~param_5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Mips).AllocatorInstance.Data;
  lVar26 = (longlong)param_5 * 0x38;
  if ((pFVar4[lVar26 + 8] == (FScriptContainerElement)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mip.bCompressed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x414,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = *(int *)(pFVar4 + lVar26 + 4);
  uVar9 = *(uint *)(pFVar4 + lVar26);
  uVar23 = (ulonglong)(int)uVar9;
  iVar25 = iVar3 * uVar9;
  if ((param_2 != (int)((iVar25 + (iVar3 + -2 + uVar9) * 2) * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceDataBytes == (TotalPixels + BorderPixels) * 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x41a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 != iVar25 * 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestDataBytes == TotalPixels * 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x41b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = 0x8000;
  dVar1 = (this->LandscapeGridScale).field0_0x0._s_0.Z;
  local_18f8.SecondaryData = (ForElementType<UE::Math::TVector<float>_>)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0x200;
  dVar31 = (double)(float)(__real_bf80000000000000 /
                          ((this->LandscapeGridScale).field0_0x0._s_0.Y *
                           (this->LandscapeGridScale).field0_0x0._s_0.X *
                          (double)(1 << ((byte)param_5 & 0x1f))));
  fVar39 = (float)(dVar1 * (this->LandscapeGridScale).field0_0x0._s_0.Y * dVar31);
  fVar44 = (float)(dVar1 * (this->LandscapeGridScale).field0_0x0._s_0.X * dVar31);
  if ((int)uVar9 < 1) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
  }
  else {
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                      (0xc,4,uVar9,&local_18f8,local_f0,local_f0 + 1);
    FVar10 = (ForElementType<UE::Math::TVector<float>_>)&local_18f8;
    if (local_18f8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar10 = local_18f8.SecondaryData;
    }
    memset((void *)((longlong)FVar10 + (longlong)iVar8 * 0xc),0,uVar23 * 0xc);
  }
  local_1944 = 0;
  uVar16 = uVar24;
  uVar27 = uVar23;
  fVar32 = __real_3f000000;
  uVar17 = uVar9;
  fVar34 = __real_322bcc77;
  fVar30 = __real_3f800000;
  if (0 < iVar3) {
    do {
      uVar19 = (uint)uVar16;
      iVar8 = uVar19 * (int)uVar27;
      pbVar12 = param_1 + iVar8 * 2;
      puVar15 = param_3 + iVar8 * 4;
      if (uVar19 == 0) {
        if (0 < (int)uVar27) {
          local_1974 = 0x80000080;
          uVar16 = uVar27 & 0xffffffff;
          do {
            pbVar20 = pbVar12 + 1;
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + 2;
            uVar13 = uVar13 + (ushort)bVar2 * 0x100 + (ushort)*pbVar20;
            local_1974._0_3_ = CONCAT21(uVar13,(undefined1)local_1974);
            *(undefined4 *)puVar15 = local_1974;
            uVar16 = uVar16 - 1;
            puVar15 = puVar15 + 4;
          } while (uVar16 != 0);
        }
      }
      else {
        lVar26 = 1;
        local_1964 = 0.0;
        local_1960 = 0.0;
        uVar13 = uVar13 + (ushort)*pbVar12 * 0x100 + (ushort)pbVar12[1];
        local_195c = 0.0;
        local_1970 = CONCAT13(0x80,CONCAT21(uVar13,0x80));
        *(undefined4 *)puVar15 = local_1970;
        puVar11 = puVar15 + 4;
        local_1958 = 0.0;
        local_1954 = 0.0;
        local_1950 = 0.0;
        if (1 < (longlong)uVar23) {
          local_196c = 0x80000080;
          pbVar20 = puVar11 + uVar23 * -4 + 1;
          uVar16 = uVar24;
          uVar27 = uVar24;
          uVar14 = uVar13;
          uVar17 = (uint)(ushort)((ushort)puVar15[uVar23 * -4 + 2] * 0x100 +
                                 (ushort)puVar15[uVar23 * -4 + 1]);
          do {
            uVar13 = uVar14 + (ushort)pbVar12[2] * 0x100 + (ushort)pbVar12[3];
            uVar19 = (uint)(ushort)((ushort)pbVar20[1] * 0x100 + (ushort)*pbVar20);
            local_196c._0_3_ = CONCAT21(uVar13,(undefined1)local_196c);
            *(undefined4 *)puVar11 = local_196c;
            fVar42 = (float)(int)((uint)uVar13 - (uint)uVar14) * fVar39;
            fVar43 = (float)(int)(uVar14 - uVar17) * fVar44;
            fVar29 = fVar43 * fVar43 + fVar42 * fVar42 + fVar30;
            if (fVar29 <= fVar34) {
              fVar42 = 0.0;
              fVar43 = 0.0;
              fVar35 = fVar30;
            }
            else {
              auVar36._8_8_ = 0;
              auVar36._0_8_ = CONCAT44(0,fVar29);
              auVar37._8_8_ = 0;
              auVar37._0_8_ = CONCAT44(0,fVar29);
              auVar37 = rsqrtss(auVar36,auVar37);
              fVar35 = auVar37._0_4_;
              fVar35 = fVar35 + fVar35 * (fVar32 - fVar29 * fVar32 * fVar35 * fVar35);
              fVar42 = fVar42 * fVar35;
              fVar43 = fVar43 * fVar35;
              fVar30 = __real_3f800000;
            }
            fVar38 = (float)(int)(uVar19 - uVar17) * fVar39;
            fVar40 = (float)(int)(uVar13 - uVar19) * fVar44;
            fVar29 = fVar38 * fVar38 + fVar40 * fVar40 + fVar30;
            if (fVar29 <= fVar34) {
              fVar38 = 0.0;
              fVar40 = 0.0;
              fVar41 = fVar30;
            }
            else {
              auVar37 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
              fVar41 = auVar37._0_4_;
              fVar41 = fVar41 + fVar41 * (fVar32 - fVar29 * fVar32 * fVar41 * fVar41);
              fVar38 = fVar38 * fVar41;
              fVar40 = fVar40 * fVar41;
            }
            uVar22 = (uint)uVar16;
            uVar17 = 0;
            if ((int)uVar22 < local_f0[0]) {
              uVar17 = ~uVar22 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar30 = __real_3f800000;
            FVar10 = (ForElementType<UE::Math::TVector<float>_>)&local_18f8;
            if (local_18f8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
              FVar10 = local_18f8.SecondaryData;
            }
            fVar29 = local_1964 + *(float *)(uVar27 + (longlong)FVar10) + fVar38 + fVar42;
            fVar34 = local_1960 + *(float *)(uVar27 + 4 + (longlong)FVar10) + fVar40 + fVar43;
            fVar32 = local_195c + *(float *)(uVar27 + 8 + (longlong)FVar10) + fVar41 + fVar35;
            fVar32 = fVar34 * fVar34 + fVar29 * fVar29 + fVar32 * fVar32;
            if (fVar32 <= __real_322bcc77) {
              fVar33 = 0.0;
              fVar34 = 0.0;
            }
            else {
              auVar37 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
              fVar33 = auVar37._0_4_;
              fVar33 = fVar33 + fVar33 * (__real_3f000000 -
                                         fVar32 * __real_3f000000 * fVar33 * fVar33);
              fVar34 = fVar33 * fVar34;
              fVar33 = fVar33 * fVar29;
            }
            fVar32 = (fVar33 + __real_3f800000) * __real_42ff0000;
            fVar34 = (fVar34 + __real_3f800000) * __real_42ff0000;
            if (__real_437f0000 <= fVar32) {
              fVar32 = __real_437f0000;
            }
            if (__real_437f0000 <= fVar34) {
              fVar34 = __real_437f0000;
            }
            if (fVar32 <= 0.0) {
              fVar32 = 0.0;
            }
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            puVar11[~uVar23 * 4] = (uchar)(int)fVar32;
            puVar11[~uVar23 * 4 + 3] = (uchar)(int)fVar34;
            uVar17 = 0;
            if ((int)uVar22 < local_f0[0]) {
              uVar17 = ~uVar22 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               fVar30 = __real_3f800000, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar10 = (ForElementType<UE::Math::TVector<float>_>)&local_18f8;
            if (local_18f8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
              FVar10 = local_18f8.SecondaryData;
            }
            pbVar20 = pbVar20 + 4;
            *(float *)(uVar27 + (longlong)FVar10) = fVar42 + local_1958;
            puVar11 = puVar11 + 4;
            *(float *)(uVar27 + 4 + (longlong)FVar10) = fVar43 + local_1954;
            uVar16 = (ulonglong)(uVar22 + 1);
            *(float *)(uVar27 + 8 + (longlong)FVar10) = fVar35 + local_1950;
            lVar26 = lVar26 + 1;
            uVar27 = uVar27 + 0xc;
            fVar32 = __real_3f000000;
            uVar14 = uVar13;
            uVar17 = uVar19;
            pbVar12 = pbVar12 + 2;
            fVar34 = __real_322bcc77;
            local_1964 = fVar38;
            local_1960 = fVar40;
            local_195c = fVar41;
            local_1958 = fVar38 + fVar42;
            local_1954 = fVar40 + fVar43;
            local_1950 = fVar41 + fVar35;
          } while (lVar26 < (longlong)uVar23);
          uVar27 = (ulonglong)uVar9;
          uVar19 = local_1944;
        }
      }
      uVar17 = (uint)uVar27;
      local_1944 = uVar19 + 1;
      uVar16 = (ulonglong)local_1944;
    } while ((int)local_1944 < iVar3);
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1146,"EdgeNormalFixup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
               ,0x47a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1146);
  }
  uVar18 = 0x80;
  uVar21 = 0x80;
  puVar15 = param_1 + iVar25 * 2;
  if (0 < (longlong)uVar23) {
    do {
      uVar18 = uVar18 + *puVar15;
      uVar21 = uVar21 + puVar15[1];
      puVar15 = puVar15 + 2;
      param_3[uVar24 * 4] = uVar18;
      param_3[uVar24 * 4 + 3] = uVar21;
      uVar24 = uVar24 + 1;
    } while ((longlong)uVar24 < (longlong)uVar23);
  }
  if (1 < iVar3) {
    lVar26 = (longlong)(int)(uVar17 * 8) + -1;
    uVar24 = (ulonglong)(iVar3 - 1);
    puVar11 = param_3 + lVar26;
    do {
      uVar18 = uVar18 + *puVar15;
      uVar21 = uVar21 + puVar15[1];
      puVar15 = puVar15 + 2;
      puVar11[((int)(uVar17 * 8) - lVar26) + -4] = uVar18;
      *puVar11 = uVar21;
      puVar11 = puVar11 + (int)(uVar17 * 4);
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  iVar25 = uVar17 - 2;
  if (-1 < iVar25) {
    lVar26 = (longlong)(int)(((iVar3 + -1) * uVar17 + iVar25) * 4);
    do {
      uVar18 = uVar18 + *puVar15;
      uVar21 = uVar21 + puVar15[1];
      puVar15 = puVar15 + 2;
      iVar25 = iVar25 + -1;
      param_3[lVar26] = uVar18;
      param_3[lVar26 + 3] = uVar21;
      lVar26 = lVar26 + -4;
    } while (-1 < iVar25);
  }
  uVar9 = iVar3 - 2;
  uVar24 = (ulonglong)uVar9;
  if (0 < (int)uVar9) {
    lVar26 = (longlong)(int)(uVar9 * uVar17 * 4);
    do {
      uVar18 = uVar18 + *puVar15;
      uVar21 = uVar21 + puVar15[1];
      puVar15 = puVar15 + 2;
      param_3[lVar26] = uVar18;
      param_3[lVar26 + 3] = uVar21;
      lVar26 = lVar26 + (int)(uVar17 * -4);
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  if ((puVar15 != param_1 + param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src == &SourceData[SourceDataBytes]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x49e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_18f8.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
    FMemory::Free((void *)local_18f8.SecondaryData);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetInitialMipData @ 145fc1870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ULandscapeTextureStorageProviderFactory::GetInitialMipData
          (ULandscapeTextureStorageProviderFactory *this,int param_1,TArrayView<void_*,int> *param_2
          ,TArrayView<__int64,int> *param_3,TStringView<wchar_t> *param_4)

{
  int iVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong64 uVar7;
  uchar *puVar8;
  longlong lVar9;
  FBulkData *this_00;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  int local_78;
  uchar *local_68;
  ulong64 local_60;
  ulonglong local_58;
  longlong local_50;
  
  uVar14 = (ulonglong)param_1;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId354,
               "ULandscapeTextureStorageProviderFactory::GetInitialMipData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
               ,0x162);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId354);
  }
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstMipToLoad >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x163,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar12 = param_2->ArrayNum;
  if ((iVar12 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfMipsToLoad > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x165,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_2->DataPtr == (void **)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutMipData.GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x166,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar1 = (this->Mips).ArrayNum;
  if ((iVar12 != iVar1 - param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfMipsToLoad == LoadableMips - FirstMipToLoad",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x169,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((iVar1 < iVar12 + param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipLoadEnd <= LoadableMips",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x16c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((param_3->ArrayNum != iVar12) && (param_3->ArrayNum != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutMipSize.Num() == NumberOfMipsToLoad || OutMipSize.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x16e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = 0;
  local_78 = 0;
  if (0 < param_1) {
    do {
      if (iVar1 <= (int)uVar10) break;
      uVar6 = 0;
      if ((int)uVar10 < (this->Mips).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      this_00 = (FBulkData *)((this->Mips).AllocatorInstance.Data + (ulonglong)uVar10 * 0x38 + 0x10)
      ;
      bVar4 = FBulkData::IsBulkDataLoaded(this_00);
      if (bVar4) {
        FBulkData::Lock(this_00,1);
        FBulkData::Unlock(this_00);
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < param_1);
  }
  local_50 = (longlong)(iVar12 + param_1);
  iVar12 = 0;
  local_58 = uVar14;
  if ((longlong)uVar14 < local_50) {
    uVar10 = 0;
    lVar9 = uVar14 * 0x38;
    uVar16 = uVar14;
    do {
      uVar13 = (int)uVar16 + uVar10;
      uVar6 = 0;
      if ((int)uVar13 < (this->Mips).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar11 = (this->Mips).AllocatorInstance.Data + lVar9;
      local_60 = (ulong64)(*(int *)(pFVar11 + 4) * *(int *)pFVar11 * 4);
      uVar7 = FBulkData::GetBulkDataSize((FBulkData *)(pFVar11 + 0x10));
      if (0 < (longlong)uVar7) {
        local_68 = (uchar *)0x0;
        FBulkData::GetCopy((FBulkData *)(pFVar11 + 0x10),&local_68,true);
        if ((local_68 == (uchar *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("SourceData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                               ,0x189,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        uVar3 = local_60;
        if (pFVar11[8] == (FScriptContainerElement)0x0) {
          if ((uVar7 != local_60) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("BulkDataSize == DestBytes",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                                 ,0x196,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          puVar8 = local_68;
          lVar15 = uVar14 - local_58;
          uVar13 = ~uVar10 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          param_2->DataPtr[lVar15] = puVar8;
        }
        else {
          puVar8 = FMemory::Malloc(local_60,0);
          DecompressMip(this,local_68,uVar7,puVar8,uVar3,uVar13);
          lVar15 = uVar14 - local_58;
          uVar13 = ~uVar10 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          param_2->DataPtr[lVar15] = puVar8;
          FMemory::Free(local_68);
        }
        if (0 < param_3->ArrayNum) {
          if (((uVar13 & (int)uVar10 < param_3->ArrayNum) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          param_3->DataPtr[lVar15] = local_60;
        }
        local_78 = local_78 + 1;
      }
      uVar16 = (ulonglong)(uint)param_1;
      uVar10 = uVar10 + 1;
      uVar14 = uVar14 + 1;
      lVar9 = lVar9 + 0x38;
      iVar12 = local_78;
    } while ((longlong)uVar14 < local_50);
  }
  uVar14 = local_58;
  if (iVar12 == iVar1 - param_1) {
    bVar4 = true;
  }
  else {
    if (2 < (byte)LogLandscape._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    }
    if ((longlong)uVar14 < (longlong)iVar1) {
      uVar10 = 0;
      lVar15 = 0;
      lVar9 = (longlong)iVar1 - uVar14;
      iVar12 = param_1;
      do {
        uVar6 = 0;
        if (iVar12 < (this->Mips).ArrayNum) {
          uVar6 = ~(uVar10 + param_1) >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (5 < (byte)LogLandscape._0_1_) {
          FBulkData::GetBulkDataSize
                    ((FBulkData *)
                     ((this->Mips).AllocatorInstance.Data +
                     (longlong)(int)(uVar10 + param_1) * 0x38 + 0x10));
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
        }
        iVar1 = param_2->ArrayNum;
        uVar13 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < iVar1) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (*(longlong *)(lVar15 + (longlong)param_2->DataPtr) != 0) {
          uVar6 = 0;
          if ((int)uVar10 < iVar1) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          FMemory::Free(*(void **)(lVar15 + (longlong)param_2->DataPtr));
          uVar6 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          *(undefined8 *)(lVar15 + (longlong)param_2->DataPtr) = 0;
        }
        if (0 < param_3->ArrayNum) {
          uVar6 = 0;
          if ((int)uVar10 < param_3->ArrayNum) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          *(undefined8 *)(lVar15 + (longlong)param_3->DataPtr) = 0;
        }
        iVar12 = iVar12 + 1;
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    bVar4 = false;
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// GetPrivateStaticClass @ 145fc3690

UClass * __cdecl ULandscapeTextureStorageProviderFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureStorageProviderFactory",
               &Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton,
               StaticRegisterNativesULandscapeTextureStorageProviderFactory,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTextureStorageProviderFactory>
               ,InternalVTableHelperCtorCaller<ULandscapeTextureStorageProviderFactory>,local_res8,
               UTextureAllMipDataProviderFactory::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.InnerSingleton;
}

// GetResourcePostInitState @ 145fc3e90

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FStreamableRenderResourceState __thiscall
ULandscapeTextureStorageProviderFactory::GetResourcePostInitState
          (ULandscapeTextureStorageProviderFactory *this,UTexture *param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FStreamableRenderResourceState FVar8;
  FStreamingManagerCollection *this_00;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined7 in_register_00000081;
  longlong *plVar15;
  char in_R9B;
  uint uVar16;
  
  plVar15 = (longlong *)CONCAT71(in_register_00000081,param_2);
  iVar7 = (this->Mips).ArrayNum;
  lVar4 = plVar15[9];
  iVar6 = (**(code **)(*plVar15 + 0x2f8))(plVar15);
  iVar6 = iVar6 - (int)lVar4;
  iVar2 = iVar7 + -1;
  if (iVar6 < iVar7 + -1) {
    iVar2 = iVar6;
  }
  uVar12 = 0x10;
  if (GRHIGlobals.MaxTextureMipCount < 0x10) {
    uVar12 = GRHIGlobals.MaxTextureMipCount;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  if (iVar7 - iVar6 < (int)uVar12) {
    uVar12 = iVar7 - iVar6;
  }
  uVar3 = this->NumNonOptionalMips;
  if ((int)uVar12 < this->NumNonOptionalMips) {
    uVar3 = uVar12;
  }
  uVar14 = this->NumNonStreamingMips;
  if ((int)uVar12 < this->NumNonStreamingMips) {
    uVar14 = uVar12;
  }
  if (((int)uVar3 < (int)uVar14) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BiasedNumNonOptionalMips >= NumOfNonStreamingMips",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x11e,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
    return (FStreamableRenderResourceState)FVar8.field0_0x0;
  }
  if (uVar14 == uVar12) {
    uVar13 = iVar7 - uVar12;
    uVar11 = uVar12;
    if ((int)(iVar7 - uVar12) < 0) {
      uVar13 = 0;
    }
    goto LAB_145fc402f;
  }
  uVar13 = iVar7 - uVar12;
  if ((int)(iVar7 - uVar12) < 0) {
    uVar13 = 0;
  }
  uVar11 = uVar14;
  if (in_R9B != '\0') {
    this_00 = IStreamingManager::Get();
    bVar5 = FStreamingManagerCollection::IsRenderAssetStreamingEnabled(this_00,Texture);
    if (bVar5) goto LAB_145fc402f;
  }
  iVar7 = (**(code **)(*plVar15 + 0x2f8))(plVar15);
  uVar9 = uVar12;
  if (1 < (int)uVar12) {
    uVar9 = 1;
  }
  uVar16 = 1;
  if (1 < (int)uVar9) {
    uVar16 = uVar9;
  }
  iVar7 = iVar7 - uVar13;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if ((int)uVar16 < (int)(uVar12 - iVar7)) {
    uVar16 = uVar12 - iVar7;
  }
  if ((int)uVar3 < (int)uVar16) {
    if ((-1 < (int)uVar13) && ((int)uVar13 < (this->Mips).ArrayNum)) {
      uVar9 = 0;
      if ((int)uVar13 < (this->Mips).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
        return (FStreamableRenderResourceState)FVar8.field0_0x0;
      }
      bVar5 = FBulkData::DoesExist
                        ((FBulkData *)
                         ((this->Mips).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x38 + 0x10)
                        );
      if (bVar5) goto LAB_145fc4024;
    }
    uVar16 = uVar3;
  }
LAB_145fc4024:
  if ((int)uVar14 < (int)uVar16) {
    uVar11 = uVar16;
  }
LAB_145fc402f:
  if (((int)uVar11 < 0) && (0 < (int)uVar12)) {
    uVar11 = 0;
  }
  param_1->_padding_ = 0;
  *(char *)&param_1->_padding_ = in_R9B;
  if (((uVar14 != (uVar14 & 0xff)) || ((int)uVar14 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar1 = (code *)swi(3);
    FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
    return (FStreamableRenderResourceState)FVar8.field0_0x0;
  }
  *(char *)((longlong)&param_1->_padding_ + 1) = (char)uVar14;
  if (((uVar3 != (uVar3 & 0xff)) || ((int)uVar3 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar1 = (code *)swi(3);
    FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
    return (FStreamableRenderResourceState)FVar8.field0_0x0;
  }
  *(char *)((longlong)&param_1->_padding_ + 2) = (char)uVar3;
  if (((uVar12 != (uVar12 & 0xff)) || ((int)uVar12 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar1 = (code *)swi(3);
    FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
    return (FStreamableRenderResourceState)FVar8.field0_0x0;
  }
  *(char *)((longlong)&param_1->_padding_ + 3) = (char)uVar12;
  if (((uVar13 != (uVar13 & 0xff)) || ((int)uVar13 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar1 = (code *)swi(3);
    FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
    return (FStreamableRenderResourceState)FVar8.field0_0x0;
  }
  *(char *)((longlong)&param_1->_padding_ + 4) = (char)uVar13;
  uVar10 = (undefined1)uVar11;
  if ((uVar11 == (uVar11 & 0xff)) && (-1 < (int)uVar11)) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 5) = uVar10;
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
      return (FStreamableRenderResourceState)FVar8.field0_0x0;
    }
    *(undefined1 *)((longlong)&param_1->_padding_ + 5) = uVar10;
    if (((uVar11 != (uVar11 & 0xff)) || ((int)uVar11 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar1 = (code *)swi(3);
      FVar8.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar1)();
      return (FStreamableRenderResourceState)FVar8.field0_0x0;
    }
  }
  *(undefined1 *)((longlong)&param_1->_padding_ + 6) = uVar10;
  return (FStreamableRenderResourceState)(FStreamableRenderResourceState_u_0)param_1;
}

// Serialize @ 145fc7f50

void __thiscall
ULandscapeTextureStorageProviderFactory::Serialize
          (ULandscapeTextureStorageProviderFactory *this,FArchive *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  <lambda_1> local_28;
  
  UObject::Serialize((UObject *)this,param_1);
  iVar5 = (this->Mips).ArrayNum - this->NumNonOptionalMips;
  if (iVar5 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalMips >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                       ,0xde,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Mips).ArrayNum - this->NumNonStreamingMips;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FirstInlineMip >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                       ,0xe1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumNonOptionalMips,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->NumNonOptionalMips);
    }
  }
  else {
    this->NumNonOptionalMips = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumNonStreamingMips,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->NumNonStreamingMips);
    }
  }
  else {
    this->NumNonStreamingMips = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->LandscapeGridScale);
  local_28.__this = this;
  local_28.OptionalMips = iVar5;
  local_28.FirstInlineMip = iVar4;
  SerializeArray<FLandscapeTexture2DMipMap,_ULandscapeTextureStorageProviderFactory::Serialize_::__l2::<lambda_1>_>
            (param_1,&this->Mips,&local_28);
                    /* WARNING: Could not recover jumptable at 0x000145fc80bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Texture);
  return;
}

// Serialize @ 145fc80d0

void __thiscall
ULandscapeTextureStorageProviderFactory::Serialize
          (ULandscapeTextureStorageProviderFactory *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetupEdgeFixup @ 145fc8460

void __thiscall
ULandscapeTextureStorageProviderFactory::SetupEdgeFixup
          (ULandscapeTextureStorageProviderFactory *this,
          ULandscapeHeightmapTextureEdgeFixup *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->EdgeFixup).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->EdgeFixup).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesULandscapeTextureStorageProviderFactory @ 145fc8780

void __cdecl
ULandscapeTextureStorageProviderFactory::
StaticRegisterNativesULandscapeTextureStorageProviderFactory(void)

{
  return;
}

// WillProvideMipDataWithoutDisk @ 145fcad60

bool __thiscall
ULandscapeTextureStorageProviderFactory::WillProvideMipDataWithoutDisk
          (ULandscapeTextureStorageProviderFactory *this)

{
  return true;
}

