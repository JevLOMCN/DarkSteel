// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149c58fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall
`FPCGGetSegmentElement::ExecuteInternal'::__l23::<lambda_2>::operator()
          (void *this,UPCGSpatialData *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  UPCGBasePointData *this_00;
  UPCGData *pUVar4;
  undefined8 uVar5;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  int local_100;
  int local_fc;
  int local_f8;
  undefined8 local_f0;
  FPCGInitializeFromDataParams local_e8;
  undefined4 *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_88 [24];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  this_00 = FPCGContext::NewPointData_AnyThread(*(FPCGContext **)this);
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_e8,param_1);
  local_e8.bInheritMetadata = true;
  local_e8.bInheritAttributes = true;
  local_e8.bInheritSpatialData = false;
  UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_00,&local_e8);
  (**(code **)(this_00->_padding_ + 0x490))(this_00,2,1);
  uVar5 = 1;
  if (**(char **)((longlong)this + 0x18) != '\0') {
    uVar5 = 0x81;
  }
  (**(code **)(this_00->_padding_ + 0x498))(this_00,uVar5);
  (**(code **)(this_00->_padding_ + 0x4c0))(this_00,&local_a8,0);
  puVar1 = *(undefined4 **)((longlong)this + 8);
  local_118 = *(undefined8 *)(puVar1 + 4);
  uStack_110 = *(undefined8 *)(puVar1 + 6);
  local_128 = *(undefined8 *)(puVar1 + 8);
  uStack_120 = *(undefined8 *)(puVar1 + 10);
  local_168 = *puVar1;
  uStack_164 = puVar1[1];
  uStack_160 = puVar1[2];
  uStack_15c = puVar1[3];
  local_138 = *(undefined8 *)(puVar1 + 0xc);
  uStack_130 = *(undefined8 *)(puVar1 + 0xe);
  local_158 = *(undefined8 *)(puVar1 + 0x14);
  uStack_150 = *(undefined8 *)(puVar1 + 0x16);
  local_148 = *(undefined8 *)(puVar1 + 0x10);
  uStack_140 = *(undefined8 *)(puVar1 + 0x12);
  if (local_98 < 1) {
    local_178 = 0;
    local_170 = (longlong)local_98;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGData *)(*pcVar2)();
      return pUVar4;
    }
  }
  *local_a8 = local_168;
  local_a8[1] = uStack_164;
  local_a8[2] = uStack_160;
  local_a8[3] = uStack_15c;
  *(undefined8 *)(local_a8 + 4) = local_118;
  *(undefined8 *)(local_a8 + 6) = uStack_110;
  *(undefined8 *)(local_a8 + 8) = local_128;
  *(undefined8 *)(local_a8 + 10) = uStack_120;
  *(undefined8 *)(local_a8 + 0xc) = local_138;
  *(undefined8 *)(local_a8 + 0xe) = uStack_130;
  *(undefined8 *)(local_a8 + 0x10) = local_148;
  *(undefined8 *)(local_a8 + 0x12) = uStack_140;
  *(undefined8 *)(local_a8 + 0x14) = local_158;
  *(undefined8 *)(local_a8 + 0x16) = uStack_150;
  puVar1 = *(undefined4 **)((longlong)this + 0x10);
  local_168 = *puVar1;
  uStack_164 = puVar1[1];
  uStack_160 = puVar1[2];
  uStack_15c = puVar1[3];
  local_158._0_4_ = puVar1[4];
  local_158._4_4_ = puVar1[5];
  uStack_150._0_4_ = puVar1[6];
  uStack_150._4_4_ = puVar1[7];
  local_148._0_4_ = puVar1[8];
  local_148._4_4_ = puVar1[9];
  uStack_140._0_4_ = puVar1[10];
  uStack_140._4_4_ = puVar1[0xb];
  local_138._0_4_ = puVar1[0xc];
  local_138._4_4_ = puVar1[0xd];
  uStack_130._0_4_ = puVar1[0xe];
  uStack_130._4_4_ = puVar1[0xf];
  local_128._0_4_ = puVar1[0x10];
  local_128._4_4_ = puVar1[0x11];
  uStack_120._0_4_ = puVar1[0x12];
  uStack_120._4_4_ = puVar1[0x13];
  local_118._0_4_ = puVar1[0x14];
  local_118._4_4_ = puVar1[0x15];
  uStack_110._0_4_ = puVar1[0x16];
  uStack_110._4_4_ = puVar1[0x17];
  if (local_98 < 2) {
    local_178 = 1;
    local_170 = (longlong)local_98;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGData *)(*pcVar2)();
      return pUVar4;
    }
  }
  if ((int)(1 % (longlong)local_9c) == 1) {
    local_a8 = (undefined4 *)((longlong)local_a0 + (longlong)local_a8);
  }
  else {
    local_a8 = local_88;
  }
  *local_a8 = local_168;
  local_a8[1] = uStack_164;
  local_a8[2] = uStack_160;
  local_a8[3] = uStack_15c;
  local_a8[4] = (undefined4)local_158;
  local_a8[5] = local_158._4_4_;
  local_a8[6] = (undefined4)uStack_150;
  local_a8[7] = uStack_150._4_4_;
  local_a8[8] = (undefined4)local_148;
  local_a8[9] = local_148._4_4_;
  local_a8[10] = (undefined4)uStack_140;
  local_a8[0xb] = uStack_140._4_4_;
  local_a8[0xc] = (undefined4)local_138;
  local_a8[0xd] = local_138._4_4_;
  local_a8[0xe] = (undefined4)uStack_130;
  local_a8[0xf] = uStack_130._4_4_;
  local_a8[0x10] = (undefined4)local_128;
  local_a8[0x11] = local_128._4_4_;
  local_a8[0x12] = (undefined4)uStack_120;
  local_a8[0x13] = uStack_120._4_4_;
  local_a8[0x14] = (undefined4)local_118;
  local_a8[0x15] = local_118._4_4_;
  local_a8[0x16] = (undefined4)uStack_110;
  local_a8[0x17] = uStack_110._4_4_;
  if (**(char **)((longlong)this + 0x18) != '\0') {
    (**(code **)(this_00->_padding_ + 0x4f8))(this_00,&local_108,0);
    uVar5 = **(undefined8 **)((longlong)this + 0x20);
    if (local_f8 < 1) {
      local_178 = 0;
      local_170 = (longlong)local_f8;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UPCGData *)(*pcVar2)();
        return pUVar4;
      }
    }
    *local_108 = uVar5;
    uVar5 = **(undefined8 **)((longlong)this + 0x28);
    if (local_f8 < 2) {
      local_178 = 1;
      local_170 = (longlong)local_f8;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UPCGData *)(*pcVar2)();
        return pUVar4;
      }
    }
    if ((int)(1 % (longlong)local_fc) == 1) {
      local_108 = (undefined8 *)((longlong)local_100 + (longlong)local_108);
    }
    else {
      local_108 = &local_f0;
    }
    *local_108 = uVar5;
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             local_e8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
             local_e8.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
      local_e8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
      (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_e8.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data);
  }
  if (local_e8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
  }
  return (UPCGData *)this_00;
}

// operator() @ 149c59760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall
`FPCGGetSegmentElement::ExecuteInternal'::__l23::<lambda_3>::operator()
          (void *this,UPCGSpatialData *param_1,TTransform<double> *param_2)

