// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// CompressImage @ 147ce58d0

bool __cdecl
FImageUtils::CompressImage
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,wchar_t *param_2,
          FImageView *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  IImageWrapperModule *pIVar3;
  
  pIVar3 = GetOrLoadImageWrapperModule();
  if (pIVar3 != (IImageWrapperModule *)0x0) {
    if ((param_2 == (wchar_t *)0x0) ||
       (cVar1 = (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,param_2), cVar1 == -1)) {
      cVar1 = (**(code **)((longlong)*pIVar3 + 0x78))
                        (pIVar3,*(undefined1 *)((longlong)&param_3->_padding_ + 4));
    }
    uVar2 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,param_1,cVar1,param_3,param_4);
    return (bool)uVar2;
  }
  return false;
}

// CreateCheckerboardCubeTexture @ 147ce7ca0

UTextureCube * __cdecl
FImageUtils::CreateCheckerboardCubeTexture(FColor param_1,FColor param_2,int param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FColor_u_0 FVar4;
  UTextureCube *pUVar5;
  FTexturePlatformData *pFVar6;
  FColor_u_0 *pFVar7;
  int iVar8;
  uint uVar9;
  FColor_u_0 *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FColor_u_0 *pFVar14;
  int iVar15;
  longlong lVar16;
  
  iVar12 = 1;
  if (param_3 != 0) {
    iVar12 = param_3;
  }
  uVar1 = (ulonglong)(iVar12 - 1) * 2 + 1;
  lVar16 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  uVar9 = 1 << ((byte)lVar16 & 0x1f);
  uVar11 = 0x1000;
  if (uVar9 < 0x1000) {
    uVar11 = uVar9;
  }
  iVar15 = 0;
  iVar12 = (int)uVar11 >> 1;
  pUVar5 = UTextureCube::CreateTransient(uVar11,uVar11,PF_B8G8R8A8,(FName)0x0);
  pFVar6 = UTextureCube::GetPlatformData(pUVar5);
  if (((pFVar6->Mips).Array.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UTextureCube *)(*pcVar2)();
    return pUVar5;
  }
  pFVar7 = FBulkData::Lock((FBulkData *)
                           (*(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data + 0x20),2);
  lVar16 = 6;
  do {
    if (0 < (int)uVar11) {
      pFVar10 = pFVar7;
      iVar8 = iVar15;
      pFVar14 = pFVar7;
      iVar13 = iVar15;
      do {
        do {
          if (iVar8 < iVar12) {
            FVar4 = param_2.field0_0x0;
            if (iVar13 < iVar12) {
              FVar4 = param_1.field0_0x0;
            }
          }
          else {
            FVar4 = param_1.field0_0x0;
            if (iVar13 < iVar12) {
              FVar4 = param_2.field0_0x0;
            }
          }
          pFVar10->_s_0 = (FColor_u_0_s_0)FVar4;
          iVar8 = iVar8 + 1;
          pFVar10 = pFVar10 + 1;
        } while (iVar8 < (int)uVar11);
        iVar13 = iVar13 + 1;
        pFVar10 = pFVar14 + (int)uVar11;
        iVar8 = iVar15;
        pFVar14 = pFVar10;
      } while (iVar13 < (int)uVar11);
    }
    pFVar7 = pFVar7 + (int)(uVar11 * uVar11);
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  pFVar6 = UTextureCube::GetPlatformData(pUVar5);
  if (((pFVar6->Mips).Array.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UTextureCube *)(*pcVar2)();
    return pUVar5;
  }
  FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data + 0x20));
  (**(code **)(pUVar5->_padding_ + 0x328))(pUVar5);
  return pUVar5;
}

// CreateCheckerboardTexture2DArray @ 147ce7e50

UTexture2DArray * __cdecl
FImageUtils::CreateCheckerboardTexture2DArray(FColor param_1,FColor param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  FColor_u_0 FVar4;
  bool bVar5;
  UTexture2DArray *pUVar6;
  FTexturePlatformData *pFVar7;
  FColor_u_0 *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar13 = (ulonglong)(uint)param_4;
  iVar12 = 1;
  if (param_3 != 0) {
    iVar12 = param_3;
  }
  uVar1 = (ulonglong)(iVar12 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar10 = 1 << ((byte)lVar2 & 0x1f);
  uVar11 = 0x1000;
  if (uVar10 < 0x1000) {
    uVar11 = uVar10;
  }
  pUVar6 = UTexture2DArray::CreateTransient(uVar11,uVar11,param_4,PF_B8G8R8A8,(FName)0x0);
  pFVar7 = UTexture2DArray::GetPlatformData(pUVar6);
  if (((pFVar7->Mips).Array.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UTexture2DArray *)(*pcVar3)();
    return pUVar6;
  }
  pFVar8 = FBulkData::Lock((FBulkData *)
                           (*(longlong *)(pFVar7->Mips).Array.AllocatorInstance.Data + 0x20),2);
  if (0 < param_4) {
    do {
      iVar12 = 0;
      if (0 < (int)uVar11) {
        do {
          iVar9 = 0;
          do {
            FVar4 = param_2.field0_0x0;
            if (iVar9 < (int)uVar11 >> 1 == iVar12 < (int)uVar11 >> 1) {
              FVar4 = param_1.field0_0x0;
            }
            iVar9 = iVar9 + 1;
            pFVar8->_s_0 = (FColor_u_0_s_0)FVar4;
            pFVar8 = pFVar8 + 1;
          } while (iVar9 < (int)uVar11);
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar11);
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  pFVar7 = UTexture2DArray::GetPlatformData(pUVar6);
  if (((pFVar7->Mips).Array.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UTexture2DArray *)(*pcVar3)();
    return pUVar6;
  }
  FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar7->Mips).Array.AllocatorInstance.Data + 0x20));
  (**(code **)(pUVar6->_padding_ + 0x328))(pUVar6);
  return pUVar6;
}

// CreateCheckerboardTexture @ 147ce8000

UTexture2D * __cdecl
FImageUtils::CreateCheckerboardTexture(FColor param_1,FColor param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FColor_u_0 FVar5;
  UTexture2D *pUVar6;
  FTexturePlatformData *pFVar7;
  FColor_u_0 *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FColor_u_0 *pFVar14;
  int iVar15;
  TArrayView<unsigned_char_const_,__int64> local_38;
  
  iVar12 = 1;
  if (param_3 != 0) {
    iVar12 = param_3;
  }
  local_38.DataPtr = (uchar *)0x0;
  local_38.ArrayNum = 0;
  uVar1 = (ulonglong)(iVar12 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar10 = 1 << ((byte)lVar2 & 0x1f);
  uVar11 = 0x1000;
  if (uVar10 < 0x1000) {
    uVar11 = uVar10;
  }
  iVar15 = 0;
  iVar12 = (int)uVar11 >> 1;
  pUVar6 = UTexture2D::CreateTransient(uVar11,uVar11,PF_B8G8R8A8,(FName)0x0,&local_38);
  pFVar7 = UTexture2D::GetPlatformData(pUVar6);
  if (((pFVar7->Mips).Array.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UTexture2D *)(*pcVar3)();
    return pUVar6;
  }
  pFVar8 = FBulkData::Lock((FBulkData *)
                           (*(longlong *)(pFVar7->Mips).Array.AllocatorInstance.Data + 0x20),2);
  if (0 < (int)uVar11) {
    iVar9 = iVar15;
    pFVar14 = pFVar8;
    iVar13 = iVar15;
    do {
      do {
        if (iVar9 < iVar12) {
          FVar5 = param_2.field0_0x0;
          if (iVar13 < iVar12) {
            FVar5 = param_1.field0_0x0;
          }
        }
        else {
          FVar5 = param_1.field0_0x0;
          if (iVar13 < iVar12) {
            FVar5 = param_2.field0_0x0;
          }
        }
        pFVar8->_s_0 = (FColor_u_0_s_0)FVar5;
        iVar9 = iVar9 + 1;
        pFVar8 = pFVar8 + 1;
      } while (iVar9 < (int)uVar11);
      iVar13 = iVar13 + 1;
      pFVar8 = pFVar14 + (int)uVar11;
      iVar9 = iVar15;
      pFVar14 = pFVar8;
    } while (iVar13 < (int)uVar11);
  }
  pFVar7 = UTexture2D::GetPlatformData(pUVar6);
  if (((pFVar7->Mips).Array.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UTexture2D *)(*pcVar3)();
    return pUVar6;
  }
  FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar7->Mips).Array.AllocatorInstance.Data + 0x20));
  (**(code **)(pUVar6->_padding_ + 0x328))(pUVar6);
  return pUVar6;
}

