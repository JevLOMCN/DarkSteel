// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 35

// StaticClass @ 146f84ca0

UClass * __cdecl UNavLocalGridManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavLocalGridManager",
               &Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton,
               StaticRegisterNativesUNavLocalGridManager,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavLocalGridManager>,
               InternalVTableHelperCtorCaller<UNavLocalGridManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton;
}

// UNavLocalGridManager @ 146f95ac0

UNavLocalGridManager * __thiscall
UNavLocalGridManager::UNavLocalGridManager(UNavLocalGridManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavLocalGridManager__6B_;
  (this->CombinedGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CombinedGrids).ArrayNum = 0;
  (this->CombinedGrids).ArrayMax = 0;
  (this->SourceGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceGrids).ArrayNum = 0;
  (this->SourceGrids).ArrayMax = 0;
  return this;
}

// UNavLocalGridManager @ 146f95b00

UNavLocalGridManager * __thiscall
UNavLocalGridManager::UNavLocalGridManager(UNavLocalGridManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->NextGridId = 1;
  this->_padding_ = (longlong)&___7UNavLocalGridManager__6B_;
  (this->CombinedGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CombinedGrids).ArrayNum = 0;
  (this->CombinedGrids).ArrayMax = 0;
  (this->SourceGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceGrids).ArrayNum = 0;
  (this->SourceGrids).ArrayMax = 0;
  this->VersionNum = 0;
  return this;
}

// ~UNavLocalGridManager @ 146f96fd0

void __thiscall UNavLocalGridManager::~UNavLocalGridManager(UNavLocalGridManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNavLocalGridManager__6B_;
  DestructItems<FNavLocalGridData,int>
            ((FNavLocalGridData *)(this->SourceGrids).AllocatorInstance.Data,
             (this->SourceGrids).ArrayNum);
  pFVar1 = (this->SourceGrids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCombinedNavGridData,int>
            ((FCombinedNavGridData *)(this->CombinedGrids).AllocatorInstance.Data,
             (this->CombinedGrids).ArrayNum);
  pFVar1 = (this->CombinedGrids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddGridData @ 146f99fb0

int __thiscall
UNavLocalGridManager::AddGridData
          (UNavLocalGridManager *this,FNavLocalGridData *param_1,bool param_2)

{
  int *piVar1;
  FNavLocalGridData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (this->MaxActiveSourceGrids < 1) {
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    lVar8 = (**(code **)(this->_padding_ + 0x180))();
    uVar10 = (undefined4)*(undefined8 *)(lVar8 + 0x8f8);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x8f8) >> 0x20);
  }
  pFVar2 = (FNavLocalGridData *)(this->SourceGrids).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->SourceGrids).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = (this->SourceGrids).ArrayNum;
  piVar1 = &(this->SourceGrids).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8b0,&(this->SourceGrids).AllocatorInstance,piVar1);
  }
  (this->SourceGrids).ArrayNum = uVar6 + 1;
  lVar8 = (longlong)(int)uVar6 * 0xb0;
  FNavLocalGridData::FNavLocalGridData
            ((FNavLocalGridData *)((this->SourceGrids).AllocatorInstance.Data + lVar8),param_1);
  uVar9 = ~uVar6 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar6 < (this->SourceGrids).ArrayNum) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  *(int *)((this->SourceGrids).AllocatorInstance.Data + lVar8 + 0xa0) = this->NextGridId;
  uVar7 = 0;
  if ((int)uVar6 < (this->SourceGrids).ArrayNum) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  *(ulonglong *)((this->SourceGrids).AllocatorInstance.Data + lVar8 + 0x98) =
       CONCAT44(uVar11,uVar10);
  uVar7 = 0;
  if ((int)uVar6 < (this->SourceGrids).ArrayNum) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = *(int *)((this->SourceGrids).AllocatorInstance.Data + lVar8 + 0xa0);
  this->NextGridId = this->NextGridId + 1;
  UpdateSourceGrids(this);
  this->bNeedsRebuilds = 1;
  if (param_2) {
    RebuildGrids(this);
  }
  return iVar5;
}

// AddLocalNavigationGridForBox @ 146f9a1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UNavLocalGridManager::AddLocalNavigationGridForBox
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TRotator<double> *param_4,int param_5,float param_6,bool param_7)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  UNavLocalGridManager *this;
  TQuat<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_168 [32];
  char *local_148;
  int local_140;
  TVector2<double>_u_0 local_138;
  TQuat<double> local_128;
  FNavLocalGridData local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  this = GetCurrent(param_1);
  if (param_5 < 1) {
    if (FVisualLogger::bIsRecording != 0) {
      local_140 = param_5;
      local_148 = "UNavLocalGridManager::AddLocalNavigationGridForBox";
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogNavigation.field_0x4,Warning,
                 L"%hs must be called with a positive non-zero Radius2D but received %d.");
    }
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
  }
  if ((this == (UNavLocalGridManager *)0x0) || (param_5 < 1)) {
    iVar4 = 0;
  }
  else {
    dVar8 = (param_3->field0_0x0)._s_0.Y + (double)((float)param_5 * GridCellSize);
    local_138._8_4_ = SUB84(dVar8,0);
    local_138._s_0.X = (param_3->field0_0x0)._s_0.X + (double)((float)param_5 * GridCellSize);
    local_138._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    FNavLocalGridData::FNavLocalGridData(&local_108,param_2,(TVector2<double> *)&local_138._s_0);
    dVar8 = (double)param_6 + (param_3->field0_0x0)._s_0.Z;
    dVar2 = (double)(float)dVar8;
    dVar8 = dVar2 - dVar8;
    uVar6 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((__real_3fb0000000000000 <= (double)CONCAT44(uVar7,uVar6) &&
         (double)CONCAT44(uVar7,uVar6) != __real_3fb0000000000000) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FloatFitsIn<OutType>(In, Precision)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xc0,L"Loss of data caused by narrowing conversion"), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    local_108._padding_ =
         (longlong)
         (((double)local_108._padding_ + (double)local_108._padding_) * __real_3fe0000000000000);
    local_108._padding_ = (longlong)((double)local_108._padding_ + dVar2);
    local_108._padding_ = (longlong)((double)local_108._padding_ - dVar2);
    pTVar5 = UE::Math::TRotator<double>::Quaternion(param_4,&local_128);
    FNavLocalGridData::MarkBoxObstacle(&local_108,param_2,param_3,pTVar5);
    iVar4 = AddGridData(this,&local_108,param_7);
    if (local_108.CellZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.CellZ.AllocatorInstance.Data);
    }
    if ((void *)local_108._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_108._padding_);
    }
  }
  return iVar4;
}

// AddLocalNavigationGridForCapsule @ 146f9a3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UNavLocalGridManager::AddLocalNavigationGridForCapsule
          (UObject *param_1,TVector<double> *param_2,float param_3,float param_4,int param_5,
          float param_6,bool param_7)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UNavLocalGridManager *this;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  char *local_158;
  longlong local_150;
  TVector2<double>_u_0 local_148;
  float local_138 [6];
  double local_120;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  int local_c8;
  int local_c4;
  void *local_c0;
  int local_b8;
  ForAnyElementType local_b0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_178;
  this = GetCurrent(param_1);
  if (param_5 < 1) {
    if (FVisualLogger::bIsRecording != 0) {
      local_150 = CONCAT44(local_150._4_4_,param_5);
      local_158 = "UNavLocalGridManager::AddLocalNavigationGridForCapsule";
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogNavigation.field_0x4,Warning,
                 L"%hs must be called with a positive non-zero Radius2 Dbut received %d.");
    }
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
  }
  if ((this == (UNavLocalGridManager *)0x0) || (param_5 < 1)) {
    iVar9 = 0;
  }
  else {
    local_148._s_0.X = (double)((float)param_5 * GridCellSize + param_3);
    local_148._s_0.Y = local_148._s_0.X;
    FNavLocalGridData::FNavLocalGridData
              ((FNavLocalGridData *)local_138,param_2,(TVector2<double> *)&local_148._s_0);
    fVar5 = __real_3f000000;
    uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    iVar11 = 0;
    local_108 = (local_108 + local_120) * __real_3fe0000000000000;
    local_120 = local_108 - (double)(param_4 + param_6);
    local_108 = (double)(param_4 + param_6) + local_108;
    iVar9 = local_c8;
    iVar7 = local_c4;
    fVar14 = local_138[0];
    if (0 < local_c8) {
      do {
        iVar10 = 0;
        if (0 < iVar7) {
          do {
            dVar13 = ((double)(((float)iVar11 + fVar5) * fVar14) + local_f8) -
                     (param_2->field0_0x0)._s_0.X;
            dVar12 = ((double)(((float)iVar10 + fVar5) * fVar14) + local_f0) -
                     (param_2->field0_0x0)._s_0.Y;
            if ((dVar12 * dVar12 + dVar13 * dVar13 < (double)(param_3 * param_3)) &&
               (dVar12 = local_e8 - (param_2->field0_0x0)._s_0.Z,
               (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar4,SUB84(dVar12,0) & uVar3) <
               (double)param_4)) {
              uVar1 = iVar7 * iVar11 + iVar10;
              uVar8 = 0;
              if ((int)uVar1 < local_b8) {
                uVar8 = ~uVar1 >> 0x1f;
              }
              if (uVar8 == 0) {
                local_158 = (char *)(longlong)(int)uVar1;
                local_150 = (longlong)local_b8;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar2 = (code *)swi(3);
                  iVar9 = (*pcVar2)();
                  return iVar9;
                }
              }
              *(undefined1 *)((longlong)(int)uVar1 + (longlong)local_c0) = 1;
              iVar7 = local_c4;
              fVar14 = local_138[0];
            }
            iVar10 = iVar10 + 1;
            iVar9 = local_c8;
          } while (iVar10 < iVar7);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar9);
    }
    iVar9 = AddGridData(this,(FNavLocalGridData *)local_138,param_7);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  return iVar9;
}