{
  double dVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UPCGSplineData *this_00;
  TRotator<double> *pTVar9;
  UPCGData *pUVar10;
  longlong lVar11;
  undefined1 auStackY_288 [32];
  ForAnyElementType local_238;
  undefined8 local_230;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_228;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_218;
  TQuat<double> local_208;
  TQuat<double> local_1e8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  TRotator<double> local_168;
  TRotator<double> local_150;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this_00 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(*(FPCGContext **)this);
  UPCGSpatialData::InitializeFromData
            ((UPCGSpatialData *)this_00,param_1,(UPCGMetadata *)0x0,true,true);
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x88,8,2,&local_228.AllocatorInstance,0,&local_228.ArrayMax);
  UE::Math::TTransform<double>::GetRelativeTransform
            (*(TTransform<double> **)((longlong)this + 8),&local_138,param_2);
  UE::Math::TTransform<double>::GetRelativeTransform
            (*(TTransform<double> **)((longlong)this + 0x10),&local_d8,param_2);
  local_208.X = local_138.Rotation.XY.m128d_f64[0];
  local_208.Y = local_138.Rotation.XY.m128d_f64[1];
  local_208.Z = local_138.Rotation.ZW.m128d_f64[0];
  local_208.W = local_138.Rotation.ZW.m128d_f64[1];
  local_1c8 = local_138.Scale3D.XY.m128d_f64[0];
  dStack_1c0 = local_138.Scale3D.XY.m128d_f64[1];
  local_1b8 = local_138.Scale3D.ZW.m128d_f64[0];
  pTVar9 = UE::Math::TQuat<double>::Rotator(&local_208,&local_168);
  local_1b0 = local_138.Translation.XY.m128d_f64[0];
  dStack_1a8 = local_138.Translation.XY.m128d_f64[1];
  local_1a0 = local_138.Translation.ZW.m128d_f64[0];
  iVar7 = local_228.ArrayNum;
  if (local_228.ArrayNum == local_228.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&local_228.AllocatorInstance,&local_228.ArrayMax);
  }
  lVar11 = (longlong)iVar7 * 0x88;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 8) = local_138.Translation.XY.m128d_f64[0]
  ;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 8 + 8) =
       local_138.Translation.XY.m128d_f64[1];
  *(undefined4 *)(local_228.AllocatorInstance.Data + lVar11) = 0;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x18) =
       local_138.Translation.ZW.m128d_f64[0];
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x20) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(local_228.AllocatorInstance.Data + lVar11 + 0x20 + 8) = uVar5;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x30) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x38) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(local_228.AllocatorInstance.Data + lVar11 + 0x38 + 8) = uVar5;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x48) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = pTVar9->Yaw;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x50) = pTVar9->Pitch;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x50 + 8) = dVar1;
  dVar1 = pTVar9->Roll;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x68) = local_138.Scale3D.XY.m128d_f64[0];
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x68 + 8) =
       local_138.Scale3D.XY.m128d_f64[1];
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x60) = dVar1;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x78) = local_138.Scale3D.ZW.m128d_f64[0];
  local_228.AllocatorInstance.Data[lVar11 + 0x80] = (FScriptContainerElement)0x0;
  local_198 = local_d8.Scale3D.XY.m128d_f64[0];
  dStack_190 = local_d8.Scale3D.XY.m128d_f64[1];
  local_188 = local_d8.Scale3D.ZW.m128d_f64[0];
  local_1e8.X = local_d8.Rotation.XY.m128d_f64[0];
  local_1e8.Y = local_d8.Rotation.XY.m128d_f64[1];
  local_1e8.Z = local_d8.Rotation.ZW.m128d_f64[0];
  local_1e8.W = local_d8.Rotation.ZW.m128d_f64[1];
  local_228.ArrayNum = iVar7 + 1;
  pTVar9 = UE::Math::TQuat<double>::Rotator(&local_1e8,&local_150);
  local_180 = local_d8.Translation.XY.m128d_f64[0];
  dStack_178 = local_d8.Translation.XY.m128d_f64[1];
  local_170 = local_d8.Translation.ZW.m128d_f64[0];
  iVar7 = local_228.ArrayNum;
  if (local_228.ArrayNum == local_228.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&local_228.AllocatorInstance,&local_228.ArrayMax);
  }
  local_228.ArrayNum = iVar7 + 1;
  lVar11 = (longlong)iVar7 * 0x88;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 8) = local_d8.Translation.XY.m128d_f64[0];
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 8 + 8) =
       local_d8.Translation.XY.m128d_f64[1];
  *(undefined4 *)(local_228.AllocatorInstance.Data + lVar11) = 0x3f800000;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x18) =
       local_d8.Translation.ZW.m128d_f64[0];
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x20) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(local_228.AllocatorInstance.Data + lVar11 + 0x20 + 8) = uVar5;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x30) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x38) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(local_228.AllocatorInstance.Data + lVar11 + 0x38 + 8) = uVar5;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x48) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = pTVar9->Yaw;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x50) = pTVar9->Pitch;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x50 + 8) = dVar1;
  dVar1 = pTVar9->Roll;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x68) = local_d8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x68 + 8) =
       local_d8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x60) = dVar1;
  *(double *)(local_228.AllocatorInstance.Data + lVar11 + 0x78) = local_d8.Scale3D.ZW.m128d_f64[0];
  local_228.AllocatorInstance.Data[lVar11 + 0x80] = (FScriptContainerElement)0x0;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_230 = 0;
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayMax = 0;
  if (**(char **)((longlong)this + 0x18) != '\0') {
    puVar2 = *(undefined8 **)((longlong)this + 0x20);
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_238,(int *)((longlong)&local_230 + 4));
    iVar7 = iVar8 + 1;
    *(undefined8 *)(local_238.Data + (longlong)iVar8 * 8) = *puVar2;
    pFVar3 = *(FScriptContainerElement **)((longlong)this + 0x28);
    local_230._0_4_ = iVar7;
    if (((local_238.Data <= pFVar3) && (pFVar3 < local_238.Data + (longlong)local_230._4_4_ * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UPCGData *)(*pcVar4)();
      return pUVar10;
    }
    if ((int)local_230 == local_230._4_4_) {
      local_230._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_238,(int *)((longlong)&local_230 + 4));
    }
    local_218.ArrayNum = (int)local_230 + 1;
    *(undefined8 *)(local_238.Data + (longlong)(int)local_230 * 8) = *(undefined8 *)pFVar3;
    local_218.AllocatorInstance.Data = local_238.Data;
    local_218.ArrayMax = local_230._4_4_;
  }
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  UPCGSplineData::Initialize(this_00,&local_228,false,param_2,&local_218);
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data);
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  return (UPCGData *)this_00;
}

