// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FObjectThumbnail @ 1418bc8a0

FObjectThumbnail * __thiscall FObjectThumbnail::FObjectThumbnail(FObjectThumbnail *this)

{
  this->ImageWidth = 0;
  this->ImageHeight = 0;
  (this->CompressedImageData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedImageData).ArrayNum = 0;
  (this->CompressedImageData).ArrayMax = 0;
  (this->ImageData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageData).ArrayNum = 0;
  (this->ImageData).ArrayMax = 0;
  this->bIsDirty = false;
  this->bLoadedFromDisk = false;
  this->bIsJPEG = false;
  this->bCreatedAfterCustomThumbForSharedTypesEnabled = false;
  return this;
}

// ChooseNewCompressor @ 1418ca350

FThumbnailCompressionInterface * __thiscall
FObjectThumbnail::ChooseNewCompressor(FObjectThumbnail *this)

{
  FThumbnailCompressionInterface *pFVar1;
  
  if (((this->ImageWidth < 1) || (this->ImageHeight < 1)) ||
     (((JPEGThumbnailCompressor == (FThumbnailCompressionInterface *)0x0 ||
       ((this->ImageWidth < 8 || (pFVar1 = JPEGThumbnailCompressor, this->ImageHeight < 8)))) &&
      (pFVar1 = PNGThumbnailCompressor,
      PNGThumbnailCompressor == (FThumbnailCompressionInterface *)0x0)))) {
    pFVar1 = (FThumbnailCompressionInterface *)0x0;
  }
  return pFVar1;
}

// CompressImageData @ 1418ce990

void __thiscall FObjectThumbnail::CompressImageData(FObjectThumbnail *this)

{
  int iVar1;
  int iVar2;
  FThumbnailCompressionInterface *pFVar3;
  
  (this->CompressedImageData).ArrayNum = 0;
  if ((this->CompressedImageData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CompressedImageData).AllocatorInstance,0,
               &(this->CompressedImageData).ArrayMax);
  }
  iVar1 = (this->ImageData).ArrayNum;
  this->bIsJPEG = false;
  if (((((0 < iVar1) && (iVar1 = this->ImageWidth, 0 < iVar1)) &&
       (iVar2 = this->ImageHeight, 0 < iVar2)) &&
      ((((JPEGThumbnailCompressor != (FThumbnailCompressionInterface *)0x0 && (7 < iVar1)) &&
        (pFVar3 = JPEGThumbnailCompressor, 7 < iVar2)) ||
       (pFVar3 = PNGThumbnailCompressor,
       PNGThumbnailCompressor != (FThumbnailCompressionInterface *)0x0)))) &&
     ((pFVar3 != (FThumbnailCompressionInterface *)0x0 &&
      ((**(code **)*pFVar3)(pFVar3,&this->ImageData,iVar1,iVar2,&this->CompressedImageData),
      pFVar3 == JPEGThumbnailCompressor)))) {
    this->bIsJPEG = true;
  }
  return;
}

// CountBytes @ 1418d2d80

