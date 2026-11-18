// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// FShaderUsageVisualizer @ 145def4d0

FShaderUsageVisualizer * __thiscall
FShaderUsageVisualizer::FShaderUsageVisualizer(FShaderUsageVisualizer *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&(this->ExplicitlyPreloadedShaders).Elements = 0;
  *(undefined8 *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x30 = 0xffffffff;
  (this->ExplicitlyPreloadedShaders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExplicitlyPreloadedShaders).HashSize = 0;
  *(undefined8 *)&(this->PreloadedShaders).Elements = 0;
  *(undefined8 *)&(this->PreloadedShaders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreloadedShaders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreloadedShaders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreloadedShaders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreloadedShaders).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PreloadedShaders).Elements.field_0x30 = 0xffffffff;
  (this->PreloadedShaders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreloadedShaders).HashSize = 0;
  *(undefined8 *)&(this->DecompressedShaders).Elements = 0;
  *(undefined8 *)&(this->DecompressedShaders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DecompressedShaders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DecompressedShaders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DecompressedShaders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DecompressedShaders).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DecompressedShaders).Elements.field_0x30 = 0xffffffff;
  (this->DecompressedShaders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DecompressedShaders).HashSize = 0;
  *(undefined8 *)&(this->CreatedShaders).Elements = 0;
  *(undefined8 *)&(this->CreatedShaders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CreatedShaders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CreatedShaders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CreatedShaders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CreatedShaders).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CreatedShaders).Elements.field_0x30 = 0xffffffff;
  (this->CreatedShaders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CreatedShaders).HashSize = 0;
  return this;
}

// ~FShaderUsageVisualizer @ 145df1f70