// ExecuteInternal @ 149c65a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGGetSegmentElement::ExecuteInternal(FPCGGetSegmentElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  FPCGTaggedData *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  float fVar5;
  UObject *pUVar6;
  double dVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  TObjectPtr<UPCGSettings>_u_0 TVar12;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar13;
  FText *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  UPCGSplineData *this_01;
  undefined8 *puVar18;
  undefined1 *puVar19;
  TTransform<double> *pTVar20;
  FPCGTaggedData *pFVar21;
  FSharedReferencer<1> FVar22;
  uint uVar23;
  uint uVar24;
  <lambda_1> <Var25;
  uint uVar26;
  FPCGDataCollection *this_02;
  FObjectPtr_u_0 FVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  bool bVar31;
  __m128d _Var32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  double dVar53;
  undefined1 auStackY_798 [32];
  undefined1 local_748;
  <lambda_1> local_747;
  int local_744;
  TObjectPtr<UPCGSettings>_u_0 local_740;
  int local_738;
  FPCGContext *local_730;
  uint local_724;
  uint local_720;
  uint local_71c;
  int local_718 [2];
  undefined8 local_710;
  FPCGTaggedData *local_708;
  undefined8 local_700;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_6f8;
  uint local_6e8;
  TObjectPtr<UPCGSettings>_u_0 local_6e0;
  FObjectPtr_u_0 local_6d8;
  FObjectPtr_u_0 local_6d0;
  FObjectPtr_u_0 local_6c8;
  FObjectPtr_u_0 local_6c0;
  FObjectPtr_u_0 local_6b8;
  FObjectPtr_u_0 local_6b0;
  FPCGTaggedData *local_6a8;
  FPCGTaggedData *local_6a0;
  int local_698;
  longlong local_690;
  longlong local_688;
  int local_680;
  longlong local_678;
  int local_670;
  longlong local_668;
  int local_660;
  int local_65c;
  int local_658;
  FName local_648;
  FName local_640;
  FName local_638;
  FName local_630;
  FName local_628;
  FName local_620;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_618;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_608;
  TSharedPtr<FCulture,1> local_5f8;
  TSharedPtr<FCulture,1> local_5e8;
  TSharedPtr<FCulture,1> local_5d8;
  TSharedPtr<FCulture,1> local_5c8;
  TSharedPtr<FCulture,1> local_5b8;
  TSharedPtr<FCulture,1> local_5a8;
  TSharedPtr<FCulture,1> local_598;
  TSharedPtr<FCulture,1> local_588;
  TSharedPtr<FCulture,1> local_578;
  TSharedPtr<FCulture,1> local_568;
  TSharedPtr<FCulture,1> local_558;
  FPCGContext *local_548;
  undefined8 *local_540;
  undefined8 *local_538;
  undefined1 *local_530;
  undefined8 *local_528;
  undefined8 *local_520;
  FPCGContext *local_518;
  undefined8 *local_510;
  undefined8 *local_508;
  undefined1 *local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  FText local_4e8;
  FText local_4d8;
  FText local_4c8;
  FText local_4b8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_4a8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_498;
  FText local_488;
  FText local_478;
  FText local_468;
  FTextFormat local_458;
  FText local_448;
  FTextFormat local_438;
  FText local_428;
  FText local_418;
  FText local_408;
  FTextFormat local_3f8;
  FText local_3e8;
  FText local_3d8;
  FText local_3c8;
  FTextFormat local_3b8;
  FText local_3a8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348 [2];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8 [2];
  longlong local_2d8;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  undefined1 local_258 [96];
  undefined1 local_1f8 [96];
  undefined1 local_198 [96];
  undefined1 local_138 [96];
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_798;
  bVar31 = CpuChannel->Enabled < 0;
  local_730 = param_1;
  if (bVar31) {
    local_747 = (<lambda_1>)0x0;
  }
  else {
    local_747 = (<lambda_1>)0x1;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId76,"FPCGGetSegmentElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGGetSegment.cpp"
               ,0x4c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId76);
  }
  <Var25 = (<lambda_1>)!bVar31;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
      pFVar21 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSegmentSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_747);
      if (pFVar21 != (FPCGTaggedData *)0x0) {
        local_6e0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar21->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_6e0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c65b67;
          UE::GC::MarkAsReachable((UObject *)local_6e0.DebugPtr);
        }
        if (local_6e0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar10 = UPCGGetSegmentSettings::StaticClass();
          bVar31 = FObjectPtr::IsA(&local_6e0.ObjectPtr,pUVar10);
          TVar12 = local_6e0;
          local_740 = local_6e0;
          if (bVar31) goto LAB_149c65b6f;
        }
      }
    }
    else {
      pUVar11 = UPCGNode::GetSettings(this_00);
      TVar12.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
      if (TVar12.DebugPtr != (UPCGSettings *)0x0) {
        local_740.DebugPtr = TVar12.DebugPtr;
        pUVar10 = UPCGGetSegmentSettings::StaticClass();
        iVar9 = (int)pUVar10->_padding_;
        if ((iVar9 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar10->_padding_)) goto LAB_149c65b6f;
      }
    }
