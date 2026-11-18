// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 20

// StaticClass @ 146e2fe40

UClass * __cdecl URecastNavMeshDataChunk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecastNavMeshDataChunk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastNavMeshDataChunk",
               &Z_Registration_Info_UClass_URecastNavMeshDataChunk.InnerSingleton,
               StaticRegisterNativesURecastNavMeshDataChunk,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URecastNavMeshDataChunk>,
               InternalVTableHelperCtorCaller<URecastNavMeshDataChunk>,local_res8,
               UNavigationDataChunk::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecastNavMeshDataChunk.InnerSingleton;
}

// URecastNavMeshDataChunk @ 146e36f30

URecastNavMeshDataChunk * __thiscall
URecastNavMeshDataChunk::URecastNavMeshDataChunk
          (URecastNavMeshDataChunk *this,FVTableHelper *param_1)

{
  UNavigationDataChunk::UNavigationDataChunk((UNavigationDataChunk *)this,param_1);
  this->_padding_ = (longlong)&___7URecastNavMeshDataChunk__6B_;
  (this->Tiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tiles).ArrayNum = 0;
  (this->Tiles).ArrayMax = 0;
  return this;
}

// URecastNavMeshDataChunk @ 146e36f70

URecastNavMeshDataChunk * __thiscall
URecastNavMeshDataChunk::URecastNavMeshDataChunk
          (URecastNavMeshDataChunk *this,FObjectInitializer *param_1)

{
  UNavigationDataChunk::UNavigationDataChunk((UNavigationDataChunk *)this,param_1);
  this->_padding_ = (longlong)&___7URecastNavMeshDataChunk__6B_;
  (this->Tiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tiles).ArrayNum = 0;
  (this->Tiles).ArrayMax = 0;
  return this;
}

// ~URecastNavMeshDataChunk @ 146e37ba0