void __thiscall FShaderUsageVisualizer::~FShaderUsageVisualizer(FShaderUsageVisualizer *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->CreatedShaders).HashSize = 0;
  FVar1 = (this->CreatedShaders).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CreatedShaders).Elements);
  (this->DecompressedShaders).HashSize = 0;
  FVar1 = (this->DecompressedShaders).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DecompressedShaders).Elements);
  (this->PreloadedShaders).HashSize = 0;
  FVar1 = (this->PreloadedShaders).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreloadedShaders).Elements);
  (this->ExplicitlyPreloadedShaders).HashSize = 0;
  FVar1 = (this->ExplicitlyPreloadedShaders).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExplicitlyPreloadedShaders).Elements);
                    /* WARNING: Could not recover jumptable at 0x000145df2019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Initialize @ 145e18240

void __thiscall FShaderUsageVisualizer::Initialize(FShaderUsageVisualizer *this,int param_1)

{
  if (this != (FShaderUsageVisualizer *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    this->NumShaders = param_1;
                    /* WARNING: Could not recover jumptable at 0x000145e1826a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SaveShaderUsageBitmap @ 145e23610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderUsageVisualizer::SaveShaderUsageBitmap
          (FShaderUsageVisualizer *this,FString *param_1,EShaderPlatform param_2)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  FName *pFVar14;
  IModuleInterface *pIVar15;
  FDateTime this_00;
  FString *pFVar16;
  IFileManager *pIVar17;
  uint uVar18;
  longlong lVar19;
  ForElementType<FSetElementId> FVar20;
  ForAnyElementType FVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined1 *puVar26;
  uint *puVar27;
  undefined1 local_res20 [8];
  ulonglong in_stack_fffffffffffffd10;
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6 [2];
  undefined4 local_2d4;
  uint local_2d0;
  ForAnyElementType local_2c8;
  uint local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2a8;
  int iStack_2a0;
  uint uStack_29c;
  undefined1 *local_298;
  undefined4 uStack_290;
  int iStack_28c;
  int local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  ulonglong local_278;
  longlong *local_270;
  TReferenceControllerBase<1> *local_268;
  int local_260;
  FString local_258;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  FString local_228;
  FString local_218;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TStringView<wchar_t> local_148;
  wchar_t *local_138;
  undefined4 local_130;
  TStringView<wchar_t> local_128;
  FScriptContainerElement *local_118;
  int local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_e0 [2];
  undefined4 local_a4;
  undefined4 local_84;
  undefined4 local_64;
  undefined4 local_44;
  
  if ((GShaderCodeLibraryVisualizeShaderUsage != 0) && (this->NumShaders != 0)) {
    FModuleManager::Get();
    pFVar14 = ::FName::FName(&local_108,L"ImageWrapper");
    pIVar15 = FModuleManager::GetModulePtr_Internal(*pFVar14);
    if (pIVar15 == (IModuleInterface *)0x0) {
      if (2 < (byte)LogShaderLibrary._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
        return;
      }
    }
    else {
      (**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,&local_270,0,0);
      if (local_270 == (longlong *)0x0) {
        if (2 < (byte)LogShaderLibrary._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
        }
      }
      else {
        if (4 < (byte)LogShaderLibrary._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
        }
        iVar23 = 0;
        local_2c8.Data = (FScriptContainerElement *)0x0;
        local_2c0 = 0;
        local_2bc = 0;
        local_260 = (int)SQRT((float)this->NumShaders) + 1;
        uVar25 = local_260 * local_260;
        if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
        }
        if (0 < (int)uVar25) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar25,&local_2c8,0,(int *)&local_2bc);
        }
        iVar24 = this->NumShaders;
        local_2d4 = 0xff808080;
        local_2b8 = 0xffc0c0c0;
        local_2d0 = 0xff00ff00;
        local_2b4 = 0xff0000ff;
        local_2b0 = 0xffff0000;
        local_2ac = 0xffffffff;
        iVar22 = iVar23;
        if (0 < iVar24) {
          do {
            if ((local_2c8.Data <= (FScriptContainerElement *)&local_2d4) &&
               ((FScriptContainerElement *)&local_2d4 <
                local_2c8.Data + (longlong)(int)local_2bc * 4)) {
              in_stack_fffffffffffffd10 = (ulonglong)(int)local_2c0;
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (local_2c0 == local_2bc) {
              local_2c0 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_2c8,(int *)&local_2bc);
            }
            uVar18 = local_2c0 + 1;
            iVar22 = iVar22 + 1;
            *(undefined4 *)(local_2c8.Data + (longlong)(int)local_2c0 * 4) = local_2d4;
            iVar24 = this->NumShaders;
            local_2c0 = uVar18;
          } while (iVar22 < iVar24);
        }
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar25 - iVar24,&local_2c8,(int *)&local_2c0,(int *)&local_2bc);
        memset(local_2c8.Data + (longlong)iVar22 * 4,0,(longlong)(int)(uVar25 - iVar24) << 2);
        if ((local_2c0 != uVar25) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderUsageBitmap.Num() == ImageDimension * ImageDimension",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                                ,0x178,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)this);
        puVar1 = &(this->PreloadedShaders).Elements.field_0x10;
        iVar24 = *(int *)&(this->PreloadedShaders).Elements.field_0x28;
        pTVar2 = &this->PreloadedShaders;
        local_278 = 1;
        local_288 = 0;
        uStack_29c = 1;
        iStack_28c = local_288;
        iStack_2a0 = iVar23;
        if (iVar24 != 0) {
          puVar27 = *(uint **)&(this->PreloadedShaders).Elements.field_0x20;
          if (puVar27 == (uint *)0x0) {
            puVar27 = (uint *)puVar1;
          }
          uStack_29c = *puVar27;
          local_288 = 0;
          while (uStack_29c == 0) {
            lVar19 = (longlong)iStack_2a0;
            local_288 = local_288 + 0x20;
            iStack_2a0 = iStack_2a0 + 1;
            uStack_29c = 1;
            iStack_28c = iVar24;
            if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a0)
            goto LAB_145e2397d;
            uStack_29c = puVar27[lVar19 + 1];
          }
          uStack_29c = -uStack_29c & uStack_29c;
          uVar3 = (ulonglong)uStack_29c * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_248 = (int)lVar19;
          iStack_28c = local_288 + -1 + local_248;
          if (iVar24 < iStack_28c) {
            iStack_28c = iVar24;
          }
        }
LAB_145e2397d:
        uVar25 = *(uint *)&(this->PreloadedShaders).Elements.field_0x28;
        uStack_284 = local_a4;
        uVar18 = uVar25 & 0xffffffe0;
        iStack_280 = *(int *)&(this->PreloadedShaders).Elements.field_0x8 -
                     *(int *)&(this->PreloadedShaders).Elements.field_0x34;
        TStack_1d0._padding_ = CONCAT44(uStack_29c,iStack_2a0);
        uStack_290 = 0xffffffff;
        TStack_1d0.CurrentBitIndex = iStack_28c;
        TStack_1d0.UnvisitedBitMask = 0xffffffff;
        iVar23 = (int)uVar25 >> 5;
        TStack_1d0._28_4_ = local_a4;
        TStack_1d0.BaseBitIndex = local_288;
        uStack_1b0 = CONCAT44(uStack_27c,iStack_280);
        local_2a8 = pTVar2;
        local_298 = puVar1;
        local_1d8 = pTVar2;
        TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar25 < 0) || (iVar24 < (int)uVar25)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = local_2b8;
        uVar13 = *(uint *)&(this->PreloadedShaders).Elements.field_0x28;
        if (uVar25 != uVar13) {
          puVar26 = *(undefined1 **)&(this->PreloadedShaders).Elements.field_0x20;
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = puVar1;
          }
          uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar23 * 4);
          while (uVar25 == 0) {
            lVar19 = (longlong)iVar23;
            uVar18 = uVar18 + 0x20;
            iVar23 = iVar23 + 1;
            uVar25 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
            goto LAB_145e23a91;
            uVar25 = *(uint *)(puVar26 + lVar19 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_244 = (int)lVar19;
          uVar25 = local_244 + -1 + uVar18;
          if ((int)uVar13 < (int)uVar25) {
            uVar25 = uVar13;
          }
        }
LAB_145e23a91:
        while( true ) {
          pTVar10 = local_1d8;
          if (*(int *)&(local_1d8->Elements).field_0x8 - *(int *)&(local_1d8->Elements).field_0x34
              != (int)uStack_1b0) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_1d0.CurrentBitIndex == uVar25) &&
              (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar10 == pTVar2)) break;
          uVar18 = *(uint *)(*(longlong *)&pTVar10->Elements +
                            (longlong)TStack_1d0.CurrentBitIndex * 0xc);
          uVar13 = 0;
          if ((int)uVar18 < (int)local_2c0) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)(local_2c8.Data + (longlong)(int)uVar18 * 4) = uVar8;
          TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
        }
        iVar23 = *(int *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x28;
        puVar1 = &(this->ExplicitlyPreloadedShaders).Elements.field_0x10;
        pTVar2 = &this->ExplicitlyPreloadedShaders;
        iStack_2a0 = 0;
        local_288 = 0;
        uStack_29c = (uint)local_278;
        iStack_28c = 0;
        if (iVar23 != 0) {
          puVar27 = *(uint **)&(this->ExplicitlyPreloadedShaders).Elements.field_0x20;
          if (puVar27 == (uint *)0x0) {
            puVar27 = (uint *)puVar1;
          }
          uVar25 = *puVar27;
          while (uVar25 == 0) {
            lVar19 = (longlong)iStack_2a0;
            local_288 = local_288 + 0x20;
            iStack_2a0 = iStack_2a0 + 1;
            iStack_28c = iVar23;
            if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a0)
            goto LAB_145e23bbd;
            uVar25 = puVar27[lVar19 + 1];
          }
          uStack_29c = -uVar25 & uVar25;
          uVar3 = (ulonglong)uStack_29c * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_240 = (int)lVar19;
          iStack_28c = local_240 + -1 + local_288;
          if (iVar23 < iStack_28c) {
            iStack_28c = iVar23;
          }
        }
LAB_145e23bbd:
        uVar25 = *(uint *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x28;
        uStack_284 = local_84;
        uVar18 = uVar25 & 0xffffffe0;
        iStack_280 = *(int *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x8 -
                     *(int *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x34;
        uStack_290 = 0xffffffff;
        TStack_1a0._padding_ = CONCAT44(uStack_29c,iStack_2a0);
        TStack_1a0.CurrentBitIndex = iStack_28c;
        TStack_1a0.UnvisitedBitMask = 0xffffffff;
        iVar24 = (int)uVar25 >> 5;
        TStack_1a0._28_4_ = local_84;
        TStack_1a0.BaseBitIndex = local_288;
        uStack_180 = CONCAT44(uStack_27c,iStack_280);
        local_2a8 = pTVar2;
        local_298 = puVar1;
        local_1a8 = pTVar2;
        TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar25 < 0) || (iVar23 < (int)uVar25)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar7 = local_2d0;
        uVar13 = *(uint *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x28;
        if (uVar25 != uVar13) {
          puVar26 = *(undefined1 **)&(this->ExplicitlyPreloadedShaders).Elements.field_0x20;
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = puVar1;
          }
          uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar24 * 4);
          while (uVar25 == 0) {
            lVar19 = (longlong)iVar24;
            uVar18 = uVar18 + 0x20;
            iVar24 = iVar24 + 1;
            uVar25 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_145e23cc3;
            uVar25 = *(uint *)(puVar26 + lVar19 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_23c = (int)lVar19;
          uVar25 = local_23c + -1 + uVar18;
          if ((int)uVar13 < (int)uVar25) {
            uVar25 = uVar13;
          }
        }
LAB_145e23cc3:
        while( true ) {
          pTVar10 = local_1a8;
          if (*(int *)&(local_1a8->Elements).field_0x8 - *(int *)&(local_1a8->Elements).field_0x34
              != (int)uStack_180) {
            local_2d8 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
          }
          if (((TStack_1a0.CurrentBitIndex == uVar25) &&
              (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar10 == pTVar2)) break;
          uVar18 = *(uint *)(*(longlong *)&pTVar10->Elements +
                            (longlong)TStack_1a0.CurrentBitIndex * 0xc);
          uVar13 = 0;
          if ((int)uVar18 < (int)local_2c0) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(local_2c8.Data + (longlong)(int)uVar18 * 4) = uVar7;
          TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
        }
        puVar1 = &(this->DecompressedShaders).Elements.field_0x10;
        iVar23 = *(int *)&(this->DecompressedShaders).Elements.field_0x28;
        local_2a8 = &this->DecompressedShaders;
        iStack_2a0 = 0;
        local_288 = 0;
        uStack_29c = (uint)local_278;
        iStack_28c = 0;
        if (iVar23 != 0) {
          puVar27 = *(uint **)&(this->DecompressedShaders).Elements.field_0x20;
          if (puVar27 == (uint *)0x0) {
            puVar27 = (uint *)puVar1;
          }
          uVar25 = *puVar27;
          while (uVar25 == 0) {
            lVar19 = (longlong)iStack_2a0;
            local_288 = local_288 + 0x20;
            iStack_2a0 = iStack_2a0 + 1;
            iStack_28c = iVar23;
            if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a0)
            goto LAB_145e23dfd;
            uVar25 = puVar27[lVar19 + 1];
          }
          uStack_29c = -uVar25 & uVar25;
          uVar3 = (ulonglong)uStack_29c * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_238 = (int)lVar19;
          iStack_28c = local_238 + -1 + local_288;
          if (iVar23 < iStack_28c) {
            iStack_28c = iVar23;
          }
        }
LAB_145e23dfd:
        uVar25 = *(uint *)&(this->DecompressedShaders).Elements.field_0x28;
        uStack_284 = local_64;
        uVar18 = uVar25 & 0xffffffe0;
        iStack_280 = *(int *)&(this->DecompressedShaders).Elements.field_0x8 -
                     *(int *)&(this->DecompressedShaders).Elements.field_0x34;
        TStack_170._padding_ = CONCAT44(uStack_29c,iStack_2a0);
        uStack_290 = 0xffffffff;
        TStack_170.CurrentBitIndex = iStack_28c;
        TStack_170.UnvisitedBitMask = 0xffffffff;
        iVar24 = (int)uVar25 >> 5;
        TStack_170._28_4_ = local_64;
        TStack_170.BaseBitIndex = local_288;
        uStack_150 = CONCAT44(uStack_27c,iStack_280);
        local_298 = puVar1;
        local_178 = local_2a8;
        TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar25 < 0) || (iVar23 < (int)uVar25)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = local_2b0;
        uVar8 = local_2b4;
        uVar13 = *(uint *)&(this->DecompressedShaders).Elements.field_0x28;
        if (uVar25 != uVar13) {
          puVar26 = *(undefined1 **)&(this->DecompressedShaders).Elements.field_0x20;
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = puVar1;
          }
          uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar24 * 4);
          while (uVar25 == 0) {
            lVar19 = (longlong)iVar24;
            uVar18 = uVar18 + 0x20;
            iVar24 = iVar24 + 1;
            uVar25 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_145e23f20;
            uVar25 = *(uint *)(puVar26 + lVar19 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_234 = (int)lVar19;
          uVar25 = (uVar18 - 1) + local_234;
          if ((int)uVar13 < (int)uVar25) {
            uVar25 = uVar13;
          }
        }
LAB_145e23f20:
        while( true ) {
          pTVar2 = local_178;
          if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34
              != (int)uStack_150) {
            local_2d7 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
          }
          if (((TStack_170.CurrentBitIndex == uVar25) &&
              (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar2 == &this->DecompressedShaders)) break;
          uVar18 = *(uint *)(*(longlong *)&pTVar2->Elements +
                            (longlong)TStack_170.CurrentBitIndex * 0xc);
          if (*(int *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x8 !=
              *(int *)&(this->ExplicitlyPreloadedShaders).Elements.field_0x34) {
            FVar4 = (this->ExplicitlyPreloadedShaders).Hash.SecondaryData;
            FVar20 = (ForElementType<FSetElementId>)&(this->ExplicitlyPreloadedShaders).Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar20 = FVar4;
            }
            iVar23 = *(int *)((longlong)FVar20 +
                             (ulonglong)((this->ExplicitlyPreloadedShaders).HashSize - 1U & uVar18)
                             * 4);
            if (iVar23 != -1) {
              lVar19 = *(longlong *)&(this->ExplicitlyPreloadedShaders).Elements;
              do {
                if (*(uint *)(lVar19 + (longlong)iVar23 * 0xc) == uVar18) goto LAB_145e23fbc;
                iVar23 = *(int *)(lVar19 + 4 + (longlong)iVar23 * 0xc);
              } while (iVar23 != -1);
            }
          }
          iVar23 = -1;
LAB_145e23fbc:
          uVar6 = uVar9;
          if (iVar23 != -1) {
            uVar6 = uVar8;
          }
          uVar13 = 0;
          if ((int)uVar18 < (int)local_2c0) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)(local_2c8.Data + (longlong)(int)uVar18 * 4) = uVar6;
          TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
        }
        puVar1 = &(this->CreatedShaders).Elements.field_0x10;
        iStack_2a0 = 0;
        iVar23 = *(int *)&(this->CreatedShaders).Elements.field_0x28;
        pTVar2 = &this->CreatedShaders;
        local_288 = 0;
        iStack_28c = 0;
        if (iVar23 != 0) {
          puVar27 = *(uint **)&(this->CreatedShaders).Elements.field_0x20;
          if (puVar27 == (uint *)0x0) {
            puVar27 = (uint *)puVar1;
          }
          uVar25 = *puVar27;
          while (uVar25 == 0) {
            lVar19 = (longlong)iStack_2a0;
            local_288 = local_288 + 0x20;
            iStack_2a0 = iStack_2a0 + 1;
            iStack_28c = iVar23;
            if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a0)
            goto LAB_145e240bf;
            uVar25 = puVar27[lVar19 + 1];
          }
          local_278 = (ulonglong)(-uVar25 & uVar25);
          uVar3 = local_278 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_230 = (int)lVar19;
          iStack_28c = local_288 + -1 + local_230;
          if (iVar23 < iStack_28c) {
            iStack_28c = iVar23;
          }
        }
LAB_145e240bf:
        uVar25 = *(uint *)&(this->CreatedShaders).Elements.field_0x28;
        uStack_29c = (uint)local_278;
        uVar18 = uVar25 & 0xffffffe0;
        uStack_284 = local_44;
        iStack_280 = *(int *)&(this->CreatedShaders).Elements.field_0x8 -
                     *(int *)&(this->CreatedShaders).Elements.field_0x34;
        uStack_290 = 0xffffffff;
        local_2d0 = -1 << ((byte)uVar25 & 0x1f);
        TStack_200._padding_ = CONCAT44(uStack_29c,iStack_2a0);
        TStack_200.CurrentBitIndex = iStack_28c;
        TStack_200.UnvisitedBitMask = 0xffffffff;
        iVar24 = (int)uVar25 >> 5;
        TStack_200._28_4_ = local_44;
        TStack_200.BaseBitIndex = local_288;
        uStack_1e0 = CONCAT44(uStack_27c,iStack_280);
        local_2a8 = pTVar2;
        local_298 = puVar1;
        local_208 = pTVar2;
        TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar25 < 0) || (iVar23 < (int)uVar25)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = local_2ac;
        uVar13 = *(uint *)&(this->CreatedShaders).Elements.field_0x28;
        if (uVar25 != uVar13) {
          puVar26 = *(undefined1 **)&(this->CreatedShaders).Elements.field_0x20;
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = puVar1;
          }
          uVar25 = local_2d0 & *(uint *)(puVar26 + (longlong)iVar24 * 4);
          while (uVar25 == 0) {
            lVar19 = (longlong)iVar24;
            uVar18 = uVar18 + 0x20;
            iVar24 = iVar24 + 1;
            uVar25 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_145e241f0;
            uVar25 = *(uint *)(puVar26 + lVar19 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_22c = (int)lVar19;
          uVar25 = local_22c + -1 + uVar18;
          if ((int)uVar13 < (int)uVar25) {
            uVar25 = uVar13;
          }
        }
LAB_145e241f0:
        while( true ) {
          pTVar10 = local_208;
          if (*(int *)&(local_208->Elements).field_0x8 - *(int *)&(local_208->Elements).field_0x34
              != (int)uStack_1e0) {
            local_2d6[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d6);
          }
          if (((TStack_200.CurrentBitIndex == uVar25) &&
              (TStack_200.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar10 == pTVar2)) break;
          uVar18 = *(uint *)(*(longlong *)&pTVar10->Elements +
                            (longlong)TStack_200.CurrentBitIndex * 0xc);
          uVar13 = 0;
          if ((int)uVar18 < (int)local_2c0) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)(local_2c8.Data + (longlong)(int)uVar18 * 4) = uVar8;
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
        if ((local_270 == (longlong *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        cVar12 = (**(code **)(*local_270 + 8))
                           (local_270,local_2c8.Data,(longlong)(int)local_2c0 << 2,local_260,
                            local_260,1,8,in_stack_fffffffffffffd10 & 0xffffffff00000000);
        if (cVar12 == '\0') {
          if (2 < (byte)LogShaderLibrary._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
          }
        }
        else {
          if ((local_270 == (longlong *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(*local_270 + 0x20))(local_270,local_e0,100);
          this_00 = FDateTime::Now();
          FDateTime::ToString((FDateTime *)this_00.Ticks,&local_f0);
          ::LexToString(&local_100,param_2,true);
          ::FString::PrintfImpl(&local_218,L"%s_%s_RuntimeShaderUsage_%s.png");
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          pFVar16 = FPaths::ProjectSavedDir();
          local_130 = 9;
          local_148.DataPtr = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          iVar23 = (pFVar16->Data).ArrayNum;
          local_148.Size = iVar23 + -1;
          if (iVar23 == 0) {
            local_148.Size = 0;
          }
          local_138 = L"Profiling";
          FPaths::CombineInternal(&local_228,&local_148,2);
          local_128.DataPtr = (wchar_t *)local_228.Data.AllocatorInstance.Data;
          local_128.Size = local_228.Data.ArrayNum + -1;
          if (local_228.Data.ArrayNum == 0) {
            local_128.Size = 0;
          }
          local_118 = local_218.Data.AllocatorInstance.Data;
          local_110 = local_218.Data.ArrayNum + -1;
          if (local_218.Data.ArrayNum == 0) {
            local_110 = 0;
          }
          FPaths::CombineInternal(&local_258,&local_128,2);
          pIVar17 = IFileManager::Get();
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_258.Data.ArrayNum != 0) {
            FVar21.Data = local_258.Data.AllocatorInstance.Data;
          }
          bVar11 = FFileHelper::SaveArrayToFile(local_e0,(wchar_t *)FVar21.Data,pIVar17,0);
          if (bVar11) {
            if (4 < (byte)LogShaderLibrary._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary)
              ;
            }
          }
          else if (2 < (byte)LogShaderLibrary._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
          }
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_e0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0[0].AllocatorInstance.Data);
          }
        }
        if (local_2c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_268)
      ;
    }
  }
  return;
}