// CreateCheckerboardTextureCubeArray @ 147ce81a0

UTextureCubeArray * __cdecl
FImageUtils::CreateCheckerboardTextureCubeArray
          (FColor param_1,FColor param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UTextureCubeArray *pUVar5;
  FTexturePlatformData *pFVar6;
  FColor_u_0 *pFVar7;
  FColor_u_0 FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar13 = (ulonglong)(uint)param_4;
  iVar11 = 1;
  if (param_3 != 0) {
    iVar11 = param_3;
  }
  uVar1 = (ulonglong)(iVar11 - 1) * 2 + 1;
  lVar12 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  uVar9 = 1 << ((byte)lVar12 & 0x1f);
  uVar10 = 0x1000;
  if (uVar9 < 0x1000) {
    uVar10 = uVar9;
  }
  pUVar5 = UTextureCubeArray::CreateTransient(uVar10,uVar10,param_4,PF_B8G8R8A8,(FName)0x0);
  pFVar6 = UTextureCubeArray::GetPlatformData(pUVar5);
  if (((pFVar6->Mips).Array.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UTextureCubeArray *)(*pcVar2)();
    return pUVar5;
  }
  pFVar7 = FBulkData::Lock((FBulkData *)
                           (*(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data + 0x20),2);
  if (0 < param_4) {
    do {
      lVar12 = 6;
      do {
        iVar11 = 0;
        if (0 < (int)uVar10) {
          do {
            iVar4 = 0;
            do {
              FVar8 = param_2.field0_0x0;
              if (iVar4 < (int)uVar10 >> 1 == iVar11 < (int)uVar10 >> 1) {
                FVar8 = param_1.field0_0x0;
              }
              iVar4 = iVar4 + 1;
              pFVar7->_s_0 = (FColor_u_0_s_0)FVar8;
              pFVar7 = pFVar7 + 1;
            } while (iVar4 < (int)uVar10);
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar10);
        }
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  pFVar6 = UTextureCubeArray::GetPlatformData(pUVar5);
  if (((pFVar6->Mips).Array.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UTextureCubeArray *)(*pcVar2)();
    return pUVar5;
  }
  FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data + 0x20));
  (**(code **)(pUVar5->_padding_ + 0x328))(pUVar5);
  return pUVar5;
}

// CreateCheckerboardVolumeTexture @ 147ce8360

UVolumeTexture * __cdecl
FImageUtils::CreateCheckerboardVolumeTexture(FColor param_1,FColor param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  FColor_u_0 FVar3;
  bool bVar4;
  int iVar5;
  UVolumeTexture *pUVar6;
  FTexturePlatformData *pFVar7;
  FColor_u_0 *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  
  iVar5 = 1;
  if (param_3 != 0) {
    iVar5 = param_3;
  }
  uVar13 = (ulonglong)(iVar5 - 1) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar10 = 1 << ((byte)lVar1 & 0x1f);
  uVar11 = 0x1000;
  if (uVar10 < 0x1000) {
    uVar11 = uVar10;
  }
  iVar5 = 0;
  pUVar6 = UVolumeTexture::CreateTransient(uVar11,uVar11,uVar11,PF_B8G8R8A8,(FName)0x0);
  pFVar7 = UVolumeTexture::GetPlatformData(pUVar6);
  if (((pFVar7->Mips).Array.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UVolumeTexture *)(*pcVar2)();
    return pUVar6;
  }
  pFVar8 = FBulkData::Lock((FBulkData *)
                           (*(longlong *)(pFVar7->Mips).Array.AllocatorInstance.Data + 0x20),2);
  if (0 < (int)uVar11) {
    uVar13 = (ulonglong)uVar11;
    iVar12 = iVar5;
    do {
      iVar9 = iVar5;
      do {
        FVar3 = param_2.field0_0x0;
        if (iVar9 < (int)uVar11 >> 1 == iVar12 < (int)uVar11 >> 1) {
          FVar3 = param_1.field0_0x0;
        }
        iVar9 = iVar9 + 1;
        pFVar8->_s_0 = (FColor_u_0_s_0)FVar3;
        pFVar8 = pFVar8 + 1;
      } while (iVar9 < (int)uVar11);
      iVar12 = iVar12 + 1;
    } while ((iVar12 < (int)uVar11) || (uVar13 = uVar13 - 1, iVar12 = iVar5, uVar13 != 0));
  }
  pFVar7 = UVolumeTexture::GetPlatformData(pUVar6);
  if (((pFVar7->Mips).Array.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UVolumeTexture *)(*pcVar2)();
    return pUVar6;
  }
  FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar7->Mips).Array.AllocatorInstance.Data + 0x20));
  (**(code **)(pUVar6->_padding_ + 0x328))(pUVar6);
  return pUVar6;
}

// CreateTexture2D @ 147ceb6a0

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2D * __cdecl
FImageUtils::CreateTexture2D
          (int param_1,int param_2,TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,
          UObject *param_4,FString *param_5,EObjectFlags *param_6,
          FCreateTexture2DParameters *param_7)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
  return (UTexture2D *)0x0;
}

// CreateTexture2DFromImage @ 147ceb6d0

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2D * __cdecl FImageUtils::CreateTexture2DFromImage(FImageView *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  EPixelFormat EVar3;
  bool bVar4;
  UTexture2D *pUVar5;
  FTexturePlatformData *pFVar6;
  void *pvVar7;
  long64 lVar8;
  long64 lVar9;
  longlong lVar10;
  longlong lVar11;
  Type local_res8 [8];
  undefined8 local_res10;
  TArrayView<unsigned_char_const_,__int64> local_58;
  FImageView local_48;
  
  EVar3 = FImageCoreUtils::GetPixelFormatForRawImageFormat
                    (*(Type *)((longlong)&param_1->_padding_ + 4),local_res8);
  local_res10 = 0;
  local_58.DataPtr = (uchar *)0x0;
  local_58.ArrayNum = 0;
  pUVar5 = UTexture2D::CreateTransient
                     ((int)param_1->_padding_,*(int *)((longlong)&param_1->_padding_ + 4),EVar3,
                      (FName)0x0,&local_58);
  if (pUVar5 == (UTexture2D *)0x0) {
    if (2 < (byte)LogImageUtils._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
    }
    return (UTexture2D *)0x0;
  }
  pbVar1 = (byte *)((longlong)&pUVar5->_padding_ + 4);
  *pbVar1 = *pbVar1 | 2;
  pFVar6 = UTexture2D::GetPlatformData(pUVar5);
  if ((pFVar6->Mips).Array.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UTexture2D *)(*pcVar2)();
      return pUVar5;
    }
  }
  pvVar7 = FBulkData::Lock((FBulkData *)
                           (*(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data + 0x20),2);
  if (pvVar7 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipData != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x57e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UTexture2D *)(*pcVar2)();
      return pUVar5;
    }
  }
  pFVar6 = UTexture2D::GetPlatformData(pUVar5);
  if ((pFVar6->Mips).Array.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UTexture2D *)(*pcVar2)();
      return pUVar5;
    }
  }
  lVar8 = FBulkData::GetBulkDataSize
                    ((FBulkData *)(*(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data + 0x20))
  ;
  local_48._padding_._5_1_ = *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  local_48._padding_._0_4_ = (int)param_1->_padding_;
  lVar10 = (longlong)(int)local_48._padding_;
  local_48._padding_._4_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
  lVar11 = (longlong)local_48._padding_._4_4_;
  local_48._padding_._4_1_ = local_res8[0];
  local_48._padding_._0_4_ = 1;
  local_48.RawData = pvVar7;
  lVar9 = ERawImageFormat::GetBytesPerPixel(local_res8[0]);
  lVar11 = lVar9 * lVar10 * lVar11;
  if (lVar11 - lVar8 != 0 && lVar8 <= lVar11) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipImage.GetImageSizeBytes() <= MipDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x582,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UTexture2D *)(*pcVar2)();
      return pUVar5;
    }
  }
  FImageCore::CopyImage(param_1,&local_48);
  pFVar6 = UTexture2D::GetPlatformData(pUVar5);
  if ((pFVar6->Mips).Array.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UTexture2D *)(*pcVar2)();
      return pUVar5;
    }
  }
  FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data + 0x20));
  (**(code **)(pUVar5->_padding_ + 0x328))(pUVar5);
  return pUVar5;
}