void __thiscall URecastNavMeshDataChunk::~URecastNavMeshDataChunk(URecastNavMeshDataChunk *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URecastNavMeshDataChunk__6B_;
  DestructItems<FRecastTileData,int>
            ((FRecastTileData *)(this->Tiles).AllocatorInstance.Data,(this->Tiles).ArrayNum);
  pFVar1 = (this->Tiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNavigationDataChunk::~UNavigationDataChunk((UNavigationDataChunk *)this);
  return;
}

// AttachTiles @ 146e415b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
URecastNavMeshDataChunk::AttachTiles
          (URecastNavMeshDataChunk *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ARecastNavMesh *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pUVar3 = AActor::GetWorld((AActor *)param_1);
  if (pUVar3 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavMesh.GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshDataChunk.cpp"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pUVar3 = AActor::GetWorld((AActor *)param_1);
  bVar2 = UWorld::IsGameWorld(pUVar3);
  AttachTiles(this,__return_storage_ptr__,param_1,!bVar2,!bVar2);
  return __return_storage_ptr__;
}

// AttachTiles @ 146e41640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
URecastNavMeshDataChunk::AttachTiles
          (URecastNavMeshDataChunk *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ARecastNavMesh *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  void *pvVar6;
  FPImplRecastNavMesh *this_00;
  longlong lVar7;
  code *pcVar8;
  ulong64 uVar9;
  bool bVar10;
  int iVar11;
  dtNavMesh *this_01;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *this_02;
  dtMeshTile *pdVar12;
  FName *pFVar13;
  FName *pFVar14;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar15;
  void *pvVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_6e8 [32];
  undefined1 local_698;
  char local_697;
  ARecastNavMesh *local_690;
  dtMeshTile *local_688;
  URecastNavMeshDataChunk *local_680;
  ulong64 local_678;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *local_670;
  ulong64 local_668;
  FScriptContainerElement *local_660;
  uint local_658;
  dtNavMesh *local_650;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_648;
  TIntPoint<int>_u_0 local_640;
  undefined4 local_638;
  FName local_634;
  FString local_628;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  FName local_608;
  FName local_600;
  FName local_5f8;
  FName local_5f0;
  FString local_5e8;
  double local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  FString local_5b8;
  TVector<double>_u_0 local_5a8;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  dtMeshTile *local_578;
  TVector<double>_u_0 local_568;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  dtMeshTile *local_538;
  FNavMeshTileData local_528;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_697 = param_2;
  local_690 = param_1;
  local_680 = this;
  local_670 = __return_storage_ptr__;
  if (5 < (byte)LogNavigation._0_1_) {
    ::FName::ToString((FName *)&this->_padding_,&local_5e8);
    local_4c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4c8,"URecastNavMeshDataChunk::AttachTiles",0x24,Yes);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar17 = (this->Tiles).ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  this_01 = ARecastNavMesh::GetRecastMesh(param_1);
  local_650 = this_01;
  if (this_01 != (dtNavMesh *)0x0) {
    local_648 = (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                 *)0x0;
    bVar10 = UE::NavMesh::Private::IsUsingActiveTileGeneration(param_1);
    if (bVar10) {
      this_02 = ARecastNavMesh::GetActiveTileSet(param_1);
      uVar17 = *(int *)&(this_02->Elements).field_0x8 - *(int *)&(this_02->Elements).field_0x34;
      uVar19 = (local_680->Tiles).ArrayNum + uVar17;
      this = local_680;
      local_648 = this_02;
      if (uVar17 < uVar19) {
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_02,uVar19);
        if (uVar19 < 4) {
          iVar11 = 1;
        }
        else {
          uVar18 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          local_638 = (undefined4)lVar7;
          iVar11 = 1 << ((byte)lVar7 & 0x1f);
        }
        if ((this_02->HashSize == 0) || (this = local_680, this_02->HashSize < iVar11)) {
          this_02->HashSize = iVar11;
          TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
          ::Rehash(this_02);
          this = local_680;
        }
      }
    }
    local_658 = (this->Tiles).ArrayNum;
    uVar18 = (ulonglong)(int)local_658;
    pFVar20 = (this->Tiles).AllocatorInstance.Data;
    pFVar22 = pFVar20 + uVar18 * 0x48;
    local_660 = pFVar22;
    while( true ) {
      if ((this->Tiles).ArrayNum != (int)uVar18) {
        local_698 = 0;
        `TCheckedPointerIterator<FRecastTileData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_698);
      }
      if (pFVar20 == pFVar22) break;
      if ((pFVar20[0x40] == (FScriptContainerElement)0x0) &&
         (plVar4 = *(longlong **)(pFVar20 + 0x18), plVar4 != (longlong *)0x0)) {
        if (*plVar4 == 0) {
          if (2 < (byte)LogNavigation._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
          }
        }
        else {
          psVar5 = (short *)*plVar4;
          param_1 = local_690;
          if (*psVar5 == 7) {
            pdVar12 = dtNavMesh::getTileAt
                                (this_01,*(int *)(psVar5 + 4),*(int *)(psVar5 + 6),
                                 (uint)(ushort)psVar5[1]);
            pTVar15 = __return_storage_ptr__;
            if ((pdVar12 != (dtMeshTile *)0x0) &&
               (local_688 = (dtMeshTile *)dtNavMesh::getTileRef(this_01,pdVar12),
               local_688 != (dtMeshTile *)0x0)) {
              uVar2 = psVar5[1];
              iVar11 = *(int *)(psVar5 + 6);
              iVar3 = *(int *)(psVar5 + 4);
              pFVar13 = ::FName::FName(&local_608,"removing");
              pFVar14 = ::FName::FName(&local_600,"   ");
              local_3a8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_3a8,"URecastNavMeshDataChunk::AttachTiles",0x24,Yes);
              this_01 = local_650;
              ARecastNavMesh::LogRecastTile
                        (local_690,local_3a8.Ptr,pFVar14,pFVar13,local_650,iVar3,iVar11,(uint)uVar2,
                         (ulong64)local_688);
              if ((void *)local_3a8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_3a8._padding_);
              }
              dtNavMesh::removeTile(this_01,(ulong64)local_688,(uchar **)0x0,(int *)0x0);
              pTVar15 = local_670;
            }
            iVar11 = *(int *)(pFVar20 + 0x14);
            local_678 = 0;
            if ((*(longlong *)(pFVar20 + 0x18) == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
              return pTVar15;
            }
            uVar17 = dtNavMesh::addTile(this_01,(uchar *)**(undefined8 **)(pFVar20 + 0x18),iVar11,1,
                                        0,&local_678);
            if ((int)uVar17 < 0) {
              __return_storage_ptr__ = local_670;
              param_1 = local_690;
              pFVar22 = local_660;
              if (((uVar17 & 4) != 0) &&
                 (__return_storage_ptr__ = pTVar15, 2 < (byte)LogNavigation._0_1_)) {
                local_288._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_288,"URecastNavMeshDataChunk::AttachTiles",0x24,Yes);
                dtNavMesh::getMaxTiles(this_01);
                param_1 = local_690;
                local_634 = (FName)local_690->_padding_;
                ::FName::ToString(&local_634,&local_628);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
                if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_628.Data.AllocatorInstance.Data);
                }
                __return_storage_ptr__ = local_670;
                pFVar22 = local_660;
                if ((void *)local_288._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_288._padding_);
                  __return_storage_ptr__ = local_670;
                  pFVar22 = local_660;
                }
              }
            }
            else {
              pdVar12 = dtNavMesh::getTileByRef(this_01,local_678);
              local_688 = pdVar12;
              if ((pdVar12 == (dtMeshTile *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MeshTile",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshDataChunk.cpp"
                                      ,0x117,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                return pTVar15;
              }
              uVar9 = local_678;
              iVar11 = pdVar12->header->x;
              *(int *)(pFVar20 + 8) = iVar11;
              iVar3 = pdVar12->header->y;
              *(int *)(pFVar20 + 0xc) = iVar3;
              uVar17 = (uint)pdVar12->header->layer;
              *(uint *)(pFVar20 + 0x10) = uVar17;
              pFVar20[0x40] = (FScriptContainerElement)0x1;
              pFVar13 = ::FName::FName(&local_5f8,"added");
              pFVar14 = ::FName::FName(&local_5f0,"   ");
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"URecastNavMeshDataChunk::AttachTiles",0x24,Yes);
              param_1 = local_690;
              ARecastNavMesh::LogRecastTile
                        (local_690,local_168.Ptr,pFVar14,pFVar13,local_650,iVar11,iVar3,uVar17,uVar9
                        );
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
              if (local_648 !=
                  (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                   *)0x0) {
                local_640._s_0.Y = *(undefined4 *)(pFVar20 + 0xc);
                local_640._s_0.X = *(undefined4 *)(pFVar20 + 8);
                uVar21 = local_640._s_0.X - local_640._s_0.Y ^ (uint)local_640._s_0.Y >> 0xd;
                uVar17 = (-0x61c88647 - local_640._s_0.Y) - uVar21 ^ uVar21 << 8;
                uVar19 = (local_640._s_0.Y - uVar17) - uVar21 ^ uVar17 >> 0xd;
                uVar21 = (uVar21 - uVar19) - uVar17 ^ uVar19 >> 0xc;
                uVar17 = (uVar17 - uVar21) - uVar19 ^ uVar21 << 0x10;
                uVar19 = (uVar19 - uVar17) - uVar21 ^ uVar17 >> 5;
                uVar21 = (uVar21 - uVar19) - uVar17 ^ uVar19 >> 3;
                uVar17 = (uVar17 - uVar21) - uVar19 ^ uVar21 << 10;
                TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                ::FindOrAddByHash<UE::Math::TIntPoint<int>_>
                          (local_648,(uVar19 - uVar17) - uVar21 ^ uVar17 >> 0xf,
                           (TIntPoint<int> *)&local_640._s_0,(bool *)0x0);
              }
              if (local_697 == '\0') {
                *(undefined4 *)(pFVar20 + 0x14) = 0;
                if ((*(longlong *)(pFVar20 + 0x18) == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                  return pTVar15;
                }
                **(undefined8 **)(pFVar20 + 0x18) = 0;
              }
              else {
                iVar11 = *(int *)(pFVar20 + 0x14);
                if ((*(longlong *)(pFVar20 + 0x18) == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                  return pTVar15;
                }
                pvVar6 = (void *)**(undefined8 **)(pFVar20 + 0x18);
                pvVar16 = dtAlloc(iVar11,DT_ALLOC_PERM_TILE_DATA);
                memcpy(pvVar16,pvVar6,(longlong)iVar11);
                if ((*(longlong *)(pFVar20 + 0x18) == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                  return pTVar15;
                }
                **(undefined8 **)(pFVar20 + 0x18) = pvVar16;
              }
              if (0 < *(int *)(pFVar20 + 0x28)) {
                Recast2UnrealBox((TBox<double> *)&local_568._s_0,local_688->header->bmin,
                                 local_688->header->bmax);
                iVar11 = *(int *)(pFVar20 + 0x10);
                iVar3 = *(int *)(pFVar20 + 0x28);
                local_5d8 = local_568._s_0.Z;
                uStack_5d0 = uStack_550;
                local_688 = local_538;
                local_618 = local_568._0_4_;
                uStack_614 = local_568._4_4_;
                uStack_610 = local_568._8_4_;
                uStack_60c = local_568._12_4_;
                local_5c8 = local_548;
                uStack_5c0 = uStack_540;
                if ((*(longlong *)(pFVar20 + 0x30) == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                  return pTVar15;
                }
                local_5a8._s_0.Z = local_5d8;
                uStack_590 = uStack_5d0;
                local_588 = local_5c8;
                uStack_580 = uStack_5c0;
                local_578 = local_688;
                local_5a8._0_4_ = local_618;
                local_5a8._4_4_ = uStack_614;
                local_5a8._8_4_ = uStack_610;
                local_5a8._12_4_ = uStack_60c;
                FNavMeshTileData::FNavMeshTileData
                          (&local_528,(uchar *)**(undefined8 **)(pFVar20 + 0x30),iVar3,iVar11,
                           (TBox<double> *)&local_5a8._s_0);
                FPImplRecastNavMesh::AddTileCacheLayer
                          (param_1->RecastNavMeshImpl,*(int *)(pFVar20 + 8),*(int *)(pFVar20 + 0xc),
                           *(int *)(pFVar20 + 0x10),&local_528);
                if (param_3) {
                  iVar11 = *(int *)(pFVar20 + 0x28);
                  if ((*(longlong *)(pFVar20 + 0x30) == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                    return pTVar15;
                  }
                  pvVar6 = (void *)**(undefined8 **)(pFVar20 + 0x30);
                  pvVar16 = dtAlloc(iVar11,DT_ALLOC_PERM_TILE_DATA);
                  memcpy(pvVar16,pvVar6,(longlong)iVar11);
                  if ((*(longlong *)(pFVar20 + 0x30) == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                    return pTVar15;
                  }
                  **(undefined8 **)(pFVar20 + 0x30) = pvVar16;
                }
                else {
                  *(undefined4 *)(pFVar20 + 0x28) = 0;
                  if ((*(longlong *)(pFVar20 + 0x30) == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                    return pTVar15;
                  }
                  **(undefined8 **)(pFVar20 + 0x30) = 0;
                }
                FNavMeshTileData::~FNavMeshTileData(&local_528);
              }
              __return_storage_ptr__ = local_670;
              local_668 = local_678;
              pFVar22 = (local_670->AllocatorInstance).Data;
              piVar1 = &local_670->ArrayMax;
              if (((pFVar22 <= (FScriptContainerElement *)&local_668) &&
                  ((FScriptContainerElement *)&local_668 < pFVar22 + (longlong)*piVar1 * 8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
                return pTVar15;
              }
              iVar11 = __return_storage_ptr__->ArrayNum;
              if (iVar11 == *piVar1) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
              }
              pFVar22 = (__return_storage_ptr__->AllocatorInstance).Data;
              __return_storage_ptr__->ArrayNum = iVar11 + 1;
              *(ulong64 *)(pFVar22 + (longlong)iVar11 * 8) = local_668;
              pFVar22 = local_660;
            }
          }
        }
      }
      pFVar20 = pFVar20 + 0x48;
      uVar18 = (ulonglong)local_658;
      this = local_680;
      this_01 = local_650;
    }
    this_00 = param_1->RecastNavMeshImpl;
    if (this_00 != (FPImplRecastNavMesh *)0x0) {
      iVar11 = __return_storage_ptr__->ArrayNum;
      uVar17 = 0;
      if (0 < iVar11) {
        do {
          uVar19 = 0;
          if ((int)uVar17 < iVar11) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            pTVar15 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar15;
          }
          FPImplRecastNavMesh::ProcessSegmentLinksForTile
                    (this_00,(FNavTileRef)
                             *(ulong64 *)
                              ((__return_storage_ptr__->AllocatorInstance).Data +
                              (longlong)(int)uVar17 * 8));
          iVar11 = __return_storage_ptr__->ArrayNum;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < iVar11);
      }
    }
  }
  if (5 < (byte)LogNavigation._0_1_) {
    ::FName::ToString((FName *)&this->_padding_,&local_5b8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// DetachTiles @ 146e46ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
URecastNavMeshDataChunk::DetachTiles
          (URecastNavMeshDataChunk *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ARecastNavMesh *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pUVar3 = AActor::GetWorld((AActor *)param_1);
  if (pUVar3 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavMesh.GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshDataChunk.cpp"
                       ,0x15d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pUVar3 = AActor::GetWorld((AActor *)param_1);
  bVar2 = UWorld::IsGameWorld(pUVar3);
  DetachTiles(this,__return_storage_ptr__,param_1,bVar2,bVar2);
  return __return_storage_ptr__;
}

// DetachTiles @ 146e46f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
URecastNavMeshDataChunk::DetachTiles
          (URecastNavMeshDataChunk *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ARecastNavMesh *param_1,bool param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  ARecastNavMesh *pAVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  dtNavMesh *this_00;
  UWorld *pUVar7;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  dtMeshTile *pdVar10;
  uchar *puVar11;
  FName *pFVar12;
  FName *pFVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  URecastNavMeshDataChunk *pUVar19;
  uint uVar20;
  uchar **ppuVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  int *piVar24;
  undefined1 auStackY_3e8 [32];
  undefined1 local_397;
  char local_396;
  ForAnyElementType local_390;
  int local_388 [2];
  FScriptContainerElement *local_380;
  ulong64 local_378;
  ulong64 local_370;
  ulong64 local_368;
  uint local_360;
  URecastNavMeshDataChunk *local_358;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_350;
  int local_348;
  uint uStack_344;
  FScriptContainerElement *local_340;
  ARecastNavMesh *local_338;
  dtNavMesh *local_330;
  TIntPoint<int>_u_0 local_328;
  FName local_320;
  FName local_318;
  FString local_310;
  FString local_300;
  FNavMeshTileData local_2e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_396 = param_2;
  local_358 = this;
  local_338 = param_1;
  if (5 < (byte)LogNavigation._0_1_) {
    ::FName::ToString((FName *)&this->_padding_,&local_310);
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"URecastNavMeshDataChunk::DetachTiles",0x24,Yes);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
  }
  pUVar19 = local_358;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar15 = (local_358->Tiles).ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  this_00 = ARecastNavMesh::GetRecastMesh(param_1);
  local_330 = this_00;
  if (this_00 != (dtNavMesh *)0x0) {
    local_350 = (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                 *)0x0;
    bVar4 = UE::NavMesh::Private::IsUsingActiveTileGeneration(param_1);
    if (bVar4) {
      local_350 = ARecastNavMesh::GetActiveTileSet(param_1);
    }
    local_390.Data = (FScriptContainerElement *)0x0;
    local_388[0] = 0;
    local_388[1] = 0;
    pUVar7 = AActor::GetWorld((AActor *)param_1);
    if ((pUVar7 == (UWorld *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NavMesh.GetWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshDataChunk.cpp"
                           ,0x179,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar8;
    }
    pUVar7 = AActor::GetWorld((AActor *)param_1);
    bVar4 = UWorld::IsGameWorld(pUVar7);
    if ((bVar4) && (*(char *)((longlong)&param_1->_padding_ + 4) == '\x02')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    local_360 = (pUVar19->Tiles).ArrayNum;
    uVar17 = (ulonglong)(int)local_360;
    pFVar22 = (pUVar19->Tiles).AllocatorInstance.Data;
    pFVar9 = pFVar22 + uVar17 * 0x48;
    local_380 = pFVar9;
    while( true ) {
      local_340 = pFVar22;
      if ((pUVar19->Tiles).ArrayNum != (int)uVar17) {
        local_397 = 0;
        `TCheckedPointerIterator<FRecastTileData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_397);
        pFVar9 = local_380;
      }
      if (pFVar22 == pFVar9) break;
      if (pFVar22[0x40] != (FScriptContainerElement)0x0) {
        pdVar10 = dtNavMesh::getTileAt
                            (this_00,*(int *)(pFVar22 + 8),*(int *)(pFVar22 + 0xc),
                             *(int *)(pFVar22 + 0x10));
        if (pdVar10 != (dtMeshTile *)0x0) {
          local_368 = dtNavMesh::getTileRef(this_00,pdVar10);
          if (param_3) {
            FPImplRecastNavMesh::GetTileCacheLayer
                      (param_1->RecastNavMeshImpl,&local_2e8,*(int *)(pFVar22 + 8),
                       *(int *)(pFVar22 + 0xc),*(int *)(pFVar22 + 0x10));
            if (local_2e8.NavData.Object != (FNavData *)0x0) {
              if ((local_2e8.NavData.Object == (FNavData *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NavData.IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMesh.h"
                                     ,0x208,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                return pTVar8;
              }
              if ((local_2e8.NavData.Object == (FNavData *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                return pTVar8;
              }
              if (((local_2e8.NavData.Object)->RawNavData != (uchar *)0x0) &&
                 (0 < local_2e8.DataSize)) {
                *(int *)(pFVar22 + 0x28) = local_2e8.DataSize;
                puVar11 = FNavMeshTileData::Release(&local_2e8);
                if ((*(longlong *)(pFVar22 + 0x30) == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                  return pTVar8;
                }
                **(undefined8 **)(pFVar22 + 0x30) = puVar11;
              }
            }
            FNavMeshTileData::~FNavMeshTileData(&local_2e8);
          }
          iVar6 = *(int *)(pFVar22 + 0x10);
          iVar18 = *(int *)(pFVar22 + 0xc);
          iVar1 = *(int *)(pFVar22 + 8);
          pFVar12 = ::FName::FName(&local_320,"removing");
          pFVar13 = ::FName::FName(&local_318,"   ");
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"URecastNavMeshDataChunk::DetachTiles",0x24,Yes);
          this_00 = local_330;
          pAVar3 = local_338;
          ARecastNavMesh::LogRecastTile
                    (local_338,local_168.Ptr,pFVar13,pFVar12,local_330,iVar1,iVar18,iVar6,local_368)
          ;
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
          FPImplRecastNavMesh::RemoveTileCacheLayer
                    (pAVar3->RecastNavMeshImpl,*(int *)(pFVar22 + 8),*(int *)(pFVar22 + 0xc),
                     *(int *)(pFVar22 + 0x10));
          if (local_396 == '\0') {
            ppuVar21 = (uchar **)0x0;
            pFVar9 = (FScriptContainerElement *)0x0;
          }
          else {
            if ((*(longlong *)(pFVar22 + 0x18) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar8;
            }
            ppuVar21 = *(uchar ***)(pFVar22 + 0x18);
            pFVar9 = pFVar22 + 0x14;
          }
          uVar14 = local_368;
          dtNavMesh::removeTile(this_00,local_368,ppuVar21,(int *)pFVar9);
          if (local_350 !=
              (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
               *)0x0) {
            uStack_344 = *(uint *)(pFVar22 + 0xc);
            local_348 = ((TIntPoint<int>_u_0_s_0 *)(pFVar22 + 8))->X;
            local_328._s_0 = *(TIntPoint<int>_u_0_s_0 *)(pFVar22 + 8);
            if (*(int *)&(local_350->Elements).field_0x8 !=
                *(int *)&(local_350->Elements).field_0x34) {
              uVar20 = local_348 - uStack_344 ^ uStack_344 >> 0xd;
              uVar15 = (-0x61c88647 - uVar20) - uStack_344 ^ uVar20 << 8;
              uVar16 = (uStack_344 - uVar20) - uVar15 ^ uVar15 >> 0xd;
              uVar20 = (uVar20 - uVar16) - uVar15 ^ uVar16 >> 0xc;
              uVar15 = (uVar15 - uVar20) - uVar16 ^ uVar20 << 0x10;
              uVar16 = (uVar16 - uVar15) - uVar20 ^ uVar15 >> 5;
              uVar20 = (uVar20 - uVar16) - uVar15 ^ uVar16 >> 3;
              uVar15 = (uVar15 - uVar20) - uVar16 ^ uVar20 << 10;
              TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
              ::RemoveImpl<UE::Math::TIntPoint<int>_>
                        (local_350,(uVar16 - uVar15) - uVar20 ^ uVar15 >> 0xf,
                         (TIntPoint<int> *)&local_328._s_0);
            }
          }
          pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_378 = uVar14;
          piVar24 = &__return_storage_ptr__->ArrayMax;
          if (((pFVar9 <= (FScriptContainerElement *)&local_378) &&
              ((FScriptContainerElement *)&local_378 < pFVar9 + (longlong)*piVar24 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar8;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == *piVar24) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,piVar24);
          }
          pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(ulong64 *)(pFVar9 + (longlong)iVar6 * 8) = local_378;
        }
        piVar24 = &__return_storage_ptr__->ArrayMax;
        pFVar9 = local_380;
        if (bVar4) {
          uVar15 = dtNavMesh::getTileCountAt(this_00,*(int *)(pFVar22 + 8),*(int *)(pFVar22 + 0xc));
          pFVar9 = local_380;
          if (0 < (int)uVar15) {
            if (local_388[0] < (int)uVar15) {
              iVar18 = uVar15 - local_388[0];
              iVar6 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,iVar18,&local_390,local_388,local_388 + 1);
              memset(local_390.Data + (longlong)iVar6 * 8,0,(longlong)iVar18 << 3);
            }
            else if ((int)uVar15 < local_388[0]) {
              uVar16 = local_388[0] - uVar15;
              if ((int)(uVar16 | uVar15) < 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                  return pTVar8;
                }
              }
              if (uVar16 != 0) {
                iVar18 = (local_388[0] - uVar16) - uVar15;
                iVar6 = local_388[0];
                if (iVar18 != 0) {
                  memmove(local_390.Data + (longlong)(int)uVar15 * 8,
                          local_390.Data + (longlong)(int)uVar15 * 8 + (longlong)(int)uVar16 * 8,
                          (longlong)iVar18 << 3);
                  iVar6 = local_388[0];
                }
                local_388[0] = iVar6 - uVar16;
              }
            }
            uVar16 = 0;
            lVar23 = 0;
            iVar6 = dtNavMesh::getTilesAt
                              (this_00,*(int *)(pFVar22 + 8),*(int *)(pFVar22 + 0xc),
                               (dtMeshTile **)local_390.Data,uVar15);
            pFVar9 = local_380;
            if (0 < (longlong)iVar6) {
              do {
                uVar15 = 0;
                if ((int)uVar16 < local_388[0]) {
                  uVar15 = ~uVar16 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                  return pTVar8;
                }
                uVar14 = dtNavMesh::getTileRef
                                   (this_00,*(dtMeshTile **)(local_390.Data + lVar23 * 8));
                if (uVar14 != 0) {
                  dtNavMesh::removeTile(this_00,uVar14,(uchar **)0x0,(int *)0x0);
                  pFVar22 = (__return_storage_ptr__->AllocatorInstance).Data;
                  local_370 = uVar14;
                  if (((pFVar22 <= (FScriptContainerElement *)&local_370) &&
                      ((FScriptContainerElement *)&local_370 < pFVar22 + (longlong)*piVar24 * 8)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    pTVar8 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                    return pTVar8;
                  }
                  iVar18 = __return_storage_ptr__->ArrayNum;
                  if (iVar18 == *piVar24) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&__return_storage_ptr__->AllocatorInstance,piVar24);
                  }
                  pFVar22 = (__return_storage_ptr__->AllocatorInstance).Data;
                  __return_storage_ptr__->ArrayNum = iVar18 + 1;
                  *(ulong64 *)(pFVar22 + (longlong)iVar18 * 8) = local_370;
                }
                uVar16 = uVar16 + 1;
                lVar23 = lVar23 + 1;
                pFVar9 = local_380;
                pFVar22 = local_340;
              } while (lVar23 < iVar6);
            }
          }
        }
      }
      uVar17 = (ulonglong)local_360;
      *(undefined8 *)(pFVar22 + 8) = 0;
      *(undefined4 *)(pFVar22 + 0x10) = 0;
      pFVar22[0x40] = (FScriptContainerElement)0x0;
      pFVar22 = pFVar22 + 0x48;
      pUVar19 = local_358;
      param_1 = local_338;
    }
    if (local_390.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data);
    }
  }
  if (5 < (byte)LogNavigation._0_1_) {
    ::FName::ToString((FName *)&pUVar19->_padding_,&local_300);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetNumTiles @ 146e5d060

int __thiscall URecastNavMeshDataChunk::GetNumTiles(URecastNavMeshDataChunk *this)

{
  return (this->Tiles).ArrayNum;
}

// GetPrivateStaticClass @ 146e5d380

UClass * __cdecl URecastNavMeshDataChunk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecastNavMeshDataChunk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastNavMeshDataChunk",
               &Z_Registration_Info_UClass_URecastNavMeshDataChunk.InnerSingleton,
               StaticRegisterNativesURecastNavMeshDataChunk,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URecastNavMeshDataChunk>,
               InternalVTableHelperCtorCaller<URecastNavMeshDataChunk>,local_res8,
               UNavigationDataChunk::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecastNavMeshDataChunk.InnerSingleton;
}

// GetTiles @ 146e5dbd0

void __thiscall
URecastNavMeshDataChunk::GetTiles
          (URecastNavMeshDataChunk *this,FPImplRecastNavMesh *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,EGatherTilesCopyMode param_3,bool param_4
          )

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_28;
  
  uVar2 = param_2->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<FRecastTileData,int>
            ((FRecastTileData *)(this->Tiles).AllocatorInstance.Data,(this->Tiles).ArrayNum);
  piVar1 = &(this->Tiles).ArrayMax;
  (this->Tiles).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar2,&(this->Tiles).AllocatorInstance,0,piVar1);
  }
  if (param_1 != (FPImplRecastNavMesh *)0x0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (&local_38 == param_2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = param_2->ArrayNum;
    if (iVar3 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar3,&local_38.AllocatorInstance,&local_38.ArrayNum,&local_38.ArrayMax
                        );
      memcpy(local_38.AllocatorInstance.Data + (longlong)iVar6 * 4,(param_2->AllocatorInstance).Data
             ,(longlong)iVar3 << 2);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FNavTileRef::DeprecatedMakeTileRefsFromTileIds
              (param_1,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_38,&local_28);
    GetTiles(this,param_1,&local_28,param_3,param_4);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// GetTiles @ 146e5dd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URecastNavMeshDataChunk::GetTiles
          (URecastNavMeshDataChunk *this,FPImplRecastNavMesh *param_1,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_2,EGatherTilesCopyMode param_3,
          bool param_4)

{
  TArray<FRecastTileData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNavData *pFVar5;
  uchar *_Src;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  int iVar9;
  dtMeshTile *pdVar10;
  uchar *_Dst;
  FNavMeshTileData *pFVar11;
  uchar *puVar12;
  ulonglong uVar13;
  size_t _Size;
  FScriptContainerElement *pFVar14;
  FPImplRecastNavMesh *this_00;
  dtMeshHeader *pdVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8 [4];
  EGatherTilesCopyMode local_1b4;
  uint local_1b0;
  FPImplRecastNavMesh *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188;
  int local_184;
  TSharedPtr<FRecastTileData::FRawData,1> local_180;
  int local_170;
  TSharedPtr<FRecastTileData::FRawData,1> local_168;
  FScriptContainerElement local_158;
  dtNavMesh *local_148;
  TRawPtrProxy<FRecastTileData::FRawData> local_140;
  TRawPtrProxy<FRecastTileData::FRawData> local_138;
  FScriptContainerElement *local_130;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *local_128;
  FNavData *local_120;
  TReferenceControllerBase<1> *pTStack_118;
  FNavMeshTileData local_108;
  FNavMeshTileData local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar3 = param_2->ArrayNum;
  pTVar1 = &this->Tiles;
  local_1b4 = param_3;
  local_1a8 = param_1;
  local_128 = param_2;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  DestructItems<FRecastTileData,int>
            ((FRecastTileData *)(pTVar1->AllocatorInstance).Data,(this->Tiles).ArrayNum);
  piVar2 = &(this->Tiles).ArrayMax;
  (this->Tiles).ArrayNum = 0;
  if (*piVar2 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar3,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_1b0 = param_2->ArrayNum;
  uVar13 = (ulonglong)(int)local_1b0;
  pFVar16 = (param_2->AllocatorInstance).Data;
  local_148 = local_1a8->DetourNavMesh;
  pFVar14 = pFVar16 + uVar13 * 8;
  this_00 = local_1a8;
  local_130 = pFVar14;
  do {
    if (param_2->ArrayNum != (int)uVar13) {
      local_1b8[0] = 0;
      `TCheckedPointerIterator<FNavTileRef_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (pFVar16 == pFVar14) {
      return;
    }
    pdVar10 = dtNavMesh::getTileByRef(local_148,*(ulong64 *)pFVar16);
    if ((pdVar10 != (dtMeshTile *)0x0) &&
       (pdVar15 = pdVar10->header, pdVar15 != (dtMeshHeader *)0x0)) {
      _Dst = (uchar *)0x0;
      if ((param_3 & CopyData) != NoCopy) {
        iVar9 = pdVar10->dataSize;
        puVar12 = pdVar10->data;
        _Dst = dtAlloc(iVar9,DT_ALLOC_PERM_TILE_DATA);
        memcpy(_Dst,puVar12,(longlong)iVar9);
        pdVar15 = pdVar10->header;
        this_00 = local_1a8;
      }
      puVar12 = (uchar *)0x0;
      local_108.LayerIndex = 0;
      local_108.LayerBBox._48_8_ = local_108.LayerBBox._48_8_ & 0xffffffffffffff00;
      local_108.DataSize = 0;
      local_108.NavData.Object = (FNavData *)0x0;
      local_108.NavData.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if ((local_1b4 & CopyCacheData) != NoCopy) {
        pFVar11 = FPImplRecastNavMesh::GetTileCacheLayer
                            (this_00,&local_a8,pdVar15->x,pdVar15->y,(uint)pdVar15->layer);
        FVar7.ReferenceController = local_108.NavData.SharedReferenceCount.ReferenceController;
        local_108.LayerIndex = pFVar11->LayerIndex;
        local_108.LayerBBox.Min.field0_0x0._s_0.X = (pFVar11->LayerBBox).Min.field0_0x0._s_0.X;
        local_108.LayerBBox.Min.field0_0x0._s_0.Y = (pFVar11->LayerBBox).Min.field0_0x0._s_0.Y;
        local_108.LayerBBox.Min.field0_0x0._s_0.Z = (pFVar11->LayerBBox).Min.field0_0x0._s_0.Z;
        local_108.LayerBBox.Max.field0_0x0._s_0.X = (pFVar11->LayerBBox).Max.field0_0x0._s_0.X;
        local_108.LayerBBox.Max.field0_0x0._s_0.Y = (pFVar11->LayerBBox).Max.field0_0x0._s_0.Y;
        local_108.LayerBBox.Max.field0_0x0._s_0.Z = (pFVar11->LayerBBox).Max.field0_0x0._s_0.Z;
        local_108.LayerBBox.IsValid = (pFVar11->LayerBBox).IsValid;
        local_108.LayerBBox.Pad[0] = (pFVar11->LayerBBox).Pad[0];
        local_108.LayerBBox.Pad[1] = (pFVar11->LayerBBox).Pad[1];
        local_108.LayerBBox.Pad[2] = (pFVar11->LayerBBox).Pad[2];
        local_108.LayerBBox.Pad[3] = (pFVar11->LayerBBox).Pad[3];
        local_108.LayerBBox.Pad[4] = (pFVar11->LayerBBox).Pad[4];
        local_108.LayerBBox.Pad[5] = (pFVar11->LayerBBox).Pad[5];
        local_108.LayerBBox.Pad[6] = (pFVar11->LayerBBox).Pad[6];
        local_108.DataSize = pFVar11->DataSize;
        pTVar4 = (pFVar11->NavData).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar11->NavData).Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_120 = local_108.NavData.Object;
        pTStack_118 = local_108.NavData.SharedReferenceCount.ReferenceController;
        local_108.NavData.Object = pFVar5;
        local_108.NavData.SharedReferenceCount.ReferenceController = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        FNavMeshTileData::~FNavMeshTileData(&local_a8);
        if (local_108.NavData.Object != (FNavData *)0x0) {
          if ((local_108.NavData.Object == (FNavData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NavData.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMesh.h"
                                 ,0x208,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((local_108.NavData.Object == (FNavData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          _Src = (local_108.NavData.Object)->RawNavData;
          if ((_Src != (uchar *)0x0) && (_Size = (size_t)local_108.DataSize, 0 < local_108.DataSize)
             ) {
            puVar12 = dtAlloc(local_108.DataSize,DT_ALLOC_PERM_TILE_DATA);
            memcpy(puVar12,_Src,_Size);
          }
        }
      }
      local_184 = pdVar10->dataSize;
      local_188 = 0;
      local_180.Object = (FRawData *)0x0;
      local_180.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_198 = 0;
      uStack_190 = 0;
      local_168.Object = (FRawData *)0x0;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_158 = (FScriptContainerElement)0x0;
      local_170 = local_108.DataSize;
      local_140.Object = ::operator_new(8);
      if (local_140.Object != (FRawData *)0x0) {
        (local_140.Object)->RawData = _Dst;
      }
      TSharedPtr<FRecastTileData::FRawData,1>::operator=<FRecastTileData::FRawData>
                (&local_180,&local_140);
      local_138.Object = ::operator_new(8);
      if (local_138.Object != (FRawData *)0x0) {
        (local_138.Object)->RawData = puVar12;
      }
      TSharedPtr<FRecastTileData::FRawData,1>::operator=<FRecastTileData::FRawData>
                (&local_168,&local_138);
      pdVar15 = pdVar10->header;
      piVar2 = &(this->Tiles).ArrayMax;
      pFVar14 = (pTVar1->AllocatorInstance).Data;
      local_198._0_4_ = pdVar15->x;
      local_198._4_4_ = pdVar15->y;
      uStack_190._0_4_ = pdVar15->x;
      uStack_190._4_4_ = pdVar15->y;
      local_188 = (uint)pdVar15->layer;
      local_158 = (FScriptContainerElement)param_4;
      if (((pFVar14 <= (FScriptContainerElement *)&local_198) &&
          ((FScriptContainerElement *)&local_198 < pFVar14 + (longlong)*piVar2 * 0x48)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->Tiles).ArrayNum;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->Tiles).ArrayNum = iVar9 + 1;
      pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x48;
      *(undefined4 *)pFVar14 = (undefined4)local_198;
      *(undefined4 *)(pFVar14 + 4) = local_198._4_4_;
      *(undefined4 *)(pFVar14 + 8) = (undefined4)uStack_190;
      *(undefined4 *)(pFVar14 + 0xc) = uStack_190._4_4_;
      *(uint *)(pFVar14 + 0x10) = local_188;
      *(int *)(pFVar14 + 0x14) = local_184;
      *(FRawData **)(pFVar14 + 0x18) = local_180.Object;
      *(TReferenceControllerBase<1> **)(pFVar14 + 0x20) =
           local_180.SharedReferenceCount.ReferenceController;
      if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(int *)(pFVar14 + 0x28) = local_170;
      *(FRawData **)(pFVar14 + 0x30) = local_168.Object;
      *(TReferenceControllerBase<1> **)(pFVar14 + 0x38) =
           local_168.SharedReferenceCount.ReferenceController;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar14[0x40] = local_158;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.SharedReferenceCount.ReferenceController);
      FNavMeshTileData::~FNavMeshTileData(&local_108);
      pFVar14 = local_130;
      this_00 = local_1a8;
      param_3 = local_1b4;
    }
    pFVar16 = pFVar16 + 8;
    uVar13 = (ulonglong)local_1b0;
    param_2 = local_128;
  } while( true );
}

// GetTilesBounds @ 146e5e210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URecastNavMeshDataChunk::GetTilesBounds
          (URecastNavMeshDataChunk *this,FPImplRecastNavMesh *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TBox<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  dtNavMesh *this_00;
  dtMeshHeader *pdVar5;
  code *pcVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  dtMeshTile *pdVar18;
  TBox<double> *pTVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_80;
  TBox<double> local_70;
  ulonglong local_38;
  
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  (param_3->Max).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->Max).field0_0x0._s_0.Y = (double)uVar15;
  (param_3->Max).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = (param_3->Max).field0_0x0._s_0.Z;
  param_3->IsValid = '\0';
  dVar3 = (param_3->Max).field0_0x0._s_0.Y;
  (param_3->Min).field0_0x0._s_0.X = (param_3->Max).field0_0x0._s_0.X;
  (param_3->Min).field0_0x0._s_0.Y = dVar3;
  (param_3->Min).field0_0x0._s_0.Z = dVar2;
  if (&local_90 == param_2) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 != 0) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar4,&local_90.AllocatorInstance,&local_90.ArrayNum,&local_90.ArrayMax)
    ;
    memcpy(local_90.AllocatorInstance.Data + (longlong)iVar17 * 4,(param_2->AllocatorInstance).Data,
           (longlong)iVar4 << 2);
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  FNavTileRef::DeprecatedMakeTileRefsFromTileIds
            (param_1,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_90,&local_80);
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar4 = local_80.ArrayNum;
  uVar20 = (ulonglong)local_80.ArrayNum;
  (param_3->Max).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->Max).field0_0x0._s_0.Y = (double)uVar15;
  (param_3->Max).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = (param_3->Max).field0_0x0._s_0.X;
  dVar7 = (param_3->Max).field0_0x0._s_0.Y;
  param_3->IsValid = '\0';
  dVar2 = (param_3->Max).field0_0x0._s_0.Z;
  (param_3->Min).field0_0x0._s_0.X = dVar3;
  (param_3->Min).field0_0x0._s_0.Y = dVar7;
  (param_3->Min).field0_0x0._s_0.Z = dVar2;
  this_00 = param_1->DetourNavMesh;
  pFVar1 = local_80.AllocatorInstance.Data + uVar20 * 8;
  FVar21.Data = local_80.AllocatorInstance.Data;
LAB_146e5e353:
  do {
    if ((int)uVar20 != iVar4) {
      `TCheckedPointerIterator<FNavTileRef_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if (FVar21.Data == pFVar1) {
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      return;
    }
    pdVar18 = dtNavMesh::getTileByRef(this_00,*(ulong64 *)FVar21.Data);
    if ((pdVar18 != (dtMeshTile *)0x0) && (pdVar5 = pdVar18->header, pdVar5 != (dtMeshHeader *)0x0))
    {
      pTVar19 = Recast2UnrealBox(&local_70,pdVar5->bmin,pdVar5->bmax);
      if (param_3->IsValid == '\0') {
        if (pTVar19->IsValid != '\0') {
          dVar2 = (pTVar19->Min).field0_0x0._s_0.Y;
          (param_3->Min).field0_0x0._s_0.X = (pTVar19->Min).field0_0x0._s_0.X;
          (param_3->Min).field0_0x0._s_0.Y = dVar2;
          dVar2 = (pTVar19->Max).field0_0x0._s_0.X;
          (param_3->Min).field0_0x0._s_0.Z = (pTVar19->Min).field0_0x0._s_0.Z;
          (param_3->Max).field0_0x0._s_0.X = dVar2;
          dVar2 = (pTVar19->Max).field0_0x0._s_0.Z;
          (param_3->Max).field0_0x0._s_0.Y = (pTVar19->Max).field0_0x0._s_0.Y;
          (param_3->Max).field0_0x0._s_0.Z = dVar2;
          uVar8 = pTVar19->Pad[0];
          uVar9 = pTVar19->Pad[1];
          uVar10 = pTVar19->Pad[2];
          uVar11 = pTVar19->Pad[3];
          uVar12 = pTVar19->Pad[4];
          uVar13 = pTVar19->Pad[5];
          uVar14 = pTVar19->Pad[6];
          param_3->IsValid = pTVar19->IsValid;
          param_3->Pad[0] = uVar8;
          param_3->Pad[1] = uVar9;
          param_3->Pad[2] = uVar10;
          param_3->Pad[3] = uVar11;
          param_3->Pad[4] = uVar12;
          param_3->Pad[5] = uVar13;
          param_3->Pad[6] = uVar14;
        }
      }
      else if (pTVar19->IsValid != '\0') {
        dVar2 = *(double *)&(param_3->Min).field0_0x0;
        uVar22 = SUB84(dVar2,0);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
        FVar21.Data = FVar21.Data + 8;
        dVar3 = *(double *)&(pTVar19->Min).field0_0x0;
        if (dVar3 <= dVar2) {
          uVar22 = SUB84(dVar3,0);
          uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        uVar20 = local_80._8_8_ & 0xffffffff;
        (param_3->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar23,uVar22);
        dVar2 = *(double *)((longlong)&(pTVar19->Min).field0_0x0 + 8);
        uVar22 = SUB84(dVar2,0);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Min).field0_0x0 + 8);
        if (dVar3 <= dVar2) {
          uVar22 = SUB84(dVar3,0);
          uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar23,uVar22);
        dVar2 = *(double *)((longlong)&(pTVar19->Min).field0_0x0 + 0x10);
        uVar22 = SUB84(dVar2,0);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Min).field0_0x0 + 0x10);
        if (dVar3 <= dVar2) {
          uVar22 = SUB84(dVar3,0);
          uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar23,uVar22);
        dVar2 = *(double *)&(pTVar19->Max).field0_0x0;
        uVar22 = SUB84(dVar2,0);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)&(param_3->Max).field0_0x0;
        if (dVar2 <= dVar3) {
          uVar22 = SUB84(dVar3,0);
          uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar23,uVar22);
        dVar2 = *(double *)((longlong)&(pTVar19->Max).field0_0x0 + 8);
        uVar22 = SUB84(dVar2,0);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 8);
        if (dVar2 <= dVar3) {
          uVar22 = SUB84(dVar3,0);
          uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar23,uVar22);
        dVar2 = *(double *)((longlong)&(pTVar19->Max).field0_0x0 + 0x10);
        uVar22 = SUB84(dVar2,0);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 0x10);
        if (dVar2 <= dVar3) {
          uVar22 = SUB84(dVar3,0);
          uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar23,uVar22);
        goto LAB_146e5e353;
      }
    }
    uVar20 = local_80._8_8_ & 0xffffffff;
    FVar21.Data = FVar21.Data + 8;
  } while( true );
}

