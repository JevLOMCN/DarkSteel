// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// FLandscapeTextureMipEdgeOverrideProvider @ 145fb4c50

FLandscapeTextureMipEdgeOverrideProvider * __thiscall
FLandscapeTextureMipEdgeOverrideProvider::FLandscapeTextureMipEdgeOverrideProvider
          (FLandscapeTextureMipEdgeOverrideProvider *this,
          ULandscapeHeightmapTextureEdgeFixup *param_1,UTexture2D *param_2)

{
  undefined4 uVar1;
  
  FTextureMipDataProvider::FTextureMipDataProvider
            ((FTextureMipDataProvider *)this,(UTexture *)param_2,GetMips,Async);
  this->_padding_ = (longlong)&___7FLandscapeTextureMipEdgeOverrideProvider__6B_;
  (this->DestMipInfos).AllocatorInstance.SecondaryData = (ForElementType<FTextureMipInfo>)0x0;
  (this->DestMipInfos).ArrayNum = 0;
  *(undefined8 *)&(this->DestMipInfos).ArrayMax = 0xf;
  (this->TextureName).Number = 0;
  this->EdgeFixup = param_1;
  uVar1 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  (this->TextureName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_2->_padding_;
  (this->TextureName).Number = uVar1;
  return this;
}

// ~FLandscapeTextureMipEdgeOverrideProvider @ 145fb65c0

void __thiscall
FLandscapeTextureMipEdgeOverrideProvider::~FLandscapeTextureMipEdgeOverrideProvider
          (FLandscapeTextureMipEdgeOverrideProvider *this)

{
  ForElementType<FTextureMipInfo> FVar1;
  
  this->_padding_ = (longlong)&___7FLandscapeTextureMipEdgeOverrideProvider__6B_;
  FVar1 = (this->DestMipInfos).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FTextureMipInfo>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  return;
}

// Cancel @ 145fba870

void __thiscall
FLandscapeTextureMipEdgeOverrideProvider::Cancel
          (FLandscapeTextureMipEdgeOverrideProvider *this,FTextureUpdateSyncOptions *param_1)

{
  return;
}

// CleanUp @ 145fbae50

void __thiscall
FLandscapeTextureMipEdgeOverrideProvider::CleanUp
          (FLandscapeTextureMipEdgeOverrideProvider *this,FTextureUpdateSyncOptions *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((uint)this->_padding_ < 6) {
    *(undefined4 *)&this->_padding_ = 5;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(uint32)NextTickState <= (uint32)InState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                     ,0xd1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return;
}

// GetCancelThread @ 145fc1540

ETickThread __thiscall
FLandscapeTextureMipEdgeOverrideProvider::GetCancelThread
          (FLandscapeTextureMipEdgeOverrideProvider *this)

{
  return None;
}

// GetMips @ 145fc2940

int __thiscall
FLandscapeTextureMipEdgeOverrideProvider::GetMips
          (FLandscapeTextureMipEdgeOverrideProvider *this,FTextureUpdateContext *param_1,int param_2
          ,TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
           *param_3,FTextureUpdateSyncOptions *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->DestMipInfos,param_3);
  if (2 < (uint)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)NextTickState <= (uint32)InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this->_padding_ = 2;
  return param_2;
}

// Init @ 145fc48c0

void __thiscall
FLandscapeTextureMipEdgeOverrideProvider::Init
          (FLandscapeTextureMipEdgeOverrideProvider *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((uint)this->_padding_ < 2) {
    this->_padding_ = 1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(uint32)NextTickState <= (uint32)InState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                     ,0xd1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->_padding_ = 1;
  return;
}

// PollMips @ 145fc5a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLandscapeTextureMipEdgeOverrideProvider::PollMips
          (FLandscapeTextureMipEdgeOverrideProvider *this,FTextureUpdateSyncOptions *param_1)

{
  FLandscapeGroup *SRWLock;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int local_a0;
  int local_98;
  FNeighborSnapshots local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar2 = UE::Landscape::ShouldPatchStreamingMipEdges();
  if (bVar2) {
    if ((this->EdgeFixup == (ULandscapeHeightmapTextureEdgeFixup *)0x0) ||
       (SRWLock = this->EdgeFixup->ActiveGroup, SRWLock == (FLandscapeGroup *)0x0)) {
      if ((5 < (uint)this->_padding_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)NextTickState <= (uint32)InState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                             ,0xd1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(undefined4 *)&this->_padding_ = 5;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
    }
    else {
      iVar4 = 0;
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      ULandscapeHeightmapTextureEdgeFixup::GetNeighborSnapshots(this->EdgeFixup,&local_88);
      if (local_88.ExistingNeighbors != None) {
        iVar4 = ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdgesForStreamingMips
                          (*(int *)((longlong)&this->_padding_ + 4),(int)this->_padding_,
                           &this->DestMipInfos,&local_88);
      }
      if (5 < (byte)LogLandscape._0_1_) {
        local_a8 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        local_a0 = (int)this->_padding_ + -1;
        local_98 = iVar4;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
      if ((5 < (uint)this->_padding_) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)NextTickState <= (uint32)InState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                             ,0xd1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(undefined4 *)&this->_padding_ = 5;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  else {
    if ((5 < (uint)this->_padding_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(uint32)NextTickState <= (uint32)InState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                           ,0xd1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    *(undefined4 *)&this->_padding_ = 5;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  }
  return true;
}

