// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Exec_Dev @ 14183ede0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FIniExec::Exec_Dev(FIniExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  undefined8 *_Dst;
  FConfigFileHierarchy *pFVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  longlong lVar9;
  FConfigCacheIni *this_00;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  FConfigBranch *pFVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  FName *pFVar17;
  IFileManager *pIVar18;
  FArchive *pFVar19;
  FString *pFVar20;
  FConfigCommandStream *pFVar21;
  FConfigSection *this_01;
  FConfigValue *pFVar22;
  byte *pbVar23;
  byte bVar24;
  ulonglong uVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  int iVar31;
  int iVar32;
  uint *puVar33;
  undefined1 *puVar34;
  bool bVar35;
  undefined1 auStackY_89a8 [32];
  wchar_t *local_8970;
  char local_8968;
  char local_8967;
  char local_8966;
  char local_8965;
  bool local_8964;
  int local_8960;
  undefined1 local_895c;
  undefined1 local_895b;
  undefined1 local_895a;
  undefined1 local_8959;
  undefined1 local_8958;
  undefined1 local_8957;
  undefined1 local_8956;
  undefined1 local_8955;
  undefined1 local_8954 [4];
  uint local_8950;
  int local_894c;
  int local_8948;
  int local_8944;
  FString local_8940;
  FString local_8930;
  int local_8920;
  undefined1 local_891c;
  undefined1 local_891b;
  undefined1 local_891a [2];
  FArchive *local_8918;
  FConfigFileHierarchy *local_8910;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8908;
  int local_88e8;
  undefined4 uStack_88e4;
  FString local_88e0;
  FConfigCommandStream *local_88d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88c8;
  undefined8 local_88a8;
  FConfigBranch *local_88a0;
  FConfigCommandStream *local_8898;
  undefined8 uStack_8890;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8888;
  uint uStack_8880;
  uint uStack_887c;
  int iStack_8878;
  undefined4 uStack_8874;
  int local_8870;
  undefined4 uStack_886c;
  FString local_8868;
  longlong local_8858;
  longlong local_8850;
  longlong local_8848;
  FConfigCommandStream *local_8840;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8838;
  undefined8 local_8818;
  uint local_8810;
  longlong local_8808;
  longlong local_8800;
  FConfigBranch *local_87f8;
  longlong local_87f0;
  longlong *local_87e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_87e0;
  undefined8 local_87c0;
  FString local_87b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_87a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_8798;
  FString local_8788;
  FString local_8778;
  undefined8 local_8768;
  TArray<FString,TSizedDefaultAllocator<32>_> local_8760;
  undefined8 local_8750;
  FName local_8748;
  undefined8 local_8740;
  code *local_8738;
  longlong local_8730;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8728;
  undefined8 local_8720;
  undefined8 uStack_8718;
  undefined8 local_8710;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> local_8708;
  FString local_86f8;
  FString local_86e8;
  FString local_86d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_86c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_86a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8688;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8668;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8648;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8628;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8608;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_85e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_85c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_85a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_8598;
  FString local_8588;
  int local_8578;
  FName local_8574;
  int local_856c;
  int local_8568;
  int local_8564;
  int local_8560;
  longlong *local_8558;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8550;
  undefined8 uStack_8530;
  FConfigFileHierarchy *local_8528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8520;
  int iStack_8500;
  undefined4 uStack_84fc;
  FConfigCommandStream *local_84f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_84f0;
  undefined8 uStack_84d0;
  FConfigCommandStream *local_84c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_84c0;
  undefined8 uStack_84a0;
  FConfigFileHierarchy *local_8498;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8490;
  int iStack_8470;
  undefined4 uStack_846c;
  undefined1 local_8468 [12];
  uint uStack_845c;
  TBitArray<FDefaultBitArrayAllocator> *local_8458;
  undefined8 uStack_8450;
  longlong local_8448;
  int iStack_8440;
  undefined4 uStack_843c;
  FConfigFileHierarchy *local_8438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8430;
  int iStack_8410;
  undefined4 uStack_840c;
  FDynamicLayerInfo local_8408;
  undefined1 local_83e8 [16];
  FString local_83d8;
  FString local_83c8;
  FString local_83b8;
  FString local_83a8;
  FString local_8398;
  FString local_8388;
  FString local_8378;
  FString local_8368;
  FString local_8358;
  FString local_8348;
  FString local_8338;
  TStringView<wchar_t> local_8328;
  wchar_t *local_8318;
  undefined4 local_8310;
  FName local_8308;
  FName local_8300;
  FName local_82f8;
  FName local_82f0;
  FName local_82e8;
  FString local_82e0;
  FString local_82d0;
  FString local_82c0;
  FString local_82b0;
  FConfigCommandStream *local_82a0;
  longlong lStack_8298;
  TBitArray<FDefaultBitArrayAllocator> *local_8290;
  undefined8 uStack_8288;
  int iStack_8284;
  undefined8 local_8280;
  undefined8 uStack_8278;
  FName local_8270;
  FName local_8268;
  FName local_8260;
  FName local_8258;
  FName local_8250;
  FConfigFileHierarchy *local_8248;
  longlong lStack_8240;
  TBitArray<FDefaultBitArrayAllocator> *local_8238;
  undefined8 uStack_8230;
  int iStack_822c;
  undefined8 local_8228;
  undefined8 uStack_8220;
  FString local_8218;
  FString local_8208;
  code *local_81f8 [2];
  undefined **local_81e8;
  code *local_81e0;
  undefined8 local_81d0;
  code *local_81c8 [2];
  undefined **local_81b8;
  code *local_81b0;
  undefined8 local_81a0;
  code *local_8198 [2];
  undefined **local_8188;
  code *local_8180;
  undefined8 local_8170;
  code *local_8168 [2];
  undefined **local_8158;
  code *local_8150;
  undefined8 local_8140;
  code *local_8138 [2];
  undefined **local_8128;
  FArchiveState *local_8120;
  undefined8 local_8110;
  TRangedForIterator local_8108;
  code *local_80d8 [5];
  undefined8 *local_80b0;
  code *local_80a8 [5];
  undefined8 *local_8080;
  FString local_8078;
  FString local_8068;
  TFunction<void___cdecl(FConfigModificationTracker_*)> local_8058;
  TFunction<void___cdecl(FConfigModificationTracker_*)> local_8028;
  TFunction<void___cdecl(FConfigModificationTracker_*)> local_7ff8;
  TFunction<void___cdecl(FConfigModificationTracker_*)> local_7fc8;
  FArchiveState local_7f98;
  undefined8 local_7f08;
  undefined8 local_7f00;
  FArchiveState local_7ef8;
  undefined8 local_7e68;
  undefined8 local_7e60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7e58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7e38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7e18;
  undefined4 local_7ddc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7dd8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7db8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7d98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7d78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7d58;
  undefined4 local_7d1c;
  FConfigBranch *local_7d18;
  undefined1 local_7d10 [2056];
  undefined1 local_7508 [32];
  undefined1 *local_74e8;
  uint local_74e0;
  undefined4 local_74dc;
  undefined4 local_74d8;
  int local_74d4;
  ForElementType<FSetElementId> local_74c8;
  int local_74c0;
  FName local_74b8;
  undefined1 local_74b0 [32];
  longlong local_7490;
  longlong local_7488;
  undefined8 uStack_7480;
  ForElementType<FSetElementId> local_7470;
  int local_7468;
  FName local_7458;
  undefined1 local_7450 [32];
  longlong local_7430;
  longlong local_7428;
  undefined8 uStack_7420;
  ForElementType<FSetElementId> local_7410;
  int local_7408;
  FArchiveState local_73f8;
  longlong local_7368;
  ulonglong local_7360;
  undefined1 local_7358 [32];
  undefined8 local_7338;
  int local_7330;
  undefined4 local_732c;
  undefined4 local_7328;
  int local_7324;
  void *local_7318;
  undefined4 local_7310;
  undefined1 local_7308 [32];
  uint *local_72e8;
  uint local_72e0;
  undefined4 local_72dc;
  undefined4 local_72d8;
  int local_72d4;
  void *local_72c8;
  undefined4 local_72c0;
  undefined1 local_72b8 [32];
  uint *local_7298;
  uint local_7290;
  undefined4 local_728c;
  undefined4 local_7288;
  int local_7284;
  void *local_7278;
  undefined4 local_7270;
  undefined1 local_7268 [16];
  int local_7258;
  TBitArray<FDefaultBitArrayAllocator> local_7250;
  int local_722c;
  undefined1 local_7188 [16];
  int local_7178;
  TBitArray<FDefaultBitArrayAllocator> local_7170;
  int local_714c;
  FConfigFile local_70a8;
  FConfigFile local_6fb8;
  FConfigCommandStream local_6ec8;
  FConfigFile local_6df8;
  FConfigContext local_6d08;
  FConfigCacheIni local_6b18;
  wchar_t local_2c68 [256];
  wchar_t local_2a68 [256];
  wchar_t local_2868 [256];
  wchar_t local_2668 [256];
  wchar_t local_2468 [256];
  wchar_t local_2268 [256];
  wchar_t local_2068 [256];
  wchar_t local_1e68 [256];
  wchar_t local_1c68 [256];
  wchar_t local_1a68 [256];
  wchar_t local_1868 [1024];
  wchar_t local_1068 [1024];
  wchar_t local_868 [1024];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_89a8;
  local_8970 = param_2;
  bVar10 = FParse::Command(&local_8970,L"CONFIG",true);
  if (!bVar10) {
    return bVar10;
  }
  bVar10 = FParse::Command(&local_8970,L"AddDyn",true);
  if (bVar10) {
    FConfigModificationTracker::FConfigModificationTracker((FConfigModificationTracker *)local_7188)
    ;
    bVar10 = FParse::Token(&local_8970,local_2268,0x100,true,L'\0');
    if ((bVar10) && (bVar10 = FParse::Token(&local_8970,local_1868,0x400,true,L'\0'), bVar10)) {
      ::FString::FString(&local_8338,local_2268);
      local_8740 = 0;
      pFVar15 = FConfigCacheIni::FindBranch(GConfig,(FName)0x0,&local_8338);
      if (local_8338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8338.Data.AllocatorInstance.Data);
      }
      if (pFVar15 != (FConfigBranch *)0x0) {
        ::FString::FString(&local_86f8,local_1868);
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_86f8.Data.ArrayNum != 0) {
          FVar28.Data = local_86f8.Data.AllocatorInstance.Data;
        }
        bVar10 = DoesConfigFileExistWrapper
                           ((wchar_t *)FVar28.Data,
                            (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                            (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                            (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
        if (bVar10) {
          ::FString::FString(&local_8408.Filename,&local_86f8);
          local_83e8._0_8_ = &local_8408;
          local_8408.Tag.ComparisonIndex.Value = 0;
          local_8408.Tag.Number = 0;
          local_83e8._8_8_ = local_83e8;
          local_8408.Priority = 0;
          TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>::
          TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>
                    (&local_8708,(initializer_list<FDynamicLayerInfo> *)local_83e8);
          FConfigBranch::AddDynamicLayersToHierarchy
                    (pFVar15,&local_8708,(FConfigModificationTracker *)local_7188,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,false);
          DestructItems<FDynamicLayerInfo,int>
                    ((FDynamicLayerInfo *)local_8708.AllocatorInstance.Data,local_8708.ArrayNum);
          if ((FDynamicLayerInfo *)local_8708.AllocatorInstance.Data != (FDynamicLayerInfo *)0x0) {
            FMemory::Free(local_8708.AllocatorInstance.Data);
          }
          if (local_8408.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8408.Filename.Data.AllocatorInstance.Data);
          }
        }
        if (local_86f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_86f8.Data.AllocatorInstance.Data);
        }
        FOutputDevice::Log(param_3,L"Modified sections:");
        local_86c8.Array = &local_7170;
        local_86c8._padding_._0_4_ = 0;
        local_86c8._padding_._4_4_ = 1;
        local_86c8.UnvisitedBitMask = 0xffffffff;
        local_86c8.CurrentBitIndex = 0;
        local_86c8.BaseBitIndex = 0;
        if (local_7170.NumBits != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_86c8);
        }
        TStack_8908._padding_ =
             CONCAT44(local_86c8._padding_._4_4_,(undefined4)local_86c8._padding_);
        local_8910 = (FConfigFileHierarchy *)(local_7188 + 8);
        TStack_8908._16_8_ = CONCAT44(local_86c8.CurrentBitIndex,local_86c8.UnvisitedBitMask);
        TStack_8908._24_8_ = CONCAT44(local_86c8._28_4_,local_86c8.BaseBitIndex);
        TStack_8908.Array = local_86c8.Array;
        local_88e8 = local_7178 - local_714c;
        TStack_8430.Array = local_86c8.Array;
        iStack_8410 = local_7178 - local_714c;
        uStack_840c = uStack_88e4;
        local_8438 = local_8910;
        TStack_8430._padding_ = TStack_8908._padding_;
        TStack_8430._16_8_ = TStack_8908._16_8_;
        TStack_8430._24_8_ = TStack_8908._24_8_;
        pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_7dd8,&local_7170,local_7170.NumBits);
        lVar9 = _UNK_150631d98;
        lVar26 = ___xmm_00000000ffffffff0000008000000000;
        local_8730 = pTVar16->_padding_;
        pTVar6 = pTVar16->Array;
        uStack_8718._0_4_ = pTVar16->BaseBitIndex;
        uStack_8718._4_4_ = *(undefined4 *)&pTVar16->field_0x1c;
        local_8720._4_4_ = (int)((ulonglong)*(FArchiveState **)&pTVar16->UnvisitedBitMask >> 0x20);
        iVar32 = local_8720._4_4_;
        pTStack_8728 = pTVar6;
        local_8720 = *(FArchiveState **)&pTVar16->UnvisitedBitMask;
        while( true ) {
          pFVar1 = local_8438;
          if ((int)local_8438->_padding_ - *(int *)((longlong)&local_8438->_padding_ + 4) !=
              iStack_8410) {
            `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_891b);
          }
          if (((TStack_8430.CurrentBitIndex == iVar32) && (TStack_8430.Array == pTVar6)) &&
             (pFVar1 == (FConfigFileHierarchy *)(local_7188 + 8))) break;
          lVar4 = pFVar1->_padding_;
          local_74b8 = *(FName *)((longlong)TStack_8430.CurrentBitIndex * 0x60 + lVar4);
          local_74b0._0_8_ = 0;
          local_74b0._8_8_ = 0;
          local_7490 = 0;
          local_7488 = lVar26;
          uStack_7480 = lVar9;
          local_7470 = (ForElementType<FSetElementId>)0x0;
          local_7468 = 0;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_74b0,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     ((longlong)TStack_8430.CurrentBitIndex * 0x60 + lVar4 + 8));
          ::FName::ToString(&local_74b8,&local_82c0);
          FOutputDevice::LogfImpl(param_3,L"  %s");
          if (local_82c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_82c0.Data.AllocatorInstance.Data);
          }
          local_85c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_74b0 + 0x10);
          local_85c8._padding_._0_4_ = 0;
          local_85c8._padding_._4_4_ = 1;
          local_85c8.UnvisitedBitMask = 0xffffffff;
          local_85c8.CurrentBitIndex = 0;
          local_85c8.BaseBitIndex = 0;
          iVar31 = 0;
          if ((int)local_7488 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_85c8);
            iVar31 = (int)local_7488;
          }
          TStack_8908._padding_ =
               CONCAT44(local_85c8._padding_._4_4_,(undefined4)local_85c8._padding_);
          local_8910 = (FConfigFileHierarchy *)local_74b0;
          TStack_8908._16_8_ = CONCAT44(local_85c8.CurrentBitIndex,local_85c8.UnvisitedBitMask);
          TStack_8908._24_8_ = CONCAT44(local_85c8._28_4_,local_85c8.BaseBitIndex);
          TStack_8908.Array = local_85c8.Array;
          local_88e8 = local_74b0._8_4_ - uStack_7480._4_4_;
          TStack_8520.Array = local_85c8.Array;
          iStack_8500 = local_74b0._8_4_ - uStack_7480._4_4_;
          uStack_84fc = uStack_88e4;
          local_8528 = local_8910;
          TStack_8520._padding_ = TStack_8908._padding_;
          TStack_8520._16_8_ = TStack_8908._16_8_;
          TStack_8520._24_8_ = TStack_8908._24_8_;
          pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_7e58,
                               (TBitArray<FDefaultBitArrayAllocator> *)(local_74b0 + 0x10),iVar31);
          local_8730 = pTVar16->_padding_;
          pTVar7 = pTVar16->Array;
          uStack_8718._0_4_ = pTVar16->BaseBitIndex;
          uStack_8718._4_4_ = *(undefined4 *)&pTVar16->field_0x1c;
          local_8720._4_4_ = (int)((ulonglong)*(FArchiveState **)&pTVar16->UnvisitedBitMask >> 0x20)
          ;
          iVar31 = local_8720._4_4_;
          pTStack_8728 = pTVar7;
          local_8720 = *(FArchiveState **)&pTVar16->UnvisitedBitMask;
          while( true ) {
            pFVar1 = local_8528;
            if ((int)local_8528->_padding_ - *(int *)((longlong)&local_8528->_padding_ + 4) !=
                iStack_8500) {
              `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_891a);
            }
            if (((TStack_8520.CurrentBitIndex == iVar31) && (TStack_8520.Array == pTVar7)) &&
               (pFVar1 == (FConfigFileHierarchy *)local_74b0)) break;
            FOutputDevice::LogfImpl(param_3,L"    %s");
            TStack_8520.UnvisitedBitMask =
                 TStack_8520.UnvisitedBitMask & ~TStack_8520._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8520);
          }
          local_7468 = 0;
          if (local_7470 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_7470);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_74b0);
          TStack_8430.UnvisitedBitMask = TStack_8430.UnvisitedBitMask & ~TStack_8430._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8430);
        }
      }
    }
    FConfigModificationTracker::~FConfigModificationTracker
              ((FConfigModificationTracker *)local_7188);
    return true;
  }
  bVar10 = FParse::Command(&local_8970,L"RemoveDyn",true);
  if (bVar10) {
    FConfigModificationTracker::FConfigModificationTracker((FConfigModificationTracker *)local_7268)
    ;
    bVar10 = FParse::Token(&local_8970,local_1a68,0x100,true,L'\0');
    if ((bVar10) && (bVar10 = FParse::Token(&local_8970,local_1068,0x400,true,L'\0'), bVar10)) {
      ::FString::FString(&local_83d8,local_1a68);
      local_8768 = 0;
      pFVar15 = FConfigCacheIni::FindBranch(GConfig,(FName)0x0,&local_83d8);
      if ((FName)local_83d8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_83d8.Data.AllocatorInstance.Data);
      }
      if (pFVar15 != (FConfigBranch *)0x0) {
        ::FString::FString(&local_83b8,local_1068);
        ::FString::FString(&local_83c8,&local_83b8);
        local_8760.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
                  (&local_8760,&local_83c8,1,0);
        FConfigBranch::RemoveDynamicLayersFromHierarchy
                  (pFVar15,&local_8760,(FConfigModificationTracker *)local_7268);
        DestructItems<FString,int>((FString *)local_8760.AllocatorInstance.Data,local_8760.ArrayNum)
        ;
        if (local_8760.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8760.AllocatorInstance.Data);
        }
        if (local_83c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_83c8.Data.AllocatorInstance.Data);
        }
        if (local_83b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_83b8.Data.AllocatorInstance.Data);
        }
        FOutputDevice::Log(param_3,L"Modified sections:");
        local_85e8.Array = &local_7250;
        local_85e8._padding_._0_4_ = 0;
        local_85e8._padding_._4_4_ = 1;
        local_85e8.UnvisitedBitMask = 0xffffffff;
        local_85e8.CurrentBitIndex = 0;
        local_85e8.BaseBitIndex = 0;
        if (local_7250.NumBits != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_85e8);
        }
        TStack_8908._padding_ =
             CONCAT44(local_85e8._padding_._4_4_,(undefined4)local_85e8._padding_);
        local_8910 = (FConfigFileHierarchy *)(local_7268 + 8);
        TStack_8908._16_8_ = CONCAT44(local_85e8.CurrentBitIndex,local_85e8.UnvisitedBitMask);
        TStack_8908._24_8_ = CONCAT44(local_85e8._28_4_,local_85e8.BaseBitIndex);
        TStack_8908.Array = local_85e8.Array;
        local_88e8 = local_7258 - local_722c;
        local_8458 = local_85e8.Array;
        iStack_8440 = local_7258 - local_722c;
        uStack_843c = uStack_88e4;
        local_8468._0_8_ = local_8910;
        unique0x100058a9 = TStack_8908._padding_;
        uStack_8450 = TStack_8908._16_8_;
        local_8448 = TStack_8908._24_8_;
        pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_7d58,&local_7250,local_7250.NumBits);
        local_8910 = (FConfigFileHierarchy *)(local_7268 + 8);
        TStack_8908._padding_ = pTVar16->_padding_;
        TStack_8908.Array = pTVar16->Array;
        TStack_8908.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
        TStack_8908.CurrentBitIndex = pTVar16->CurrentBitIndex;
        TStack_8908._24_8_ = *(undefined8 *)&pTVar16->BaseBitIndex;
        local_88e8 = local_7258 - local_722c;
        local_8108.InitialNum = local_7258 - local_722c;
        local_8108._44_4_ = uStack_88e4;
        local_8108._padding_ = (longlong)local_8910;
        local_8108._padding_ = TStack_8908._padding_;
        local_8108._padding_ = (longlong)TStack_8908.Array;
        local_8108._padding_ = TStack_8908._16_8_;
        local_8108._padding_ = TStack_8908._24_8_;
        bVar10 = TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_8468,&local_8108);
        lVar9 = _UNK_150631d98;
        lVar26 = ___xmm_00000000ffffffff0000008000000000;
        if (bVar10) {
          do {
            local_7458 = *(FName *)((longlong)uStack_8450._4_4_ * 0x60 +
                                   *(longlong *)local_8468._0_8_);
            local_7450._0_8_ = (FScriptContainerElement *)0x0;
            local_7450._8_8_ = 0;
            local_7430 = 0;
            local_7428 = lVar26;
            uStack_7420 = lVar9;
            local_7410 = (ForElementType<FSetElementId>)0x0;
            local_7408 = 0;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_7450,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       ((longlong)uStack_8450._4_4_ * 0x60 + *(longlong *)local_8468._0_8_ + 8));
            ::FName::ToString(&local_7458,&local_8218);
            FOutputDevice::LogfImpl(param_3,L"  %s");
            if (local_8218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8218.Data.AllocatorInstance.Data);
            }
            local_8608.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_7450 + 0x10);
            local_8608._padding_._0_4_ = 0;
            local_8608._padding_._4_4_ = 1;
            local_8608.UnvisitedBitMask = 0xffffffff;
            local_8608.CurrentBitIndex = 0;
            local_8608.BaseBitIndex = 0;
            iVar32 = 0;
            if ((int)local_7428 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8608);
              iVar32 = (int)local_7428;
            }
            TStack_8908._padding_ =
                 CONCAT44(local_8608._padding_._4_4_,(undefined4)local_8608._padding_);
            local_8910 = (FConfigFileHierarchy *)local_7450;
            TStack_8908._16_8_ = CONCAT44(local_8608.CurrentBitIndex,local_8608.UnvisitedBitMask);
            TStack_8908._24_8_ = CONCAT44(local_8608._28_4_,local_8608.BaseBitIndex);
            TStack_8908.Array = local_8608.Array;
            local_88e8 = local_7450._8_4_ - uStack_7420._4_4_;
            TStack_8490.Array = local_8608.Array;
            iStack_8470 = local_7450._8_4_ - uStack_7420._4_4_;
            uStack_846c = uStack_88e4;
            local_8498 = local_8910;
            TStack_8490._padding_ = TStack_8908._padding_;
            TStack_8490._16_8_ = TStack_8908._16_8_;
            TStack_8490._24_8_ = TStack_8908._24_8_;
            pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_7e38,
                                 (TBitArray<FDefaultBitArrayAllocator> *)(local_7450 + 0x10),iVar32)
            ;
            local_8730 = pTVar16->_padding_;
            pTVar6 = pTVar16->Array;
            uStack_8718._0_4_ = pTVar16->BaseBitIndex;
            uStack_8718._4_4_ = *(undefined4 *)&pTVar16->field_0x1c;
            local_8720._4_4_ =
                 (int)((ulonglong)*(FArchiveState **)&pTVar16->UnvisitedBitMask >> 0x20);
            iVar32 = local_8720._4_4_;
            pTStack_8728 = pTVar6;
            local_8720 = *(FArchiveState **)&pTVar16->UnvisitedBitMask;
            while( true ) {
              pFVar1 = local_8498;
              if ((int)local_8498->_padding_ - *(int *)((longlong)&local_8498->_padding_ + 4) !=
                  iStack_8470) {
                `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_891c);
              }
              if (((TStack_8490.CurrentBitIndex == iVar32) && (TStack_8490.Array == pTVar6)) &&
                 (pFVar1 == (FConfigFileHierarchy *)local_7450)) break;
              FOutputDevice::LogfImpl(param_3,L"    %s");
              TStack_8490.UnvisitedBitMask =
                   TStack_8490.UnvisitedBitMask & ~TStack_8490._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8490);
            }
            local_7408 = 0;
            if (local_7410 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_7410);
            }
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_7450);
            uStack_8450 = CONCAT44(uStack_8450._4_4_,(uint)uStack_8450 & ~uStack_845c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_8468 + 8));
            bVar10 = TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_8468,&local_8108);
          } while (bVar10);
        }
      }
    }
    FConfigModificationTracker::~FConfigModificationTracker
              ((FConfigModificationTracker *)local_7268);
    return true;
  }
  bVar10 = FParse::Command(&local_8970,L"AddTrackedDyn",true);
  pFVar19 = (FArchive *)0x0;
  if (((bVar10) && (bVar10 = FParse::Token(&local_8970,local_2068,0x100,true,L'\0'), bVar10)) &&
     (bVar10 = FParse::Token(&local_8970,local_868,0x400,true,L'\0'), bVar10)) {
    ::FString::FString(&local_83a8,local_2068);
    local_8750 = 0;
    local_7d18 = FConfigCacheIni::FindBranch(GConfig,(FName)0x0,&local_83a8);
    if (local_83a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_83a8.Data.AllocatorInstance.Data);
    }
    local_8058._0_8_ = 0;
    local_8058._40_8_ = 0;
    memcpy(local_7d10,local_868,0x800);
    local_80d8[0] = (code *)0x0;
    local_80b0 = FMemory::Malloc(0x810,8);
    _Dst = local_80b0 + 1;
    *local_80b0 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__CN___Exec_Dev_FIniExec__EEAA_NPEAVUWorld__PEB_WAEAVFOutputDevice___Z__0A__00_Function_Private_Core_UE__6B_
    ;
    memcpy(_Dst,&local_7d18,0x808);
    if (_Dst != (undefined8 *)0x0) {
      local_80d8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FIniExec::Exec_Dev'::__l45::<lambda_1>,void,FConfigModificationTracker_*>
           ::Call;
    }
    pFVar17 = ::FName::FName(&local_82e8,"TrackedDyn");
    UE::DynamicConfig::PerformDynamicConfig
              (*pFVar17,(TFunction<void___cdecl(FConfigModificationTracker_*)> *)local_80d8,
               &local_8058);
  }
  bVar10 = FParse::Command(&local_8970,L"RemoveTrackedDyn",true);
  if (bVar10) {
    local_8028._0_8_ = 0;
    local_81e0 = `FIniExec::Exec_Dev'::__l48::<lambda_2>::<lambda_invoker_cdecl>;
    local_8028._40_8_ = 0;
    local_81d0 = 0;
    local_81e8 = &
                 ___7__TFunction_OwnedObject_P6AXPEAVFConfigModificationTracker___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_81f8[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FConfigModificationTracker_*),void,FConfigModificationTracker_*>
         ::Call;
    pFVar17 = ::FName::FName(&local_82f0,"TrackedDyn");
    UE::DynamicConfig::PerformDynamicConfig
              (*pFVar17,(TFunction<void___cdecl(FConfigModificationTracker_*)> *)local_81f8,
               &local_8028);
  }
  bVar10 = FParse::Command(&local_8970,L"Diff",true);
  if (bVar10) {
    bVar10 = FParse::Token(&local_8970,local_2a68,0x100,true,L'\0');
    if (!bVar10) {
      return true;
    }
    ::FString::FString(&local_8398,local_2a68);
    pFVar17 = ::FName::FName(&local_82f8,local_2a68);
    pFVar15 = FConfigCacheIni::FindBranch(GConfig,*pFVar17,&local_8398);
    if (local_8398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8398.Data.AllocatorInstance.Data);
    }
    if (pFVar15 == (FConfigBranch *)0x0) {
      return true;
    }
    CalculateDiff(&local_6ec8,&pFVar15->FinalCombinedLayers,&pFVar15->InMemoryFile,&local_8068,
                  &local_8078);
    local_8788.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8788.Data.ArrayNum = 0;
    local_8788.Data.ArrayMax = 0;
    BuildOutputString<FConfigCommandStream>(&local_8788,&local_6ec8);
    FOutputDevice::LogfImpl(param_3,L"Disk -> InMemory Diff of %s:\n%s");
    if (local_8788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8788.Data.AllocatorInstance.Data);
    }
    FConfigCommandStream::~FConfigCommandStream(&local_6ec8);
    return true;
  }
  bVar10 = FParse::Command(&local_8970,L"Flush",true);
  if (bVar10) {
    bVar10 = FParse::Token(&local_8970,local_1e68,0x100,true,L'\0');
    if (bVar10) {
      ::FString::FString(&local_8388,local_1e68);
      FConfigCacheIni::Flush(GConfig,false,&local_8388);
    }
    else {
      ::FString::FString(&local_8378,L"");
      FConfigCacheIni::Flush(GConfig,false,&local_8378);
      local_8388.Data.AllocatorInstance.Data = local_8378.Data.AllocatorInstance.Data;
    }
    if (local_8388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8388.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FParse::Command(&local_8970,L"Unload",true);
  if ((bVar10) && (bVar10 = FParse::Token(&local_8970,local_1c68,0x100,true,L'\0'), bVar10)) {
    FConfigCacheIni::SafeUnloadBranch(GConfig,local_1c68);
  }
  bVar10 = FParse::Command(&local_8970,L"UnloadAll",true);
  if (bVar10) {
    FConfigCacheIni::GetFilenames(GConfig,&local_8798);
    iVar32 = local_8798.ArrayNum;
    pFVar30 = local_8798.AllocatorInstance.Data + (longlong)local_8798.ArrayNum * 0x10;
    FVar28.Data = local_8798.AllocatorInstance.Data;
    while( true ) {
      if (local_8798.ArrayNum != iVar32) {
        local_895c = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_895c);
      }
      if (FVar28.Data == pFVar30) break;
      if (*(int *)(FVar28.Data + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)FVar28.Data;
      }
      FConfigCacheIni::SafeUnloadBranch(GConfig,pwVar27);
      FVar28.Data = FVar28.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_8798.AllocatorInstance.Data,local_8798.ArrayNum);
    if (local_8798.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8798.AllocatorInstance.Data);
    }
  }
  bVar10 = FParse::Command(&local_8970,L"AddHotFix",true);
  if ((bVar10) && (bVar10 = FParse::Token(&local_8970,local_2868,0x100,true,L'\0'), bVar10)) {
    ::FString::FString(&local_8368,local_2868);
    FPaths::GetBaseFilename(&local_86e8,&local_8368,true);
    if (local_8368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8368.Data.AllocatorInstance.Data);
    }
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_86e8.Data.ArrayNum != 0) {
      FVar28.Data = local_86e8.Data.AllocatorInstance.Data;
    }
    pFVar17 = ::FName::FName(&local_8300,(wchar_t *)FVar28.Data);
    pFVar15 = FConfigCacheIni::FindBranch(GConfig,*pFVar17,&local_86e8);
    if (pFVar15 != (FConfigBranch *)0x0) {
      local_8778.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8778.Data.ArrayNum = 0;
      local_8778.Data.ArrayMax = 0;
      bVar10 = FFileHelper::LoadFileToString(&local_8778,local_2868,None,0);
      if (bVar10) {
        local_7ff8._0_8_ = 0;
        local_7ff8._40_8_ = 0;
        local_80a8[0] = (code *)0x0;
        local_8080 = FMemory::Malloc(0x20,8);
        *local_8080 = &
                      ___7__TFunction_OwnedObject_V<lambda_3>__FK___Exec_Dev_FIniExec__EEAA_NPEAVUWorld__PEB_WAEAVFOutputDevice___Z__0A__00_Function_Private_Core_UE__6B_
        ;
        local_8080[1] = pFVar15;
        local_8080[2] = local_2868;
        local_8080[3] = &local_8778;
        if (local_8080 + 1 != (undefined8 *)0x0) {
          local_80a8[0] =
               UE::Core::Private::Function::
               TFunctionRefCaller<`FIniExec::Exec_Dev'::__l90::<lambda_3>,void,FConfigModificationTracker_*>
               ::Call;
        }
        pFVar17 = ::FName::FName(&local_8308,"HotfixTest");
        UE::DynamicConfig::PerformDynamicConfig
                  (*pFVar17,(TFunction<void___cdecl(FConfigModificationTracker_*)> *)local_80a8,
                   &local_7ff8);
      }
      if (local_8778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8778.Data.AllocatorInstance.Data);
      }
    }
    if (local_86e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_86e8.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FParse::Command(&local_8970,L"RemoveHotFixes",true);
  if (bVar10) {
    local_7fc8._0_8_ = 0;
    local_81b0 = `FIniExec::Exec_Dev'::__l93::<lambda_4>::<lambda_invoker_cdecl>;
    local_7fc8._40_8_ = 0;
    local_81a0 = 0;
    local_81b8 = &
                 ___7__TFunction_OwnedObject_P6AXPEAVFConfigModificationTracker___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_81c8[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FConfigModificationTracker_*),void,FConfigModificationTracker_*>
         ::Call;
    pFVar17 = ::FName::FName(&local_8270,"HotfixTest");
    UE::DynamicConfig::PerformDynamicConfig
              (*pFVar17,(TFunction<void___cdecl(FConfigModificationTracker_*)> *)local_81c8,
               &local_7fc8);
  }
  bVar10 = FParse::Command(&local_8970,L"RemoveSection",true);
  if (bVar10) {
    bVar10 = FParse::Token(&local_8970,local_2c68,0x100,true,L'\0');
    if ((bVar10) &&
       (bVar10 = FParse::Token(&local_8970,local_2668,0x100,true,L'\0'), this_00 = GConfig, bVar10))
    {
      ::FString::FString(&local_8358,local_2c68);
      pFVar17 = ::FName::FName(&local_8250,local_2c68);
      pFVar15 = FConfigCacheIni::FindBranchWithNoReload(this_00,*pFVar17,&local_8358);
      if (local_8358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8358.Data.AllocatorInstance.Data);
      }
      if (pFVar15 == (FConfigBranch *)0x0) {
        bVar10 = false;
      }
      else {
        bVar10 = FConfigBranch::RemoveSection(pFVar15,local_2668);
      }
      pwVar27 = L"Successfully removed \'%s\' from layer(s) in %s";
      if (bVar10 == false) {
        pwVar27 = 
        L"Nothing was removed from %s (either branch wasn\'t found or the section \'%s\' wasn\'t)";
      }
      FOutputDevice::LogfImpl(param_3,pwVar27);
    }
    else {
      FOutputDevice::Log(param_3,L"Usage: config RemoveSection <BranchName> <Section>");
    }
  }
  bVar10 = FParse::Command(&local_8970,L"Timing",true);
  if (bVar10) {
    FOutputDevice::LogfImpl
              (param_3,L"INITIME : PrepareForLoad: %fms, PreformLoad: %fms, Shrink: %fms");
  }
  bVar10 = FParse::Command(&local_8970,L"Shrink",true);
  if ((bVar10) && (bVar10 = FParse::Token(&local_8970,local_2468,0x100,true,L'\0'), bVar10)) {
    ::FString::FString(&local_8348,local_2468);
    pFVar17 = ::FName::FName(&local_8258,local_2468);
    pFVar15 = FConfigCacheIni::FindBranch(GConfig,*pFVar17,&local_8348);
    if (local_8348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8348.Data.AllocatorInstance.Data);
    }
    if (pFVar15 != (FConfigBranch *)0x0) {
      local_8170 = 0;
      local_8188 = &
                   ___7__TFunction_OwnedObject_P6AXAEAVFConfigFile__AEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_8180 = `FConfigBranch::Shrink'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
      local_8198[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(FConfigFile_&,FString_const_&),void,FConfigFile_&,FString_const_&>
           ::Call;
      FConfigBranch::RunOnEachFile
                (pFVar15,(TFunction<void___cdecl(FConfigFile_&,FString_const_&)> *)local_8198);
      local_8140 = 0;
      local_8158 = &
                   ___7__TFunction_OwnedObject_P6AXAEAVFConfigCommandStream__AEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_8150 = `FConfigBranch::Shrink'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
      local_8168[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(FConfigCommandStream_&,FString_const_&),void,FConfigCommandStream_&,FString_const_&>
           ::Call;
      FConfigBranch::RunOnEachCommandStream
                (pFVar15,(TFunction<void___cdecl(FConfigCommandStream_&,FString_const_&)> *)
                         local_8168);
    }
  }
  bVar10 = FParse::Command(&local_8970,L"MemUsage",true);
  if (bVar10) {
    bVar10 = FParse::Param(local_8970,L"detailed");
    local_8930.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8930.Data.ArrayNum = 0;
    local_8930.Data.ArrayMax = 0;
    bVar11 = FParse::Value(local_8970,L"-csv=",&local_8930,true,(wchar_t **)0x0);
    if ((bVar11) || (bVar11 = FParse::Param(local_8970,L"csv"), bVar11)) {
      bVar11 = true;
      local_8960 = 10;
      bVar35 = true;
      FParse::Value(local_8970,L"Cutoff=",&local_8960);
      if (local_8930.Data.ArrayNum < 2) {
        pFVar20 = FPaths::ProjectLogDir(&local_8208);
        local_8310 = 0x12;
        local_8328.DataPtr = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        iVar32 = (pFVar20->Data).ArrayNum;
        local_8328.Size = iVar32 + -1;
        if (iVar32 == 0) {
          local_8328.Size = 0;
        }
        local_8318 = L"ConfigMemUsage.csv";
        FPaths::CombineInternal(&local_87b8,&local_8328,2);
        if (local_8930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8930.Data.AllocatorInstance.Data);
        }
        local_8930.Data.AllocatorInstance.Data = local_87b8.Data.AllocatorInstance.Data;
        local_8930.Data.ArrayNum = local_87b8.Data.ArrayNum;
        local_8930.Data.ArrayMax = local_87b8.Data.ArrayMax;
        local_87b8.Data.ArrayNum = 0;
        local_87b8.Data.ArrayMax = 0;
        local_87b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_8208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8208.Data.AllocatorInstance.Data);
        }
      }
      pIVar18 = IFileManager::Get();
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_8930.Data.ArrayNum != 0) {
        FVar28.Data = local_8930.Data.AllocatorInstance.Data;
      }
      pFVar19 = (FArchive *)(**(code **)((longlong)*pIVar18 + 0x20))(pIVar18,FVar28.Data,0x10);
      local_8918 = pFVar19;
      if (pFVar19 == (FArchive *)0x0) {
        FOutputDevice::LogfImpl(param_3,L"Unable to create CSV file for writing: \'%s\'");
        FVar28.Data = local_8930.Data.AllocatorInstance.Data;
        goto LAB_1418424fe;
      }
      FOutputDevice::LogfImpl(param_3,L"Dumping to CSV file: \'%s\'");
    }
    else {
      bVar11 = false;
      local_8960 = 10;
      bVar35 = false;
      FParse::Value(local_8970,L"Cutoff=",&local_8960);
      local_8918 = (FArchive *)0x0;
    }
    local_87f0 = 0;
    local_894c = 0;
    local_8808 = 0;
    local_8920 = 0;
    local_8800 = 0;
    local_8948 = 0;
    local_8858 = 0;
    local_8944 = 0;
    local_8850 = 0;
    local_8848 = 0;
    FConfigCacheIni::GetFilenames(GConfig,&local_87a8);
    uVar25 = (ulonglong)local_87a8.ArrayNum;
    local_88a0 = (FConfigBranch *)(local_87a8.AllocatorInstance.Data + uVar25 * 0x10);
    local_8810 = local_87a8.ArrayNum;
    FVar28.Data = local_87a8.AllocatorInstance.Data;
    while( true ) {
      local_87f8 = (FConfigBranch *)FVar28.Data;
      if (local_87a8.ArrayNum != (uint)uVar25) {
        local_895b = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_895b);
      }
      if ((FConfigBranch *)FVar28.Data == local_88a0) break;
      if (*(int *)&(((FConfigBranch *)FVar28.Data)->IniPath).Data.AllocatorInstance.Data == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)&((FConfigBranch *)FVar28.Data)->IniName;
      }
      pFVar17 = ::FName::FName(&local_8260,pwVar27);
      pFVar15 = FConfigCacheIni::FindBranchWithNoReload(GConfig,*pFVar17,(FString *)FVar28.Data);
      FArchiveState::FArchiveState(&local_73f8);
      local_73f8.ArIsCountingMemory = '\x01';
      local_73f8._padding_ = (longlong)&___7FDetailedConfigMemUsage__6B_;
      local_7368 = 0;
      local_7360 = 0;
      local_7358._0_8_ = 0;
      local_7358._8_8_ = 0;
      local_7338 = 0;
      local_7330 = 0;
      local_732c = 0x80;
      local_7328 = 0xffffffff;
      local_7324 = 0;
      local_7318 = (void *)0x0;
      local_7310 = 0;
      local_7308._0_8_ = 0;
      local_7308._8_8_ = 0;
      local_72e8 = (uint *)0x0;
      local_72e0 = 0;
      local_72dc = 0x80;
      local_72d8 = 0xffffffff;
      local_72d4 = 0;
      local_72c8 = (void *)0x0;
      local_72c0 = 0;
      local_72b8._0_8_ = 0;
      local_72b8._8_8_ = 0;
      local_7298 = (uint *)0x0;
      local_7290 = 0;
      local_728c = 0x80;
      local_7288 = 0xffffffff;
      local_7284 = 0;
      local_7278 = (void *)0x0;
      local_7270 = 0;
      ::operator<<((FArchive *)&local_73f8,pFVar15);
      if (bVar10) {
        local_8110 = 0;
        local_8128 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__4___0FDetailedConfigMemUsage__QEAA_PEAVFConfigBranch___N_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        local_8120 = &local_73f8;
        local_8138[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FDetailedConfigMemUsage::FDetailedConfigMemUsage'::__l5::<lambda_1>,void,FConfigFile_&,FString_const_&>
             ::Call;
        FConfigBranch::RunOnEachFile
                  (pFVar15,(TFunction<void___cdecl(FConfigFile_&,FString_const_&)> *)local_8138);
        local_8710 = 0;
        pTStack_8728 = (TBitArray<FDefaultBitArrayAllocator> *)
                       &
                       ___7__TFunction_OwnedObject_V<lambda_2>__4___0FDetailedConfigMemUsage__QEAA_PEAVFConfigBranch___N_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        local_8720 = &local_73f8;
        local_8738 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FDetailedConfigMemUsage::FDetailedConfigMemUsage'::__l5::<lambda_2>,void,FConfigCommandStream_&,FString_const_&>
                     ::Call;
        FConfigBranch::RunOnEachCommandStream
                  (pFVar15,(TFunction<void___cdecl(FConfigCommandStream_&,FString_const_&)> *)
                           &local_8738);
      }
      uVar25 = local_7360;
      local_87f0 = local_87f0 + local_7360;
      local_8848 = local_8848 + (local_7360 - local_7368);
      if (pFVar15->bIsSafeUnloaded == false) {
        iVar32 = FConfigFile::Num(&pFVar15->InMemoryFile);
        if (iVar32 == 1) {
          local_8948 = local_8948 + 1;
          local_8858 = local_8858 + uVar25;
        }
        else {
          iVar32 = FConfigFile::Num(&pFVar15->InMemoryFile);
          if (iVar32 == 0) {
            local_8944 = local_8944 + 1;
            local_8850 = local_8850 + uVar25;
          }
        }
      }
      else {
        local_8920 = local_8920 + 1;
        local_8800 = local_8800 + local_7360;
      }
      if (uVar25 < (ulonglong)(longlong)(local_8960 << 10)) {
        local_894c = local_894c + 1;
        local_8808 = local_8808 + uVar25;
      }
      else {
        FArchiveState::FArchiveState(&local_7ef8);
        local_7ef8.ArIsCountingMemory = '\x01';
        local_7ef8._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
        local_7e68 = 0;
        local_7e60 = 0;
        FArchiveState::FArchiveState(&local_7f98);
        local_7f98.ArIsCountingMemory = '\x01';
        local_7f98._padding_ = (longlong)&___7FArchiveCountConfigMem__6B_;
        local_7f08 = 0;
        local_7f00 = 0;
        if (bVar11) {
          FArchive::LogfImpl(pFVar19,L"%0.2fmb,%0.2fmb,%s");
        }
        else {
          FOutputDevice::LogfImpl(param_3,L"[%0.2fmb / %0.2fmb] - %s");
        }
        local_8628.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_7358 + 0x10);
        bVar11 = false;
        local_8628._padding_._0_4_ = 0;
        local_8628._padding_._4_4_ = 1;
        local_8628.UnvisitedBitMask = 0xffffffff;
        local_8628.CurrentBitIndex = 0;
        local_8628.BaseBitIndex = 0;
        if (local_7330 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8628);
        }
        TStack_87e0._padding_ =
             CONCAT44(local_8628._padding_._4_4_,(undefined4)local_8628._padding_);
        local_87e8 = (longlong *)local_7358;
        TStack_87e0.CurrentBitIndex = local_8628.CurrentBitIndex;
        TStack_87e0.UnvisitedBitMask = local_8628.UnvisitedBitMask;
        TStack_87e0._28_4_ = local_8628._28_4_;
        TStack_87e0.BaseBitIndex = local_8628.BaseBitIndex;
        TStack_87e0.Array = local_8628.Array;
        local_87c0 = CONCAT44(local_87c0._4_4_,local_7358._8_4_ - local_7324);
        TStack_8550.Array = local_8628.Array;
        uStack_8530 = local_87c0;
        local_8558 = local_87e8;
        TStack_8550._padding_ = TStack_87e0._padding_;
        TStack_8550._16_8_ = TStack_87e0._16_8_;
        TStack_8550._24_8_ = TStack_87e0._24_8_;
        pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_7e18,(TBitArray<FDefaultBitArrayAllocator> *)(local_7358 + 0x10)
                             ,local_7330);
        TStack_87e0._padding_ = pTVar16->_padding_;
        pTVar6 = pTVar16->Array;
        uVar8._0_4_ = pTVar16->UnvisitedBitMask;
        uVar8._4_4_ = pTVar16->CurrentBitIndex;
        TStack_87e0.BaseBitIndex = pTVar16->BaseBitIndex;
        TStack_87e0._28_4_ = *(undefined4 *)&pTVar16->field_0x1c;
        TStack_87e0.Array = pTVar6;
        TStack_87e0._16_8_ = uVar8;
        while( true ) {
          plVar2 = local_8558;
          if ((int)local_8558[1] - *(int *)((longlong)local_8558 + 0x34) != (int)uStack_8530) {
            local_895a = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_895a);
          }
          pFVar19 = local_8918;
          if (((TStack_8550.CurrentBitIndex == uVar8._4_4_) && (TStack_8550.Array == pTVar6)) &&
             (plVar2 == (longlong *)local_7358)) break;
          if ((ulonglong)(longlong)(local_8960 << 10) <=
              *(ulonglong *)((longlong)TStack_8550.CurrentBitIndex * 0xb8 + 0xa8 + *plVar2)) {
            if (bVar35) {
              if (!bVar11) {
                FArchive::LogfImpl(local_8918,L",Large layers:");
              }
              FArchive::LogfImpl(pFVar19,L",,%0.2fmb,%0.2fmb,%s");
            }
            else {
              if (!bVar11) {
                FOutputDevice::Log(param_3,L"  Large layers:");
              }
              FOutputDevice::LogfImpl(param_3,L"    [%0.2fmb / %0.2fmb] - %s");
            }
            bVar11 = true;
          }
          TStack_8550.UnvisitedBitMask = TStack_8550.UnvisitedBitMask & ~TStack_8550._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8550);
        }
        bVar11 = false;
        iVar32 = 0;
        uVar14 = 1;
        iStack_8878 = 0;
        uStack_887c = 0;
        if (local_72e0 != 0) {
          puVar33 = (uint *)(local_7308 + 0x10);
          if (local_72e8 != (uint *)0x0) {
            puVar33 = local_72e8;
          }
          uVar29 = *puVar33;
          iStack_8878 = 0;
          while (uVar29 == 0) {
            lVar26 = (longlong)iVar32;
            iStack_8878 = iStack_8878 + 0x20;
            iVar32 = iVar32 + 1;
            uStack_887c = local_72e0;
            if ((int)((local_72e0 - 1) + ((int)(local_72e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
            goto LAB_141840c03;
            uVar29 = puVar33[lVar26 + 1];
          }
          uVar14 = -uVar29 & uVar29;
          uVar25 = (ulonglong)uVar14 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_856c = (int)lVar26;
          uStack_887c = iStack_8878 + -1 + local_856c;
          if ((int)local_72e0 < (int)uStack_887c) {
            uStack_887c = local_72e0;
          }
        }
LAB_141840c03:
        local_8898 = (FConfigCommandStream *)local_7308;
        uVar29 = local_72e0 & 0xffffffe0;
        local_8870 = local_7308._8_4_ - local_72d4;
        pTStack_8888 = (TBitArray<FDefaultBitArrayAllocator> *)(local_7308 + 0x10);
        uStack_8890 = CONCAT44(uVar14,iVar32);
        uStack_8880 = 0xffffffff;
        uStack_8874 = local_7ddc;
        TStack_87e0._padding_ = uStack_8890;
        iVar32 = (int)local_72e0 >> 5;
        local_87c0 = CONCAT44(uStack_886c,local_8870);
        bVar24 = (byte)local_72e0;
        local_8950 = local_72e0;
        TStack_87e0.BaseBitIndex = iStack_8878;
        TStack_87e0._28_4_ = local_7ddc;
        TStack_87e0.UnvisitedBitMask = 0xffffffff;
        TStack_87e0.CurrentBitIndex = uStack_887c;
        local_87e8 = (longlong *)local_8898;
        TStack_87e0.Array = pTStack_8888;
        if (((int)local_72e0 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pFVar19 = local_8918;
        uVar14 = local_8950;
        if (local_8950 != local_72e0) {
          puVar33 = (uint *)(local_7308 + 0x10);
          if (local_72e8 != (uint *)0x0) {
            puVar33 = local_72e8;
          }
          uVar14 = -1 << (bVar24 & 0x1f) & puVar33[iVar32];
          while (uVar14 == 0) {
            lVar26 = (longlong)iVar32;
            uVar29 = uVar29 + 0x20;
            iVar32 = iVar32 + 1;
            uVar14 = local_72e0;
            if ((int)((local_72e0 - 1) + ((int)(local_72e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
            goto LAB_141840d43;
            uVar14 = puVar33[lVar26 + 1];
          }
          uVar25 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
          lVar26 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_8568 = (int)lVar26;
          uVar14 = (uVar29 - 1) + local_8568;
          if ((int)local_72e0 < (int)uVar14) {
            uVar14 = local_72e0;
          }
        }
LAB_141840d43:
        while( true ) {
          plVar2 = local_87e8;
          if ((int)local_87e8[1] - *(int *)((longlong)local_87e8 + 0x34) != (int)local_87c0) {
            local_8959 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_8959);
          }
          if (((TStack_87e0.CurrentBitIndex == uVar14) &&
              (TStack_87e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_7308 + 0x10))) &&
             (plVar2 == (longlong *)local_7308)) break;
          if ((ulonglong)(longlong)(local_8960 << 10) <=
              *(ulonglong *)((longlong)TStack_87e0.CurrentBitIndex * 0xb8 + 0xa8 + *plVar2)) {
            if (bVar35) {
              if (!bVar11) {
                FArchive::LogfImpl(pFVar19,L",Large sections (across all layers):");
              }
              FArchive::LogfImpl(pFVar19,L",,%0.2fmb,%0.2fmb,%s");
            }
            else {
              if (!bVar11) {
                FOutputDevice::Log(param_3,L"  Large sections (across all layers):");
              }
              FOutputDevice::LogfImpl(param_3,L"    [%0.2fmb / %0.2fmb] - %s");
            }
            bVar11 = true;
          }
          TStack_87e0.UnvisitedBitMask = TStack_87e0.UnvisitedBitMask & ~TStack_87e0._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_87e0);
        }
        bVar11 = false;
        iVar32 = 0;
        uVar14 = 1;
        iStack_8878 = 0;
        uStack_887c = 0;
        if (local_7290 != 0) {
          puVar33 = (uint *)(local_72b8 + 0x10);
          if (local_7298 != (uint *)0x0) {
            puVar33 = local_7298;
          }
          uVar29 = *puVar33;
          iStack_8878 = 0;
          while (uVar29 == 0) {
            lVar26 = (longlong)iVar32;
            iStack_8878 = iStack_8878 + 0x20;
            iVar32 = iVar32 + 1;
            uStack_887c = local_7290;
            if ((int)((local_7290 - 1) + ((int)(local_7290 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
            goto LAB_141840fb6;
            uVar29 = (puVar33 + 1)[lVar26];
          }
          uVar14 = -uVar29 & uVar29;
          uVar25 = (ulonglong)uVar14 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_8564 = (int)lVar26;
          uStack_887c = local_8564 + -1 + iStack_8878;
          if ((int)local_7290 < (int)uStack_887c) {
            uStack_887c = local_7290;
          }
        }
LAB_141840fb6:
        local_8898 = (FConfigCommandStream *)local_72b8;
        uVar29 = local_7290 & 0xffffffe0;
        local_8870 = local_72b8._8_4_ - local_7284;
        pTStack_8888 = (TBitArray<FDefaultBitArrayAllocator> *)(local_72b8 + 0x10);
        uStack_8890 = CONCAT44(uVar14,iVar32);
        uStack_8880 = 0xffffffff;
        uStack_8874 = local_7d1c;
        TStack_84f0._padding_ = uStack_8890;
        iVar32 = (int)local_7290 >> 5;
        uStack_84d0 = CONCAT44(uStack_886c,local_8870);
        bVar24 = (byte)local_7290;
        local_8950 = local_7290;
        TStack_84f0.BaseBitIndex = iStack_8878;
        TStack_84f0._28_4_ = local_7d1c;
        TStack_84f0.UnvisitedBitMask = 0xffffffff;
        TStack_84f0.CurrentBitIndex = uStack_887c;
        local_84f8 = local_8898;
        TStack_84f0.Array = pTStack_8888;
        if (((int)local_7290 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        uVar14 = local_8950;
        if (local_8950 != local_7290) {
          puVar33 = (uint *)(local_72b8 + 0x10);
          if (local_7298 != (uint *)0x0) {
            puVar33 = local_7298;
          }
          uVar14 = -1 << (bVar24 & 0x1f) & puVar33[iVar32];
          while (uVar14 == 0) {
            lVar26 = (longlong)iVar32;
            uVar29 = uVar29 + 0x20;
            iVar32 = iVar32 + 1;
            uVar14 = local_7290;
            if ((int)((local_7290 - 1) + ((int)(local_7290 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
            goto LAB_1418410f0;
            uVar14 = (puVar33 + 1)[lVar26];
          }
          uVar25 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
          lVar26 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_8560 = (int)lVar26;
          uVar14 = (uVar29 - 1) + local_8560;
          if ((int)local_7290 < (int)uVar14) {
            uVar14 = local_7290;
          }
        }
LAB_1418410f0:
        while( true ) {
          pFVar21 = local_84f8;
          if ((int)local_84f8->_padding_ - *(int *)((longlong)&local_84f8->_padding_ + 4) !=
              (int)uStack_84d0) {
            local_8958 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_8958);
          }
          pFVar19 = local_8918;
          if (((TStack_84f0.CurrentBitIndex == uVar14) &&
              (TStack_84f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_72b8 + 0x10))) &&
             (pFVar21 == (FConfigCommandStream *)local_72b8)) break;
          if ((ulonglong)(longlong)(local_8960 << 10) <=
              *(ulonglong *)
               ((longlong)TStack_84f0.CurrentBitIndex * 0xb8 + 0xa8 + pFVar21->_padding_)) {
            if (bVar35) {
              if (!bVar11) {
                FArchive::LogfImpl(local_8918,L",Large sections (by values):");
              }
              FArchive::LogfImpl(pFVar19,L",,%0.2fmb,%0.2fmb,%s");
            }
            else {
              if (!bVar11) {
                FOutputDevice::Log(param_3,L"  Large sections (by values):");
              }
              FOutputDevice::LogfImpl(param_3,L"    [%0.2fmb / %0.2fmb] - %s");
            }
            bVar11 = true;
          }
          TStack_84f0.UnvisitedBitMask = TStack_84f0.UnvisitedBitMask & ~TStack_84f0._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_84f0);
        }
        FArchive::~FArchive((FArchive *)&local_7f98);
        FArchive::~FArchive((FArchive *)&local_7ef8);
      }
      local_7270 = 0;
      if (local_7278 != (void *)0x0) {
        FMemory::Free(local_7278);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_72b8);
      local_72c0 = 0;
      if (local_72c8 != (void *)0x0) {
        FMemory::Free(local_72c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_7308);
      local_7310 = 0;
      if (local_7318 != (void *)0x0) {
        FMemory::Free(local_7318);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FArchiveCountConfigMem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_7358);
      FArchive::~FArchive((FArchive *)&local_73f8);
      FVar28.Data = (FScriptContainerElement *)&(local_87f8->IniPath).Data.ArrayNum;
      uVar25 = (ulonglong)local_8810;
      pFVar19 = local_8918;
      bVar11 = bVar35;
    }
    DestructItems<FString,int>((FString *)local_87a8.AllocatorInstance.Data,local_87a8.ArrayNum);
    if ((FConfigBranch *)local_87a8.AllocatorInstance.Data != (FConfigBranch *)0x0) {
      FMemory::Free(local_87a8.AllocatorInstance.Data);
    }
    if (bVar11) {
      FArchive::LogfImpl(pFVar19,L"");
      FConfigCacheIni::GetFilenames(GConfig,&local_85a8);
      FArchive::LogfImpl(pFVar19,L"%0.2fmb,%d All Configs");
      DestructItems<FString,int>((FString *)local_85a8.AllocatorInstance.Data,local_85a8.ArrayNum);
      if (local_85a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_85a8.AllocatorInstance.Data);
      }
      FArchive::LogfImpl(pFVar19,L"%0.2fmb,%d Tiny Configs (not displayed above)");
      FArchive::LogfImpl(pFVar19,L"%0.2fmb,%d Single Section Configs");
      FArchive::LogfImpl(pFVar19,L"%0.2fmb,%d ZeroSection Configs");
      FArchive::LogfImpl(pFVar19,L"%0.2fmb,Total Slack (wasted memory)");
      FArchive::LogfImpl(pFVar19,L"");
      if (!bVar10) {
        FArchive::LogfImpl(pFVar19,
                           L"To get more detailed information, use \"config memusage -detailed\"");
      }
      if (local_8960 == 10) {
        FArchive::LogfImpl(pFVar19,
                           L"To change the cutoff, in KB, for small files/layers/sections, use \"config memusage -cutoff=<value>\""
                          );
      }
    }
    else {
      FOutputDevice::Log(param_3,L"");
      FConfigCacheIni::GetFilenames(GConfig,&local_8598);
      FOutputDevice::LogfImpl(param_3,L"[%0.2fmb] - %d All Configs");
      DestructItems<FString,int>((FString *)local_8598.AllocatorInstance.Data,local_8598.ArrayNum);
      if (local_8598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8598.AllocatorInstance.Data);
      }
      FOutputDevice::LogfImpl(param_3,L"[%0.2fmb] - %d SafeUnloaded Configs");
      FOutputDevice::LogfImpl(param_3,L"[%0.2fmb] - %d Tiny Configs (not displayed above)");
      FOutputDevice::LogfImpl(param_3,L"[%0.2fmb] - %d Single Section Configs");
      FOutputDevice::LogfImpl(param_3,L"[%0.2fmb] - %d ZeroSection Configs");
      FOutputDevice::LogfImpl(param_3,L"[%0.2fmb] - Total Slack (wasted memory)");
      FOutputDevice::Log(param_3,L"");
      if (!bVar10) {
        FOutputDevice::Log(param_3,
                           L"To get more detailed information, use \"config memusage -detailed\"");
      }
      if (local_8960 == 10) {
        FOutputDevice::Log(param_3,
                           L"To change the cutoff, in KB, for small files/layers/sections, use \"config memusage -cutoff=<value>\""
                          );
      }
      FOutputDevice::Log(param_3,L"To save to .csv, use \"config memusage -csv or -csv=<filepath>\""
                        );
    }
    if (pFVar19 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar19)(pFVar19,1);
    }
    if (local_8930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8930.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = FParse::Command(&local_8970,L"Lint",true);
  if (!bVar10) {
    return true;
  }
  local_88e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88e0.Data.ArrayNum = 0;
  local_88e0.Data.ArrayMax = 0;
  bVar10 = FParse::Token(&local_8970,&local_88e0,true,L'\0');
  if (bVar10) {
    local_8868.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8868.Data.ArrayNum = 0;
    local_8868.Data.ArrayMax = 0;
    ::FName::FName(&local_8748,"Windows");
    bVar10 = FParse::Token(&local_8970,&local_8868,true,L'\0');
    if (bVar10) {
      ::FString::FString(&local_8588,"-");
      iVar32 = local_8588.Data.ArrayNum + -1;
      FVar28.Data = local_8588.Data.AllocatorInstance.Data;
      if (local_8588.Data.ArrayNum == 0) {
        iVar32 = 0;
        FVar28.Data = (FScriptContainerElement *)L"";
      }
      bVar10 = ::FString::StartsWith(&local_8868,(wchar_t *)FVar28.Data,iVar32,IgnoreCase);
      if (local_8588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8588.Data.AllocatorInstance.Data);
      }
      if (!bVar10) {
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_8868.Data.ArrayNum != 0) {
          FVar28.Data = local_8868.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_8574,(wchar_t *)FVar28.Data);
        local_8748 = local_8574;
      }
    }
    bVar10 = FParse::Param(local_8970,L"-SameAsPrevious");
    local_8966 = bVar10;
    bVar11 = FParse::Param(local_8970,L"-MissingBase");
    local_8965 = bVar11;
    local_8964 = FParse::Param(local_8970,L"-ArrayDuplicate");
    if (((!bVar10) && (!bVar11)) && (!local_8964)) {
      local_8964 = true;
      local_8965 = '\x01';
      local_8966 = '\x01';
    }
    FConfigCacheIni::FConfigCacheIni(&local_6b18,Temporary,local_8748,false);
    FConfigContext::FConfigContext(&local_6d08,&local_6b18,true,&local_8868,(FConfigFile *)0x0);
    local_86d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_88e0.Data.ArrayNum != 0) {
      FVar28.Data = local_88e0.Data.AllocatorInstance.Data;
    }
    local_86d8.Data.ArrayNum = 0;
    local_86d8.Data.ArrayMax = 0;
    FConfigContext::Load(&local_6d08,(wchar_t *)FVar28.Data,&local_86d8);
    if (local_86d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_86d8.Data.AllocatorInstance.Data);
    }
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_88e0.Data.ArrayNum != 0) {
      FVar28.Data = local_88e0.Data.AllocatorInstance.Data;
    }
    pFVar17 = ::FName::FName(&local_8268,(wchar_t *)FVar28.Data);
    pFVar15 = FConfigCacheIni::FindBranch(&local_6b18,*pFVar17,&local_88e0);
    local_88a0 = pFVar15;
    if (pFVar15 == (FConfigBranch *)0x0) {
      FOutputDevice::LogfImpl(param_3,L"Unknown branch %s");
    }
    else {
      FConfigFile::FConfigFile(&local_6df8);
      FConfigFile::FConfigFile(&local_6fb8);
      plVar2 = &(pFVar15->Hierarchy)._padding_;
      pFVar1 = &pFVar15->Hierarchy;
      local_8968 = '\0';
      local_8967 = '\0';
      local_8648._padding_._0_4_ = 0;
      local_8648._padding_._4_4_ = 1;
      local_8648.UnvisitedBitMask = 0xffffffff;
      local_8648.CurrentBitIndex = 0;
      local_8648.BaseBitIndex = 0;
      local_8648.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
      if ((int)(pFVar15->Hierarchy)._padding_ != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8648);
      }
      TStack_8908._padding_ = CONCAT44(local_8648._padding_._4_4_,(undefined4)local_8648._padding_);
      TStack_8908._16_8_ = CONCAT44(local_8648.CurrentBitIndex,local_8648.UnvisitedBitMask);
      TStack_8908._24_8_ = CONCAT44(local_8648._28_4_,local_8648.BaseBitIndex);
      local_8818._0_4_ =
           (int)(pFVar15->Hierarchy)._padding_ -
           *(int *)((longlong)&(pFVar15->Hierarchy)._padding_ + 4);
      TStack_8838.Array = local_8648.Array;
      TStack_8908.Array = local_8648.Array;
      local_88e8 = (int)local_8818;
      uStack_88e4 = local_8818._4_4_;
      local_8910 = pFVar1;
      local_8840 = (FConfigCommandStream *)pFVar1;
      TStack_8838._padding_ = TStack_8908._padding_;
      TStack_8838._16_8_ = TStack_8908._16_8_;
      TStack_8838._24_8_ = TStack_8908._24_8_;
      pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_7db8,(TBitArray<FDefaultBitArrayAllocator> *)plVar2,
                           (int)(pFVar15->Hierarchy)._padding_);
      TStack_8838._padding_ = pTVar16->_padding_;
      TStack_8838.Array = pTVar16->Array;
      TStack_8838.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
      TStack_8838.CurrentBitIndex = pTVar16->CurrentBitIndex;
      TStack_8838.BaseBitIndex = pTVar16->BaseBitIndex;
      TStack_8838._28_4_ = *(undefined4 *)&pTVar16->field_0x1c;
      local_8818 = CONCAT44(local_8818._4_4_,
                            (int)(pFVar15->Hierarchy)._padding_ -
                            *(int *)((longlong)&(pFVar15->Hierarchy)._padding_ + 4));
      uStack_8220 = local_8818;
      local_8840 = (FConfigCommandStream *)pFVar1;
      local_8248 = pFVar1;
      lStack_8240 = TStack_8838._padding_;
      local_8238 = TStack_8838.Array;
      uStack_8230 = TStack_8838._16_8_;
      local_8228 = TStack_8838._24_8_;
      while( true ) {
        pFVar1 = local_8910;
        pFVar30 = (FScriptContainerElement *)0x0;
        if ((int)local_8910->_padding_ - *(int *)((longlong)&local_8910->_padding_ + 4) !=
            local_88e8) {
          local_8957 = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_8957);
        }
        if (((TStack_8908.CurrentBitIndex == iStack_822c) && (TStack_8908.Array == local_8238)) &&
           (pFVar1 == local_8248)) break;
        lVar26 = pFVar1->_padding_;
        local_8940.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_8940.Data.ArrayNum = 0;
        local_8940.Data.ArrayMax = 0;
        iVar32 = *(int *)((longlong)TStack_8908.CurrentBitIndex * 0x20 + 0x10 + lVar26);
        iVar31 = iVar32 + -1;
        if (iVar32 == 0) {
          iVar31 = 0;
        }
        pFVar20 = ::FString::ConstructFromPtrSize
                            (&local_82e0,
                             *(uchar **)((longlong)TStack_8908.CurrentBitIndex * 0x20 + 8 + lVar26),
                             iVar31);
        if (&local_8940 != pFVar20) {
          pFVar30 = (pFVar20->Data).AllocatorInstance.Data;
          (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8940.Data.ArrayNum = (pFVar20->Data).ArrayNum;
          local_8940.Data.ArrayMax = (pFVar20->Data).ArrayMax;
          (pFVar20->Data).ArrayNum = 0;
          (pFVar20->Data).ArrayMax = 0;
          local_8940.Data.AllocatorInstance.Data = pFVar30;
        }
        if (local_82e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_82e0.Data.AllocatorInstance.Data);
        }
        if (local_8968 == '\0') {
          FConfigBranch::MergeStaticLayersUpToAndIncluding(pFVar15,&local_8940,&local_6fb8);
          local_8968 = '\x01';
LAB_141841bdd:
          if (pFVar30 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar30);
          }
        }
        else {
          FConfigFile::FConfigFile(&local_70a8);
          FConfigBranch::MergeStaticLayersUpToAndIncluding(pFVar15,&local_8940,&local_70a8);
          if (local_8967 == '\0') {
            FConfigFile::operator=(&local_6df8,&local_70a8);
            FConfigFile::operator=(&local_6fb8,&local_70a8);
            local_8967 = '\x01';
            FConfigFile::~FConfigFile(&local_70a8);
            goto LAB_141841bdd;
          }
          pFVar21 = FConfigBranch::GetStaticLayer(pFVar15,&local_8940);
          if (pFVar21 == (FConfigCommandStream *)0x0) {
            FConfigFile::~FConfigFile(&local_70a8);
            if (pFVar30 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar30);
            }
          }
          else {
            bVar10 = false;
            local_8668._padding_._0_4_ = 0;
            plVar2 = &pFVar21->_padding_;
            local_8668._padding_._4_4_ = 1;
            local_8668.UnvisitedBitMask = 0xffffffff;
            local_8668.CurrentBitIndex = 0;
            local_8668.BaseBitIndex = 0;
            local_8668.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar2;
            if ((int)pFVar21->_padding_ != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8668);
            }
            TStack_88c8._padding_ =
                 CONCAT44(local_8668._padding_._4_4_,(undefined4)local_8668._padding_);
            TStack_88c8.CurrentBitIndex = local_8668.CurrentBitIndex;
            TStack_88c8.UnvisitedBitMask = local_8668.UnvisitedBitMask;
            TStack_88c8._28_4_ = local_8668._28_4_;
            TStack_88c8.BaseBitIndex = local_8668.BaseBitIndex;
            TStack_88c8.Array = local_8668.Array;
            local_88a8 = CONCAT44(local_88a8._4_4_,
                                  (int)pFVar21->_padding_ -
                                  *(int *)((longlong)&pFVar21->_padding_ + 4));
            TStack_8838.Array = local_8668.Array;
            local_8818 = local_88a8;
            local_88d0 = pFVar21;
            local_8840 = pFVar21;
            TStack_8838._padding_ = TStack_88c8._padding_;
            TStack_8838._16_8_ = TStack_88c8._16_8_;
            TStack_8838._24_8_ = TStack_88c8._24_8_;
            pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_7d98,(TBitArray<FDefaultBitArrayAllocator> *)plVar2,
                                 (int)pFVar21->_padding_);
            TStack_88c8._padding_ = pTVar16->_padding_;
            TStack_88c8.Array = pTVar16->Array;
            TStack_88c8.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
            TStack_88c8.CurrentBitIndex = pTVar16->CurrentBitIndex;
            TStack_88c8.BaseBitIndex = pTVar16->BaseBitIndex;
            TStack_88c8._28_4_ = *(undefined4 *)&pTVar16->field_0x1c;
            local_88a8 = CONCAT44(local_88a8._4_4_,
                                  (int)pFVar21->_padding_ -
                                  *(int *)((longlong)&pFVar21->_padding_ + 4));
            uStack_8278 = local_88a8;
            local_88d0 = pFVar21;
            local_82a0 = pFVar21;
            lStack_8298 = TStack_88c8._padding_;
            local_8290 = TStack_88c8.Array;
            uStack_8288 = TStack_88c8._16_8_;
            local_8280 = TStack_88c8._24_8_;
            while( true ) {
              pFVar21 = local_8840;
              if ((int)local_8840->_padding_ - *(int *)((longlong)&local_8840->_padding_ + 4) !=
                  (int)local_8818) {
                local_8956 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_8956);
              }
              if (((TStack_8838.CurrentBitIndex == iStack_8284) && (TStack_8838.Array == local_8290)
                  ) && (pFVar21 == local_82a0)) break;
              local_74dc = 0x80;
              pFVar20 = (FString *)
                        ((longlong)TStack_8838.CurrentBitIndex * 0xb8 + pFVar21->_padding_);
              bVar11 = false;
              local_74d8 = 0xffffffff;
              local_7508._0_8_ = 0;
              local_7508._8_8_ = 0;
              local_74e8 = (undefined1 *)0x0;
              local_74e0 = 0;
              local_74d4 = 0;
              local_74c8 = (ForElementType<FSetElementId>)0x0;
              local_74c0 = 0;
              AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
              this_01 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                        ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                                *)&local_6fb8,pFVar20);
              ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
              local_8688._padding_._0_4_ = 0;
              pTVar6 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar20 + 2);
              local_8688._padding_._4_4_ = 1;
              local_8688.UnvisitedBitMask = 0xffffffff;
              local_8688.CurrentBitIndex = 0;
              local_8688.BaseBitIndex = 0;
              local_8688.Array = pTVar6;
              if (pFVar20[3].Data.ArrayNum != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8688);
              }
              TStack_88c8._padding_ =
                   CONCAT44(local_8688._padding_._4_4_,(undefined4)local_8688._padding_);
              local_88d0 = (FConfigCommandStream *)(pFVar20 + 1);
              TStack_88c8.CurrentBitIndex = local_8688.CurrentBitIndex;
              TStack_88c8.UnvisitedBitMask = local_8688.UnvisitedBitMask;
              TStack_88c8._28_4_ = local_8688._28_4_;
              TStack_88c8.BaseBitIndex = local_8688.BaseBitIndex;
              TStack_88c8.Array = local_8688.Array;
              local_88a8 = CONCAT44(local_88a8._4_4_,
                                    pFVar20[1].Data.ArrayNum -
                                    *(int *)((longlong)&pFVar20[4].Data.AllocatorInstance.Data + 4))
              ;
              TStack_84c0.Array = local_8688.Array;
              uStack_84a0 = local_88a8;
              local_84c8 = local_88d0;
              TStack_84c0._padding_ = TStack_88c8._padding_;
              TStack_84c0._16_8_ = TStack_88c8._16_8_;
              TStack_84c0._24_8_ = TStack_88c8._24_8_;
              pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_7d78,pTVar6,pFVar20[3].Data.ArrayNum);
              TStack_88c8._padding_ = pTVar16->_padding_;
              TStack_88c8.Array = pTVar16->Array;
              TStack_88c8.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
              TStack_88c8.CurrentBitIndex = pTVar16->CurrentBitIndex;
              TStack_88c8.BaseBitIndex = pTVar16->BaseBitIndex;
              TStack_88c8._28_4_ = *(undefined4 *)&pTVar16->field_0x1c;
              while( true ) {
                pFVar21 = local_84c8;
                if ((int)local_84c8->_padding_ - *(int *)((longlong)&local_84c8->_padding_ + 4) !=
                    (int)uStack_84a0) {
                  local_8955 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_8955);
                }
                if (((TStack_84c0.CurrentBitIndex == TStack_88c8.CurrentBitIndex) &&
                    (TStack_84c0.Array == TStack_88c8.Array)) &&
                   (pFVar21 == (FConfigCommandStream *)(pFVar20 + 1))) break;
                lVar26 = pFVar21->_padding_;
                pFVar17 = (FName *)(lVar26 + (longlong)TStack_84c0.CurrentBitIndex * 0x28);
                cVar3 = *(char *)(lVar26 + 0x1c + (longlong)TStack_84c0.CurrentBitIndex * 0x28);
                if (cVar3 == '\0') {
                  if ((this_01 == (FConfigSection *)0x0) ||
                     (pFVar22 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                                ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                                        *)this_01,*pFVar17), pFVar22 == (FConfigValue *)0x0)) {
                    if (local_8965 != '\0') {
                      bVar35 = !bVar10;
                      if (bVar35) {
                        FOutputDevice::Log(param_3,
                                           L"-------------------------------------------------------------"
                                          );
                        FOutputDevice::LogfImpl(param_3,L"%s:");
                        bVar10 = true;
                      }
                      if (!bVar11) {
                        if (!bVar35) {
                          FOutputDevice::Log(param_3,L"  ");
                        }
                        FOutputDevice::LogfImpl(param_3,L"  [%s]");
                        bVar11 = true;
                      }
                      ::FName::ToString(pFVar17,&local_82b0);
                      FOutputDevice::LogfImpl(param_3,L"  %s -- No Default in Base");
                      if (local_82b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_82b0.Data.AllocatorInstance.Data);
                      }
                    }
                  }
                  else {
                    uVar14 = (pFVar22->SavedValue).Data.ArrayNum;
                    uVar29 = pFVar17[2].ComparisonIndex.Value;
                    if (uVar14 == uVar29) {
                      if (1 < (int)uVar14) {
                        iVar32 = FGenericPlatformStricmp::Stricmp
                                           ((wchar_t *)
                                            (pFVar22->SavedValue).Data.AllocatorInstance.Data,
                                            (wchar_t *)pFVar17[1]);
                        bVar35 = iVar32 == 0;
                        goto LAB_141841f85;
                      }
                    }
                    else {
                      bVar35 = uVar29 + uVar14 == 1;
LAB_141841f85:
                      if (!bVar35) goto LAB_14184218b;
                    }
                    if (local_8966 != '\0') {
                      bVar35 = !bVar10;
                      if (bVar35) {
                        FOutputDevice::Log(param_3,
                                           L"-------------------------------------------------------------"
                                          );
                        FOutputDevice::LogfImpl(param_3,L"%s:");
                        bVar10 = true;
                      }
                      if (!bVar11) {
                        if (!bVar35) {
                          FOutputDevice::Log(param_3,L"  ");
                        }
                        FOutputDevice::LogfImpl(param_3,L"  [%s]");
                        bVar11 = true;
                      }
                      ::FName::ToString(pFVar17,&local_82d0);
                      FOutputDevice::LogfImpl(param_3,L"  %s -- Identical To Previous");
                      if (local_82d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_82d0.Data.AllocatorInstance.Data);
                      }
                    }
                  }
                }
                else if (cVar3 == '\x02') {
                  uVar14 = pFVar17[2].ComparisonIndex.Value;
                  if (uVar14 == 0) {
                    iVar32 = 0;
                    pwVar27 = L"";
                  }
                  else {
                    pwVar27 = *(wchar_t **)(pFVar17 + 1);
                    iVar32 = uVar14 - 1;
                  }
                  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar32,pwVar27);
                  pbVar23 = TMapBase<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                            ::FindOrAddImpl<FString_const_&>
                                      ((TMapBase<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                                        *)local_7508,uVar14,(FString *)(pFVar17 + 1));
                  *pbVar23 = *pbVar23 | 1;
                }
                else if (cVar3 == '\x03') {
                  uVar14 = pFVar17[2].ComparisonIndex.Value;
                  if (uVar14 == 0) {
                    iVar32 = 0;
                    pwVar27 = L"";
                  }
                  else {
                    pwVar27 = *(wchar_t **)(pFVar17 + 1);
                    iVar32 = uVar14 - 1;
                  }
                  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar32,pwVar27);
                  pbVar23 = TMapBase<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                            ::FindOrAddImpl<FString_const_&>
                                      ((TMapBase<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                                        *)local_7508,uVar14,(FString *)(pFVar17 + 1));
                  *pbVar23 = *pbVar23 | 2;
                }