// GetTilesBounds @ 146e5e490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
URecastNavMeshDataChunk::GetTilesBounds
          (URecastNavMeshDataChunk *this,FPImplRecastNavMesh *param_1,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_2,TBox<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  dtNavMesh *this_00;
  dtMeshHeader *pdVar5;
  double dVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  undefined8 uVar14;
  dtMeshTile *pdVar15;
  TBox<double> *pTVar16;
  FScriptContainerElement *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TBox<double> local_70;
  ulonglong local_38;
  
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  (param_3->Max).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->Max).field0_0x0._s_0.Y = (double)uVar14;
  (param_3->Max).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = (param_3->Max).field0_0x0._s_0.X;
  dVar6 = (param_3->Max).field0_0x0._s_0.Y;
  param_3->IsValid = '\0';
  dVar2 = (param_3->Max).field0_0x0._s_0.Z;
  (param_3->Min).field0_0x0._s_0.X = dVar3;
  (param_3->Min).field0_0x0._s_0.Y = dVar6;
  (param_3->Min).field0_0x0._s_0.Z = dVar2;
  pFVar17 = (param_2->AllocatorInstance).Data;
  iVar4 = param_2->ArrayNum;
  this_00 = param_1->DetourNavMesh;
  pFVar1 = pFVar17 + (longlong)iVar4 * 8;
