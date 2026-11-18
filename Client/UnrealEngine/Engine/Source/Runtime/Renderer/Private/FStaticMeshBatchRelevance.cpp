// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FStaticMeshBatchRelevance @ 1456dcd70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshBatchRelevance * __thiscall
FStaticMeshBatchRelevance::FStaticMeshBatchRelevance
          (FStaticMeshBatchRelevance *this,FStaticMeshBatch *param_1,float param_2,bool param_3,
          bool param_4,bool param_5,bool param_6,bool param_7,bool param_8,bool param_9,
          bool param_10,uchar param_11,Type param_12)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FStaticMeshBatchRelevance *pFVar4;
  byte bVar5;
  
  (this->CommandInfosMask).Data = 0;
  this->Id = param_1->Id;
  this->ScreenSize = param_2;
  lVar2 = param_1->_padding_;
  this->CommandInfosBase = 0;
  this->NumElements = (ushort)lVar2;
  bVar5 = (this->UnsignedLODIndex ^ *(byte *)((longlong)&param_1->_padding_ + 2)) & 0xf ^
          this->field_0x14;
  this->field_0x14 = bVar5;
  bVar5 = (*(byte *)((longlong)&param_1->_padding_ + 2) >> 3 ^ bVar5) & 0x10 ^ bVar5;
  this->field_0x14 = bVar5;
  bVar5 = ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 0x11) << 6 ^ bVar5) & 0x40 ^ bVar5
  ;
  this->field_0x14 = bVar5;
  this->field_0x14 = *(char *)((longlong)&param_1->_padding_ + 6) << 7 | bVar5 & 0x7f;
  bVar5 = ((byte)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 2) ^ this->CastShadow) & 1 ^
          this->field_0x15;
  this->field_0x15 = bVar5;
  bVar5 = ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 3) * '\x02' ^ bVar5) & 2 ^ bVar5;
  this->field_0x15 = bVar5;
  bVar5 = ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 4) << 2 ^ bVar5) & 4 ^ bVar5;
  this->field_0x15 = bVar5;
  this->field_0x15 =
       (((byte)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 5) & 1) << 3 ^ bVar5 & 0xf7) & 0xcf
       | (param_4 | param_5 * '\x02') << 4;
  bVar3 = FMeshBatch::UseForHairStrands((FMeshBatch *)param_1,param_12);
  this->bUseHairStrands = bVar3;
  this->bUseAnisotropy = param_6;
  bVar5 = ((byte)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 0x16) ^ this->bOverlayMaterial) &
          1 ^ this->field_0x16;
  this->field_0x16 = bVar5;
  bVar5 = ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 0x12) * '\x02' ^ bVar5) & 2 ^
          bVar5;
  this->field_0x16 = bVar5;
  this->field_0x16 =
       ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 0x13) << 2 ^ bVar5 & 3) & 0x1f |
       (param_3 | param_7 * '\x02') << 5 | param_8 << 7;
  bVar5 = this->field_0x17 & 0xfc | param_9 | param_10 * '\x02';
  this->field_0x17 = (param_11 << 2 ^ bVar5) & 0x7c ^ bVar5;
  if (this->bInvalidLODIndex == '\0') {
    bVar5 = this->UnsignedLODIndex;
  }
  else {
    bVar5 = 0xff;
  }
  if (bVar5 != *(byte *)((longlong)&param_1->_padding_ + 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetLODIndex() == StaticMesh.LODIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StaticMeshBatch.cpp"
                       ,0x46,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStaticMeshBatchRelevance *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// GetStaticMeshCommandInfoIndex @ 14570aba0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FStaticMeshBatchRelevance::GetStaticMeshCommandInfoIndex
          (FStaticMeshBatchRelevance *this,Type param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = (this->CommandInfosMask).Data;
  uVar4 = (uint)this->CommandInfosBase;
  if ((uVar1 >> ((ulonglong)param_1 & 0x3f) & 1) == 0) {
    return -1;
  }
  uVar3 = 0;
  if (param_1 != DepthPass) {
    do {
      uVar2 = uVar4 + 1;
      if ((uVar1 >> (uVar3 & 0x3f) & 1) == 0) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)(uint)param_1);
  }
  return uVar4;
}