// CreateTexture @ 147ceb950

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture * __cdecl
FImageUtils::CreateTexture
          (ETextureClass param_1,FImageView *param_2,UObject *param_3,FString *param_4,
          EObjectFlags param_5,bool param_6)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
  return (UTexture *)0x0;
}

// CropAndScaleImage @ 147cebb80

void __cdecl
FImageUtils::CropAndScaleImage
          (int param_1,int param_2,int param_3,int param_4,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_70 [3];
  
  fVar15 = (float)param_1;
  fVar16 = fVar15 / ((float)param_3 / (float)param_4);
  fVar14 = (float)param_2;
  if (fVar14 < fVar16) {
    fVar15 = fVar14 * ((float)param_3 / (float)param_4);
  }
  if (fVar14 <= fVar16) {
    fVar16 = fVar14;
  }
  uVar8 = 0;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  iVar11 = (int)ROUND((fVar15 + fVar15) - __real_3f000000) >> 1;
  uVar13 = (int)ROUND((fVar16 + fVar16) - __real_3f000000) >> 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar13 * iVar11,&local_70[0].AllocatorInstance,&local_70[0].ArrayNum,
             &local_70[0].ArrayMax);
  iVar5 = 0;
  iVar4 = iVar5;
  if ((int)uVar13 < param_2) {
    iVar4 = (int)(param_2 - uVar13) / 2;
  }
  if (iVar11 < param_1) {
    iVar5 = (param_1 - iVar11) / 2;
  }
  if (0 < (int)uVar13) {
    uVar12 = (ulonglong)uVar13;
    uVar13 = iVar4 * param_1 + iVar5;
    lVar10 = (longlong)(int)uVar13;
    uVar9 = uVar8;
    do {
      uVar6 = 0;
      if ((int)uVar13 < param_5->ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_5->AllocatorInstance).Data;
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < local_70[0].ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy(local_70[0].AllocatorInstance.Data + uVar9 * 4,pFVar1 + lVar10 * 4,
             (longlong)(iVar11 * 4));
      uVar13 = uVar13 + param_1;
      uVar9 = uVar9 + (longlong)iVar11;
      lVar10 = lVar10 + param_1;
      uVar8 = (ulonglong)(uVar7 + iVar11);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_3 * param_4,&param_6->AllocatorInstance,&param_6->ArrayNum,&param_6->ArrayMax
            );
  ImageResize((int)fVar15,(int)fVar16,local_70,param_3,param_4,param_6,true,true);
  if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  return;
}

// DecompressImage @ 147ced360

bool __cdecl FImageUtils::DecompressImage(void *param_1,long64 param_2,FImage *param_3)

{
  undefined1 uVar1;
  IImageWrapperModule *pIVar2;
  
  pIVar2 = GetOrLoadImageWrapperModule();
  if (pIVar2 == (IImageWrapperModule *)0x0) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ced3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,param_1,param_2,param_3);
  return (bool)uVar1;
}

// ExportRenderTarget2DAsEXR @ 147cf3910

bool __cdecl
FImageUtils::ExportRenderTarget2DAsEXR(UTextureRenderTarget2D *param_1,FArchive *param_2)

{
  bool bVar1;
  char cVar2;
  IImageWrapperModule *pIVar3;
  TIntRect<int>_u_0 local_68;
  void *local_58;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  TIntPoint<int>_u_0 local_38;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  void *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = (TIntPoint<int>_u_0)0x0;
  uStack_30 = 0;
  uStack_2c = 0x201;
  local_18 = 0;
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_68._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  bVar1 = GetRenderTargetImage
                    ((UTextureRenderTarget *)param_1,(FImage *)&local_38._s_0,
                     (TIntRect<int> *)&local_68._s_0);
  if (!bVar1) {
    bVar1 = false;
    goto LAB_147cf3a08;
  }
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_68._12_2_ = uStack_2c;
  local_68._8_4_ = uStack_30;
  local_68._14_2_ = uStack_2a;
  local_58 = local_28;
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_38;
  pIVar3 = GetOrLoadImageWrapperModule();
  if (pIVar3 == (IImageWrapperModule *)0x0) {
LAB_147cf39f7:
    bVar1 = false;
  }
  else {
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,L"EXR");
    if (cVar2 == -1) {
      cVar2 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,local_68._12_1_);
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,&local_50,cVar2,&local_68,0);
    if (cVar2 == '\0') goto LAB_147cf39f7;
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_50,local_40);
    bVar1 = true;
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
LAB_147cf3a08:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar1;
}

// ExportRenderTarget2DAsHDR @ 147cf3a40

bool __cdecl
FImageUtils::ExportRenderTarget2DAsHDR(UTextureRenderTarget2D *param_1,FArchive *param_2)

{
  bool bVar1;
  char cVar2;
  IImageWrapperModule *pIVar3;
  TIntRect<int>_u_0 local_68;
  void *local_58;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  TIntPoint<int>_u_0 local_38;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  void *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = (TIntPoint<int>_u_0)0x0;
  uStack_30 = 0;
  uStack_2c = 0x201;
  local_18 = 0;
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_68._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  bVar1 = GetRenderTargetImage
                    ((UTextureRenderTarget *)param_1,(FImage *)&local_38._s_0,
                     (TIntRect<int> *)&local_68._s_0);
  if (!bVar1) {
    bVar1 = false;
    goto LAB_147cf3b38;
  }
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_68._12_2_ = uStack_2c;
  local_68._8_4_ = uStack_30;
  local_68._14_2_ = uStack_2a;
  local_58 = local_28;
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_38;
  pIVar3 = GetOrLoadImageWrapperModule();
  if (pIVar3 == (IImageWrapperModule *)0x0) {
LAB_147cf3b27:
    bVar1 = false;
  }
  else {
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,L"HDR");
    if (cVar2 == -1) {
      cVar2 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,local_68._12_1_);
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,&local_50,cVar2,&local_68,0);
    if (cVar2 == '\0') goto LAB_147cf3b27;
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_50,local_40);
    bVar1 = true;
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
LAB_147cf3b38:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar1;
}

// ExportRenderTarget2DAsPNG @ 147cf3b70

bool __cdecl
FImageUtils::ExportRenderTarget2DAsPNG(UTextureRenderTarget2D *param_1,FArchive *param_2)