LAB_149c65b67:
    local_740.DebugPtr = (UPCGSettings *)0x0;
    TVar12.DebugPtr = local_740.DebugPtr;
  }
  else {
    pUVar10 = UPCGGetSegmentSettings::StaticClass();
    bVar31 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar31) {
      local_740 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar12 = local_740;
    }
    else {
      local_740.DebugPtr = (UPCGSettings *)0x0;
      TVar12.DebugPtr = local_740.DebugPtr;
    }
  }
LAB_149c65b6f:
  this_02 = &param_1->InputData;
  if ((TVar12.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Polygon\\PCGGetSegment.cpp"
                          ,0x4f,L""), bVar31)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin(this_02,&local_6f8,&PCGPinConstants::DefaultInputLabel);
  local_6a0 = (FPCGTaggedData *)0x0;
  local_738 = 0;
  local_6a8 = (FPCGTaggedData *)0x0;
  iVar9 = 0;
  local_744 = 0;
  if ((char)TVar12.DebugPtr[1]._padding_ != '\0') {
    FLazyName::Resolve(&PCGGetSegment::Constants::SegmentIndexLabel);
    pTVar13 = FPCGDataCollection::GetInputsByPin(this_02,&local_618,&local_648);
    if (&local_4a8 != pTVar13) {
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)0x0,0);
      local_6a0 = (FPCGTaggedData *)(pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_738 = pTVar13->ArrayNum;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_618.AllocatorInstance.Data,local_618.ArrayNum);
    if ((FPCGTaggedData *)local_618.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_618.AllocatorInstance.Data);
    }
    iVar30 = local_738;
    if ((local_738 != 1) && (local_738 != local_6f8.ArrayNum)) {
      FLazyName::Resolve(&PCGGetSegment::Constants::SegmentIndexLabel);
      PCGLog::InputOutput::LogInvalidCardinalityError
                (PCGPinConstants::DefaultInputLabel,local_640,param_1);
      goto LAB_149c67120;
    }
  }
  iVar9 = 0;
  if (*(char *)((longlong)&TVar12.DebugPtr[1]._padding_ + 1) != '\0') {
    FLazyName::Resolve(&PCGGetSegment::Constants::HoleIndexLabel);
    pTVar13 = FPCGDataCollection::GetInputsByPin(this_02,&local_608,&local_638);
    if (&local_498 != pTVar13) {
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)0x0,0);
      local_6a8 = (FPCGTaggedData *)(pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar9 = pTVar13->ArrayNum;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
      local_744 = iVar9;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_608.AllocatorInstance.Data,local_608.ArrayNum);
    if ((FPCGTaggedData *)local_608.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_608.AllocatorInstance.Data);
    }
    if ((iVar9 != 1) && (iVar9 != local_6f8.ArrayNum)) {
      FLazyName::Resolve(&PCGGetSegment::Constants::HoleIndexLabel);
      PCGLog::InputOutput::LogInvalidCardinalityError
                (PCGPinConstants::DefaultInputLabel,local_630,param_1);
      iVar30 = local_738;
      goto LAB_149c67120;
    }
  }
  dVar7 = __real_3ff0000000000000;
  local_6e8 = (uint)TVar12.DebugPtr[1]._padding_;
  local_698 = *(int *)(TVar12.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1);
  iVar30 = local_738;
  if (0 < local_6f8.ArrayNum) {
    uVar26 = 0;
    uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_690 = 0;
    _Var32.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    do {
      lVar29 = local_690;
      uVar24 = local_6e8;
      uVar28 = 0;
      if ((int)uVar26 < local_6f8.ArrayNum) {
        uVar28 = ~uVar26 >> 0x1f;
      }
      if (uVar28 == 0) {
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar31) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      }
      iVar30 = local_698;
      local_708 = (FPCGTaggedData *)(local_6f8.AllocatorInstance.Data + lVar29);
      if ((char)TVar12.DebugPtr[1]._padding_ == '\0') {
LAB_149c65fbb:
        iVar9 = local_744;
        if (*(char *)((longlong)&TVar12.DebugPtr[1]._padding_ + 1) != '\0') {
          uVar23 = (int)uVar26 % local_744;
          uVar28 = 0;
          if ((int)uVar23 < local_744) {
            uVar28 = ~uVar23 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          local_6d0 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(local_6a8 + (int)uVar23))->Handle;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c66048:
            if ((UPCGData *)local_6d0.Handle != (UPCGData *)0x0) {
              pUVar10 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar31 = FObjectPtr::IsA((FObjectPtr *)&local_6d0,pUVar10);
              FVar27 = local_6d0;
              if ((bVar31) && ((UPCGData *)local_6d0.Handle != (UPCGData *)0x0)) {
                local_718[0] = -1;
                local_6c8.Handle = (UObject *)(local_708->Data).Data.field0_0x0.DebugPtr;
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c660a7:
                  if ((UPCGData *)local_6c8.Handle == (UPCGData *)0x0) goto LAB_149c6643c;
                  pUVar10 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
                  bVar31 = FObjectPtr::IsA((FObjectPtr *)&local_6c8,pUVar10);
                  if (((!bVar31) || ((UPCGData *)local_6c8.Handle == (UPCGData *)0x0)) ||
                     (bVar31 = PCGAttributeAccessorHelpers::ExtractParamValue<int>
                                         ((UPCGData *)FVar27.Handle,
                                          (FPCGAttributePropertyInputSelector *)
                                          &TVar12.DebugPtr[1].Seed,local_718,param_1,
                                          AllowBroadcastAndConstructible,false),
                     iVar30 = local_718[0], !bVar31)) goto LAB_149c6643c;
                }
                else {
                  if ((UPCGData *)local_6c8.Handle != (UPCGData *)0x0) {
                    UE::GC::MarkAsReachable(local_6c8.Handle);
                    goto LAB_149c660a7;
                  }
LAB_149c6643c:
                  iVar30 = -1;
                }
                uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                _Var32.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                goto LAB_149c6612d;
              }
            }
          }
          else if ((UPCGData *)local_6d0.Handle != (UPCGData *)0x0) {
            UE::GC::MarkAsReachable(local_6d0.Handle);
            goto LAB_149c66048;
          }
          FLazyName::Resolve(&PCGGetSegment::Constants::HoleIndexLabel);
          PCGLog::InputOutput::LogTypedDataNotFoundWarning(Param,local_620,param_1);
          uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
          goto LAB_149c670db;
        }