LAB_14184218b:
                TStack_84c0.UnvisitedBitMask =
                     TStack_84c0.UnvisitedBitMask & ~TStack_84c0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_84c0);
              }
              if (local_8964 != false) {
                local_86a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_7508 + 0x10);
                local_86a8._padding_._4_4_ = 1;
                local_86a8._padding_._0_4_ = 0;
                local_86a8.UnvisitedBitMask = 0xffffffff;
                local_86a8.CurrentBitIndex = 0;
                local_86a8.BaseBitIndex = 0;
                if (local_74e0 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_86a8);
                }
                uVar29 = local_74e0;
                TStack_88c8._padding_ =
                     CONCAT44(local_86a8._padding_._4_4_,(undefined4)local_86a8._padding_);
                local_88d0 = (FConfigCommandStream *)local_7508;
                TStack_88c8.CurrentBitIndex = local_86a8.CurrentBitIndex;
                TStack_88c8.UnvisitedBitMask = local_86a8.UnvisitedBitMask;
                TStack_88c8._28_4_ = local_86a8._28_4_;
                TStack_88c8.BaseBitIndex = local_86a8.BaseBitIndex;
                local_8870 = local_7508._8_4_ - local_74d4;
                pTStack_8888 = local_86a8.Array;
                uVar14 = local_74e0 & 0xffffffe0;
                iVar32 = (int)local_74e0 >> 5;
                bVar24 = (byte)local_74e0;
                local_88a8 = CONCAT44(uStack_886c,local_8870);
                TStack_88c8.Array = local_86a8.Array;
                local_8898 = local_88d0;
                uStack_8890 = TStack_88c8._padding_;
                _uStack_8880 = TStack_88c8._16_8_;
                _iStack_8878 = TStack_88c8._24_8_;
                if (((int)local_74e0 < 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar35)) {
                  pcVar5 = (code *)swi(3);
                  uVar13 = (*pcVar5)();
                  return (bool)uVar13;
                }
                if (uVar29 != local_74e0) {
                  puVar34 = local_7508 + 0x10;
                  if (local_74e8 != (undefined1 *)0x0) {
                    puVar34 = local_74e8;
                  }
                  uVar29 = -1 << (bVar24 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar32 * 4);
                  while (uVar29 == 0) {
                    lVar26 = (longlong)iVar32;
                    uVar14 = uVar14 + 0x20;
                    iVar32 = iVar32 + 1;
                    uVar29 = local_74e0;
                    if ((int)((local_74e0 - 1) + ((int)(local_74e0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        iVar32) goto LAB_141842320;
                    uVar29 = *(uint *)(puVar34 + lVar26 * 4 + 4);
                  }
                  uVar25 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
                  lVar26 = 0x3f;
                  if (uVar25 != 0) {
                    for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                    }
                  }
                  local_8578 = (int)lVar26;
                  uVar29 = local_8578 + -1 + uVar14;
                  if ((int)local_74e0 < (int)uVar29) {
                    uVar29 = local_74e0;
                  }
                }
LAB_141842320:
                while( true ) {
                  pFVar21 = local_88d0;
                  if ((int)local_88d0->_padding_ - *(int *)((longlong)&local_88d0->_padding_ + 4) !=
                      (int)local_88a8) {
                    local_8954[0] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_8954);
                  }
                  if (((TStack_88c8.CurrentBitIndex == uVar29) &&
                      (TStack_88c8.Array ==
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_7508 + 0x10))) &&
                     (pFVar21 == (FConfigCommandStream *)local_7508)) break;
                  if (*(char *)((longlong)TStack_88c8.CurrentBitIndex * 0x20 + 0x10 +
                               pFVar21->_padding_) == '\x03') {
                    bVar35 = !bVar10;
                    if (bVar35) {
                      FOutputDevice::Log(param_3,
                                         L"-------------------------------------------------------------"
                                        );
                      FOutputDevice::LogfImpl(param_3,L"%s:");
                      bVar10 = true;
                    }
                    if (!bVar11) {
                      if (!bVar35) {
                        FOutputDevice::Log(param_3,L"  ");
                      }
                      FOutputDevice::LogfImpl(param_3,L"  [%s]");
                      bVar11 = true;
                    }
                    FOutputDevice::LogfImpl(param_3,L"  %s -- Has Add and Remove");
                  }
                  TStack_88c8.UnvisitedBitMask =
                       TStack_88c8.UnvisitedBitMask & ~TStack_88c8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88c8);
                }
              }
              local_74c0 = 0;
              if (local_74c8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_74c8);
              }
              TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_7508);
              TStack_8838.UnvisitedBitMask =
                   TStack_8838.UnvisitedBitMask & ~TStack_8838._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8838);
            }
            FConfigFile::operator=(&local_6fb8,&local_70a8);
            FConfigFile::~FConfigFile(&local_70a8);
            pFVar15 = local_88a0;
            if (local_8940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8940.Data.AllocatorInstance.Data);
              pFVar15 = local_88a0;
            }
          }
        }
        TStack_8908.UnvisitedBitMask = TStack_8908.UnvisitedBitMask & ~TStack_8908._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8908);
      }
      FConfigFile::~FConfigFile(&local_6fb8);
      FConfigFile::~FConfigFile(&local_6df8);
    }
    FConfigContext::~FConfigContext(&local_6d08);
    FConfigCacheIni::~FConfigCacheIni(&local_6b18);
    FVar28.Data = local_88e0.Data.AllocatorInstance.Data;
    if (local_8868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8868.Data.AllocatorInstance.Data);
      FVar28.Data = local_88e0.Data.AllocatorInstance.Data;
    }
  }
  else {
    FOutputDevice::Log(param_3,
                       L"Usage: config lint <branch> [platform] [-SameAsPrevious] [-MissingBase] [-ArrayDuplicate]\nIf no - options are specified, all issues will be shown"
                      );
    FVar28.Data = local_88e0.Data.AllocatorInstance.Data;
  }