// AddLocalNavigationGridForPoint @ 146f9a730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UNavLocalGridManager::AddLocalNavigationGridForPoint
          (UObject *param_1,TVector<double> *param_2,int param_3,float param_4,bool param_5)

{
  int iVar1;
  UNavLocalGridManager *this;
  undefined1 auStack_128 [32];
  char *local_108;
  int local_100;
  FNavLocalGridData local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  this = GetCurrent(param_1);
  if (param_3 < 1) {
    if (FVisualLogger::bIsRecording != 0) {
      local_108 = "UNavLocalGridManager::AddLocalNavigationGridForPoint";
      local_100 = param_3;
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogNavigation.field_0x4,Warning,
                 L"%hs must be called with a positive non-zero Radius2D but received %d.");
    }
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
  }
  if ((this == (UNavLocalGridManager *)0x0) || (param_3 < 1)) {
    iVar1 = 0;
  }
  else {
    FNavLocalGridData::FNavLocalGridData(&local_f8,param_2,(float)param_3 * GridCellSize);
    local_f8._padding_ =
         (longlong)
         (((double)local_f8._padding_ + (double)local_f8._padding_) * __real_3fe0000000000000);
    local_f8._padding_ = (longlong)((double)local_f8._padding_ - (double)param_4);
    local_f8._padding_ = (longlong)((double)param_4 + (double)local_f8._padding_);
    FNavLocalGridData::MarkPointObstacle(&local_f8,param_2);
    iVar1 = AddGridData(this,&local_f8,param_5);
    if (local_f8.CellZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.CellZ.AllocatorInstance.Data);
    }
    if ((void *)local_f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._padding_);
    }
  }
  return iVar1;
}

// AddLocalNavigationGridForPoints @ 146f9a8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UNavLocalGridManager::AddLocalNavigationGridForPoints
          (UObject *param_1,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,float param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UNavLocalGridManager *this;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_1b8 [32];
  char *local_198;
  longlong local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  double local_158;
  double local_150;
  double local_148;
  float local_138 [6];
  double local_120;
  double local_108;
  double local_f8;
  double local_f0;
  int local_c8;
  int local_c4;
  void *local_c0;
  int local_b8;
  ForAnyElementType local_b0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this = GetCurrent(param_1);
  if (param_2->ArrayNum == 0) {
    if (FVisualLogger::bIsRecording != 0) {
      local_198 = "UNavLocalGridManager::AddLocalNavigationGridForPoints";
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogNavigation.field_0x4,Warning,
                 L"%hs must be called with a non-empty list of locations.");
    }
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
  }
  if (param_3 < 1) {
    if (FVisualLogger::bIsRecording != 0) {
      local_190 = CONCAT44(local_190._4_4_,param_3);
      local_198 = "UNavLocalGridManager::AddLocalNavigationGridForPoints";
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogNavigation.field_0x4,Warning,
                 L"%hs must be called with a positive non-zero Radius2D but received %d.");
    }
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
  }
  if (((this == (UNavLocalGridManager *)0x0) || (param_2->ArrayNum < 1)) || (param_3 < 1)) {
    iVar4 = 0;
  }
  else {
    UE::Math::TBox<double>::TBox<double>
              ((TBox<double> *)&local_170._s_0,(TVector<double> *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    dVar12 = local_158 - local_170._s_0.X;
    if (local_158 - local_170._s_0.X <= local_150 - local_170._s_0.Y) {
      dVar12 = local_150 - local_170._s_0.Y;
    }
    fVar11 = FloatCastChecked<float,double>(dVar12,__real_3fb0000000000000);
    dVar12 = __real_3fe0000000000000;
    local_188._s_0.X = (local_170._s_0.X + local_158) * __real_3fe0000000000000;
    local_188._s_0.Y = (local_170._s_0.Y + local_150) * __real_3fe0000000000000;
    local_188._s_0.Z = (local_170._s_0.Z + local_148) * __real_3fe0000000000000;
    FNavLocalGridData::FNavLocalGridData
              ((FNavLocalGridData *)local_138,(TVector<double> *)&local_188._s_0,
               (float)param_3 * GridCellSize + fVar11);
    iVar4 = param_2->ArrayNum;
    uVar8 = 0;
    dVar12 = (local_108 + local_120) * dVar12;
    local_120 = dVar12 - (double)param_4;
    local_108 = (double)param_4 + dVar12;
    if (0 < iVar4) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < iVar4) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_190 = (longlong)iVar4;
          local_198 = (char *)(longlong)(int)uVar8;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        pcVar9 = (char *)(longlong)
                         ((*(double *)(pFVar1 + lVar10 + 8) - local_f0) / (double)local_138[0]);
        iVar4 = (int)pcVar9;
        if ((pcVar9 != (char *)(longlong)iVar4) &&
           (local_198 = pcVar9,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pcVar9 = (char *)(longlong)
                         ((*(double *)(pFVar1 + lVar10) - local_f8) / (double)local_138[0]);
        iVar6 = (int)pcVar9;
        if ((pcVar9 != (char *)(longlong)iVar6) &&
           (local_198 = pcVar9,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        if ((((-1 < iVar6) && (iVar6 < local_c8)) && (-1 < iVar4)) &&
           ((iVar4 < local_c4 && (uVar7 = iVar6 * local_c4 + iVar4, uVar7 != 0xffffffff)))) {
          uVar5 = 0;
          if ((int)uVar7 < local_b8) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_198 = (char *)(longlong)(int)uVar7;
            local_190 = (longlong)local_b8;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              iVar4 = (*pcVar2)();
              return iVar4;
            }
          }
          *(undefined1 *)((longlong)(int)uVar7 + (longlong)local_c0) = 1;
        }
        iVar4 = param_2->ArrayNum;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x18;
      } while ((int)uVar8 < iVar4);
    }
    iVar4 = AddGridData(this,(FNavLocalGridData *)local_138,param_5);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
  }
  return iVar4;
}

// FindLocalNavigationGridPath @ 146fa8f20

bool __cdecl
UNavLocalGridManager::FindLocalNavigationGridPath
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  UNavLocalGridManager *this;
  
  this = GetCurrent(param_1);
  if (this != (UNavLocalGridManager *)0x0) {
    bVar1 = FindPath(this,param_2,param_3,param_4);
    return bVar1;
  }
  return false;
}

// FindPath @ 146fa9360