LAB_146e5e4f8:
  do {
    if (param_2->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FNavTileRef_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_78);
    }
    if (pFVar17 == pFVar1) {
      return;
    }
    pdVar15 = dtNavMesh::getTileByRef(this_00,*(ulong64 *)pFVar17);
    if ((pdVar15 != (dtMeshTile *)0x0) && (pdVar5 = pdVar15->header, pdVar5 != (dtMeshHeader *)0x0))
    {
      pTVar16 = Recast2UnrealBox(&local_70,pdVar5->bmin,pdVar5->bmax);
      if (param_3->IsValid == '\0') {
        if (pTVar16->IsValid != '\0') {
          dVar2 = (pTVar16->Min).field0_0x0._s_0.Y;
          (param_3->Min).field0_0x0._s_0.X = (pTVar16->Min).field0_0x0._s_0.X;
          (param_3->Min).field0_0x0._s_0.Y = dVar2;
          dVar2 = (pTVar16->Max).field0_0x0._s_0.X;
          (param_3->Min).field0_0x0._s_0.Z = (pTVar16->Min).field0_0x0._s_0.Z;
          (param_3->Max).field0_0x0._s_0.X = dVar2;
          dVar2 = (pTVar16->Max).field0_0x0._s_0.Z;
          (param_3->Max).field0_0x0._s_0.Y = (pTVar16->Max).field0_0x0._s_0.Y;
          (param_3->Max).field0_0x0._s_0.Z = dVar2;
          uVar7 = pTVar16->Pad[0];
          uVar8 = pTVar16->Pad[1];
          uVar9 = pTVar16->Pad[2];
          uVar10 = pTVar16->Pad[3];
          uVar11 = pTVar16->Pad[4];
          uVar12 = pTVar16->Pad[5];
          uVar13 = pTVar16->Pad[6];
          param_3->IsValid = pTVar16->IsValid;
          param_3->Pad[0] = uVar7;
          param_3->Pad[1] = uVar8;
          param_3->Pad[2] = uVar9;
          param_3->Pad[3] = uVar10;
          param_3->Pad[4] = uVar11;
          param_3->Pad[5] = uVar12;
          param_3->Pad[6] = uVar13;
        }
      }
      else if (pTVar16->IsValid != '\0') {
        dVar2 = *(double *)&(pTVar16->Min).field0_0x0;
        uVar18 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
        pFVar17 = pFVar17 + 8;
        dVar3 = *(double *)&(param_3->Min).field0_0x0;
        if (dVar3 <= dVar2) {
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar18);
        dVar2 = *(double *)((longlong)&(pTVar16->Min).field0_0x0 + 8);
        uVar18 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Min).field0_0x0 + 8);
        if (dVar3 <= dVar2) {
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar18);
        dVar2 = *(double *)((longlong)&(pTVar16->Min).field0_0x0 + 0x10);
        uVar18 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Min).field0_0x0 + 0x10);
        if (dVar3 <= dVar2) {
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar18);
        dVar2 = *(double *)&(pTVar16->Max).field0_0x0;
        uVar18 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)&(param_3->Max).field0_0x0;
        if (dVar2 <= dVar3) {
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar18);
        dVar2 = *(double *)((longlong)&(pTVar16->Max).field0_0x0 + 8);
        uVar18 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 8);
        if (dVar2 <= dVar3) {
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar18);
        dVar2 = *(double *)((longlong)&(pTVar16->Max).field0_0x0 + 0x10);
        uVar18 = SUB84(dVar2,0);
        uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(param_3->Max).field0_0x0 + 0x10);
        if (dVar2 <= dVar3) {
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (param_3->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar18);
        goto LAB_146e5e4f8;
      }
    }
    pFVar17 = pFVar17 + 8;
  } while( true );
}