LAB_1418424fe:
  if (FVar28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar28.Data);
  }
  return true;
}

// <lambda_invoker_cdecl> @ 141842630

void __cdecl
`FIniExec::Exec_Dev'::__l48::<lambda_2>::<lambda_invoker_cdecl>(FConfigModificationTracker *param_1)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res10;
  FName local_res18 [2];
  
  pFVar4 = ::FName::FName(&local_res10,"TrackedDyn");
  FConfigCacheIni::RemoveTagFromAllBranches(*pFVar4,param_1);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x130);
  pFVar4 = ::FName::FName(local_res18,"TrackedDyn");
  (*pcVar1)(pIVar2,*pFVar4,0xff000000);
  return;
}

// <lambda_invoker_cdecl> @ 1418426e0

void __cdecl
`FIniExec::Exec_Dev'::__l93::<lambda_4>::<lambda_invoker_cdecl>(FConfigModificationTracker *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,"HotfixTest");
  FConfigCacheIni::RemoveTagFromAllBranches(*pFVar1,param_1);
  return;
}

// operator() @ 14185b850

void __thiscall
`FIniExec::Exec_Dev'::__l45::<lambda_1>::operator()(void *this,FConfigModificationTracker *param_1)

{
  FConfigBranch *this_00;
  TKeyInitializer<FString_&&> local_res8;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FName local_48;
  ushort local_40;
  FDynamicLayerInfo local_38;
  
  ::FString::FString((FString *)&local_68,L"ConsoleVariables");
  local_res10 = &local_68;
  TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FString_&&>_>
            ((TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
              *)&param_1->CVars,&local_res8,(bool *)&local_res10);
  *(undefined4 *)((longlong)(int)local_res8.Key * 0x70 + 0x10 + *(longlong *)&param_1->CVars) =
       0x6000000;
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  ::FString::FString((FString *)&local_68,L"ConsoleVariables_HighPriority");
  local_res10 = &local_68;
  TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FString_&&>_>
            ((TSet<TTuple<FString,FConfigModificationTracker::FCVarTracker>,TDefaultMapHashableKeyFuncs<FString,FConfigModificationTracker::FCVarTracker,0>,FDefaultSetAllocator>
              *)&param_1->CVars,&local_res8,(bool *)&local_res10);
  *(undefined4 *)((longlong)(int)local_res8.Key * 0x70 + 0x10 + *(longlong *)&param_1->CVars) =
       0x8000000;
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,(wchar_t *)((longlong)this + 8));
  ::FName::FName(&local_48,"TrackedDyn");
  this_00 = *(FConfigBranch **)this;
  local_40 = 0;
  ::FString::FString(&local_38.Filename,&local_58);
  local_38.Tag = local_48;
  local_38.Priority = local_40;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
  ConstructItems<FDynamicLayerInfo,FDynamicLayerInfo,int>
            (local_68.AllocatorInstance.Data,&local_38,1);
  FConfigBranch::AddDynamicLayersToHierarchy
            (this_00,&local_68,param_1,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,false);
  DestructItems<FDynamicLayerInfo,int>
            ((FDynamicLayerInfo *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FDynamicLayerInfo *)local_68.AllocatorInstance.Data != (FDynamicLayerInfo *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_38.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Filename.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14185bb00

void __thiscall
`FIniExec::Exec_Dev'::__l90::<lambda_3>::operator()(void *this,FConfigModificationTracker *param_1)

{
  FConfigBranch *this_00;
  FString *pFVar1;
  FName FVar2;
  FName *pFVar3;
  FName local_res8;
  FString local_28;
  
  this_00 = *(FConfigBranch **)this;
  pFVar3 = ::FName::FName(&local_res8,"HotfixTest");
  pFVar1 = *(FString **)((longlong)this + 0x10);
  FVar2 = *pFVar3;
  ::FString::FString(&local_28,*(wchar_t **)((longlong)this + 8));
  FConfigBranch::AddDynamicLayerStringToHierarchy(this_00,&local_28,pFVar1,FVar2,Hotfix,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