{
  bool bVar1;
  char cVar2;
  IImageWrapperModule *pIVar3;
  TIntRect<int>_u_0 local_68;
  void *local_58;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  TIntPoint<int>_u_0 local_38;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  void *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = (TIntPoint<int>_u_0)0x0;
  uStack_30 = 0;
  uStack_2c = 0x201;
  local_18 = 0;
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_68._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  bVar1 = GetRenderTargetImage
                    ((UTextureRenderTarget *)param_1,(FImage *)&local_38._s_0,
                     (TIntRect<int> *)&local_68._s_0);
  if (!bVar1) {
    bVar1 = false;
    goto LAB_147cf3c68;
  }
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_68._12_2_ = uStack_2c;
  local_68._8_4_ = uStack_30;
  local_68._14_2_ = uStack_2a;
  local_58 = local_28;
  local_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_38;
  pIVar3 = GetOrLoadImageWrapperModule();
  if (pIVar3 == (IImageWrapperModule *)0x0) {
LAB_147cf3c57:
    bVar1 = false;
  }
  else {
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,L"PNG");
    if (cVar2 == -1) {
      cVar2 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,local_68._12_1_);
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,&local_50,cVar2,&local_68,0);
    if (cVar2 == '\0') goto LAB_147cf3c57;
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_50,local_40);
    bVar1 = true;
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
LAB_147cf3c68:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar1;
}

// ExportRenderTargetCubeAsHDR @ 147cf3ca0

bool __cdecl
FImageUtils::ExportRenderTargetCubeAsHDR(UTextureRenderTargetCube *param_1,FArchive *param_2)