// MoveTiles @ 146e66b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URecastNavMeshDataChunk::MoveTiles
          (URecastNavMeshDataChunk *this,FPImplRecastNavMesh *param_1,TIntPoint<int> *param_2,
          double param_3,TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  dtNavMesh *this_00;
  short *psVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  dtNavMeshParams *pdVar9;
  TVector<double> *pTVar10;
  TVector<double> *pTVar11;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  undefined1 auStackY_438 [32];
  undefined1 local_3f8 [4];
  int local_3f4;
  int local_3f0;
  uint local_3ec;
  FScriptContainerElement *local_3e8;
  TIntPoint<int> *local_3e0;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3c0;
  FString local_3a8;
  TVector<double> local_398;
  TVector<double> local_380;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  TVector<double> local_330;
  TVector<double> local_318;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_3e0 = param_2;
  if (5 < (byte)LogNavigation._0_1_) {
    ::FName::ToString((FName *)&this->_padding_,&local_3a8);
    local_2f8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_2f8,"URecastNavMeshDataChunk::MoveTiles",0x22,Yes);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if ((void *)local_2f8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2f8._padding_);
    }
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
  }
  dVar7 = __real_3fe0000000000000;
  this_00 = param_1->DetourNavMesh;
  if (this_00 == (dtNavMesh *)0x0) {
LAB_146e66f4a:
    if (5 < (byte)LogNavigation._0_1_) {
      local_1d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1d8,"URecastNavMeshDataChunk::MoveTiles",0x22,Yes);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if ((void *)local_1d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._padding_);
      }
    }
    return;
  }
  local_3ec = (this->Tiles).ArrayNum;
  uVar12 = (ulonglong)(int)local_3ec;
  pFVar15 = (this->Tiles).AllocatorInstance.Data;
  pFVar14 = pFVar15 + uVar12 * 0x48;
  local_3e8 = pFVar14;