LAB_149c6612d:
        pFVar21 = local_708;
        local_540 = &local_398;
        local_548 = local_730;
        local_518 = local_730;
        local_510 = &local_398;
        local_508 = &local_338;
        local_500 = &local_748;
        local_538 = &local_338;
        local_4f8 = &local_700;
        local_530 = &local_748;
        local_4f0 = &local_710;
        local_528 = &local_700;
        local_398 = CONCAT44(uVar50,uVar49);
        uStack_390 = CONCAT44(uVar52,uVar51);
        local_388 = CONCAT44(uVar46,uVar45);
        uStack_380 = CONCAT44(uVar48,uVar47);
        local_378 = CONCAT44(uVar42,uVar41);
        uStack_370 = CONCAT44(uVar44,uVar43);
        local_368 = CONCAT44(uVar38,uVar37);
        uStack_360 = CONCAT44(uVar40,uVar39);
        local_358 = CONCAT44(uVar34,uVar33);
        uStack_350 = CONCAT44(uVar36,uVar35);
        local_338 = CONCAT44(uVar50,uVar49);
        uStack_330 = CONCAT44(uVar52,uVar51);
        local_328 = CONCAT44(uVar46,uVar45);
        uStack_320 = CONCAT44(uVar48,uVar47);
        local_318 = CONCAT44(uVar42,uVar41);
        uStack_310 = CONCAT44(uVar44,uVar43);
        local_308 = CONCAT44(uVar38,uVar37);
        uStack_300 = CONCAT44(uVar40,uVar39);
        local_2f8 = CONCAT44(uVar34,uVar33);
        uStack_2f0 = CONCAT44(uVar36,uVar35);
        local_748 = 0;
        local_700 = 0xffffffffffffffff;
        local_710 = 0xffffffffffffffff;
        local_6c0.Handle = (UObject *)(local_708->Data).Data.field0_0x0.DebugPtr;
        local_520 = &local_710;
        local_348 = _Var32.m128d_f64;
        local_2e8 = _Var32.m128d_f64;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c6627b:
          if ((UPCGSplineData *)local_6c0.Handle == (UPCGSplineData *)0x0) goto LAB_149c666e1;
          pUVar10 = Z_Construct_UClass_UPCGSplineData_NoRegister();
          bVar31 = FObjectPtr::IsA((FObjectPtr *)&local_6c0,pUVar10);
          FVar27 = local_6c0;
          if ((!bVar31) ||
             (pFVar21 = local_708, (UPCGSplineData *)local_6c0.Handle == (UPCGSplineData *)0x0)) {
            uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
            goto LAB_149c666e1;
          }
          iVar9 = (**(code **)(*(longlong *)local_6c0.Handle + 0x4a0))(local_6c0.Handle);
          param_1 = local_730;
          uVar28 = uVar24;
          if ((((int)uVar24 < 0) && (uVar28 = uVar24 + iVar9, (int)uVar28 < 0)) ||
             (iVar9 <= (int)uVar28)) {
            local_5e8.Object = (FCulture *)0x0;
            local_5e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar14 = FText::AsNumber(&local_488,iVar9 + -1,(FNumberFormattingOptions *)0x0,
                                      &local_5e8);
            local_5f8.Object = (FCulture *)0x0;
            local_5f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar15 = FText::AsNumber(&local_478,-iVar9,(FNumberFormattingOptions *)0x0,&local_5f8);
            local_558.Object = (FCulture *)0x0;
            local_558.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar16 = FText::AsNumber(&local_468,uVar24,(FNumberFormattingOptions *)0x0,&local_558);
            pFVar17 = FTextFormat::FTextFormat
                                (&local_458,&PCGGetSegment::Log::InvalidSegmentIndex,Default);
            pFVar14 = FText::Format<FText,FText,FText>(&local_4c8,pFVar17,pFVar16,pFVar15,pFVar14);
            param_1 = local_730;
            PCGLog::LogWarningOnGraph(pFVar14,local_730);
            if (local_4c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_558.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_5f8.SharedReferenceCount.ReferenceController);
            FVar22.ReferenceController = local_5e8.SharedReferenceCount.ReferenceController;
            goto LAB_149c663b3;
          }
          dVar53 = (double)(int)(uVar28 + 1);
          if (*(char *)((longlong)&local_740.DebugPtr[1]._padding_ + 2) == '\0') {
            puVar18 = (undefined8 *)
                      (**(code **)(*(longlong *)FVar27.Handle + 0x4c0))
                                (FVar27.Handle,local_258,
                                 (float)((dVar7 / (double)iVar9) * (double)(int)uVar28));
            local_398 = *puVar18;
            uStack_390 = puVar18[1];
            local_388 = puVar18[2];
            uStack_380 = puVar18[3];
            local_378 = puVar18[4];
            uStack_370 = puVar18[5];
            local_368 = puVar18[6];
            uStack_360 = puVar18[7];
            local_358 = puVar18[8];
            uStack_350 = puVar18[9];
            local_348 = *(double (*) [2])(puVar18 + 10);
            puVar18 = (undefined8 *)
                      (**(code **)(*(longlong *)FVar27.Handle + 0x4c0))
                                (FVar27.Handle,local_1f8,(float)((dVar7 / (double)iVar9) * dVar53));
            local_338 = *puVar18;
            uStack_330 = puVar18[1];
            local_328 = puVar18[2];
            uStack_320 = puVar18[3];
            local_318 = puVar18[4];
            uStack_310 = puVar18[5];
            local_308 = puVar18[6];
            uStack_300 = puVar18[7];
            local_2f8 = puVar18[8];
            uStack_2f0 = puVar18[9];
            local_2e8 = *(double (*) [2])(puVar18 + 10);
            (**(code **)(*(longlong *)FVar27.Handle + 0x520))(FVar27.Handle,&local_688);
            local_748 = local_680 != 0;
            if (local_680 != 0) {
              if ((local_680 <= (int)uVar28) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar31)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              local_700 = *(undefined8 *)(local_688 + (ulonglong)uVar28 * 8);
              uVar28 = (int)(uVar28 + 1) % local_680;
              uVar24 = 0;
              if ((int)uVar28 < local_680) {
                uVar24 = ~uVar28 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar31)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              local_710 = *(undefined8 *)(local_688 + (longlong)(int)uVar28 * 8);
            }
            this_01 = (UPCGSplineData *)
                      `FPCGGetSegmentElement::ExecuteInternal'::__l23::<lambda_2>::operator()
                                (&local_548,(UPCGSpatialData *)FVar27.Handle);
            param_1 = local_730;
            TVar12 = local_740;
          }
          else {
            this_01 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(local_730);
            UPCGSpatialData::InitializeFromData
                      ((UPCGSpatialData *)this_01,(UPCGSpatialData *)FVar27.Handle,
                       (UPCGMetadata *)0x0,true,true);
            PCGSplitSpline::SplitSpline
                      ((UPCGSplineData *)FVar27.Handle,this_01,(double)(int)uVar28,dVar53);
            TVar12 = local_740;
          }
LAB_149c67020:
          pFVar21 = local_708;
          if (this_01 != (UPCGSplineData *)0x0) {
            pFVar2 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
            if (((pFVar2 <= local_708) &&
                (local_708 < pFVar2 + (param_1->OutputData).TaggedData.ArrayMax)) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar31)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
            piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
            }
            (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
            pFVar21 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar9 * 0x78),pFVar21);
            FPCGDataPtrWrapper::operator=(&pFVar21->Data,(UPCGData *)this_01);
          }
          goto LAB_149c6640d;
        }
        if ((UPCGSplineData *)local_6c0.Handle != (UPCGSplineData *)0x0) {
          UE::GC::MarkAsReachable(local_6c0.Handle);
          uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
          goto LAB_149c6627b;
        }
LAB_149c666e1:
        local_6b8.Handle = (UObject *)(pFVar21->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c66730:
          if ((UPCGSpatialData *)local_6b8.Handle == (UPCGSpatialData *)0x0) goto LAB_149c66bde;
          pUVar10 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
          bVar31 = FObjectPtr::IsA((FObjectPtr *)&local_6b8,pUVar10);
          FVar27 = local_6b8;
          if ((!bVar31) ||
             (pFVar21 = local_708, (UPCGSpatialData *)local_6b8.Handle == (UPCGSpatialData *)0x0)) {
            uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
            goto LAB_149c66bde;
          }
          puVar19 = &local_6b8.Handle[6].field_0x20;
          if (iVar30 != -1) {
            if ((iVar30 < 0) || (*(int *)&local_6b8.Handle[7].field_0x18 <= iVar30)) {
              local_5c8.Object = (FCulture *)0x0;
              local_5c8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar14 = FText::AsNumber(&local_448,*(int *)&local_6b8.Handle[7].field_0x18,
                                        (FNumberFormattingOptions *)0x0,&local_5c8);
              local_5d8.Object = (FCulture *)0x0;
              local_5d8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar15 = FText::AsNumber(&local_3a8,iVar30,(FNumberFormattingOptions *)0x0,&local_5d8
                                       );
              pFVar17 = FTextFormat::FTextFormat
                                  (&local_438,&PCGGetSegment::Log::InvalidHoleIndex,Default);
              pFVar14 = FText::Format<FText,FText>(&local_4b8,pFVar17,pFVar15,pFVar14);
              param_1 = local_730;
              PCGLog::LogWarningOnGraph(pFVar14,local_730);
              if (local_4b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5d8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5c8.SharedReferenceCount.ReferenceController);
              goto LAB_149c6640d;
            }
            pUVar6 = local_6b8.Handle + 7;
            if ((*(int *)&local_6b8.Handle[7].field_0x18 <= iVar30) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            puVar19 = (undefined1 *)((longlong)iVar30 * 0x10 + *(longlong *)&pUVar6->field_0x10);
          }
          iVar9 = *(int *)(puVar19 + 8);
          uVar28 = uVar24;
          if ((((int)uVar24 < 0) && (uVar28 = uVar24 + iVar9, (int)uVar28 < 0)) ||
             (iVar9 <= (int)uVar28)) {
            local_598.Object = (FCulture *)0x0;
            local_598.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar14 = FText::AsNumber(&local_428,iVar9 + -1,(FNumberFormattingOptions *)0x0,
                                      &local_598);
            local_5a8.Object = (FCulture *)0x0;
            local_5a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar15 = FText::AsNumber(&local_418,-iVar9,(FNumberFormattingOptions *)0x0,&local_5a8);
            local_5b8.Object = (FCulture *)0x0;
            local_5b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar16 = FText::AsNumber(&local_408,uVar24,(FNumberFormattingOptions *)0x0,&local_5b8);
            pFVar17 = FTextFormat::FTextFormat
                                (&local_3f8,&PCGGetSegment::Log::InvalidSegmentIndex,Default);
            pFVar14 = FText::Format<FText,FText,FText>(&local_4e8,pFVar17,pFVar16,pFVar15,pFVar14);
            param_1 = local_730;
            PCGLog::LogWarningOnGraph(pFVar14,local_730);
            if (local_4e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_5b8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_5a8.SharedReferenceCount.ReferenceController);
            FVar22.ReferenceController = local_598.SharedReferenceCount.ReferenceController;
            goto LAB_149c663b3;
          }
          local_724 = 0xffffffff;
          local_720 = 0xffffffff;
          PCGPolygon2DData::GetStartEndVertexIndices
                    ((TGeneralPolygon2<double> *)&FVar27.Handle[6].field_0x20,uVar28,iVar30,
                     (int *)&local_724,(int *)&local_720);
          lVar29 = *(longlong *)FVar27.Handle;
          fVar5 = (float)(int)local_724;
          iVar9 = (**(code **)(lVar29 + 0x4a0))(FVar27.Handle);
          puVar18 = (undefined8 *)
                    (**(code **)(lVar29 + 0x4c0))(FVar27.Handle,local_198,fVar5 / (float)iVar9);
          fVar5 = (float)(int)local_720;
          local_398 = *puVar18;
          uStack_390 = puVar18[1];
          local_388 = puVar18[2];
          uStack_380 = puVar18[3];
          local_378 = puVar18[4];
          uStack_370 = puVar18[5];
          local_368 = puVar18[6];
          uStack_360 = puVar18[7];
          local_358 = puVar18[8];
          uStack_350 = puVar18[9];
          local_348 = *(double (*) [2])(puVar18 + 10);
          lVar29 = *(longlong *)FVar27.Handle;
          iVar9 = (**(code **)(lVar29 + 0x4a0))(FVar27.Handle);
          puVar18 = (undefined8 *)
                    (**(code **)(lVar29 + 0x4c0))(FVar27.Handle,local_138,fVar5 / (float)iVar9);
          local_338 = *puVar18;
          uStack_330 = puVar18[1];
          local_328 = puVar18[2];
          uStack_320 = puVar18[3];
          local_318 = puVar18[4];
          uStack_310 = puVar18[5];
          local_308 = puVar18[6];
          uStack_300 = puVar18[7];
          local_2f8 = puVar18[8];
          uStack_2f0 = puVar18[9];
          local_2e8 = *(double (*) [2])(puVar18 + 10);
          (**(code **)(*(longlong *)FVar27.Handle + 0x520))(FVar27.Handle,&local_678);
          local_748 = local_670 != 0;
          if (local_670 != 0) {
            lVar29 = (longlong)(int)local_724;
            uVar24 = 0;
            if ((int)local_724 < local_670) {
              uVar24 = ~local_724 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar31)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            local_700 = *(undefined8 *)(local_678 + lVar29 * 8);
            lVar29 = (longlong)(int)local_720;
            uVar24 = 0;
            if ((int)local_720 < local_670) {
              uVar24 = ~local_720 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar31)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            local_710 = *(undefined8 *)(local_678 + lVar29 * 8);
          }
          TVar12 = local_740;
          if (*(char *)((longlong)&local_740.DebugPtr[1]._padding_ + 2) != '\0') {
            pTVar20 = (TTransform<double> *)
                      (**(code **)(*(longlong *)FVar27.Handle + 0x498))(FVar27.Handle,local_d8);
            this_01 = (UPCGSplineData *)
                      `FPCGGetSegmentElement::ExecuteInternal'::__l23::<lambda_3>::operator()
                                (&local_518,(UPCGSpatialData *)FVar27.Handle,pTVar20);
            param_1 = local_730;
            goto LAB_149c67020;
          }