{
  code *pcVar1;
  bool bVar2;
  FHDRExportHelper local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  if (param_1 == (UTextureRenderTargetCube *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TexCube != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x450,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar2 = CubemapHelpers::GenerateLongLatUnwrap(param_1,&local_28,&local_38.Size,&local_38.Format);
  if ((bVar2) && ((local_38.Format - PF_B8G8R8A8 & 0xf7) == 0)) {
    FHDRExportHelper::WriteHDRImage(&local_38,&local_28,param_2);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return true;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return false;
}

// ExportRenderTargetToDDS @ 147cf3d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __cdecl
FImageUtils::ExportRenderTargetToDDS
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,UTextureRenderTarget *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  EDXGIFormat EVar7;
  EDDSError EVar8;
  FDDSFile *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  EDDSError local_res18 [2];
  longlong local_res20;
  TIntRect<int>_u_0 local_a8;
  FImageView local_98;
  FImageView local_80;
  FImage local_68;
  
  iVar10 = 0;
  local_68._padding_ = 0;
  uVar9 = 0;
  local_68._padding_._0_4_ = 0;
  local_68._padding_._4_1_ = BGRA8;
  local_68._padding_._5_1_ = sRGB;
  local_68.RawData.ArrayMax = 0;
  local_68.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.RawData.ArrayNum = 0;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  bVar3 = GetRenderTargetImage(param_2,&local_68,(TIntRect<int> *)&local_a8._s_0);
  if (!bVar3) {
    if (2 < (byte)LogImageUtils._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
    }
    goto LAB_147cf41e0;
  }
  cVar4 = (**(code **)(param_2->_padding_ + 0x3c8))(param_2);
  if (((cVar4 == '\0') || (cVar4 == '\a')) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TexRTClass != ETextureClass::Invalid && TexRTClass != ETextureClass::RenderTarget"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                         ,0x14d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  bVar3 = (cVar4 - 2U & 0xfd) == 0;
  fVar14 = (float)(**(code **)(param_2->_padding_ + 0x368))(param_2);
  fVar14 = fVar14 + fVar14 + __real_3f000000;
  fVar15 = (float)(**(code **)(param_2->_padding_ + 0x370))(param_2);
  local_res20 = (longlong)ROUND(fVar15 + fVar15 + __real_3f000000) >> 1;
  fVar15 = (float)(**(code **)(param_2->_padding_ + 0x378))(param_2);
  lVar13 = (longlong)ROUND(fVar15 + fVar15 + __real_3f000000) >> 1;
  uVar6 = (**(code **)(param_2->_padding_ + 0x380))(param_2);
  if (lVar13 < 2) {
    if (bVar3) {
LAB_147cf3efe:
      iVar11 = 2;
      lVar13 = 1;
      if ((uVar6 != 6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TexRT_ArraySize == 6",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                             ,0x167,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar12 = 6;
      uVar9 = 1;
    }
    else {
      lVar13 = 1;
      iVar11 = 2;
      uVar12 = 1;
      if (uVar6 != 0) {
        uVar12 = uVar6;
      }
    }
  }
  else {
    if (bVar3) goto LAB_147cf3efe;
    iVar11 = 3;
    uVar12 = 1;
    uVar9 = 0;
  }
  EVar7 = UE::DDS::DXGIFormatFromRawFormat(local_68._padding_._4_1_,local_68._padding_._5_1_);
  if (3 < (byte)LogImageUtils._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
  }
  this = UE::DDS::FDDSFile::CreateEmpty
                   (iVar11,(uint)((longlong)ROUND(fVar14) >> 1),(uint)local_res20,(uint)lVar13,1,
                    uVar12,EVar7,uVar9,local_res18);
  if ((this == (FDDSFile *)0x0) || (local_res18[0] != OK)) {
    if (2 < (byte)LogImageUtils._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
      iVar10 = 0;
    }
  }
  else {
    EVar8 = UE::DDS::FDDSFile::Validate(this);
    if ((EVar8 != OK) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DDS->Validate() == UE::DDS::EDDSError::OK",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                           ,0x186,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (this->Dimension == 3) {
      if (((this->Mips).ArrayNum != this->MipCount) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DDS->Mips.Num() == DDS->MipCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                             ,0x18d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (((this->Mips).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if ((*(int *)((this->Mips).AllocatorInstance.Data + 8) != (int)local_68._padding_) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DDS->Mips[MipIndex].Depth == Image.NumSlices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                             ,0x18e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      local_98._padding_ =
           CONCAT26(local_68._padding_._6_2_,
                    CONCAT15(local_68._padding_._5_1_,
                             CONCAT14(local_68._padding_._4_1_,(int)local_68._padding_)));
      local_98.RawData = local_68.RawData.AllocatorInstance.Data;
      local_98._padding_ = local_68._padding_;
      UE::DDS::FDDSFile::FillMip(this,&local_98,0);
    }
    else {
      if (((this->Mips).ArrayNum != (int)local_68._padding_ * this->MipCount) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DDS->Mips.Num() == DDS->MipCount * Image.NumSlices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                             ,0x195,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (0 < (int)local_68._padding_) {
        do {
          FImage::GetSlice(&local_68,&local_80,iVar10);
          UE::DDS::FDDSFile::FillMip(this,&local_80,iVar10 * this->MipCount);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_68._padding_);
      }
    }
    local_res18[0] = UE::DDS::FDDSFile::WriteDDS(this,param_1,D3D10);
    if (local_res18[0] == OK) {
      iVar10 = 1;
    }
    else {
      if (2 < (byte)LogImageUtils._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_FDDSFile__Write_1518e6018,
                   (FLogCategoryBase *)&LogImageUtils);
      }
      iVar10 = 0;
    }
    pFVar1 = (this->MipRawData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->Mips).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(this,0x48);
  }
LAB_147cf41e0:
  if (local_68.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.RawData.AllocatorInstance.Data);
  }
  return SUB41(iVar10,0);
}

// ExportTexture2DAsHDR @ 147cf4210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FImageUtils::ExportTexture2DAsHDR(UTexture2D *param_1,FArchive *param_2)

{
  if (2 < (byte)LogImageUtils._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
    if (2 < (byte)LogImageUtils._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
    }
  }
  return false;
}

// ExportTextureCubeAsHDR @ 147cf4260

bool __cdecl FImageUtils::ExportTextureCubeAsHDR(UTextureCube *param_1,FArchive *param_2)

{
  code *pcVar1;
  bool bVar2;
  FHDRExportHelper local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  if (param_1 == (UTextureCube *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TexCube != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x436,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar2 = CubemapHelpers::GenerateLongLatUnwrap(param_1,&local_28,&local_38.Size,&local_38.Format);
  if ((bVar2) && ((local_38.Format - PF_B8G8R8A8 & 0xf7) == 0)) {
    FHDRExportHelper::WriteHDRImage(&local_38,&local_28,param_2);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return true;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return false;
}

// ExportTextureSourceToDDS @ 147cf4330

bool __cdecl
FImageUtils::ExportTextureSourceToDDS
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,UTexture *param_2,int param_3,
          int param_4)

{
  return false;
}

// GetRawData @ 147d0cc50

bool __cdecl
FImageUtils::GetRawData
          (UTextureRenderTarget2D *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2)

{
  long64 *plVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TIntRect<int>_u_0 local_48;
  FImage local_38;
  
  plVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,plVar1);
  }
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38._padding_._4_2_ = 0x201;
  local_38.RawData.ArrayMax = 0;
  local_38.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.RawData.ArrayNum = 0;
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  bVar3 = GetRenderTargetImage
                    ((UTextureRenderTarget *)param_1,&local_38,(TIntRect<int> *)&local_48._s_0);
  if (bVar3) {
    if (param_2 != &local_38.RawData) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->AllocatorInstance).Data = local_38.RawData.AllocatorInstance.Data;
      param_2->ArrayNum = local_38.RawData.ArrayNum;
      *plVar1 = local_38.RawData.ArrayMax;
      local_38.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.RawData.ArrayNum = 0;
      local_38.RawData.ArrayMax = 0;
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_38.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.RawData.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetRenderTargetImage @ 147d0d0a0

bool __cdecl FImageUtils::GetRenderTargetImage(UTextureRenderTarget *param_1,FImage *param_2)

{
  bool bVar1;
  TIntRect<int>_u_0 local_18;
  
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  bVar1 = GetRenderTargetImage(param_1,param_2,(TIntRect<int> *)&local_18._s_0);
  return bVar1;
}

// GetRenderTargetImage @ 147d0d0d0

/* WARNING: Removing unreachable block (ram,0x000147d0d186) */

bool __cdecl
FImageUtils::GetRenderTargetImage
          (UTextureRenderTarget *param_1,FImage *param_2,TIntRect<int> *param_3)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  EPixelFormat EVar4;
  Type TVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  FTextureRenderTargetResource *pFVar11;
  longlong lVar12;
  long64 lVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  float fVar26;
  int local_220;
  undefined4 uStack_218;
  undefined2 uStack_20e;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  FImageView local_1b8;
  FImageView local_1a0;
  FImageView local_188;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FImage local_158;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  int local_e8 [3];
  undefined4 uStack_dc;
  longlong local_d8;
  undefined4 local_d0;
  int local_c8 [3];
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_b0;
  int local_a8 [3];
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar22 = (longlong *)0x0;
  local_158._padding_ = 0;
  local_158._padding_._0_4_ = 0;
  local_158._padding_._4_2_ = 0x201;
  local_158.RawData.ArrayMax = 0;
  local_158.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.RawData.ArrayNum = 0;
  if (param_2 != &local_158) {
    local_1b8.RawData = (void *)(param_2->RawData).ArrayMax;
    pFVar2 = (param_2->RawData).AllocatorInstance.Data;
    local_68 = 0;
    (param_2->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->RawData).ArrayNum = 0;
    (param_2->RawData).ArrayMax = 0;
    local_158.RawData.ArrayMax = 0;
    param_2->_padding_ = 0;
    param_2->_padding_ = CONCAT26(local_158._padding_._6_2_,0x20100000000);
    local_78 = 0;
    uStack_70 = 0;
    local_158.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.RawData.ArrayNum = 0;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  pFVar11 = UTextureRenderTarget::GameThread_GetRenderTargetResource(param_1);
  plVar17 = &pFVar11->_padding_;
  if (pFVar11 == (FTextureRenderTargetResource *)0x0) {
    plVar17 = plVar22;
  }
  EVar4 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  TVar5 = UTextureRenderTarget::GetReadPixelsFormat(EVar4,false);
  cVar6 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1);
  if (((cVar6 == '\0') || (cVar6 == '\a')) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TexRTClass != ETextureClass::Invalid && TexRTClass != ETextureClass::RenderTarget"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                         ,0x1cd,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
  bVar7 = (cVar6 - 2U & 0xfd) != 0;
  fVar26 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1);
  fVar3 = __real_3f000000;
  lVar12 = (longlong)ROUND(fVar26 + fVar26 + __real_3f000000) >> 1;
  fVar26 = (float)(**(code **)(param_1->_padding_ + 0x370))(param_1);
  lVar19 = (longlong)ROUND(fVar26 + fVar26 + fVar3) >> 1;
  fVar26 = (float)(**(code **)(param_1->_padding_ + 0x378))(param_1);
  uVar23 = (longlong)ROUND(fVar26 + fVar26 + fVar3) >> 1;
  uVar10 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
  if ((lVar12 < 1) || (lVar19 < 1)) {
    return false;
  }
  if (bVar7) {
    if (uVar23 == 0) {
      uVar23 = 1;
      if (uVar10 != 0) {
        uVar23 = (ulonglong)uVar10;
      }
    }
    else if ((uVar10 != 0) &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("TexRT_ArraySize == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                                ,0x1e3,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
  }
  else {
    if ((uVar23 != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TexRT_SizeZ == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                           ,0x1dd,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    if (((ulonglong)uVar10 != 6) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TexRT_ArraySize == 6",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                           ,0x1de,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    uVar23 = 6;
  }
  uStack_218 = CONCAT31(uStack_218._1_3_,1);
  uVar16 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  lVar20 = *(longlong *)&param_3->field0_0x0;
  if (((((int)lVar20 == 0) && ((int)((ulonglong)lVar20 >> 0x20) == 0)) && ((int)uVar16 == 0)) &&
     ((int)((ulonglong)uVar16 >> 0x20) == 0)) {
    uStack_160 = (undefined4)lVar12;
    uStack_15c = (undefined4)lVar19;
    local_168 = 0;
    local_128 = 0;
    uStack_124 = 0;
    uVar16 = CONCAT44(uStack_15c,uStack_160);
    lVar20 = 0;
    uStack_120 = uStack_160;
    uStack_11c = uStack_15c;
  }
  iVar14 = (int)uVar16 - (int)lVar20;
  iVar21 = (int)((ulonglong)uVar16 >> 0x20);
  iVar15 = iVar21 - (int)((ulonglong)lVar20 >> 0x20);
  if (((((int)lVar20 < 0) || (lVar20 < 0)) ||
      ((lVar12 < (int)uVar16 || ((lVar19 < iVar21 || (iVar14 < 0)))))) || (iVar15 < 0)) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1719403153801085441>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x201,
                       "Rect.Min.X >= 0 && Rect.Min.Y >= 0 && Rect.Max.X <= TexRT_SizeX && Rect.Max.Y <= TexRT_SizeY && RectSizeX >= 0 && RectSizeY >= 0"
                      );
    if (!bVar7) {
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
  if (iVar14 == 0) {
    return false;
  }
  if (iVar15 != 0) {
    iVar21 = (int)uVar23;
    plVar25 = plVar22;
    if (TVar5 == RGBA16F) {
      FImage::Init(param_2,iVar14,iVar15,iVar21,RGBA16F,Linear);
      local_1e8 = (longlong *)0x0;
      local_1e0 = 0;
      if (0 < (longlong)uVar23) {
        do {
          iVar14 = (int)plVar22;
          if (bVar7) {
            local_220 = 6;
            iVar15 = iVar14;
          }
          else {
            iVar15 = iVar14 / 6 + (iVar14 >> 0x1f) +
                     (int)(((longlong)iVar14 / 6 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
            local_220 = iVar14 + iVar15 * -6;
          }
          local_d8 = (ulonglong)CONCAT42(iVar15,uStack_20e) << 0x10;
          local_e8[0] = local_220;
          local_e8[1] = 3;
          local_e8[2] = uStack_218;
          uStack_dc = 0x467a0000;
          local_d0 = 0;
          local_118 = lVar20;
          local_110 = uVar16;
          cVar6 = (**(code **)(*plVar17 + 0x68))(plVar17,&local_1e8,local_e8,&local_118);
          if (cVar6 == '\0') {
            if (local_1e8 == (longlong *)0x0) {
              return false;
            }
            FMemory::Free(local_1e8);
            return false;
          }
          FImage::GetSlice(param_2,&local_1a0,iVar14);
          lVar12 = (longlong)local_1a0._padding_._4_4_;
          lVar18 = (longlong)(int)local_1a0._padding_;
          lVar24 = (longlong)(int)local_1e0;
          lVar19 = (longlong)(int)local_1a0._padding_;
          lVar13 = ERawImageFormat::GetBytesPerPixel(local_1a0._padding_._4_1_);
          if ((lVar13 * lVar18 * lVar12 * lVar19 + lVar24 * -8 != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImageSlice.GetImageSizeBytes() == Colors.Num() * sizeof(Colors[0])"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                                 ,0x21e,L""), bVar9)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          lVar12 = (longlong)local_1a0._padding_._4_4_;
          lVar18 = (longlong)(int)local_1a0._padding_;
          lVar19 = (longlong)(int)local_1a0._padding_;
          lVar13 = ERawImageFormat::GetBytesPerPixel(local_1a0._padding_._4_1_);
          memcpy(local_1a0.RawData,local_1e8,lVar13 * lVar18 * lVar12 * lVar19);
          plVar22 = (longlong *)(ulonglong)(iVar14 + 1U);
          plVar25 = local_1e8;
        } while ((longlong)(int)(iVar14 + 1U) < (longlong)uVar23);
      }
    }
    else if (TVar5 == BGRA8) {
      cVar6 = (**(code **)(param_1->_padding_ + 0x3d8))();
      FImage::Init(param_2,iVar14,iVar15,iVar21,BGRA8,-(cVar6 != '\0') & sRGB);
      local_1d8 = (longlong *)0x0;
      local_1d0 = 0;
      uStack_218 = CONCAT31(uStack_218._1_3_,cVar6 != '\0');
      if (0 < (longlong)uVar23) {
        do {
          iVar14 = (int)plVar22;
          if (bVar7) {
            local_220 = 6;
            iVar15 = iVar14;
          }
          else {
            iVar15 = iVar14 / 6 + (iVar14 >> 0x1f) +
                     (int)(((longlong)iVar14 / 6 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
            local_220 = iVar14 + iVar15 * -6;
          }
          local_b8 = (ulonglong)CONCAT42(iVar15,uStack_20e) << 0x10;
          local_c8[0] = local_220;
          local_c8[1] = 3;
          local_c8[2] = uStack_218;
          uStack_bc = 0x467a0000;
          local_b0 = 0;
          local_108 = lVar20;
          local_100 = uVar16;
          cVar6 = (**(code **)(*plVar17 + 0x60))(plVar17,&local_1d8,local_c8,&local_108);
          if (cVar6 == '\0') {
            if (local_1d8 == (longlong *)0x0) {
              return false;
            }
            FMemory::Free(local_1d8);
            return false;
          }
          FImage::GetSlice(param_2,&local_188,iVar14);
          lVar12 = (longlong)local_188._padding_._4_4_;
          lVar18 = (longlong)(int)local_188._padding_;
          lVar19 = (longlong)(int)local_188._padding_;
          lVar13 = ERawImageFormat::GetBytesPerPixel(local_188._padding_._4_1_);
          if ((lVar13 * lVar18 * lVar12 * lVar19 + (longlong)(int)local_1d0 * -4 != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImageSlice.GetImageSizeBytes() == Colors.Num() * sizeof(Colors[0])"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                                 ,0x23c,L""), bVar9)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          lVar12 = (longlong)local_188._padding_._4_4_;
          lVar18 = (longlong)(int)local_188._padding_;
          lVar19 = (longlong)(int)local_188._padding_;
          lVar13 = ERawImageFormat::GetBytesPerPixel(local_188._padding_._4_1_);
          memcpy(local_188.RawData,local_1d8,lVar13 * lVar18 * lVar12 * lVar19);
          plVar22 = (longlong *)(ulonglong)(iVar14 + 1U);
          plVar25 = local_1d8;
        } while ((longlong)(int)(iVar14 + 1U) < (longlong)uVar23);
      }
    }
    else {
      if (TVar5 != RGBA32F) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                           ,599,L"");
        if (!bVar7) {
          return true;
        }
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
      FImage::Init(param_2,iVar14,iVar15,iVar21,RGBA32F,Linear);
      local_1c8 = (longlong *)0x0;
      local_1c0 = 0;
      plVar25 = (longlong *)0x0;
      if (0 < (longlong)uVar23) {
        do {
          iVar14 = (int)plVar22;
          if (bVar7) {
            local_220 = 6;
            iVar15 = iVar14;
          }
          else {
            iVar15 = iVar14 / 6 + (iVar14 >> 0x1f) +
                     (int)(((longlong)iVar14 / 6 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
            local_220 = iVar14 + iVar15 * -6;
          }
          local_98 = (ulonglong)CONCAT42(iVar15,uStack_20e) << 0x10;
          local_a8[0] = local_220;
          local_a8[1] = 3;
          local_a8[2] = uStack_218;
          uStack_9c = 0x467a0000;
          local_90 = 0;
          local_f8 = lVar20;
          local_f0 = uVar16;
          cVar6 = (**(code **)(*plVar17 + 0x70))(plVar17,&local_1c8,local_a8,&local_f8);
          if (cVar6 == '\0') {
            if (local_1c8 == (longlong *)0x0) {
              return false;
            }
            FMemory::Free(local_1c8);
            return false;
          }
          FImage::GetSlice(param_2,&local_1b8,iVar14);
          lVar12 = (longlong)local_1b8._padding_._4_4_;
          lVar18 = (longlong)(int)local_1b8._padding_;
          lVar19 = (longlong)(int)local_1b8._padding_;
          lVar13 = ERawImageFormat::GetBytesPerPixel(local_1b8._padding_._4_1_);
          if ((lVar13 * lVar18 * lVar12 * lVar19 + (longlong)(int)local_1c0 * -0x10 != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImageSlice.GetImageSizeBytes() == Colors.Num() * sizeof(Colors[0])"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                                 ,0x251,L""), bVar9)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          lVar12 = (longlong)local_1b8._padding_._4_4_;
          lVar18 = (longlong)(int)local_1b8._padding_;
          lVar19 = (longlong)(int)local_1b8._padding_;
          lVar13 = ERawImageFormat::GetBytesPerPixel(local_1b8._padding_._4_1_);
          memcpy(local_1b8.RawData,local_1c8,lVar13 * lVar18 * lVar12 * lVar19);
          plVar22 = (longlong *)(ulonglong)(iVar14 + 1U);
          plVar25 = local_1c8;
        } while ((longlong)(int)(iVar14 + 1U) < (longlong)uVar23);
      }
    }
    if (plVar25 == (longlong *)0x0) {
      return true;
    }
    FMemory::Free(plVar25);
    return true;
  }
  return false;
}

// GetTexture2DSourceImage @ 147d0f6e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FImageUtils::GetTexture2DSourceImage(UTexture2D *param_1,FImage *param_2)

{
  if (2 < (byte)LogImageUtils._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
  }
  return false;
}

// ImageResize @ 147d13b00

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageUtils::ImageResize
          (int param_1,int param_2,TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          int param_5,TArray<FColor,TSizedDefaultAllocator<32>_> *param_6,bool param_7,bool param_8)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FImageView local_68;
  FImageView local_50;
  
  uVar10 = (longlong)param_4 * (longlong)param_5;
  iVar9 = (int)uVar10;
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10 & 0xffffffff);
  }
  piVar1 = &param_6->ArrayMax;
  piVar2 = &param_6->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != iVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,&param_6->AllocatorInstance,0,piVar1);
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar9,&param_6->AllocatorInstance,piVar2,piVar1);
  memset((param_6->AllocatorInstance).Data + (longlong)iVar8 * 4,0,(longlong)iVar9 << 2);
  iVar9 = *piVar2;
  pFVar3 = (param_6->AllocatorInstance).Data;
  if (iVar9 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  if (iVar8 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((longlong)iVar8 < (longlong)param_1 * (longlong)param_2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcData.Num() >= (int64)SrcWidth * SrcHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x26b,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((longlong)iVar9 < (longlong)uVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstData.Num() >= (int64)DstWidth * DstHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((iVar8 != 0) && (iVar9 != 0)) {
    cVar6 = param_7 * '\x02';
    if (iVar8 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_50._padding_._0_4_ = 1;
    local_50._padding_._4_1_ = 1;
    local_50._padding_._0_4_ = param_1;
    local_50._padding_._4_4_ = param_2;
    local_50._padding_._5_1_ = cVar6;
    local_50.RawData = pFVar4;
    if (iVar9 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_68._padding_._4_4_ = param_5;
    local_68._padding_._0_4_ = 1;
    local_68._padding_._4_1_ = 1;
    local_68._padding_._0_4_ = param_4;
    local_68._padding_._5_1_ = cVar6;
    local_68.RawData = pFVar3;
    FImageCore::ResizeImage(&local_50,&local_68,Default);
    if (param_8) {
      FImageCore::SetAlphaOpaque(&local_68);
    }
  }
  return;
}

// ImageResize @ 147d13db0

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageUtils::ImageResize
          (int param_1,int param_2,TArray<FLinearColor,TSizedDefaultAllocator<64>_> *param_3,
          int param_4,int param_5,TArray<FLinearColor,TSizedDefaultAllocator<64>_> *param_6)

{
  long64 *plVar1;
  long64 *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  long64 lVar9;
  ulong64 uVar10;
  FImageView local_60;
  FImageView local_48;
  
  uVar10 = (longlong)param_4 * (longlong)param_5;
  if ((longlong)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  plVar1 = &param_6->ArrayMax;
  plVar2 = &param_6->ArrayNum;
  *plVar2 = 0;
  if (*plVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,4,uVar10,&param_6->AllocatorInstance,0,plVar1);
  }
  lVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (0x10,4,uVar10,&param_6->AllocatorInstance,plVar2,plVar1);
  memset((param_6->AllocatorInstance).Data + lVar9 * 0x10,0,uVar10 * 0x10);
  lVar3 = *plVar2;
  pFVar4 = (param_6->AllocatorInstance).Data;
  if (lVar3 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = param_3->ArrayNum;
  pFVar6 = (param_3->AllocatorInstance).Data;
  if (lVar5 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (lVar5 < (longlong)param_1 * (longlong)param_2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcData.Num() >= (int64)SrcWidth * SrcHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x28f,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (lVar3 < (longlong)uVar10) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstData.Num() >= (int64)DstWidth * DstHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x290,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((lVar5 != 0) && (lVar3 != 0)) {
    if (lVar5 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_48._padding_._0_4_ = 1;
    local_48._padding_._4_2_ = 5;
    local_48._padding_._0_4_ = param_1;
    local_48._padding_._4_4_ = param_2;
    local_48.RawData = pFVar6;
    if (lVar3 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_60._padding_._4_4_ = param_5;
    local_60._padding_._0_4_ = 1;
    local_60._padding_._4_2_ = 5;
    local_60._padding_._0_4_ = param_4;
    local_60.RawData = pFVar4;
    FImageCore::ResizeImage(&local_48,&local_60,Default);
  }
  return;
}

// ImageResize @ 147d14040

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageUtils::ImageResize
          (int param_1,int param_2,TArrayView<FColor_const_,int> *param_3,int param_4,int param_5,
          TArrayView<FColor,int> *param_6,bool param_7,bool param_8)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FImageView local_48;
  FImageView local_30;
  
  if ((longlong)param_3->ArrayNum < (longlong)param_1 * (longlong)param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcData.Num() >= (int64)SrcWidth * SrcHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x26b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((longlong)param_6->ArrayNum < (longlong)param_4 * (longlong)param_5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstData.Num() >= (int64)DstWidth * DstHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_3->ArrayNum != 0) && (param_6->ArrayNum != 0)) {
    cVar2 = param_7 * '\x02';
    if (param_3->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_30.RawData = param_3->DataPtr;
    local_30._padding_._0_4_ = 1;
    local_30._padding_._4_1_ = 1;
    local_30._padding_._0_4_ = param_1;
    local_30._padding_._4_4_ = param_2;
    local_30._padding_._5_1_ = cVar2;
    if (param_6->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_48.RawData = param_6->DataPtr;
    local_48._padding_._4_4_ = param_5;
    local_48._padding_._0_4_ = 1;
    local_48._padding_._4_1_ = 1;
    local_48._padding_._0_4_ = param_4;
    local_48._padding_._5_1_ = cVar2;
    FImageCore::ResizeImage(&local_30,&local_48,Default);
    if (param_8) {
      FImageCore::SetAlphaOpaque(&local_48);
    }
  }
  return;
}

// ImageResize @ 147d14220

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageUtils::ImageResize
          (int param_1,int param_2,TArrayView<FLinearColor_const_,__int64> *param_3,int param_4,
          int param_5,TArrayView<FLinearColor,__int64> *param_6)

{
  code *pcVar1;
  bool bVar2;
  FImageView local_48;
  FImageView local_30;
  
  if (param_3->ArrayNum < (longlong)param_1 * (longlong)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcData.Num() >= (int64)SrcWidth * SrcHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x28f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_6->ArrayNum < (longlong)param_4 * (longlong)param_5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstData.Num() >= (int64)DstWidth * DstHeight",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                       ,0x290,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_3->ArrayNum != 0) && (param_6->ArrayNum != 0)) {
    if (param_3->ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_30.RawData = param_3->DataPtr;
    local_30._padding_._0_4_ = 1;
    local_30._padding_._4_2_ = 5;
    local_30._padding_._0_4_ = param_1;
    local_30._padding_._4_4_ = param_2;
    if (param_6->ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_48.RawData = param_6->DataPtr;
    local_48._padding_._4_4_ = param_5;
    local_48._padding_._0_4_ = 1;
    local_48._padding_._4_2_ = 5;
    local_48._padding_._0_4_ = param_4;
    FImageCore::ResizeImage(&local_30,&local_48,Default);
  }
  return;
}

// ImportBufferAsTexture2D @ 147d143c0

UTexture2D * __cdecl
FImageUtils::ImportBufferAsTexture2D(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UTexture2D *pUVar5;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if ((longlong)iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UTexture2D *)(*pcVar3)();
      return pUVar5;
    }
  }
  local_18.DataPtr = (uchar *)pFVar2;
  local_18.ArrayNum = (longlong)iVar1;
  pUVar5 = ImportBufferAsTexture2D(&local_18);
  return pUVar5;
}

// ImportBufferAsTexture2D @ 147d14430

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2D * __cdecl
FImageUtils::ImportBufferAsTexture2D(TArrayView<unsigned_char_const_,__int64> *param_1)

{
  char cVar1;
  IImageWrapperModule *pIVar2;
  UTexture2D *pUVar3;
  FImageView local_48;
  longlong local_30;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  void *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  pUVar3 = (UTexture2D *)0x0;
  uStack_24 = 0x201;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = (void *)0x0;
  uStack_18 = 0;
  local_10 = 0;
  pIVar2 = GetOrLoadImageWrapperModule();
  if (pIVar2 != (IImageWrapperModule *)0x0) {
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x50))
                      (pIVar2,param_1->DataPtr,param_1->ArrayNum,&local_30);
    if (cVar1 != '\0') {
      local_48._padding_ = CONCAT26(uStack_22,CONCAT24(uStack_24,uStack_28));
      local_48.RawData = local_20;
      local_48._padding_ = local_30;
      pUVar3 = CreateTexture2DFromImage(&local_48);
      goto LAB_147d144c3;
    }
  }
  if (2 < (byte)LogImageUtils._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageUtils);
  }
LAB_147d144c3:
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return pUVar3;
}

// ImportFileAsTexture2D @ 147d144f0

/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2D * __cdecl FImageUtils::ImportFileAsTexture2D(FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  long64 lVar3;
  bool bVar4;
  UTexture2D *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  wchar_t *pwVar7;
  TArrayView<unsigned_char_const_,__int64> local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  pUVar5 = (UTexture2D *)0x0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FFileHelper::LoadFileToArray(&local_28,pwVar7,0);
  lVar3 = local_28.ArrayNum;
  FVar2.Data = local_28.AllocatorInstance.Data;
  if (bVar4) {
    if ((local_28.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UTexture2D *)(*pcVar1)();
      return pUVar5;
    }
    local_38.DataPtr = (uchar *)FVar2.Data;
    local_38.ArrayNum = lVar3;
    pUVar5 = ImportBufferAsTexture2D(&local_38);
    if ((pUVar5 != (UTexture2D *)0x0) || ((byte)LogImageUtils._0_1_ < 3)) goto LAB_147d145d0;
    pFVar6 = &::LOG_Static;
  }
  else {
    if ((byte)LogImageUtils._0_1_ < 3) goto LAB_147d145d0;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogImageUtils);
LAB_147d145d0:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return pUVar5;
}

// LoadImage @ 147d1aa10

bool __cdecl FImageUtils::LoadImage(wchar_t *param_1,FImage *param_2)

{
  ForAnyElementType FVar1;
  long64 lVar2;
  bool bVar3;
  undefined1 uVar4;
  IImageWrapperModule *pIVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar3 = FFileHelper::LoadFileToArray(&local_28,param_1,0);
  lVar2 = local_28.ArrayNum;
  FVar1.Data = local_28.AllocatorInstance.Data;
  if (bVar3) {
    pIVar5 = GetOrLoadImageWrapperModule();
    if (pIVar5 == (IImageWrapperModule *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,FVar1.Data,lVar2,param_2);
    }
  }
  else {
    uVar4 = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// PNGCompressImageArray @ 147d1ce80

void __cdecl
FImageUtils::PNGCompressImageArray
          (int param_1,int param_2,TArrayView<FColor_const_,__int64> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_4)

{
  char cVar1;
  IImageWrapperModule *pIVar2;
  ulonglong in_stack_ffffffffffffffc8;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  FColor *local_18;
  
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    in_stack_ffffffffffffffc8 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if (((0 < param_3->ArrayNum) && (0 < param_1)) && (0 < param_2)) {
    local_18 = param_3->DataPtr;
    local_20 = 1;
    local_1c = 0x201;
    local_28 = param_1;
    local_24 = param_2;
    pIVar2 = GetOrLoadImageWrapperModule();
    if (pIVar2 != (IImageWrapperModule *)0x0) {
      cVar1 = (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,L"png");
      if (cVar1 == -1) {
        cVar1 = (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2,(undefined1)local_1c);
      }
      (**(code **)((longlong)*pIVar2 + 0x40))
                (pIVar2,param_4,cVar1,&local_28,in_stack_ffffffffffffffc8 & 0xffffffff00000000);
    }
  }
  return;
}

// SaveImageAutoFormat @ 147d276c0

bool __cdecl FImageUtils::SaveImageAutoFormat(wchar_t *param_1,FImageView *param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  IImageWrapperModule *pIVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  size_t sVar9;
  IFileManager *pIVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_38;
  
  pIVar6 = GetOrLoadImageWrapperModule();
  bVar3 = false;
  if (pIVar6 != (IImageWrapperModule *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar6 + 0x78))
                      (pIVar6,*(undefined1 *)((longlong)&param_2->_padding_ + 4));
    if ((cVar2 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ToFormat != EImageFormat::Invalid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ImageUtils.cpp"
                           ,0x4a,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pwVar7 = wcschr(param_1,L'.');
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    if ((pwVar7 == (wchar_t *)0x0) ||
       (cVar5 = (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,param_1), cVar5 != cVar2)) {
      pwVar7 = (wchar_t *)(**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,cVar2);
      ::FString::FString(&local_58,param_1);
      pFVar8 = FPaths::GetBaseFilename(&local_48,&local_58,false);
      if (&local_68 != pFVar8) {
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_68.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChar(&local_68,L'.');
      sVar9 = wcslen(pwVar7);
      ::FString::AppendChars(&local_68,pwVar7,(int)sVar9);
      param_1 = L"";
      if (local_68.Data.ArrayNum != 0) {
        param_1 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      }
    }
    local_38.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    cVar2 = (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,&local_38,cVar2,param_2,param_3);
    if (cVar2 == '\0') {
      bVar3 = false;
    }
    else {
      pIVar10 = IFileManager::Get();
      bVar3 = FFileHelper::SaveArrayToFile(&local_38,param_1,pIVar10,0);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// SaveImageByExtension @ 147d278d0

bool __cdecl FImageUtils::SaveImageByExtension(wchar_t *param_1,FImageView *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  IImageWrapperModule *pIVar4;
  IFileManager *pIVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  pwVar3 = wcschr(param_1,L'.');
  if (pwVar3 == (wchar_t *)0x0) {
    bVar1 = SaveImageAutoFormat(param_1,param_2,param_3);
    return bVar1;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pIVar4 = GetOrLoadImageWrapperModule();
  if (pIVar4 != (IImageWrapperModule *)0x0) {
    if (param_1 == (wchar_t *)0x0) {
LAB_147d27956:
      cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))
                        (pIVar4,*(undefined1 *)((longlong)&param_2->_padding_ + 4));
    }
    else {
      cVar2 = (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,param_1);
      if (cVar2 == -1) goto LAB_147d27956;
    }
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,&local_28,cVar2,param_2,param_3);
    if (cVar2 != '\0') {
      pIVar5 = IFileManager::Get();
      bVar1 = FFileHelper::SaveArrayToFile(&local_28,param_1,pIVar5,0);
      goto LAB_147d2799f;
    }
  }
  bVar1 = false;
LAB_147d2799f:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar1;
}

// ThumbnailCompressImageArray @ 147d336e0

void __cdecl
FImageUtils::ThumbnailCompressImageArray
          (int param_1,int param_2,TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement FVar1;
  longlong lVar2;
  int iVar3;
  FObjectThumbnail local_38;
  
  FObjectThumbnail::FObjectThumbnail(&local_38);
  iVar3 = param_1 * param_2;
  local_38.ImageWidth = param_1;
  local_38.ImageHeight = param_2;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar3 * 4,&local_38.ImageData.AllocatorInstance,&local_38.ImageData.ArrayNum,
             &local_38.ImageData.ArrayMax);
  memcpy(local_38.ImageData.AllocatorInstance.Data,(param_3->AllocatorInstance).Data,
         (longlong)(iVar3 * 4));
  if (0 < iVar3) {
    lVar2 = 0;
    do {
      FVar1 = local_38.ImageData.AllocatorInstance.Data[lVar2 * 4 + 2];
      local_38.ImageData.AllocatorInstance.Data[lVar2 * 4 + 2] =
           local_38.ImageData.AllocatorInstance.Data[lVar2 * 4];
      local_38.ImageData.AllocatorInstance.Data[lVar2 * 4] = FVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar3);
  }
  FObjectThumbnail::CompressImageData(&local_38);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (param_4,&local_38.CompressedImageData);
  if (local_38.ImageData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ImageData.AllocatorInstance.Data);
  }
  if (local_38.CompressedImageData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CompressedImageData.AllocatorInstance.Data);
  }
  return;
}