LAB_146e66cb0:
  do {
    if ((this->Tiles).ArrayNum != (int)uVar12) {
      local_3f8[0] = 0;
      `TCheckedPointerIterator<FRecastTileData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3f8);
    }
    if (pFVar15 == pFVar14) goto LAB_146e66f4a;
    if (*(int *)(pFVar15 + 0x28) == 0) {
      if ((pFVar15[0x40] == (FScriptContainerElement)0x0) && (*(longlong *)(pFVar15 + 0x18) != 0)) {
        local_3d8._s_0.X = (param_4->field0_0x0)._s_0.X;
        local_3d8._s_0.Y = (param_4->field0_0x0)._s_0.Y;
        local_3d8._s_0.Z = 0.0;
        Unreal2RecastPoint(&local_398,(TVector<double> *)&local_3d8._s_0);
        pdVar9 = dtNavMesh::getParams(this_00);
        dVar1 = pdVar9->tileWidth;
        pdVar9 = dtNavMesh::getParams(this_00);
        dVar2 = pdVar9->tileHeight;
        if ((*(longlong *)(pFVar15 + 0x18) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        psVar5 = (short *)**(undefined8 **)(pFVar15 + 0x18);
        if (*psVar5 == 7) {
          local_3f4 = 0;
          local_3f0 = 0;
          pTVar10 = Recast2UnrealPoint(&local_330,(double *)(psVar5 + 0x20));
          pTVar11 = Recast2UnrealPoint(&local_318,(double *)(psVar5 + 0x14));
          local_350 = (pTVar10->field0_0x0)._s_0.X;
          dStack_348 = (pTVar10->field0_0x0)._s_0.Y;
          local_340 = (pTVar10->field0_0x0)._s_0.Z;
          local_368 = (pTVar11->field0_0x0)._s_0.X;
          dStack_360 = (pTVar11->field0_0x0)._s_0.Y;
          local_358 = (pTVar11->field0_0x0)._s_0.Z;
          local_3c0._s_0.X = (local_368 + local_350) * dVar7;
          local_3c0._s_0.Z = (local_358 + local_340) * dVar7;
          local_3c0._s_0.Y = (dStack_360 + dStack_348) * dVar7;
          Unreal2RecastPoint(&local_380,(TVector<double> *)&local_3c0._s_0);
          dtComputeTileOffsetFromRotation
                    ((double *)&local_380,(double *)&local_398,param_3,dVar1,dVar2,&local_3f4,
                     &local_3f0);
          iVar13 = local_3f4 + (param_2->field0_0x0)._s_0.X;
          dVar3 = (this_00->m_params).resolutionParams[*(byte *)(psVar5 + 0x13)].bvQuantFactor;
          iVar16 = local_3f0 + (param_2->field0_0x0)._s_0.Y;
          iVar4 = *(int *)(pFVar15 + 0x14);
          if ((*(longlong *)(pFVar15 + 0x18) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar8 = dtTransformTileData((uchar *)**(undefined8 **)(pFVar15 + 0x18),iVar4,iVar13,iVar16
                                      ,dVar1,dVar2,param_3,dVar3);
          pFVar14 = local_3e8;
          param_2 = local_3e0;
          if ((5 < (byte)LogNavigation._0_1_) && (bVar8)) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
            pFVar14 = local_3e8;
            param_2 = local_3e0;
          }
        }
      }
    }
    else if (1 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      uVar12 = (ulonglong)local_3ec;
      pFVar15 = pFVar15 + 0x48;
      goto LAB_146e66cb0;
    }
    uVar12 = (ulonglong)local_3ec;
    pFVar15 = pFVar15 + 0x48;
  } while( true );
}

// ReleaseTiles @ 146e6fc40

void __thiscall URecastNavMeshDataChunk::ReleaseTiles(URecastNavMeshDataChunk *this)

{
  int *piVar1;
  int iVar2;
  FRecastTileData *pFVar3;
  
  iVar2 = (this->Tiles).ArrayNum;
  piVar1 = &(this->Tiles).ArrayMax;
  pFVar3 = (FRecastTileData *)(this->Tiles).AllocatorInstance.Data;
  if (-1 < (this->Tiles).ArrayMax) {
    DestructItems<FRecastTileData,int>(pFVar3,iVar2);
    (this->Tiles).ArrayNum = 0;
    return;
  }
  DestructItems<FRecastTileData,int>(pFVar3,iVar2);
  (this->Tiles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->Tiles).AllocatorInstance,0,piVar1);
  }
  return;
}

// Serialize @ 146e715b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URecastNavMeshDataChunk::Serialize(URecastNavMeshDataChunk *this,FArchive *param_1)

{
  longlong *plVar1;
  ulong64 uVar2;
  longlong lVar3;
  FString *pFVar4;
  longlong lVar5;
  FStaticBasicLogRecord *pFVar6;
  uint local_res10 [2];
  ulong64 local_res18;
  FString local_28;
  
  UObject::Serialize((UObject *)this,param_1);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0x1b;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res18 = 0;
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res18);
    }
  }
  else {
    local_res18 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  uVar2 = local_res18;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) {
      return;
    }
    SerializeRecastData(this,param_1,local_res10[0]);
    lVar5 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    local_res18 = lVar5 - lVar3;
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar3);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res18,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_res18);
      }
    }
    else {
      local_res18 = *(ulong64 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    goto LAB_146e717e7;
  }
  if ((int)local_res10[0] < 0x14) {
    if (2 < (byte)LogNavigation._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
      pFVar6 = &::LOG_Static;
LAB_146e716cd:
      UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogNavigation);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((int)local_res10[0] < 0x1c) {
    if (4 < (longlong)local_res18) {
      SerializeRecastData(this,param_1,local_res10[0]);
      return;
    }
  }
  else if (2 < (byte)LogNavigation._0_1_) {
    pFVar4 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
    if ((pFVar4->Data).ArrayNum == 0) {
      pFVar6 = &::LOG_Static;
    }
    else {
      pFVar6 = &::LOG_Static;
    }
    goto LAB_146e716cd;
  }
  lVar5 = uVar2 + lVar3;
LAB_146e717e7:
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar5);
  return;
}

// Serialize @ 146e71810

void __thiscall
URecastNavMeshDataChunk::Serialize(URecastNavMeshDataChunk *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeRecastData @ 146e71840

void __thiscall
URecastNavMeshDataChunk::SerializeRecastData
          (URecastNavMeshDataChunk *this,FArchive *param_1,int param_2)

{
  TArray<FRecastTileData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint uVar7;
  FRawData FVar8;
  FRawData FVar9;
  bool bVar10;
  int iVar11;
  FRawData *pFVar12;
  FRawData *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res20 [2];
  int local_b8 [2];
  FRawData local_b0;
  FRawData local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint local_84;
  TSharedPtr<FRecastTileData::FRawData,1> local_80;
  int local_70;
  TSharedPtr<FRecastTileData::FRawData,1> local_68;
  FScriptContainerElement local_58;
  TRawPtrProxy<FRecastTileData::FRawData> local_48;
  TRawPtrProxy<FRecastTileData::FRawData> local_40;
  
  local_res10[0] = (this->Tiles).ArrayNum;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar7 = local_res10[0];
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      pFVar14 = (this->Tiles).AllocatorInstance.Data;
      iVar16 = (this->Tiles).ArrayNum;
      pFVar15 = pFVar14 + 0x14;
      pFVar3 = pFVar14 + (longlong)iVar16 * 0x48;
      while( true ) {
        if ((this->Tiles).ArrayNum != iVar16) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FRecastTileData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar14 == pFVar3) break;
        if (*(longlong *)(pFVar15 + 4) != 0) {
          puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
          if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar15,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar15);
            }
          }
          else {
            *(undefined4 *)pFVar15 = *puVar5;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          if ((*(longlong *)(pFVar15 + 4) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FPImplRecastNavMesh::SerializeRecastMeshTile
                    (param_1,param_2,*(uchar ***)(pFVar15 + 4),(int *)pFVar15);
          if ((*(longlong *)(pFVar15 + 0x1c) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FPImplRecastNavMesh::SerializeCompressedTileCacheData
                    (param_1,param_2,*(uchar ***)(pFVar15 + 0x1c),(int *)(pFVar15 + 0x14));
        }
        pFVar14 = pFVar14 + 0x48;
        pFVar15 = pFVar15 + 0x48;
      }
    }
  }
  else {
    pTVar1 = &this->Tiles;
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    DestructItems<FRecastTileData,int>
              ((FRecastTileData *)(pTVar1->AllocatorInstance).Data,(this->Tiles).ArrayNum);
    piVar2 = &(this->Tiles).ArrayMax;
    (this->Tiles).ArrayNum = 0;
    if (*piVar2 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,uVar7,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar16 = 0;
    if (0 < (int)local_res10[0]) {
      do {
        plVar4 = *(longlong **)&param_1->field_0x8;
        local_res20[0] = 0;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          }
        }
        else {
          local_res20[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        local_b0.RawData = (uchar *)0x0;
        FPImplRecastNavMesh::SerializeRecastMeshTile
                  (param_1,param_2,&local_b0.RawData,(int *)local_res20);
        if (local_b0.RawData != (uchar *)0x0) {
          local_b8[0] = 0;
          local_a8[0].RawData = (uchar *)0x0;
          FPImplRecastNavMesh::SerializeCompressedTileCacheData
                    (param_1,param_2,&local_a8[0].RawData,local_b8);
          FVar9.RawData = local_a8[0].RawData;
          FVar8.RawData = local_b0.RawData;
          local_88 = 0;
          local_80.Object = (FRawData *)0x0;
          local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_58 = (FScriptContainerElement)0x0;
          local_84 = local_res20[0];
          local_98 = 0;
          uStack_90 = 0;
          local_70 = local_b8[0];
          local_68.Object = (FRawData *)0x0;
          local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_48.Object = ::operator_new(8);
          if (local_48.Object == (FRawData *)0x0) {
            local_48.Object = (FRawData *)0x0;
          }
          else {
            (local_48.Object)->RawData = FVar8.RawData;
          }
          pFVar13 = (FRawData *)0x0;
          TSharedPtr<FRecastTileData::FRawData,1>::operator=<FRecastTileData::FRawData>
                    (&local_80,&local_48);
          pFVar12 = ::operator_new(8);
          if (pFVar12 != (FRawData *)0x0) {
            pFVar12->RawData = FVar9.RawData;
            pFVar13 = pFVar12;
          }
          local_40.Object = pFVar13;
          TSharedPtr<FRecastTileData::FRawData,1>::operator=<FRecastTileData::FRawData>
                    (&local_68,&local_40);
          pFVar15 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < pFVar15 + (longlong)*piVar2 * 0x48)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (this->Tiles).ArrayNum;
          if (iVar11 == *piVar2) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->Tiles).ArrayNum = iVar11 + 1;
          pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x48;
          *(undefined4 *)pFVar15 = (undefined4)local_98;
          *(undefined4 *)(pFVar15 + 4) = local_98._4_4_;
          *(undefined4 *)(pFVar15 + 8) = (undefined4)uStack_90;
          *(undefined4 *)(pFVar15 + 0xc) = uStack_90._4_4_;
          *(undefined4 *)(pFVar15 + 0x10) = local_88;
          *(uint *)(pFVar15 + 0x14) = local_84;
          *(FRawData **)(pFVar15 + 0x18) = local_80.Object;
          *(TReferenceControllerBase<1> **)(pFVar15 + 0x20) =
               local_80.SharedReferenceCount.ReferenceController;
          if (local_80.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          *(int *)(pFVar15 + 0x28) = local_70;
          *(FRawData **)(pFVar15 + 0x30) = local_68.Object;
          *(TReferenceControllerBase<1> **)(pFVar15 + 0x38) =
               local_68.SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pFVar15[0x40] = local_58;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < (int)local_res10[0]);
    }
  }
  return;
}

// StaticRegisterNativesURecastNavMeshDataChunk @ 146e73c60

void __cdecl URecastNavMeshDataChunk::StaticRegisterNativesURecastNavMeshDataChunk(void)

{
  return;
}

