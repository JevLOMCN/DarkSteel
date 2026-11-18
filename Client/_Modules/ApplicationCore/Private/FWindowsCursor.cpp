// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 13

// FWindowsCursor @ 1423c40b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWindowsCursor * __thiscall FWindowsCursor::FWindowsCursor(FWindowsCursor *this)

{
  FWindowsCursor *pFVar1;
  
  this->_padding_ = (longlong)&___7FWindowsCursor__6B_;
  this->CursorHandles[0] = (HICON__ *)0x0;
  this->CursorOverrideHandles[0] = (HICON__ *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001423c410b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FWindowsCursor *)
           (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + _DAT_1423c4580))
                     (switchD_1501dbc7b::caseD_1.e_magic + _DAT_1423c4580);
  return pFVar1;
}

// ~FWindowsCursor @ 1423c72a0

void __thiscall FWindowsCursor::~FWindowsCursor(FWindowsCursor *this)

{
  this->_padding_ = (longlong)&___7FWindowsCursor__6B_;
                    /* WARNING: Could not recover jumptable at 0x0001423c72cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + DAT_1423c7308))
            (switchD_1501dbc7b::caseD_1.e_magic + DAT_1423c7308);
  return;
}

// CreateCursorFromFile @ 1423d6b90

void * __thiscall
FWindowsCursor::CreateCursorFromFile
          (FWindowsCursor *this,FString *param_1,TVector2<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  IFileManager *pIVar4;
  void *pvVar5;
  HANDLE pvVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  FString local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  TArrayView<unsigned_char_const_,__int64> local_28;
  
  ::FString::ConcatFC(&local_38,param_1,L".ani");
  ::FString::ConcatFC(&local_48,param_1,L".cur");
  pvVar6 = (HANDLE)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  bVar2 = FFileHelper::LoadFileToArray(&local_58,(wchar_t *)FVar7.Data,2);
  if (!bVar2) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar2 = FFileHelper::LoadFileToArray(&local_58,(wchar_t *)FVar7.Data,2);
    if (!bVar2) goto LAB_1423d6d3f;
  }
  pwVar3 = FWindowsPlatformProcess::UserTempDir();
  FPaths::CreateTempFilename(&local_68,pwVar3,L"Cursor-",L".temp");
  pIVar4 = IFileManager::Get();
  local_28.DataPtr = (uchar *)local_58.AllocatorInstance.Data;
  local_28.ArrayNum = (long64)local_58.ArrayNum;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
  }
  if (local_58.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar1)();
      return pvVar5;
    }
  }
  bVar2 = FFileHelper::SaveArrayToFile(&local_28,(wchar_t *)FVar7.Data,pIVar4,0);
  if (bVar2) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
    }
    uVar8 = 0;
    pvVar6 = LoadImageW((HINSTANCE)0x0,(LPCWSTR)FVar7.Data,2,0,0,0x10);
    pIVar4 = IFileManager::Get();
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,FVar7.Data,0,0,uVar8 & 0xffffff00);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_1423d6d3f:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return pvVar6;
}

// CreateCursorFromRGBABuffer @ 1423d6da0

void * __thiscall
FWindowsCursor::CreateCursorFromRGBABuffer
          (FWindowsCursor *this,FColor *param_1,int param_2,int param_3,TVector2<double> *param_4)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  void *pvVar10;
  HBITMAP ho;
  HBITMAP ho_00;
  HICON pHVar11;
  longlong lVar12;
  ulonglong uVar13;
  uchar *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ForAnyElementType local_78;
  int local_70 [2];
  ForAnyElementType local_68;
  int local_60 [2];
  ICONINFO local_58;
  
  uVar13 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2 * param_3,&local_78,local_70,local_70 + 1);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2 * param_3,&local_68,local_60,local_60 + 1);
  if (0 < local_70[0]) {
    puVar14 = &(param_1->field0_0x0)._s_0.G;
    uVar16 = uVar13;
    do {
      uVar2 = ((FColor_u_0_s_0 *)(puVar14 + -1))->B;
      uVar15 = (uint)uVar13;
      uVar3 = puVar14[2];
      uVar4 = *puVar14;
      uVar5 = puVar14[1];
      uVar9 = 0;
      if ((int)uVar15 < local_70[0]) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pvVar10 = (void *)(*pcVar6)();
        return pvVar10;
      }
      *(uint *)(puVar14 + ~(ulonglong)param_1 + (longlong)local_78.Data) =
           CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5);
      uVar9 = 0;
      if ((int)uVar15 < local_60[0]) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pvVar10 = (void *)(*pcVar6)();
        return pvVar10;
      }
      uVar13 = (ulonglong)(uVar15 + 1);
      puVar14 = puVar14 + 4;
      local_68.Data[uVar16] = (FScriptContainerElement)0xff;
      uVar16 = uVar16 + 1;
    } while ((int)(uVar15 + 1) < local_70[0]);
  }
  ho = CreateBitmap(param_2,param_3,1,0x20,local_78.Data);
  ho_00 = CreateBitmap(param_2,param_3,1,8,local_68.Data);
  dVar7 = __real_3fe0000000000000;
  local_58._12_4_ = 0;
  local_58.fIcon = 0;
  dVar1 = (param_4->field0_0x0)._s_0.X;
  lVar12 = (longlong)ROUND((dVar1 + dVar1) * (double)param_2 + __real_3fe0000000000000);
  uVar13 = lVar12 >> 1;
  if (((uVar13 != (uVar13 & 0xffffffff)) || (lVar12 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar6 = (code *)swi(3);
    pvVar10 = (void *)(*pcVar6)();
    return pvVar10;
  }
  local_58.xHotspot = (DWORD)uVar13;
  lVar12 = (longlong)
           ROUND(((double)param_3 + (double)param_3) * (param_4->field0_0x0)._s_0.Y + dVar7);
  uVar13 = lVar12 >> 1;
  if (((uVar13 != (uVar13 & 0xffffffff)) || (lVar12 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar6 = (code *)swi(3);
    pvVar10 = (void *)(*pcVar6)();
    return pvVar10;
  }
  local_58.yHotspot = (DWORD)uVar13;
  local_58.hbmMask = ho;
  local_58.hbmColor = ho;
  pHVar11 = CreateIconIndirect(&local_58);
  DeleteObject(ho);
  DeleteObject(ho_00);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return pHVar11;
}

// GetPosition @ 1423e1400

TVector2<double> * __thiscall
FWindowsCursor::GetPosition(FWindowsCursor *this,TVector2<double> *__return_storage_ptr__)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  FWindowsApplication *pFVar2;
  tagPOINT local_res10;
  
  pFVar2 = WindowsApplication;
  if (WindowsApplication != (FWindowsApplication *)0x0) {
    SRWLock = &WindowsApplication->AsyncCursorRWLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    local_res10 = pFVar2->AsyncCursorPos;
    iVar1 = pFVar2->bAsyncCursorPosValid;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if (iVar1 != 0) goto LAB_1423e145d;
  }
  GetCursorPos((LPPOINT)&local_res10);
LAB_1423e145d:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_res10.x;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_res10.y;
  return __return_storage_ptr__;
}

// GetSize @ 1423e2ab0

void __thiscall FWindowsCursor::GetSize(FWindowsCursor *this,int *param_1,int *param_2)

{
  *param_1 = 0x10;
  *param_2 = 0x10;
  return;
}

// GetType @ 1423e4b10

Type __thiscall FWindowsCursor::GetType(FWindowsCursor *this)

{
  return this->CurrentType;
}

// IsCreateCursorFromRGBABufferSupported @ 1423ea400

bool __thiscall FWindowsCursor::IsCreateCursorFromRGBABufferSupported(FWindowsCursor *this)

{
  return true;
}

// Lock @ 1423eba00

void __thiscall FWindowsCursor::Lock(FWindowsCursor *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001423eba03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClipCursor((RECT *)param_1);
  return;
}

// SetPosition @ 1424054a0

void __thiscall FWindowsCursor::SetPosition(FWindowsCursor *this,int param_1,int param_2)

{
  FWindowsApplication *pFVar1;
  BOOL BVar2;
  HWND pHVar3;
  POINT local_res20;
  
  BVar2 = SetCursorPos(param_1,param_2);
  pFVar1 = WindowsApplication;
  if ((BVar2 != 0) && (WindowsApplication != (FWindowsApplication *)0x0)) {
    BVar2 = GetCursorPos(&local_res20);
    if (BVar2 == 0) {
      pHVar3 = (HWND)0x0;
    }
    else {
      pHVar3 = WindowFromPoint(local_res20);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar1->AsyncCursorRWLock);
    (pFVar1->AsyncCursorPos).x = local_res20.x;
    (pFVar1->AsyncCursorPos).y = local_res20.y;
    pFVar1->bAsyncCursorPosValid = BVar2;
    pFVar1->AsyncCursorWindowHandle = (HWND__ *)pHVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar1->AsyncCursorRWLock);
  }
  return;
}

// SetType @ 142405b70

void __thiscall FWindowsCursor::SetType(FWindowsCursor *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  HICON__ *hCursor;
  
  if (0xe < (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNewCursor < EMouseCursor::TotalCursorCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsCursor.cpp"
                       ,0xfd,L"Invalid cursor(%d) supplied");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentType = param_1;
  hCursor = this->CursorOverrideHandles[(int)param_1];
  if (hCursor == (HICON__ *)0x0) {
    hCursor = this->CursorHandles[(int)param_1];
  }
                    /* WARNING: Could not recover jumptable at 0x000142405bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCursor((HCURSOR)hCursor);
  return;
}

// SetTypeShape @ 142405bf0

void __thiscall FWindowsCursor::SetTypeShape(FWindowsCursor *this,Type param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xe < (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCursorType < EMouseCursor::TotalCursorCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsCursor.cpp"
                       ,0x129,L"Invalid cursor(%d) supplied");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CursorOverrideHandles[(int)param_1] = param_2;
  if (this->CurrentType == param_1) {
    (**(code **)(this->_padding_ + 0x30))(this);
  }
  return;
}

// Show @ 142407240

void __thiscall FWindowsCursor::Show(FWindowsCursor *this,bool param_1)

{
  int iVar1;
  
  if (!param_1) {
    do {
      iVar1 = ShowCursor(0);
    } while (-1 < iVar1);
    return;
  }
  do {
    iVar1 = ShowCursor(1);
  } while (iVar1 < 0);
  return;
}