bool __thiscall
UNavLocalGridManager::FindPath
          (UNavLocalGridManager *this,TVector<double> *param_1,TVector<double> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  TVector<double> *pTVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  uint uVar17;
  FNavLocalGridData *this_00;
  longlong lVar18;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_b8;
  double local_a8;
  TIntVector3<int>_u_0 local_a0;
  TIntVector3<int>_u_0 local_90;
  FNavLocalGridData *local_80;
  TIntVector3<int>_u_0 local_78;
  TIntVector3<int>_u_0 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TVector<double> local_48;
  
  uVar7 = GetGridIndex(this,param_1);
  uVar8 = GetGridIndex(this,param_2);
  if ((uVar7 != uVar8) || (uVar7 == 0xffffffff)) {
    return false;
  }
  uVar8 = 0;
  if ((int)uVar7 < (this->CombinedGrids).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_a8 = (double)((longlong)(int)uVar7 * 0xc0);
  this_00 = (FNavLocalGridData *)((this->CombinedGrids).AllocatorInstance.Data + (longlong)local_a8)
  ;
  local_80 = this_00;
  TSimpleCellGrid<unsigned_char,255>::GetCellCoordsUnsafe
            ((TSimpleCellGrid<unsigned_char,255> *)this_00,(TIntVector3<int> *)&local_78._s_0,
             param_1);
  uVar15 = ((FGridSize2D *)&this_00->_padding_)->Height - 1;
  local_90._s_0.Z = 0;
  if (local_78._s_0.Y < (int)uVar15) {
    uVar15 = local_78._s_0.Y;
  }
  uVar11 = ((FGridSize2D *)&this_00->_padding_)->Width - 1;
  if (local_78._s_0.X < (int)uVar11) {
    uVar11 = local_78._s_0.X;
  }
  local_90._s_0.X = 0;
  if (0 < (int)uVar11) {
    local_90._s_0.X = uVar11;
  }
  local_90._s_0.Y = 0;
  if (0 < (int)uVar15) {
    local_90._s_0.Y = uVar15;
  }
  TSimpleCellGrid<unsigned_char,255>::GetCellCoordsUnsafe
            ((TSimpleCellGrid<unsigned_char,255> *)this_00,(TIntVector3<int> *)&local_68._s_0,
             param_2);
  uVar15 = ((FGridSize2D *)&this_00->_padding_)->Height - 1;
  local_a0._s_0.Z = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68._s_0.Y < (int)uVar15) {
    uVar15 = local_68._s_0.Y;
  }
  uVar11 = ((FGridSize2D *)&this_00->_padding_)->Width - 1;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  if (local_68._s_0.X < (int)uVar11) {
    uVar11 = local_68._s_0.X;
  }
  local_a0._s_0.X = 0;
  if (0 < (int)uVar11) {
    local_a0._s_0.X = uVar11;
  }
  local_a0._s_0.Y = 0;
  if (0 < (int)uVar15) {
    local_a0._s_0.Y = uVar15;
  }
  uVar8 = 0;
  if ((int)uVar7 < (this->CombinedGrids).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = FNavLocalGridData::FindPath
                    ((FNavLocalGridData *)
                     ((this->CombinedGrids).AllocatorInstance.Data + (longlong)local_a8),
                     (TIntVector3<int> *)&local_90._s_0,(TIntVector3<int> *)&local_a0._s_0,&local_b8
                    );
  if (!bVar5) {
    if (local_b8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_b8.AllocatorInstance.Data);
    return false;
  }
  iVar9 = local_b8.ArrayNum;
  uVar13 = (ulonglong)local_b8.ArrayNum;
  piVar1 = &param_3->ArrayNum;
  iVar12 = *piVar1;
  if (iVar12 < local_b8.ArrayNum) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_b8.ArrayNum - iVar12,&param_3->AllocatorInstance,piVar1,
               &param_3->ArrayMax);
  }
  else {
    if (local_b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_b8._8_8_ & 0xffffffff);
    }
    uVar14 = uVar13;
    if (iVar12 <= local_b8.ArrayNum) goto LAB_146fa95f8;
    uVar7 = iVar12 - local_b8.ArrayNum;
    if ((int)(local_b8.ArrayNum | uVar7) < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar14 = local_b8._8_8_ & 0xffffffff;
    }
    if (uVar7 == 0) goto LAB_146fa95f8;
    pFVar2 = (param_3->AllocatorInstance).Data + uVar13 * 0x18;
    iVar9 = (*piVar1 - uVar7) - iVar9;
    if (iVar9 != 0) {
      memmove(pFVar2,pFVar2 + (longlong)(int)uVar7 * 0x18,(longlong)iVar9 * 0x18);
    }
    *piVar1 = *piVar1 - uVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
  }
  uVar14 = local_b8._8_8_ & 0xffffffff;
LAB_146fa95f8:
  uVar7 = 0;
  if (0 < (int)uVar14) {
    lVar18 = 0;
    lVar16 = 0;
    do {
      uVar17 = ~uVar7 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar7 < (int)uVar14) {
        uVar8 = uVar17;
      }
      iVar12 = (int)uVar14;
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar12 = local_b8.ArrayNum;
      }
      iVar9 = *(int *)(local_b8.AllocatorInstance.Data + lVar16 + 4);
      uVar8 = 0;
      if ((int)uVar7 < iVar12) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pTVar10 = FNavLocalGridData::GetProjectedCellCenter
                          (local_80,&local_48,*(int *)(local_b8.AllocatorInstance.Data + lVar16),
                           iVar9);
      local_58 = *(undefined4 *)&pTVar10->field0_0x0;
      uStack_54 = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 4);
      uStack_50 = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 8);
      uStack_4c = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 0xc);
      local_a8 = (pTVar10->field0_0x0)._s_0.Z;
      uVar8 = 0;
      if ((int)uVar7 < *piVar1) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      uVar7 = uVar7 + 1;
      lVar16 = lVar16 + 0xc;
      pFVar2 = pFVar3 + lVar18;
      *(undefined4 *)pFVar2 = local_58;
      *(undefined4 *)(pFVar2 + 4) = uStack_54;
      *(undefined4 *)(pFVar2 + 8) = uStack_50;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_4c;
      *(double *)(pFVar3 + lVar18 + 0x10) = local_a8;
      lVar18 = lVar18 + 0x18;
      uVar14 = local_b8._8_8_ & 0xffffffff;
    } while ((int)uVar7 < local_b8.ArrayNum);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return true;
}

// GetCurrent @ 146fad460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNavLocalGridManager * __cdecl UNavLocalGridManager::GetCurrent(UWorld *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UAISystemBase *pUVar3;
  
  if (param_1 == (UWorld *)0x0) {
    return (UNavLocalGridManager *)0x0;
  }
  pUVar3 = (param_1->AISystem).field0_0x0.DebugPtr;
  if (pUVar3 != (UAISystemBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146fad49c;
  }
  pUVar3 = (UAISystemBase *)0x0;
LAB_146fad49c:
  if (pUVar3 == (UAISystemBase *)0x0) {
    return (UNavLocalGridManager *)0x0;
  }
  return (UNavLocalGridManager *)pUVar3[3]._padding_;
}

// GetCurrent @ 146fad4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNavLocalGridManager * __cdecl UNavLocalGridManager::GetCurrent(UObject *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UAISystemBase *pUVar4;
  
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar2 == (UWorld *)0x0) {
    return (UNavLocalGridManager *)0x0;
  }
  pUVar4 = (pUVar2->AISystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UAISystemBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146fad511;
  }
  pUVar4 = (UAISystemBase *)0x0;
LAB_146fad511:
  if (pUVar4 == (UAISystemBase *)0x0) {
    return (UNavLocalGridManager *)0x0;
  }
  return (UNavLocalGridManager *)pUVar4[3]._padding_;
}

// GetGridData @ 146fb0db0

FNavLocalGridData * __thiscall
UNavLocalGridManager::GetGridData(UNavLocalGridManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNavLocalGridData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->CombinedGrids).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNavLocalGridData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FNavLocalGridData *)
         ((this->CombinedGrids).AllocatorInstance.Data + (longlong)param_1 * 0xc0);
}

// GetGridIndex @ 146fb0e30

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UNavLocalGridManager::GetGridIndex(UNavLocalGridManager *this,TVector<double> *param_1)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_int___cdecl_UNavLocalGridManager::GetGridIndex(UE::Math::TVector<double>_const_&)const_::_2_::FStat_STAT_GridFind>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  uVar15 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GridFind ==
        (FThreadSafeStaticStat<_public:_int___cdecl_UNavLocalGridManager::GetGridIndex(UE::Math::TVector<double>_const_&)const_::_2_::FStat_STAT_GridFind>
         )0x0) {
      pFVar11 = ::FName::FName(&local_68,"STAT_GridFind");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridFind,*pFVar11,L"NavGrid: GetIndex",
                 "STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_GridFind;
  if (StatPtr_STAT_GridFind ==
      (FThreadSafeStaticStat<_public:_int___cdecl_UNavLocalGridManager::GetGridIndex(UE::Math::TVector<double>_const_&)const_::_2_::FStat_STAT_GridFind>
       )0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_GridFind");
    FVar12 = (FThreadSafeStaticStat<_public:_int___cdecl_UNavLocalGridManager::GetGridIndex(UE::Math::TVector<double>_const_&)const_::_2_::FStat_STAT_GridFind>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridFind,*pFVar11,
                          L"NavGrid: GetIndex","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.Value;
        local_res18.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\NavLocalGridManager.cpp"
                   ,0x113);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar13.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_146fb0fae;
    }
  }
  bVar6 = false;
  FVar14 = local_58;
LAB_146fb0fae:
  uVar17 = uVar15;
  if (0 < (this->CombinedGrids).ArrayNum) {
    do {
      uVar16 = (uint)uVar17;
      uVar9 = 0;
      if ((int)uVar16 < (this->CombinedGrids).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      pFVar3 = (this->CombinedGrids).AllocatorInstance.Data;
      dVar2 = (param_1->field0_0x0)._s_0.X;
      if (((((*(double *)(pFVar3 + uVar15 + 8) <= dVar2 && dVar2 != *(double *)(pFVar3 + uVar15 + 8)
             ) && (dVar2 < *(double *)(pFVar3 + uVar15 + 0x20))) &&
           (dVar2 = (param_1->field0_0x0)._s_0.Y,
           *(double *)(pFVar3 + uVar15 + 0x10) <= dVar2 &&
           dVar2 != *(double *)(pFVar3 + uVar15 + 0x10))) &&
          ((dVar2 < *(double *)(pFVar3 + uVar15 + 0x28) &&
           (dVar2 = (param_1->field0_0x0)._s_0.Z,
           *(double *)(pFVar3 + uVar15 + 0x18) <= dVar2 &&
           dVar2 != *(double *)(pFVar3 + uVar15 + 0x18))))) &&
         (dVar2 < *(double *)(pFVar3 + uVar15 + 0x30))) goto LAB_146fb1067;
      uVar15 = uVar15 + 0xc0;
      uVar17 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < (this->CombinedGrids).ArrayNum);
  }
  uVar16 = 0xffffffff;
LAB_146fb1067:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return uVar16;
}

// GetGridValueAt @ 146fb1200