LAB_149c67009:
          TVar12 = local_740;
          this_01 = (UPCGSplineData *)
                    `FPCGGetSegmentElement::ExecuteInternal'::__l23::<lambda_2>::operator()
                              (&local_548,(UPCGSpatialData *)FVar27.Handle);
          param_1 = local_730;
          goto LAB_149c67020;
        }
        if ((UPCGSpatialData *)local_6b8.Handle != (UPCGSpatialData *)0x0) {
          UE::GC::MarkAsReachable(local_6b8.Handle);
          uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
          goto LAB_149c66730;
        }
LAB_149c66bde:
        local_6b0.Handle = (UObject *)(pFVar21->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c66c2d:
          if ((UPCGSpatialData *)local_6b0.Handle == (UPCGSpatialData *)0x0) goto LAB_149c66c77;
          pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          bVar31 = FObjectPtr::IsA((FObjectPtr *)&local_6b0,pUVar10);
          uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          FVar27 = local_6b0;
          _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
          if (!bVar31) goto LAB_149c66c77;
        }
        else {
          if ((UPCGSpatialData *)local_6b0.Handle != (UPCGSpatialData *)0x0) {
            UE::GC::MarkAsReachable(local_6b0.Handle);
            uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
            goto LAB_149c66c2d;
          }
LAB_149c66c77:
          FVar27.Handle = (UObject *)0x0;
        }
        param_1 = local_730;
        iVar9 = local_744;
        if ((UPCGSpatialData *)FVar27.Handle != (UPCGSpatialData *)0x0) {
          (**(code **)(*(longlong *)FVar27.Handle + 0x500))(FVar27.Handle,&local_2d8);
          (**(code **)(*(longlong *)FVar27.Handle + 0x538))(FVar27.Handle,&local_668);
          iVar9 = (**(code **)(*(longlong *)FVar27.Handle + 0x488))(FVar27.Handle);
          uVar28 = uVar24;
          if (((-1 < (int)uVar24) || (uVar28 = uVar24 + iVar9, -1 < (int)uVar28)) &&
             ((int)uVar28 < iVar9)) {
            uVar3 = (longlong)(int)(uVar28 + 1) % (longlong)iVar9;
            uVar24 = (uint)uVar3;
            if ((local_2c8 <= (int)uVar28) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar31)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            lVar29 = (longlong)((int)uVar28 % local_2cc) * (longlong)local_2d0;
            local_398 = *(undefined8 *)(lVar29 + local_2d8);
            uStack_390 = ((undefined8 *)(lVar29 + local_2d8))[1];
            puVar18 = (undefined8 *)(lVar29 + 0x10 + local_2d8);
            local_388 = *puVar18;
            uStack_380 = puVar18[1];
            puVar18 = (undefined8 *)(lVar29 + 0x20 + local_2d8);
            local_378 = *puVar18;
            uStack_370 = puVar18[1];
            puVar18 = (undefined8 *)(lVar29 + 0x30 + local_2d8);
            local_368 = *puVar18;
            uStack_360 = puVar18[1];
            puVar18 = (undefined8 *)(lVar29 + 0x40 + local_2d8);
            local_358 = *puVar18;
            uStack_350 = puVar18[1];
            local_348 = *(double (*) [2])(lVar29 + 0x50 + local_2d8);
            uVar23 = 0;
            if ((int)uVar24 < local_2c8) {
              uVar23 = ~uVar24 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar31)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            lVar29 = (longlong)
                     (int)((longlong)
                           ((ulonglong)(uint)((int)uVar24 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
                          (longlong)local_2cc) * (longlong)local_2d0;
            local_748 = local_658 != 0;
            local_338 = *(undefined8 *)(lVar29 + local_2d8);
            uStack_330 = ((undefined8 *)(lVar29 + local_2d8))[1];
            puVar18 = (undefined8 *)(lVar29 + 0x10 + local_2d8);
            local_328 = *puVar18;
            uStack_320 = puVar18[1];
            puVar18 = (undefined8 *)(lVar29 + 0x20 + local_2d8);
            local_318 = *puVar18;
            uStack_310 = puVar18[1];
            puVar18 = (undefined8 *)(lVar29 + 0x30 + local_2d8);
            local_308 = *puVar18;
            uStack_300 = puVar18[1];
            puVar18 = (undefined8 *)(lVar29 + 0x40 + local_2d8);
            local_2f8 = *puVar18;
            uStack_2f0 = puVar18[1];
            local_2e8 = *(double (*) [2])(lVar29 + 0x50 + local_2d8);
            if (local_658 != 0) {
              if ((local_658 <= (int)uVar28) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar31)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              local_700 = *(undefined8 *)
                           ((longlong)((int)uVar28 % local_65c) * (longlong)local_660 + local_668);
              uVar28 = 0;
              if ((int)uVar24 < local_658) {
                uVar28 = ~uVar24 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar31)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              local_710 = *(undefined8 *)
                           ((longlong)
                            (int)((longlong)
                                  ((ulonglong)(uint)((int)uVar24 >> 0x1f) << 0x20 |
                                  uVar3 & 0xffffffff) % (longlong)local_65c) * (longlong)local_660 +
                           local_668);
            }
            TVar12 = local_740;
            if (*(char *)((longlong)&local_740.DebugPtr[1]._padding_ + 2) != '\0') {
              this_01 = (UPCGSplineData *)
                        `FPCGGetSegmentElement::ExecuteInternal'::__l23::<lambda_3>::operator()
                                  (&local_518,(UPCGSpatialData *)FVar27.Handle,
                                   &UE::Math::TTransform<double>::Identity);
              param_1 = local_730;
              goto LAB_149c67020;
            }
            goto LAB_149c67009;
          }
          local_568.Object = (FCulture *)0x0;
          local_568.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar14 = FText::AsNumber(&local_3e8,iVar9 + -1,(FNumberFormattingOptions *)0x0,&local_568
                                   );
          local_578.Object = (FCulture *)0x0;
          local_578.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar15 = FText::AsNumber(&local_3d8,-iVar9,(FNumberFormattingOptions *)0x0,&local_578);
          local_588.Object = (FCulture *)0x0;
          local_588.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar16 = FText::AsNumber(&local_3c8,uVar24,(FNumberFormattingOptions *)0x0,&local_588);
          pFVar17 = FTextFormat::FTextFormat
                              (&local_3b8,&PCGGetSegment::Log::InvalidSegmentIndex,Default);
          pFVar14 = FText::Format<FText,FText,FText>(&local_4d8,pFVar17,pFVar16,pFVar15,pFVar14);
          param_1 = local_730;
          PCGLog::LogWarningOnGraph(pFVar14,local_730);
          if (local_4d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_588.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_578.SharedReferenceCount.ReferenceController);
          FVar22.ReferenceController = local_568.SharedReferenceCount.ReferenceController;
