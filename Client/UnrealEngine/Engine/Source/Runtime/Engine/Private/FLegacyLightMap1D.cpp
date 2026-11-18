// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetInteraction @ 147ec04d0

FLightMapInteraction * __thiscall
FLegacyLightMap1D::GetInteraction
          (FLegacyLightMap1D *this,FLightMapInteraction *__return_storage_ptr__,Type param_1)

{
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->HighQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->SkyOcclusionTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->AOMaterialMaskTexture = (ULightMapTexture2D *)0x0;
  *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->LowQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
  __return_storage_ptr__->Type = LMIT_None;
  return __return_storage_ptr__;
}

// Serialize @ 147eda900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLegacyLightMap1D::Serialize(FLegacyLightMap1D *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStackY_d8 [32];
  uint local_a8;
  uint local_a4;
  uint local_a0 [2];
  UObject *local_98;
  double local_90;
  double local_88;
  double local_80;
  FAllocation local_78;
  undefined5 local_70;
  undefined4 uStack_6b;
  undefined1 uStack_67;
  undefined6 uStack_66;
  uchar local_60 [8];
  uchar local_58 [8];
  FAllocation local_50;
  undefined5 local_48;
  undefined4 uStack_43;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  uchar local_38 [8];
  uchar local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FGuid,TSizedDefaultAllocator<32>_> *)&this->field_0x8);
  if ((param_1->field_0x28 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                       ,0xce7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_30[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_30[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_30[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_30[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_48 = 0;
  uStack_3e = 0;
  local_58[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_58[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_58[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_58[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_70 = 0;
  uStack_66 = 0;
  local_50.RawData = (void *)0x0;
  local_78.RawData = (void *)0x0;
  uStack_43 = 0xffffffff;
  uStack_3f = 0xff;
  local_38[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_38[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_38[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_38[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_38[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_38[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_38[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_38[7] = FIoChunkId::InvalidChunkId.Id[7];
  uStack_6b = 0xffffffff;
  uStack_67 = 0xff;
  local_60[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_60[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_60[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_60[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_60[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_60[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_60[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_60[7] = FIoChunkId::InvalidChunkId.Id[7];
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_98);
  FBulkData::Serialize((FBulkData *)&local_50,param_1,local_98,false,8,None);
  lVar4 = 5;
  do {
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
        }
      }
      else {
        local_a8 = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_a4);
        }
      }
      else {
        local_a4 = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a0,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_a0);
        }
      }
      else {
        local_a0[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
    }
    else {
      ::operator<<(param_1,&local_90);
      ::operator<<(param_1,&local_88);
      ::operator<<(param_1,&local_80);
    }
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FBulkData::Serialize((FBulkData *)&local_78,param_1,local_98,false,8,None);
  FBulkData::~FBulkData((FBulkData *)&local_78);
  FBulkData::~FBulkData((FBulkData *)&local_50);
  return;
}