uchar __thiscall
UNavLocalGridManager::GetGridValueAt(UNavLocalGridManager *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  TSimpleCellGrid<unsigned_char,255> *this_00;
  TIntVector3<int>_u_0 local_18;
  
  uVar4 = GetGridIndex(this,param_1);
  if (uVar4 == 0xffffffff) {
    return '\0';
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->CombinedGrids).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this_00 = (TSimpleCellGrid<unsigned_char,255> *)
            ((this->CombinedGrids).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xc0);
  TSimpleCellGrid<unsigned_char,255>::GetCellCoordsUnsafe
            (this_00,(TIntVector3<int> *)&local_18._s_0,param_1);
  if ((((-1 < local_18._s_0.X) && (local_18._s_0.X < (int)(this_00->GridSize).Width)) &&
      (-1 < local_18._s_0.Y)) &&
     ((uVar4 = (this_00->GridSize).Height, local_18._s_0.Y < (int)uVar4 &&
      (uVar4 = uVar4 * local_18._s_0.X + local_18._s_0.Y, uVar4 != 0xffffffff)))) {
    uVar5 = 0;
    if ((int)uVar4 < (this_00->Cells).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return (uchar)(this_00->Cells).AllocatorInstance.Data[(int)uVar4];
  }
  return `public:_unsigned_char_const&___ptr64___cdecl_TSimpleCellGrid<unsigned_char,255>::GetCellAtWorldLocation(UE::Math::TVector<double>_const&___ptr64)const___ptr64'
         ::__l2::InvalidCellInstance;
}

// GetPrivateStaticClass @ 146fb42b0

UClass * __cdecl UNavLocalGridManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"NavLocalGridManager",
               &Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton,
               StaticRegisterNativesUNavLocalGridManager,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavLocalGridManager>,
               InternalVTableHelperCtorCaller<UNavLocalGridManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLocalGridManager.InnerSingleton;
}

// GetWorld @ 146fb5e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UNavLocalGridManager::GetWorld(UNavLocalGridManager *this)

{
  UWorld *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146fb5e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
  return pUVar1;
}

// ProjectGrids @ 146fc51d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNavLocalGridManager::ProjectGrids
          (UNavLocalGridManager *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName FVar2;
  ANavigationData *pAVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UNavLocalGridManager::ProjectGrids(TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_GridProject>
  FVar8;
  longlong lVar9;
  UClass *pUVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  byte local_50;
  FStatMessage local_48;
  
  uVar15 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GridProject ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UNavLocalGridManager::ProjectGrids(TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_GridProject>
         )0x0) {
      pFVar7 = ::FName::FName(&local_68,"STAT_GridProject");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridProject,*pFVar7,L"NavGrid: Project",
                 "STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_GridProject;
  if (StatPtr_STAT_GridProject ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UNavLocalGridManager::ProjectGrids(TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_GridProject>
       )0x0) {
    pFVar7 = ::FName::FName(&local_60,"STAT_GridProject");
    FVar8 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_UNavLocalGridManager::ProjectGrids(TArray<int,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_GridProject>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridProject,*pFVar7,
                         L"NavGrid: Project","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_50 = 0;
  FVar2 = *(FName *)FVar8;
  FVar16 = FVar2.ComparisonIndex.Value;
  uVar12 = FVar2.Number;
  if ((FVar16.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      local_50 = local_50 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar16.Value;
        local_res18.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\NavLocalGridManager.cpp"
                   ,0xcb);
        local_50 = local_50 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar16.Value;
      local_res20.s.HighPart = uVar12;
      local_58 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_50 = local_50 | 4;
    }
  }
  lVar9 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar9 == 0) goto LAB_146fc5468;
  uVar14 = *(ulonglong *)(lVar9 + 0x1a0);
  if (uVar14 == 0) {
LAB_146fc536d:
    uVar14 = uVar15;
  }
  else {
    pUVar10 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar11 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) + (longlong)iVar11 * 8)
        != &pUVar10->_padding_)) goto LAB_146fc536d;
  }
  if (((uVar14 != 0) &&
      (pAVar3 = *(ANavigationData **)(uVar14 + 0x28), pAVar3 != (ANavigationData *)0x0)) &&
     (iVar11 = param_1->ArrayNum, uVar14 = uVar15, 0 < iVar11)) {
    do {
      uVar13 = (uint)uVar15;
      uVar12 = 0;
      if ((int)uVar13 < iVar11) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = *(uint *)((param_1->AllocatorInstance).Data + uVar14);
      uVar6 = 0;
      if ((int)uVar12 < (this->CombinedGrids).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FNavLocalGridData::ProjectCells
                ((FNavLocalGridData *)
                 ((this->CombinedGrids).AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc0),
                 pAVar3);
      iVar11 = param_1->ArrayNum;
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar14 = uVar14 + 4;
    } while ((int)(uVar13 + 1) < iVar11);
  }
LAB_146fc5468:
  if ((local_50 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_50 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar2 = local_58;
  if (((((local_50 & 4) != 0) && (local_58 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar2.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RebuildGrids @ 146fc57c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UNavLocalGridManager::RebuildGrids(UNavLocalGridManager *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  FCombinedNavGridData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:_void___cdecl_UNavLocalGridManager::RebuildGrids(void)_::_2_::FStat_STAT_GridRebuild>
  FVar22;
  ulonglong uVar23;
  FName FVar24;
  int *piVar25;
  uint uVar26;
  longlong lVar27;
  UNavLocalGridManager *pUVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  FNavLocalGridData *pFVar32;
  FNavLocalGridData *this_00;
  int *piVar33;
  FCombinedNavGridData *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_278 [32];
  uint local_214;
  uint local_210;
  TArray<FNavLocalGridData,TSizedDefaultAllocator<32>_> local_208;
  ForAnyElementType local_1f8;
  int local_1f0 [2];
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  FName local_1d8;
  undefined4 local_1d0;
  int local_1cc;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  UNavLocalGridManager *local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  longlong local_198;
  ForAnyElementType local_190;
  int local_188;
  int local_184;
  uint local_180;
  int local_17c;
  FName local_178;
  FColor_u_0 local_170 [2];
  int *local_168;
  FName local_160;
  FName local_158;
  FName local_148;
  FName local_140;
  FNavLocalGridData local_138;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar38 = 0;
  uVar37 = 0;
  local_1b8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GridRebuild ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UNavLocalGridManager::RebuildGrids(void)_::_2_::FStat_STAT_GridRebuild>
         )0x0) {
      pFVar21 = ::FName::FName(&local_148,"STAT_GridRebuild");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridRebuild,*pFVar21,L"NavGrid: Rebuild"
                 ,"STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_GridRebuild;
  if (StatPtr_STAT_GridRebuild ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UNavLocalGridManager::RebuildGrids(void)_::_2_::FStat_STAT_GridRebuild>
       )0x0) {
    pFVar21 = ::FName::FName(&local_140,"STAT_GridRebuild");
    FVar22 = (FThreadSafeStaticStat<_public:_void___cdecl_UNavLocalGridManager::RebuildGrids(void)_::_2_::FStat_STAT_GridRebuild>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridRebuild,*pFVar21,
                          L"NavGrid: Rebuild","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar22;
  bVar13 = false;
  bVar14 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_170[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_170[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_160.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\NavLocalGridManager.cpp"
                   ,0x48);
        bVar13 = true;
        bVar14 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1d8 = FVar24;
      local_178 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar16 = true;
      goto LAB_146fc5951;
    }
  }
  bVar14 = bVar17;
  bVar13 = bVar16;
  bVar16 = false;
  local_178 = local_158;
  FVar24 = local_158;
LAB_146fc5951:
  if (this->bNeedsRebuilds != 0) {
    iVar18 = (this->CombinedGrids).ArrayNum;
    pFVar4 = (FCombinedNavGridData *)(this->CombinedGrids).AllocatorInstance.Data;
    local_190.Data = (FScriptContainerElement *)0x0;
    local_188 = iVar18;
    if (iVar18 == 0) {
      local_184 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,8,iVar18,0,&local_190,iVar18,&local_184);
      ConstructItems<FCombinedNavGridData,FCombinedNavGridData,int>(local_190.Data,pFVar4,iVar18);
    }
    piVar25 = &(this->CombinedGrids).ArrayMax;
    pFVar4 = (FCombinedNavGridData *)(this->CombinedGrids).AllocatorInstance.Data;
    iVar18 = (this->CombinedGrids).ArrayNum;
    if (*piVar25 < 0) {
      DestructItems<FCombinedNavGridData,int>(pFVar4,iVar18);
      (this->CombinedGrids).ArrayNum = 0;
      if (*piVar25 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,8,0,&(this->CombinedGrids).AllocatorInstance,0,piVar25);
      }
    }
    else {
      DestructItems<FCombinedNavGridData,int>(pFVar4,iVar18);
      (this->CombinedGrids).ArrayNum = 0;
    }
    uVar19 = (this->SourceGrids).ArrayNum;
    lVar27 = (longlong)(int)uVar19;
    this->bNeedsRebuilds = 0;
    local_1a0 = uVar19;
    if (uVar19 == 0) {
      this->VersionNum = this->VersionNum + 1;
    }
    else {
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      local_1f8.Data = (FScriptContainerElement *)0x0;
      local_1f0[0] = 0;
      local_1f0[1] = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1c8,uVar19,Default);
      if (local_1f0[0] < (int)uVar19) {
        iVar29 = uVar19 - local_1f0[0];
        iVar18 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x38,8,iVar29,&local_1f8,local_1f0,local_1f0 + 1);
        DefaultConstructItems<UE::Math::TBox<double>,int>
                  (local_1f8.Data + (longlong)iVar18 * 0x38,iVar29);
      }
      else {
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
        }
        if ((int)uVar19 < local_1f0[0]) {
          uVar26 = local_1f0[0] - uVar19;
          if (((int)(uVar19 | uVar26) < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar26 != 0) {
            iVar18 = (local_1f0[0] - uVar26) - uVar19;
            if (iVar18 != 0) {
              memmove(local_1f8.Data + lVar27 * 0x38,
                      local_1f8.Data + lVar27 * 0x38 + (longlong)(int)uVar26 * 0x38,
                      (longlong)iVar18 * 0x38);
            }
            iVar18 = local_1f0[0] - uVar26;
            local_1f0[0] = iVar18;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,&local_1f8,iVar18,local_1f0 + 1);
          }
        }
      }
      pUVar28 = local_1b8;
      uVar36 = uVar38;
      uVar35 = uVar38;
      uVar39 = uVar38;
      uVar23 = uVar38;
      local_198 = lVar27;
      if (0 < (int)uVar19) {
        do {
          uVar30 = (uint)uVar36;
          uVar26 = ~uVar30 >> 0x1f;
          uVar19 = uVar37;
          if ((int)uVar30 < local_1c8.ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)(local_1c8.AllocatorInstance.Data + uVar35 * 4) = uVar30;
          uVar19 = uVar37;
          if ((int)uVar30 < (pUVar28->SourceGrids).ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (pUVar28->SourceGrids).AllocatorInstance.Data;
          uVar7 = *(undefined8 *)(pFVar5 + uVar23 + 8);
          uVar8 = *(undefined8 *)(pFVar5 + uVar23 + 8 + 8);
          uVar9 = *(undefined8 *)(pFVar5 + uVar23 + 0x18);
          uVar10 = *(undefined8 *)(pFVar5 + uVar23 + 0x18 + 8);
          uVar11 = *(undefined8 *)(pFVar5 + uVar23 + 0x28);
          uVar12 = *(undefined8 *)(pFVar5 + uVar23 + 0x28 + 8);
          uVar1 = *(undefined8 *)(pFVar5 + uVar23 + 0x38);
          uVar19 = uVar37;
          if ((int)uVar30 < local_1f0[0]) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar35 = uVar35 + 1;
          *(undefined8 *)(local_1f8.Data + uVar39) = uVar7;
          *(undefined8 *)(local_1f8.Data + uVar39 + 8) = uVar8;
          *(undefined8 *)(local_1f8.Data + uVar39 + 0x10) = uVar9;
          *(undefined8 *)(local_1f8.Data + uVar39 + 0x10 + 8) = uVar10;
          *(undefined8 *)(local_1f8.Data + uVar39 + 0x20) = uVar11;
          *(undefined8 *)(local_1f8.Data + uVar39 + 0x20 + 8) = uVar12;
          *(undefined8 *)(local_1f8.Data + uVar39 + 0x30) = uVar1;
          uVar36 = (ulonglong)(uVar30 + 1);
          uVar39 = uVar39 + 0x38;
          uVar23 = uVar23 + 0xb0;
        } while ((longlong)uVar35 < local_198);
        uVar19 = (uint)local_198;
        FVar24 = local_178;
      }
      local_17c = 0;
      local_168 = (int *)CONCAT44(local_168._4_4_,uVar19 * uVar19);
      uVar37 = 0;
      lVar27 = local_198;
      if (0 < (int)(uVar19 * uVar19)) {
        do {
          local_210 = 0;
          local_1d8.ComparisonIndex.Value = 0;
          local_1d8.Number = 0;
          local_214 = 0;
          FVar24 = local_178;
          uVar36 = uVar38;
          uVar35 = uVar38;
          uVar39 = uVar38;
          uVar19 = local_1a0;
          if (lVar27 < 1) break;
          do {
            FVar24 = local_1d8;
            uVar26 = (uint)uVar39;
            local_180 = ~uVar26 >> 0x1f;
            uVar19 = uVar37;
            if ((int)uVar26 < local_1c8.ArrayNum) {
              uVar19 = local_180;
            }
            if (uVar19 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar35 = (ulonglong)local_210;
              lVar27 = local_198;
            }
            uVar23 = uVar38;
            uVar31 = uVar38;
            uVar40 = uVar38;
            if (*(uint *)(local_1c8.AllocatorInstance.Data + (longlong)FVar24 * 4) == uVar26) {
              do {
                uVar30 = (uint)uVar40;
                uVar26 = ~uVar30 >> 0x1f;
                uVar19 = uVar37;
                if ((int)uVar30 < local_1c8.ArrayNum) {
                  uVar19 = uVar26;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((*(uint *)(local_1c8.AllocatorInstance.Data + uVar23 * 4) == uVar30) &&
                   (uVar30 != (uint)uVar39)) {
                  uVar19 = uVar37;
                  if ((int)(uint)uVar39 < local_1f0[0]) {
                    uVar19 = local_180;
                  }
                  if ((uVar19 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  FVar15.Data = local_1f8.Data;
                  uVar19 = uVar37;
                  if ((int)uVar30 < local_1f0[0]) {
                    uVar19 = uVar26;
                  }
                  if ((uVar19 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (((((*(double *)(local_1f8.Data + uVar31 + 0x18) <
                          *(double *)(FVar15.Data + uVar36)) ||
                        (*(double *)(FVar15.Data + uVar36 + 0x18) <
                         *(double *)(local_1f8.Data + uVar31))) ||
                       (*(double *)(local_1f8.Data + uVar31 + 0x20) <
                        *(double *)(FVar15.Data + uVar36 + 8))) ||
                      ((*(double *)(FVar15.Data + uVar36 + 0x20) <
                        *(double *)(local_1f8.Data + uVar31 + 8) ||
                       (*(double *)(local_1f8.Data + uVar31 + 0x28) <
                        *(double *)(FVar15.Data + uVar36 + 0x10))))) ||
                     (*(double *)(FVar15.Data + uVar36 + 0x28) <
                      *(double *)(local_1f8.Data + uVar31 + 0x10))) {
                    uVar39 = (ulonglong)local_214;
                    goto LAB_146fc60d6;
                  }
                  uVar19 = uVar37;
                  if ((int)uVar30 < local_1c8.ArrayNum) {
                    uVar19 = uVar26;
                  }
                  if ((uVar19 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(uint *)(local_1c8.AllocatorInstance.Data + uVar23 * 4) = local_214;
                  uVar19 = uVar37;
                  if ((int)uVar30 < local_1f0[0]) {
                    uVar19 = uVar26;
                  }
                  if ((uVar19 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  FVar15.Data = local_1f8.Data;
                  uVar19 = uVar37;
                  if ((int)local_214 < local_1f0[0]) {
                    uVar19 = local_180;
                  }
                  if ((uVar19 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (local_1f8.Data[uVar36 + 0x30] == (FScriptContainerElement)0x0) {
                    if (FVar15.Data[uVar31 + 0x30] != (FScriptContainerElement)0x0) {
                      uVar1 = *(undefined8 *)(FVar15.Data + uVar31 + 8);
                      *(undefined8 *)(local_1f8.Data + uVar36) =
                           *(undefined8 *)(FVar15.Data + uVar31);
                      *(undefined8 *)(local_1f8.Data + uVar36 + 8) = uVar1;
                      uVar1 = *(undefined8 *)(FVar15.Data + uVar31 + 0x10 + 8);
                      *(undefined8 *)(local_1f8.Data + uVar36 + 0x10) =
                           *(undefined8 *)(FVar15.Data + uVar31 + 0x10);
                      *(undefined8 *)(local_1f8.Data + uVar36 + 0x10 + 8) = uVar1;
                      uVar1 = *(undefined8 *)(FVar15.Data + uVar31 + 0x20 + 8);
                      *(undefined8 *)(local_1f8.Data + uVar36 + 0x20) =
                           *(undefined8 *)(FVar15.Data + uVar31 + 0x20);
                      *(undefined8 *)(local_1f8.Data + uVar36 + 0x20 + 8) = uVar1;
                      *(undefined8 *)(local_1f8.Data + uVar36 + 0x30) =
                           *(undefined8 *)(FVar15.Data + uVar31 + 0x30);
                    }
LAB_146fc60bd:
                    uVar39 = (ulonglong)local_214;
                    local_210 = local_210 + 1;
                    uVar35 = (ulonglong)local_210;
                  }
                  else {
                    if (FVar15.Data[uVar31 + 0x30] == (FScriptContainerElement)0x0)
                    goto LAB_146fc60bd;
                    dVar2 = *(double *)(local_1f8.Data + uVar36);
                    uVar41 = SUB84(dVar2,0);
                    uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
                    dVar3 = *(double *)(FVar15.Data + uVar31);
                    if (dVar3 <= dVar2) {
                      uVar41 = SUB84(dVar3,0);
                      uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
                    }
                    local_210 = local_210 + 1;
                    uVar35 = (ulonglong)local_210;
                    *(ulonglong *)(local_1f8.Data + uVar36) = CONCAT44(uVar42,uVar41);
                    dVar2 = *(double *)(FVar15.Data + uVar31 + 8);
                    uVar41 = SUB84(dVar2,0);
                    uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
                    dVar3 = *(double *)(local_1f8.Data + uVar36 + 8);
                    if (dVar3 <= dVar2) {
                      uVar41 = SUB84(dVar3,0);
                      uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
                    }
                    *(ulonglong *)(local_1f8.Data + uVar36 + 8) = CONCAT44(uVar42,uVar41);
                    dVar2 = *(double *)(FVar15.Data + uVar31 + 0x10);
                    uVar41 = SUB84(dVar2,0);
                    uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
                    dVar3 = *(double *)(local_1f8.Data + uVar36 + 0x10);
                    if (dVar3 <= dVar2) {
                      uVar41 = SUB84(dVar3,0);
                      uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
                    }
                    *(ulonglong *)(local_1f8.Data + uVar36 + 0x10) = CONCAT44(uVar42,uVar41);
                    dVar2 = *(double *)(FVar15.Data + uVar31 + 0x18);
                    uVar41 = SUB84(dVar2,0);
                    uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
                    dVar3 = *(double *)(local_1f8.Data + uVar36 + 0x18);
                    if (dVar2 <= dVar3) {
                      uVar41 = SUB84(dVar3,0);
                      uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
                    }
                    *(ulonglong *)(local_1f8.Data + uVar36 + 0x18) = CONCAT44(uVar42,uVar41);
                    dVar2 = *(double *)(FVar15.Data + uVar31 + 0x20);
                    uVar41 = SUB84(dVar2,0);
                    uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
                    dVar3 = *(double *)(local_1f8.Data + uVar36 + 0x20);
                    if (dVar2 <= dVar3) {
                      uVar41 = SUB84(dVar3,0);
                      uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
                    }
                    *(ulonglong *)(local_1f8.Data + uVar36 + 0x20) = CONCAT44(uVar42,uVar41);
                    dVar2 = *(double *)(FVar15.Data + uVar31 + 0x28);
                    uVar41 = SUB84(dVar2,0);
                    uVar42 = (undefined4)((ulonglong)dVar2 >> 0x20);
                    dVar3 = *(double *)(local_1f8.Data + uVar36 + 0x28);
                    if (dVar2 <= dVar3) {
                      uVar41 = SUB84(dVar3,0);
                      uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
                    }
                    uVar39 = (ulonglong)local_214;
                    *(ulonglong *)(local_1f8.Data + uVar36 + 0x28) = CONCAT44(uVar42,uVar41);
                  }
                }
                else {
LAB_146fc60d6:
                  uVar35 = (ulonglong)local_210;
                }
                uVar26 = (uint)uVar39;
                uVar23 = uVar23 + 1;
                FVar24 = local_1d8;
                uVar31 = uVar31 + 0x38;
                lVar27 = local_198;
                uVar40 = (ulonglong)(uVar30 + 1);
              } while ((longlong)uVar23 < local_198);
            }
            local_214 = uVar26 + 1;
            local_1d8 = (FName)((longlong)FVar24 + 1);
            uVar36 = uVar36 + 0x38;
            uVar39 = (ulonglong)local_214;
          } while ((longlong)local_1d8 < lVar27);
          FVar24 = local_178;
          uVar19 = local_1a0;
          if ((int)uVar35 == 0) break;
          local_17c = local_17c + 1;
        } while (local_17c < (int)local_168);
      }
      local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.ArrayNum = 0;
      local_208.ArrayMax = 0;
      local_1e8.Data = (FScriptContainerElement *)0x0;
      local_1e0 = 0;
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      local_214 = 0;
      if (0 < (int)uVar19) {
        piVar25 = &(local_1b8->CombinedGrids).ArrayMax;
        pUVar28 = local_1b8;
        local_168 = piVar25;
        do {
          if ((longlong)local_208._8_8_ < 0) {
            DestructItems<FNavLocalGridData,int>
                      ((FNavLocalGridData *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
            iVar18 = local_208.ArrayMax;
            local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
            if (iVar18 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xb0,8,0,&local_208.AllocatorInstance,0,&local_208.ArrayMax);
            }
          }
          else {
            DestructItems<FNavLocalGridData,int>
                      ((FNavLocalGridData *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
            local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
          }
          lVar27 = local_1e0;
          uVar19 = local_1e0._4_4_;
          local_1e0 = (ulonglong)local_1e0._4_4_ << 0x20;
          if ((lVar27 < 0) && (uVar19 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_1e8,0,(int *)((longlong)&local_1e0 + 4));
          }
          uVar19 = 0;
          if (0 < local_198) {
            local_1d8.ComparisonIndex.Value = 0;
            local_1d8.Number = 0;
            uVar36 = uVar38;
            uVar35 = uVar38;
            do {
              uVar30 = (uint)uVar35;
              uVar26 = uVar37;
              if ((int)uVar30 < local_1c8.ArrayNum) {
                uVar26 = ~uVar30 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar26 = *(uint *)(local_1c8.AllocatorInstance.Data + uVar36 * 4);
              while( true ) {
                uVar20 = uVar37;
                if ((int)uVar26 < local_1c8.ArrayNum) {
                  uVar20 = ~uVar26 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pUVar28 = local_1b8;
                if (uVar26 == *(uint *)(local_1c8.AllocatorInstance.Data + (longlong)(int)uVar26 * 4
                                       )) break;
                uVar20 = uVar37;
                if ((int)uVar26 < local_1c8.ArrayNum) {
                  uVar20 = ~uVar26 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar26 = *(uint *)(local_1c8.AllocatorInstance.Data + (longlong)(int)uVar26 * 4);
              }
              if (uVar26 == local_214) {
                uVar26 = uVar19;
                if ((int)uVar30 < (local_1b8->SourceGrids).ArrayNum) {
                  uVar26 = ~uVar30 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar32 = (FNavLocalGridData *)
                          ((pUVar28->SourceGrids).AllocatorInstance.Data +
                          (longlong)(int)uVar30 * 0xb0);
                if (((local_208.AllocatorInstance.Data <= pFVar32) &&
                    (pFVar32 < (FNavLocalGridData *)
                               (local_208.AllocatorInstance.Data +
                               (longlong)local_208.ArrayMax * 0xb0))) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = local_208.ArrayNum;
                if (local_208.ArrayNum == local_208.ArrayMax) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8b0,&local_208.AllocatorInstance,&local_208.ArrayMax);
                }
                local_208.ArrayNum = iVar18 + 1;
                FNavLocalGridData::FNavLocalGridData
                          ((FNavLocalGridData *)
                           (local_208.AllocatorInstance.Data + (longlong)iVar18 * 0xb0),pFVar32);
                uVar26 = uVar19;
                if ((int)uVar30 < (pUVar28->SourceGrids).ArrayNum) {
                  uVar26 = ~uVar30 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_1d0 = *(undefined4 *)
                             ((pUVar28->SourceGrids).AllocatorInstance.Data +
                             (longlong)local_1d8 + 0xa0);
                if (((local_1e8.Data <= (FScriptContainerElement *)&local_1d0) &&
                    ((FScriptContainerElement *)&local_1d0 <
                     local_1e8.Data + (longlong)(int)local_1e0._4_4_ * 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = (int)local_1e0;
                if ((int)local_1e0 == local_1e0._4_4_) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_1e8,(int *)((longlong)&local_1e0 + 4));
                }
                local_1e0 = CONCAT44(local_1e0._4_4_,iVar18 + 1);
                *(undefined4 *)(local_1e8.Data + (longlong)iVar18 * 4) = local_1d0;
              }
              local_1d8 = (FName)((longlong)local_1d8 + 0xb0);
              uVar35 = (ulonglong)(uVar30 + 1);
              uVar36 = uVar36 + 1;
              piVar25 = local_168;
            } while ((longlong)uVar36 < local_198);
          }
          if (local_208.ArrayNum != 0) {
            uVar36 = uVar38;
            uVar35 = uVar38;
            iVar18 = local_188;
            if (0 < local_188) {
              do {
                uVar30 = (uint)uVar36;
                uVar26 = uVar19;
                if ((int)uVar30 < iVar18) {
                  uVar26 = ~uVar30 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), iVar18 = local_188, bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar29 = *(int *)(local_190.Data + uVar35 + 0xb8);
                if ((iVar29 == (int)local_1e0) &&
                   ((iVar29 == 0 ||
                    (iVar29 = memcmp(*(void **)(local_190.Data + uVar35 + 0xb0),local_1e8.Data,
                                     (longlong)iVar29 << 2), iVar29 == 0)))) {
                  if ((int)uVar30 < iVar18) {
                    uVar19 = ~uVar30 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pUVar28 = local_1b8;
                  pFVar4 = (FCombinedNavGridData *)(local_1b8->CombinedGrids).AllocatorInstance.Data
                  ;
                  pFVar34 = (FCombinedNavGridData *)(local_190.Data + (longlong)(int)uVar30 * 0xc0);
                  if (((pFVar4 <= pFVar34) && (pFVar34 < pFVar4 + *piVar25)) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar18 = (pUVar28->CombinedGrids).ArrayNum;
                  if (iVar18 == *piVar25) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8c0,&(pUVar28->CombinedGrids).AllocatorInstance,piVar25);
                  }
                  (pUVar28->CombinedGrids).ArrayNum = iVar18 + 1;
                  FCombinedNavGridData::FCombinedNavGridData
                            ((FCombinedNavGridData *)
                             ((pUVar28->CombinedGrids).AllocatorInstance.Data +
                             (longlong)iVar18 * 0xc0),pFVar34);
                  goto LAB_146fc6948;
                }
                uVar36 = (ulonglong)(uVar30 + 1);
                uVar35 = uVar35 + 0xc0;
              } while ((int)(uVar30 + 1) < iVar18);
            }
            FNavLocalGridData::FNavLocalGridData(&local_138,&local_208);
            pUVar28 = local_1b8;
            FVar15.Data = local_1e8.Data;
            lVar27 = (longlong)(int)local_1e0;
            local_88.Data = (FScriptContainerElement *)0x0;
            local_7c = 0;
            local_138.GridId = local_1b8->NextGridId;
            local_80 = (int)local_1e0;
            if ((int)local_1e0 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(int)local_1e0,0,&local_88,(int)local_1e0,&local_7c);
              memcpy(local_88.Data,FVar15.Data,lVar27 << 2);
            }
            local_1cc = (pUVar28->CombinedGrids).ArrayNum;
            pUVar28->NextGridId = pUVar28->NextGridId + 1;
            if (((local_1b0.Data <= (FScriptContainerElement *)&local_1cc) &&
                ((FScriptContainerElement *)&local_1cc <
                 local_1b0.Data + (longlong)local_1a8._4_4_ * 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar18 = (int)local_1a8;
            if ((int)local_1a8 == local_1a8._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1b0,(int *)((longlong)&local_1a8 + 4));
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,iVar18 + 1);
            *(int *)(local_1b0.Data + (longlong)iVar18 * 4) = local_1cc;
            pFVar32 = (FNavLocalGridData *)(pUVar28->CombinedGrids).AllocatorInstance.Data;
            if (((pFVar32 <= &local_138) &&
                (&local_138 < (FNavLocalGridData *)((longlong)pFVar32 + (longlong)*piVar25 * 0xc0)))
               && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar18 = (pUVar28->CombinedGrids).ArrayNum;
            if (iVar18 == *piVar25) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8c0,&(pUVar28->CombinedGrids).AllocatorInstance,piVar25);
            }
            (pUVar28->CombinedGrids).ArrayNum = iVar18 + 1;
            this_00 = (FNavLocalGridData *)
                      ((pUVar28->CombinedGrids).AllocatorInstance.Data + (longlong)iVar18 * 0xc0);
            FNavLocalGridData::FNavLocalGridData(this_00,&local_138);
            FVar15.Data = local_88.Data;
            pFVar32 = this_00 + 1;
            piVar33 = (int *)((longlong)&this_00[1]._padding_ + 4);
            pFVar32->_padding_ = 0;
            lVar27 = (longlong)local_80;
            *(int *)&this_00[1]._padding_ = local_80;
            if (local_80 == 0) {
              *piVar33 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_80,0,(ForAnyElementType *)pFVar32,local_80,piVar33);
              memcpy((FScriptContainerElement *)pFVar32->_padding_,FVar15.Data,lVar27 << 2);
            }
            if (local_88.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data);
            }
            if (local_138.CellZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.CellZ.AllocatorInstance.Data);
            }
            pUVar28 = local_1b8;
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
              pUVar28 = local_1b8;
            }
          }
LAB_146fc6948:
          FVar24 = local_178;
          local_214 = local_214 + 1;
        } while ((int)local_214 < (int)local_1a0);
        if ((int)local_1a8 != 0) {
          (**(code **)(pUVar28->_padding_ + 0x2b0))(pUVar28,&local_1b0);
          pUVar28->VersionNum = pUVar28->VersionNum + 1;
        }
      }
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      DestructItems<FNavLocalGridData,int>
                ((FNavLocalGridData *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
      if ((FNavLocalGridData *)local_208.AllocatorInstance.Data != (FNavLocalGridData *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
      if (local_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data);
      }
      if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
    }
    DestructItems<FCombinedNavGridData,int>((FCombinedNavGridData *)local_190.Data,local_188);
    if ((FCombinedNavGridData *)local_190.Data != (FCombinedNavGridData *)0x0) {
      FMemory::Free(local_190.Data);
    }
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// RemoveGridData @ 146fcc0c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNavLocalGridManager::RemoveGridData(UNavLocalGridManager *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->SourceGrids).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->SourceGrids).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)((this->SourceGrids).AllocatorInstance.Data + lVar5 + 0xa0) == param_1) {
        TArray<FNavLocalGridData,TSizedDefaultAllocator<32>_>::RemoveAt(&this->SourceGrids,uVar4,No)
        ;
        this->bNeedsRebuilds = 1;
        if (!param_2) {
          return;
        }
        RebuildGrids(this);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0xb0;
    } while ((int)uVar4 < (this->SourceGrids).ArrayNum);
  }
  return;
}

// RemoveLocalNavigationGrid @ 146fcc1a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNavLocalGridManager::RemoveLocalNavigationGrid(UObject *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UNavLocalGridManager *this;
  uint uVar4;
  longlong lVar5;
  
  this = GetCurrent(param_1);
  if ((this != (UNavLocalGridManager *)0x0) && (uVar4 = 0, 0 < (this->SourceGrids).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->SourceGrids).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)((this->SourceGrids).AllocatorInstance.Data + lVar5 + 0xa0) == param_2) {
        TArray<FNavLocalGridData,TSizedDefaultAllocator<32>_>::RemoveAt(&this->SourceGrids,uVar4,No)
        ;
        this->bNeedsRebuilds = 1;
        if (!param_3) {
          return;
        }
        RebuildGrids(this);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0xb0;
    } while ((int)uVar4 < (this->SourceGrids).ArrayNum);
  }
  return;
}

// SetCellSize @ 146fcfa90

bool __thiscall UNavLocalGridManager::SetCellSize(UNavLocalGridManager *this,float param_1)

{
  if ((this->SourceGrids).ArrayNum == 0) {
    GridCellSize = param_1;
    return true;
  }
  return false;
}

// SetLocalNavigationGridDensity @ 146fd05e0

bool __cdecl UNavLocalGridManager::SetLocalNavigationGridDensity(UObject *param_1,float param_2)

{
  UNavLocalGridManager *pUVar1;
  
  pUVar1 = GetCurrent(param_1);
  if ((pUVar1 != (UNavLocalGridManager *)0x0) && ((pUVar1->SourceGrids).ArrayNum == 0)) {
    GridCellSize = param_2;
    return true;
  }
  return false;
}

// SetMaxActiveSources @ 146fd0630

void __thiscall UNavLocalGridManager::SetMaxActiveSources(UNavLocalGridManager *this,int param_1)

{
  bool bVar1;
  
  this->MaxActiveSourceGrids = param_1;
  bVar1 = UpdateSourceGrids(this);
  if (bVar1) {
    RebuildGrids(this);
    return;
  }
  return;
}

// StaticRegisterNativesUNavLocalGridManager @ 146fd3700

void __cdecl UNavLocalGridManager::StaticRegisterNativesUNavLocalGridManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UNavLocalGridManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAccessTime @ 146fde020

void __thiscall UNavLocalGridManager::UpdateAccessTime(UNavLocalGridManager *this,int param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((-1 < param_1) && (param_1 < (this->CombinedGrids).ArrayNum)) {
    lVar7 = (**(code **)(this->_padding_ + 0x180))();
    uVar1 = *(undefined8 *)(lVar7 + 0x8f8);
    uVar8 = 0;
    lVar9 = (longlong)param_1 * 0xc0;
    lVar7 = 0;
    while( true ) {
      uVar5 = 0;
      if (param_1 < (this->CombinedGrids).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->CombinedGrids).AllocatorInstance.Data + lVar9 + 0xb8) <= (int)uVar8)
      break;
      uVar5 = 0;
      if (param_1 < (this->CombinedGrids).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->CombinedGrids).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)(pFVar2 + lVar9 + 0xb8)) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(uint *)(lVar7 + *(longlong *)(pFVar2 + lVar9 + 0xb0));
      if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SourceGrids).ArrayNum)) {
        uVar6 = 0;
        if ((int)uVar5 < (this->SourceGrids).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)
         ((this->SourceGrids).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xb0 + 0x98) = uVar1;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 4;
    }
  }
  return;
}

// UpdateSourceGrids @ 146fe2f00

bool __thiscall UNavLocalGridManager::UpdateSourceGrids(UNavLocalGridManager *this)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *_Dst;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar9 = this->MaxActiveSourceGrids;
  iVar7 = (this->SourceGrids).ArrayNum;
  if ((iVar7 < iVar9) || (iVar9 < 1)) {
    return false;
  }
  if (iVar9 < iVar7) {
    uVar17 = (undefined4)__real_7fefffffffffffff;
    uVar4 = (ulonglong)__real_7fefffffffffffff >> 0x20;
    do {
      uVar13 = 0;
      lVar14 = 0;
      uVar10 = 0;
      lVar12 = 0;
      if (0 < iVar7) {
        lVar11 = 0;
        uVar15 = uVar17;
        uVar16 = (int)uVar4;
        uVar13 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < (this->SourceGrids).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          dVar2 = *(double *)((this->SourceGrids).AllocatorInstance.Data + lVar11 + 0x98);
          if (dVar2 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar2)
          {
            uVar15 = SUB84(dVar2,0);
            uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
            lVar14 = lVar12;
            uVar13 = uVar10;
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0xb0;
        } while ((int)uVar10 < (this->SourceGrids).ArrayNum);
      }
      uVar10 = 0;
      if ((int)uVar13 < (this->SourceGrids).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      _Dst = (this->SourceGrids).AllocatorInstance.Data + lVar14 * 0xb0;
      if (*(void **)(_Dst + 0x88) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x88));
      }
      if (*(void **)(_Dst + 0x78) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x78));
      }
      iVar9 = (this->SourceGrids).ArrayNum + ~uVar13;
      if (iVar9 != 0) {
        memmove(_Dst,_Dst + 0xb0,(longlong)iVar9 * 0xb0);
      }
      piVar1 = &(this->SourceGrids).ArrayNum;
      *piVar1 = *piVar1 + -1;
      iVar7 = (this->SourceGrids).ArrayNum;
    } while (this->MaxActiveSourceGrids < iVar7);
  }
  return true;
}

// execAddLocalNavigationGridForBox @ 146fe4120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNavLocalGridManager::execAddLocalNavigationGridForBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  UObject *pUVar5;
  bool bVar6;
  int iVar7;
  UNavLocalGridManager *this;
  TQuat<double> *pTVar8;
  TVector<double> *pTVar9;
  bool bVar10;
  double dVar11;
  undefined1 auStack_228 [32];
  char *local_208;
  int local_200;
  int local_1f8;
  float local_1f4;
  int local_1f0 [2];
  UObject *local_1e8;
  TVector2<double>_u_0 local_1e0;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double> local_178;
  TRotator<double> local_158;
  TQuat<double> local_138;
  FNavLocalGridData local_118;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1e8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pTVar9 = &local_178;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar9 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_1f0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1f0);
  }
  local_1f4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f4);
  }
  local_1f8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  pUVar5 = local_1e8;
  iVar7 = local_1f0[0];
  fVar4 = local_1f4;
  bVar10 = local_1f8 != 0;
  local_158.Pitch = local_1d0;
  local_158.Yaw = dStack_1c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_158.Roll = local_1c0;
  local_198._s_0.X = local_1b8;
  local_198._s_0.Y = dStack_1b0;
  local_198._s_0.Z = local_1a8;
  this = GetCurrent(local_1e8);
  if (iVar7 < 1) {
    if (FVisualLogger::bIsRecording != 0) {
      local_200 = iVar7;
      local_208 = "UNavLocalGridManager::AddLocalNavigationGridForBox";
      FVisualLogger::CategorizedLogfImpl
                (pUVar5,(FName *)&LogNavigation.field_0x4,Warning,
                 L"%hs must be called with a positive non-zero Radius2D but received %d.");
    }
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
  }
  if ((this == (UNavLocalGridManager *)0x0) || (iVar7 < 1)) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    local_1e0._s_0.X = (double)((float)iVar7 * GridCellSize) + local_1b8;
    local_1e0._s_0.Y = (double)((float)iVar7 * GridCellSize) + dStack_1b0;
    FNavLocalGridData::FNavLocalGridData(&local_118,pTVar9,(TVector2<double> *)&local_1e0._s_0);
    dVar3 = (double)(float)((double)fVar4 + local_198._s_0.Z);
    dVar11 = dVar3 - ((double)fVar4 + local_198._s_0.Z);
    if (__real_3fb0000000000000 <
        (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_118._padding_ =
         (longlong)
         (((double)local_118._padding_ + (double)local_118._padding_) * __real_3fe0000000000000);
    local_118._padding_ = (longlong)((double)local_118._padding_ + dVar3);
    local_118._padding_ = (longlong)((double)local_118._padding_ - dVar3);
    pTVar8 = UE::Math::TRotator<double>::Quaternion(&local_158,&local_138);
    FNavLocalGridData::MarkBoxObstacle(&local_118,pTVar9,(TVector<double> *)&local_198._s_0,pTVar8);
    iVar7 = AddGridData(this,&local_118,bVar10);
    if (local_118.CellZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.CellZ.AllocatorInstance.Data);
    }
    if ((void *)local_118._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_118._padding_);
    }
    *(int *)param_3 = iVar7;
  }
  return;
}

// execAddLocalNavigationGridForCapsule @ 146fe4540

void __cdecl
UNavLocalGridManager::execAddLocalNavigationGridForCapsule
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  float local_58;
  float local_54;
  UObject *local_50;
  TVector<double> local_48;
  
  local_50 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_54 = 0.0;
  pTVar3 = &local_48;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  local_58 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = AddLocalNavigationGridForCapsule
                    (local_50,pTVar3,local_54,local_58,local_res20[0],local_res18[0],
                     local_res10[0] != 0);
  *(int *)param_3 = iVar2;
  return;
}

// execAddLocalNavigationGridForPoint @ 146fe4760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UNavLocalGridManager::execAddLocalNavigationGridForPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UObject *pUVar3;
  int iVar4;
  UNavLocalGridManager *this;
  TVector<double> *pTVar5;
  bool bVar6;
  undefined1 auStack_168 [32];
  char *local_148;
  int local_140;
  int local_138;
  float local_134;
  int local_130 [2];
  UObject *local_128;
  TVector<double> local_120;
  FNavLocalGridData local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_128 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_130[0] = 0;
  pTVar5 = &local_120;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_130);
  }
  local_134 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  local_138 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pUVar3 = local_128;
  iVar4 = local_130[0];
  fVar2 = local_134;
  bVar6 = local_138 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetCurrent(local_128);
  if (iVar4 < 1) {
    if (FVisualLogger::bIsRecording != 0) {
      local_140 = iVar4;
      local_148 = "UNavLocalGridManager::AddLocalNavigationGridForPoint";
      FVisualLogger::CategorizedLogfImpl
                (pUVar3,(FName *)&LogNavigation.field_0x4,Warning,
                 L"%hs must be called with a positive non-zero Radius2D but received %d.");
    }
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
  }
  if ((this == (UNavLocalGridManager *)0x0) || (iVar4 < 1)) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    FNavLocalGridData::FNavLocalGridData(&local_108,pTVar5,(float)iVar4 * GridCellSize);
    local_108._padding_ =
         (longlong)
         (((double)local_108._padding_ + (double)local_108._padding_) * __real_3fe0000000000000);
    local_108._padding_ = (longlong)((double)local_108._padding_ - (double)fVar2);
    local_108._padding_ = (longlong)((double)fVar2 + (double)local_108._padding_);
    FNavLocalGridData::MarkPointObstacle(&local_108,pTVar5);
    iVar4 = AddGridData(this,&local_108,bVar6);
    if (local_108.CellZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.CellZ.AllocatorInstance.Data);
    }
    if ((void *)local_108._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_108._padding_);
    }
    *(int *)param_3 = iVar4;
  }
  return;
}

// execAddLocalNavigationGridForPoints @ 146fe4a50

void __cdecl
UNavLocalGridManager::execAddLocalNavigationGridForPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  UObject *local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_30;
  
  local_38 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20[0] = 0;
  pTVar3 = &local_30;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = AddLocalNavigationGridForPoints
                    (local_38,pTVar3,local_res20[0],local_res18[0],local_res10[0] != 0);
  *(int *)param_3 = iVar2;
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execFindLocalNavigationGridPath @ 146fe4c30

void __cdecl
UNavLocalGridManager::execFindLocalNavigationGridPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UNavLocalGridManager *this;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  UObject *local_res10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58;
  TVector<double> local_48;
  TVector<double> local_30;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar4 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_48;
  if (pTVar4 != (TVector<double> *)0x0) {
    pTVar5 = pTVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar4 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar4 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = &local_58;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetCurrent(local_res10);
  bVar2 = false;
  if (this != (UNavLocalGridManager *)0x0) {
    bVar2 = FindPath(this,pTVar5,pTVar4,pTVar3);
  }
  *(bool *)param_3 = bVar2;
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execRemoveLocalNavigationGrid @ 146fe6880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNavLocalGridManager::execRemoveLocalNavigationGrid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UNavLocalGridManager *this;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  int local_res10 [4];
  int local_res20 [2];
  UObject *local_38 [2];
  
  local_38[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res20[0];
  bVar8 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetCurrent(local_38[0]);
  if ((this != (UNavLocalGridManager *)0x0) && (uVar6 = 0, 0 < (this->SourceGrids).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->SourceGrids).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((this->SourceGrids).AllocatorInstance.Data + lVar7 + 0xa0) == iVar3) {
        TArray<FNavLocalGridData,TSizedDefaultAllocator<32>_>::RemoveAt(&this->SourceGrids,uVar6,No)
        ;
        this->bNeedsRebuilds = 1;
        if (bVar8) {
          return;
        }
        RebuildGrids(this);
        return;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0xb0;
    } while ((int)uVar6 < (this->SourceGrids).ArrayNum);
  }
  return;
}

// execSetLocalNavigationGridDensity @ 146fe7fe0

void __cdecl
UNavLocalGridManager::execSetLocalNavigationGridDensity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UNavLocalGridManager *pUVar3;
  float local_res10 [2];
  UObject *local_res18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetCurrent(local_res18);
  if (pUVar3 == (UNavLocalGridManager *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else if ((pUVar3->SourceGrids).ArrayNum == 0) {
    GridCellSize = fVar2;
    *(undefined1 *)param_3 = 1;
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