LAB_149c663b3:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar22.ReferenceController);
          uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          TVar12 = local_740;
          _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
          iVar9 = local_744;
        }
      }
      else {
        uVar23 = (int)uVar26 % local_738;
        uVar28 = 0;
        if ((int)uVar23 < local_738) {
          uVar28 = ~uVar23 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_6d8 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(local_6a0 + (int)uVar23))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c65f31:
          if ((UPCGData *)local_6d8.Handle != (UPCGData *)0x0) {
            pUVar10 = Z_Construct_UClass_UPCGParamData_NoRegister();
            bVar31 = FObjectPtr::IsA((FObjectPtr *)&local_6d8,pUVar10);
            if ((bVar31) && ((UPCGData *)local_6d8.Handle != (UPCGData *)0x0)) {
              local_71c = 0xffffffff;
              bVar31 = PCGAttributeAccessorHelpers::ExtractParamValue<int>
                                 ((UPCGData *)local_6d8.Handle,
                                  (FPCGAttributePropertyInputSelector *)
                                  &TVar12.DebugPtr[1]._padding_,(int *)&local_71c,param_1,
                                  AllowBroadcastAndConstructible,false);
              uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
              uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
              uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
              uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
              uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
              uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
              uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
              uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
              uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
              uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
              uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
              uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
              uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
              _Var32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
              if (bVar31) {
                uVar24 = local_71c;
              }
              goto LAB_149c65fbb;
            }
          }
        }
        else if ((UPCGData *)local_6d8.Handle != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable(local_6d8.Handle);
          goto LAB_149c65f31;
        }
        FLazyName::Resolve(&PCGGetSegment::Constants::SegmentIndexLabel);
        PCGLog::InputOutput::LogTypedDataNotFoundWarning(Param,local_628,param_1);