void __thiscall FObjectThumbnail::CountBytes(FObjectThumbnail *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x30,0x30);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->CompressedImageData).ArrayNum,
             (longlong)(this->CompressedImageData).ArrayMax);
                    /* WARNING: Could not recover jumptable at 0x0001418d2dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->ImageData).ArrayNum,(longlong)(this->ImageData).ArrayMax);
  return;
}

// CountImageBytes_Compressed @ 1418d2de0

void __thiscall
FObjectThumbnail::CountImageBytes_Compressed(FObjectThumbnail *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418d2df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->CompressedImageData).ArrayNum,
             (longlong)(this->CompressedImageData).ArrayMax);
  return;
}

// CountImageBytes_Uncompressed @ 1418d2e00

void __thiscall
FObjectThumbnail::CountImageBytes_Uncompressed(FObjectThumbnail *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001418d2e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->ImageData).ArrayNum,(longlong)(this->ImageData).ArrayMax);
  return;
}

// DecompressImageData @ 1418d5230

void __thiscall FObjectThumbnail::DecompressImageData(FObjectThumbnail *this)

{
  FThumbnailCompressionInterface *pFVar1;
  
  (this->ImageData).ArrayNum = 0;
  if ((this->ImageData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ImageData).AllocatorInstance,0,&(this->ImageData).ArrayMax);
  }
  if ((((this->CompressedImageData).ArrayNum != 0) && (0 < this->ImageWidth)) &&
     (0 < this->ImageHeight)) {
    pFVar1 = PNGThumbnailCompressor;
    if (this->bIsJPEG != false) {
      pFVar1 = JPEGThumbnailCompressor;
    }
    if (pFVar1 != (FThumbnailCompressionInterface *)0x0) {
      (**(code **)((longlong)*pFVar1 + 8))
                (pFVar1,&this->CompressedImageData,this->ImageWidth,this->ImageHeight,
                 &this->ImageData);
    }
  }
  return;
}

// GetCompressor @ 1418ddb70

FThumbnailCompressionInterface * __thiscall FObjectThumbnail::GetCompressor(FObjectThumbnail *this)

{
  FThumbnailCompressionInterface *pFVar1;
  
  if ((((this->CompressedImageData).ArrayNum != 0) && (0 < this->ImageWidth)) &&
     (0 < this->ImageHeight)) {
    pFVar1 = PNGThumbnailCompressor;
    if (this->bIsJPEG != false) {
      pFVar1 = JPEGThumbnailCompressor;
    }
    return pFVar1;
  }
  return (FThumbnailCompressionInterface *)0x0;
}

// GetUncompressedImageData @ 1418e1cd0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FObjectThumbnail::GetUncompressedImageData(FObjectThumbnail *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FThumbnailCompressionInterface *pFVar2;
  
  pTVar1 = &this->ImageData;
  if ((this->ImageData).ArrayNum == 0) {
    (this->ImageData).ArrayNum = 0;
    if ((this->ImageData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar1->AllocatorInstance,0,&(this->ImageData).ArrayMax);
    }
    if ((((this->CompressedImageData).ArrayNum != 0) && (0 < this->ImageWidth)) &&
       (0 < this->ImageHeight)) {
      pFVar2 = PNGThumbnailCompressor;
      if (this->bIsJPEG != false) {
        pFVar2 = JPEGThumbnailCompressor;
      }
      if (pFVar2 != (FThumbnailCompressionInterface *)0x0) {
        (**(code **)((longlong)*pFVar2 + 8))
                  (pFVar2,&this->CompressedImageData,this->ImageWidth,this->ImageHeight,pTVar1);
      }
    }
  }
  return pTVar1;
}

// Serialize @ 1418f4ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FObjectThumbnail::Serialize(FObjectThumbnail *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveSlot *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// Serialize @ 1418f4f40

void __thiscall FObjectThumbnail::Serialize(FObjectThumbnail *this,FStructuredArchiveSlot param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  FSlotBase FVar6;
  FArchive *pFVar7;
  FArchiveState *pFVar8;
  FThumbnailCompressionInterface *pFVar9;
  uint local_res8 [2];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  if ((this->ImageWidth == 0) || (this->ImageHeight == 0)) {
    (this->CompressedImageData).ArrayNum = 0;
    if ((this->CompressedImageData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CompressedImageData).AllocatorInstance,0,
                 &(this->CompressedImageData).ArrayMax);
    }
  }
  if (((this->CompressedImageData).ArrayNum == 0) &&
     ((pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10),
      (pFVar7->field_0x28 & 4) != 0 ||
      (pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10),
      (pFVar7->field_0x2b & 4) != 0)))) {
    (this->CompressedImageData).ArrayNum = 0;
    if ((this->CompressedImageData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CompressedImageData).AllocatorInstance,0,
                 &(this->CompressedImageData).ArrayMax);
    }
    this->bIsJPEG = false;
    if (((((0 < (this->ImageData).ArrayNum) && (iVar1 = this->ImageWidth, 0 < iVar1)) &&
         (iVar2 = this->ImageHeight, 0 < iVar2)) &&
        ((((JPEGThumbnailCompressor != (FThumbnailCompressionInterface *)0x0 && (7 < iVar1)) &&
          (pFVar9 = JPEGThumbnailCompressor, 7 < iVar2)) ||
         (pFVar9 = PNGThumbnailCompressor,
         PNGThumbnailCompressor != (FThumbnailCompressionInterface *)0x0)))) &&
       ((pFVar9 != (FThumbnailCompressionInterface *)0x0 &&
        ((**(code **)*pFVar9)(pFVar9,&this->ImageData,iVar1,iVar2,&this->CompressedImageData),
        pFVar9 == JPEGThumbnailCompressor)))) {
      this->bIsJPEG = true;
    }
  }
  FVar6.StructuredArchive = local_res10.StructuredArchive;
  pFVar7 = (local_res10.StructuredArchive)->Formatter->Inner;
  piVar3 = (int *)**(undefined8 **)&pFVar7->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar7->field_0x8)[1] < piVar3 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)this);
    }
  }
  else {
    this->ImageWidth = *piVar3;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res10);
  piVar3 = &this->ImageHeight;
  if (pFVar8->ArIsLoading == 0) {
    local_res8[0] = -*piVar3;
    if (this->bIsJPEG == false) {
      local_res8[0] = *piVar3;
    }
    pFVar7 = (FVar6.StructuredArchive)->Formatter->Inner;
    puVar5 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar5 + 1) {
      if ((pFVar7->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar7,local_res8);
      }
    }
    else {
      local_res8[0] = *puVar5;
      **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
    }
  }
  else {
    pFVar7 = (FVar6.StructuredArchive)->Formatter->Inner;
    piVar4 = (int *)**(undefined8 **)&pFVar7->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar7->field_0x8)[1] < piVar4 + 1) {
      if ((pFVar7->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,piVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)piVar3);
      }
    }
    else {
      *piVar3 = *piVar4;
      **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
    }
    this->bIsJPEG = false;
    if (*piVar3 < 0) {
      this->bIsJPEG = true;
      *piVar3 = -*piVar3;
    }
  }
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res10);
  if (pFVar8->ArIsLoading != 0) {
    this->bLoadedFromDisk = true;
    this->bCreatedAfterCustomThumbForSharedTypesEnabled = true;
    if ((this->ImageWidth == 0) || (this->ImageHeight == 0)) {
      this->bIsDirty = true;
      return;
    }
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            ((FVar6.StructuredArchive)->Formatter->Inner,&this->CompressedImageData);
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar7->field_0x2b & 4) != 0) {
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              ((FVar6.StructuredArchive)->Formatter->Inner,&this->ImageData);
    FBinaryArchiveFormatter::Serialize((FVar6.StructuredArchive)->Formatter,&this->bIsDirty);
  }
  return;
}