LAB_149c6640d:
        uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar37 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        _Var32.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        iVar9 = local_744;
      }
LAB_149c670db:
      uVar26 = uVar26 + 1;
      local_690 = local_690 + 0x78;
      <Var25 = local_747;
      iVar30 = local_738;
    } while ((int)uVar26 < local_6f8.ArrayNum);
  }
LAB_149c67120:
  pFVar21 = local_6a8;
  DestructItems<FPCGTaggedData,int>(local_6a8,iVar9);
  if (pFVar21 != (FPCGTaggedData *)0x0) {
    FMemory::Free(pFVar21);
  }
  pFVar21 = local_6a0;
  DestructItems<FPCGTaggedData,int>(local_6a0,iVar30);
  if (pFVar21 != (FPCGTaggedData *)0x0) {
    FMemory::Free(pFVar21);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_6f8.AllocatorInstance.Data,local_6f8.ArrayNum);
  if ((FPCGTaggedData *)local_6f8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_6f8.AllocatorInstance.Data);
  }
  if (<Var25 != (<lambda_1>)0x0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ExecutionLoopMode @ 149c75b10

EPCGElementExecutionLoopMode __thiscall
FPCGGetSegmentElement::ExecutionLoopMode(FPCGGetSegmentElement *this,UPCGSettings *param_1)

{
  return PrimaryPinAndBroadcastablePins;
}

// SupportsBasePointDataInputs @ 149c928c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGetSegmentElement::SupportsBasePointDataInputs(FPCGGetSegmentElement *this,FPCGContext *param_1)

{
  return true;
}

