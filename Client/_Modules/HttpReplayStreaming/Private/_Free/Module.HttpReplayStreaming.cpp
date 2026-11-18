// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 72

// `dynamic_initializer_for_'CVarChunkUploadDelayInSeconds'' @ 1410ae010

void __cdecl _dynamic_initializer_for__CVarChunkUploadDelayInSeconds__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 10.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarChunkUploadDelayInSeconds,L"httpReplay.ChunkUploadDelayInSeconds",local_res8,L"",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarChunkUploadDelayInSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarMaxCacheSize'' @ 1410ae060

void __cdecl _dynamic_initializer_for__CVarMaxCacheSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0xa00000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxCacheSize,L"httpReplay.MaxCacheSize",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxCacheSize__);
  return;
}

// `dynamic_initializer_for_'CVarMetaFilterOverride'' @ 1410ae0b0

void __cdecl _dynamic_initializer_for__CVarMetaFilterOverride__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarMetaFilterOverride,L"httpReplay.MetaFilterOverride",&local_18,L"",0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarMetaFilterOverride__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 1410ae120

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 1410ae150

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogHttpReplay'' @ 1410ae170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHttpReplay__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHttpReplay,L"LogHttpReplay",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHttpReplay__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantHttpNetworkReplayStreaming'' @ 1410ae1b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantHttpNetworkReplayStreaming__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "HttpNetworkReplayStreaming";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"HttpNetworkReplayStreaming",0x1a);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FHttpNetworkReplayStreamingFactory>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 1410ae200

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HttpReplay_CompressTime'' @ 1410ae220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HttpReplay_CompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HttpReplay_CompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_HttpReplay_CompressTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HttpReplay_CompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HttpReplay_CompressTime,*pFVar1,
               L"Http replay compress time","STATGROUP_HttpReplay","STATCAT_Advanced",L"HttpReplay",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HttpReplay_Compressed'' @ 1410ae2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HttpReplay_Compressed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HttpReplay_Compressed ==
      (FThreadSafeStaticStat<FStat_STAT_HttpReplay_Compressed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HttpReplay_Compressed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HttpReplay_Compressed,*pFVar1,
               L"Http replay compressed bytes","STATGROUP_HttpReplay","STATCAT_Advanced",
               L"HttpReplay",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HttpReplay_DecompressTime'' @ 1410ae340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HttpReplay_DecompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HttpReplay_DecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_HttpReplay_DecompressTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HttpReplay_DecompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HttpReplay_DecompressTime,*pFVar1,
               L"Http replay decompress time","STATGROUP_HttpReplay","STATCAT_Advanced",
               L"HttpReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HttpReplay_Raw'' @ 1410ae3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HttpReplay_Raw__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HttpReplay_Raw == (FThreadSafeStaticStat<FStat_STAT_HttpReplay_Raw>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HttpReplay_Raw");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HttpReplay_Raw,*pFVar1,
               L"Http replay raw bytes","STATGROUP_HttpReplay","STATCAT_Advanced",L"HttpReplay",true
               ,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 1410ae460

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h__Script_HttpNetworkReplayStreaming_2460533709'' @ 1410ae480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h__Script_HttpNetworkReplayStreaming_2460533709__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HttpNetworkReplayStreaming",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h__Script_HttpNetworkReplayStreaming_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_HttpNetworkReplayStreaming'' @ 1410ae4d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_HttpNetworkReplayStreaming__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe94f5f90;
  local_res8[0].DeclarationsHash = 0x5d2c2ffb;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_HttpNetworkReplayStreaming,
             L"/Script/HttpNetworkReplayStreaming",
             &Z_Registration_Info_UPackage__Script_HttpNetworkReplayStreaming,local_res8);
  return;
}

// EHttpReplayResult_StaticEnum @ 146cb4630

UEnum * __cdecl EHttpReplayResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
    Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                       (UObject *)pUVar1,L"EHttpReplayResult");
  }
  return Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
}

// Z_Construct_UPackage__Script_HttpNetworkReplayStreaming @ 146cb4670

UPackage * __cdecl Z_Construct_UPackage__Script_HttpNetworkReplayStreaming(void)

{
  if (Z_Registration_Info_UPackage__Script_HttpNetworkReplayStreaming.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_HttpNetworkReplayStreaming.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_HttpNetworkReplayStreaming.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146cb46a8

/* [thunk]:public: virtual void * __ptr64 __cdecl FHttpNetworkReplayStreamingFactory::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FHttpNetworkReplayStreamingFactory::_vector_deleting_destructor__adjustor_8__
          (FHttpNetworkReplayStreamingFactory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FHttpNetworkReplayStreamingFactory *)&this[-1].HttpStreamers.ArrayNum,param_1
                     );
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146cb5040

void * __thiscall
FHttpNetworkReplayStreamingFactory::_scalar_deleting_destructor_
          (FHttpNetworkReplayStreamingFactory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FHttpNetworkReplayStreamer,1>,int>
            ((TSharedPtr<FHttpNetworkReplayStreamer,1> *)
             (this->HttpStreamers).AllocatorInstance.Data,(this->HttpStreamers).ArrayNum);
  pFVar1 = (this->HttpStreamers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// ConstructItems<FNetworkReplayStreamInfo,FNetworkReplayStreamInfo,int> @ 146cb50b0

void __cdecl
ConstructItems<FNetworkReplayStreamInfo,FNetworkReplayStreamInfo,int>
          (void *param_1,FNetworkReplayStreamInfo *param_2,int param_3)

{
  long64 *plVar1;
  FDateTime *pFVar2;
  
  if (param_3 != 0) {
    plVar1 = (long64 *)((longlong)param_1 + 0x20);
    pFVar2 = &param_2->Timestamp;
    do {
      FString::FString((FString *)(plVar1 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)plVar1));
      FString::FString((FString *)(plVar1 + -2),(FString *)(pFVar2 + -2));
      *plVar1 = pFVar2->Ticks;
      plVar1[1] = pFVar2[1].Ticks;
      *(int *)(plVar1 + 2) = *(int *)(pFVar2 + 2);
      *(int *)((longlong)plVar1 + 0x14) = *(int *)((longlong)(pFVar2 + 2) + 4);
      *(int *)(plVar1 + 3) = *(int *)(pFVar2 + 3);
      *(bool *)((longlong)plVar1 + 0x1c) = *(bool *)((longlong)(pFVar2 + 3) + 4);
      *(bool *)((longlong)plVar1 + 0x1d) = *(bool *)((longlong)(pFVar2 + 3) + 5);
      param_3 = param_3 + -1;
      plVar1 = plVar1 + 8;
      pFVar2 = pFVar2 + 8;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FNetworkReplayListItem,int> @ 146cb5160

void __cdecl DefaultConstructItems<FNetworkReplayListItem,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FNetworkReplayListItem__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x44) = 0;
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FHttpNetworkReplayStreamer,1>,int> @ 146cb51d0

void __cdecl
DestructItems<TSharedPtr<FHttpNetworkReplayStreamer,1>,int>
          (TSharedPtr<FHttpNetworkReplayStreamer,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FQueuedHttpRequest,1>,int> @ 146cb5210

void __cdecl
DestructItems<TSharedPtr<FQueuedHttpRequest,1>,int>
          (TSharedPtr<FQueuedHttpRequest,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNetworkReplayListItem,int> @ 146cb5250

void __cdecl DestructItems<FNetworkReplayListItem,int>(FNetworkReplayListItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SessionName;
    do {
      *(undefined ***)((longlong)(pFVar2 + -2) + 8) = &___7FNetworkReplayListItem__6B_;
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FJsonSerializable::~FJsonSerializable((FJsonSerializable *)((longlong)(pFVar2 + -2) + 8));
      pFVar2 = (FString *)((longlong)(pFVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<FReplayEventListItem,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FReplayEventListItem::*>,TLess<void>_> @ 146cb55e0

void __cdecl
AlgoImpl::
HeapSortInternal<FReplayEventListItem,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FReplayEventListItem::*>,TLess<void>_>
          (FReplayEventListItem *param_1,int param_2,
          TProjectionMemberData<unsigned_int_FReplayEventListItem::*> param_3,TLess<void> param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  FString *pFVar9;
  FString *pFVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  FReplayEventListItem *pFVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  
  lVar25 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar21) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar21) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar22 = (param_2 + -2) / 2;
  iVar23 = iVar22 * 2 + 1;
  iVar24 = iVar23;
  iVar26 = iVar22;
  do {
    while (param_2 <= iVar23) {
LAB_146cb5742:
      if (iVar26 == 0) {
        iVar23 = param_2 + -1;
        lVar30 = (longlong)iVar23;
        if (0 < iVar23) {
          pFVar27 = param_1 + lVar30;
          do {
            pFVar2 = (pFVar27->ID).Data.AllocatorInstance.Data;
            iVar29 = 0;
            lVar8 = param_1->_padding_;
            pFVar3 = (param_1->ID).Data.AllocatorInstance.Data;
            iVar22 = (param_1->ID).Data.ArrayNum;
            iVar26 = (param_1->ID).Data.ArrayMax;
            pFVar4 = (param_1->Group).Data.AllocatorInstance.Data;
            iVar28 = (param_1->Group).Data.ArrayNum;
            iVar11 = (param_1->Group).Data.ArrayMax;
            pFVar5 = (param_1->Metadata).Data.AllocatorInstance.Data;
            iVar12 = (param_1->Metadata).Data.ArrayNum;
            iVar13 = (param_1->Metadata).Data.ArrayMax;
            uVar19 = param_1->Time1;
            uVar20 = param_1->Time2;
            param_1->_padding_ = pFVar27->_padding_;
            (param_1->ID).Data.AllocatorInstance.Data = pFVar2;
            iVar24 = (pFVar27->ID).Data.ArrayMax;
            pFVar2 = (pFVar27->Group).Data.AllocatorInstance.Data;
            (param_1->ID).Data.ArrayNum = (pFVar27->ID).Data.ArrayNum;
            (param_1->ID).Data.ArrayMax = iVar24;
            (param_1->Group).Data.AllocatorInstance.Data = pFVar2;
            iVar24 = (pFVar27->Group).Data.ArrayMax;
            pFVar2 = (pFVar27->Metadata).Data.AllocatorInstance.Data;
            (param_1->Group).Data.ArrayNum = (pFVar27->Group).Data.ArrayNum;
            (param_1->Group).Data.ArrayMax = iVar24;
            (param_1->Metadata).Data.AllocatorInstance.Data = pFVar2;
            iVar24 = (pFVar27->Metadata).Data.ArrayMax;
            uVar17 = pFVar27->Time1;
            uVar18 = pFVar27->Time2;
            (param_1->Metadata).Data.ArrayNum = (pFVar27->Metadata).Data.ArrayNum;
            (param_1->Metadata).Data.ArrayMax = iVar24;
            param_1->Time1 = uVar17;
            param_1->Time2 = uVar18;
            pFVar27->_padding_ = lVar8;
            (pFVar27->ID).Data.AllocatorInstance.Data = pFVar3;
            (pFVar27->ID).Data.ArrayNum = iVar22;
            (pFVar27->ID).Data.ArrayMax = iVar26;
            (pFVar27->Group).Data.AllocatorInstance.Data = pFVar4;
            (pFVar27->Group).Data.ArrayNum = iVar28;
            (pFVar27->Group).Data.ArrayMax = iVar11;
            (pFVar27->Metadata).Data.AllocatorInstance.Data = pFVar5;
            (pFVar27->Metadata).Data.ArrayNum = iVar12;
            (pFVar27->Metadata).Data.ArrayMax = iVar13;
            pFVar27->Time1 = uVar19;
            pFVar27->Time2 = uVar20;
            if (1 < iVar23) {
              do {
                iVar22 = iVar29 * 2;
                iVar24 = iVar22 + 1;
                if (iVar22 + 2 < iVar23) {
                  if (*(uint *)((longlong)&param_1[(longlong)iVar22 + 2]._padding_ + lVar25) <
                      *(uint *)((longlong)&param_1[iVar24]._padding_ + lVar25)) {
                    iVar24 = iVar22;
                  }
                  iVar24 = iVar24 + 1;
                }
                if (*(uint *)((longlong)&param_1[iVar24]._padding_ + lVar25) <=
                    *(uint *)((longlong)&param_1[iVar29]._padding_ + lVar25)) break;
                pFVar2 = param_1[iVar24].ID.Data.AllocatorInstance.Data;
                lVar8 = param_1[iVar29]._padding_;
                pFVar3 = param_1[iVar29].ID.Data.AllocatorInstance.Data;
                pFVar9 = &param_1[iVar29].ID;
                iVar26 = (pFVar9->Data).ArrayNum;
                iVar28 = (pFVar9->Data).ArrayMax;
                pFVar4 = pFVar9[1].Data.AllocatorInstance.Data;
                pFVar9 = &param_1[iVar29].Group;
                iVar11 = (pFVar9->Data).ArrayNum;
                iVar12 = (pFVar9->Data).ArrayMax;
                pFVar5 = pFVar9[1].Data.AllocatorInstance.Data;
                pFVar9 = &param_1[iVar29].Metadata;
                iVar13 = (pFVar9->Data).ArrayNum;
                iVar14 = (pFVar9->Data).ArrayMax;
                uVar6 = *(undefined8 *)(pFVar9 + 1);
                param_1[iVar29]._padding_ = param_1[iVar24]._padding_;
                param_1[iVar29].ID.Data.AllocatorInstance.Data = pFVar2;
                pFVar9 = &param_1[iVar24].ID;
                iVar22 = (pFVar9->Data).ArrayMax;
                pFVar2 = pFVar9[1].Data.AllocatorInstance.Data;
                pFVar10 = &param_1[iVar29].ID;
                (pFVar10->Data).ArrayNum = (pFVar9->Data).ArrayNum;
                (pFVar10->Data).ArrayMax = iVar22;
                pFVar10[1].Data.AllocatorInstance.Data = pFVar2;
                pFVar9 = &param_1[iVar24].Group;
                iVar22 = (pFVar9->Data).ArrayMax;
                pFVar2 = pFVar9[1].Data.AllocatorInstance.Data;
                pFVar10 = &param_1[iVar29].Group;
                (pFVar10->Data).ArrayNum = (pFVar9->Data).ArrayNum;
                (pFVar10->Data).ArrayMax = iVar22;
                pFVar10[1].Data.AllocatorInstance.Data = pFVar2;
                pFVar9 = &param_1[iVar24].Metadata;
                iVar22 = (pFVar9->Data).ArrayMax;
                uVar7 = *(undefined8 *)(pFVar9 + 1);
                pFVar10 = &param_1[iVar29].Metadata;
                (pFVar10->Data).ArrayNum = (pFVar9->Data).ArrayNum;
                (pFVar10->Data).ArrayMax = iVar22;
                *(undefined8 *)(pFVar10 + 1) = uVar7;
                param_1[iVar24]._padding_ = lVar8;
                param_1[iVar24].ID.Data.AllocatorInstance.Data = pFVar3;
                pFVar9 = &param_1[iVar24].ID;
                (pFVar9->Data).ArrayNum = iVar26;
                (pFVar9->Data).ArrayMax = iVar28;
                pFVar9[1].Data.AllocatorInstance.Data = pFVar4;
                pFVar9 = &param_1[iVar24].Group;
                (pFVar9->Data).ArrayNum = iVar11;
                (pFVar9->Data).ArrayMax = iVar12;
                pFVar9[1].Data.AllocatorInstance.Data = pFVar5;
                pFVar9 = &param_1[iVar24].Metadata;
                (pFVar9->Data).ArrayNum = iVar13;
                (pFVar9->Data).ArrayMax = iVar14;
                *(undefined8 *)(pFVar9 + 1) = uVar6;
                iVar29 = iVar24;
              } while (iVar24 * 2 + 1 < iVar23);
            }
            iVar23 = iVar23 + -1;
            lVar30 = lVar30 + -1;
            pFVar27 = pFVar27 + -1;
          } while (0 < lVar30);
        }
        return;
      }
      iVar22 = iVar26 + -1;
      iVar23 = iVar24 + -2;
      iVar24 = iVar23;
      iVar26 = iVar22;
    }
    iVar23 = iVar22 * 2;
    iVar28 = iVar23 + 1;
    if (iVar23 + 2 < param_2) {
      if (*(uint *)((longlong)&param_1[(longlong)iVar23 + 2]._padding_ + lVar25) <
          *(uint *)((longlong)&param_1[iVar28]._padding_ + lVar25)) {
        iVar28 = iVar23;
      }
      iVar28 = iVar28 + 1;
    }
    if (*(uint *)((longlong)&param_1[iVar28]._padding_ + lVar25) <=
        *(uint *)((longlong)&param_1[iVar22]._padding_ + lVar25)) goto LAB_146cb5742;
    pFVar2 = param_1[iVar28].ID.Data.AllocatorInstance.Data;
    iVar23 = iVar28 * 2 + 1;
    lVar30 = param_1[iVar22]._padding_;
    pFVar3 = param_1[iVar22].ID.Data.AllocatorInstance.Data;
    pFVar9 = &param_1[iVar22].ID;
    iVar12 = (pFVar9->Data).ArrayNum;
    iVar13 = (pFVar9->Data).ArrayMax;
    pFVar4 = pFVar9[1].Data.AllocatorInstance.Data;
    pFVar9 = &param_1[iVar22].Group;
    iVar29 = (pFVar9->Data).ArrayNum;
    iVar14 = (pFVar9->Data).ArrayMax;
    pFVar5 = pFVar9[1].Data.AllocatorInstance.Data;
    pFVar9 = &param_1[iVar22].Metadata;
    iVar15 = (pFVar9->Data).ArrayNum;
    iVar16 = (pFVar9->Data).ArrayMax;
    uVar6 = *(undefined8 *)(pFVar9 + 1);
    param_1[iVar22]._padding_ = param_1[iVar28]._padding_;
    param_1[iVar22].ID.Data.AllocatorInstance.Data = pFVar2;
    pFVar9 = &param_1[iVar28].ID;
    iVar11 = (pFVar9->Data).ArrayMax;
    pFVar2 = pFVar9[1].Data.AllocatorInstance.Data;
    pFVar10 = &param_1[iVar22].ID;
    (pFVar10->Data).ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar10->Data).ArrayMax = iVar11;
    pFVar10[1].Data.AllocatorInstance.Data = pFVar2;
    pFVar9 = &param_1[iVar28].Group;
    iVar11 = (pFVar9->Data).ArrayMax;
    pFVar2 = pFVar9[1].Data.AllocatorInstance.Data;
    pFVar10 = &param_1[iVar22].Group;
    (pFVar10->Data).ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar10->Data).ArrayMax = iVar11;
    pFVar10[1].Data.AllocatorInstance.Data = pFVar2;
    pFVar9 = &param_1[iVar28].Metadata;
    iVar11 = (pFVar9->Data).ArrayMax;
    uVar7 = *(undefined8 *)(pFVar9 + 1);
    pFVar10 = &param_1[iVar22].Metadata;
    (pFVar10->Data).ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar10->Data).ArrayMax = iVar11;
    *(undefined8 *)(pFVar10 + 1) = uVar7;
    param_1[iVar28]._padding_ = lVar30;
    param_1[iVar28].ID.Data.AllocatorInstance.Data = pFVar3;
    pFVar9 = &param_1[iVar28].ID;
    (pFVar9->Data).ArrayNum = iVar12;
    (pFVar9->Data).ArrayMax = iVar13;
    pFVar9[1].Data.AllocatorInstance.Data = pFVar4;
    pFVar9 = &param_1[iVar28].Group;
    (pFVar9->Data).ArrayNum = iVar29;
    (pFVar9->Data).ArrayMax = iVar14;
    pFVar9[1].Data.AllocatorInstance.Data = pFVar5;
    pFVar9 = &param_1[iVar28].Metadata;
    (pFVar9->Data).ArrayNum = iVar15;
    (pFVar9->Data).ArrayMax = iVar16;
    *(undefined8 *)(pFVar9 + 1) = uVar6;
    iVar22 = iVar28;
  } while( true );
}

// IntroSortInternal<FReplayEventListItem,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FReplayEventListItem::*>,TLess<void>_> @ 146cb58c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FReplayEventListItem,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FReplayEventListItem::*>,TLess<void>_>
          (FReplayEventListItem *param_1,int param_2,
          TProjectionMemberData<unsigned_int_FReplayEventListItem::*> param_3,TLess<void> param_4)

{
  FReplayEventListItem *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  FReplayEventListItem *pFVar18;
  longlong lVar19;
  FReplayEventListItem *pFVar20;
  FReplayEventListItem *pFVar21;
  FReplayEventListItem *pFVar22;
  FReplayEventListItem *pFVar23;
  FReplayEventListItem *pFVar24;
  FReplayEventListItem **ppFVar25;
  float fVar26;
  undefined1 auStack_378 [48];
  FReplayEventListItem *local_348;
  FReplayEventListItem *local_338;
  FReplayEventListItem *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    lVar19 = (longlong)(int)param_3.DataMemberPtr;
    local_338 = param_1;
    fVar26 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar26;
    memset(local_320,0,0x2e8);
    ppFVar25 = &local_338;
    do {
      pFVar22 = ppFVar25[1];
      pFVar24 = *ppFVar25;
      pFVar1 = ppFVar25[2];
      iVar17 = (int)((longlong)pFVar22 - (longlong)pFVar24 >> 6) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar23 = pFVar24;
      if ((int)local_348 != 0) {
LAB_146cb5970:
        if (8 < iVar17) {
          pFVar2 = (pFVar23->ID).Data.AllocatorInstance.Data;
          pFVar20 = pFVar22 + 1;
          pFVar24 = pFVar23 + iVar17 / 2;
          lVar3 = pFVar24->_padding_;
          pFVar4 = (pFVar24->ID).Data.AllocatorInstance.Data;
          iVar9 = (pFVar24->ID).Data.ArrayNum;
          iVar10 = (pFVar24->ID).Data.ArrayMax;
          pFVar5 = (pFVar24->Group).Data.AllocatorInstance.Data;
          iVar11 = (pFVar24->Group).Data.ArrayNum;
          iVar12 = (pFVar24->Group).Data.ArrayMax;
          pFVar6 = (pFVar24->Metadata).Data.AllocatorInstance.Data;
          iVar13 = (pFVar24->Metadata).Data.ArrayNum;
          iVar14 = (pFVar24->Metadata).Data.ArrayMax;
          uVar15 = pFVar24->Time1;
          uVar16 = pFVar24->Time2;
          pFVar24->_padding_ = pFVar23->_padding_;
          (pFVar24->ID).Data.AllocatorInstance.Data = pFVar2;
          iVar17 = (pFVar23->ID).Data.ArrayMax;
          pFVar2 = (pFVar23->Group).Data.AllocatorInstance.Data;
          (pFVar24->ID).Data.ArrayNum = (pFVar23->ID).Data.ArrayNum;
          (pFVar24->ID).Data.ArrayMax = iVar17;
          (pFVar24->Group).Data.AllocatorInstance.Data = pFVar2;
          iVar17 = (pFVar23->Group).Data.ArrayMax;
          pFVar2 = (pFVar23->Metadata).Data.AllocatorInstance.Data;
          (pFVar24->Group).Data.ArrayNum = (pFVar23->Group).Data.ArrayNum;
          (pFVar24->Group).Data.ArrayMax = iVar17;
          (pFVar24->Metadata).Data.AllocatorInstance.Data = pFVar2;
          iVar17 = (pFVar23->Metadata).Data.ArrayMax;
          uVar7 = pFVar23->Time1;
          uVar8 = pFVar23->Time2;
          (pFVar24->Metadata).Data.ArrayNum = (pFVar23->Metadata).Data.ArrayNum;
          (pFVar24->Metadata).Data.ArrayMax = iVar17;
          pFVar24->Time1 = uVar7;
          pFVar24->Time2 = uVar8;
          pFVar23->_padding_ = lVar3;
          (pFVar23->ID).Data.AllocatorInstance.Data = pFVar4;
          (pFVar23->ID).Data.ArrayNum = iVar9;
          (pFVar23->ID).Data.ArrayMax = iVar10;
          (pFVar23->Group).Data.AllocatorInstance.Data = pFVar5;
          (pFVar23->Group).Data.ArrayNum = iVar11;
          (pFVar23->Group).Data.ArrayMax = iVar12;
          (pFVar23->Metadata).Data.AllocatorInstance.Data = pFVar6;
          (pFVar23->Metadata).Data.ArrayNum = iVar13;
          (pFVar23->Metadata).Data.ArrayMax = iVar14;
          pFVar23->Time1 = uVar15;
          pFVar23->Time2 = uVar16;
          pFVar24 = pFVar23;
LAB_146cb59d3:
          pFVar18 = pFVar24;
          pFVar24 = pFVar18 + 1;
          if (pFVar24 <= pFVar22) goto code_r0x000146cb59dc;
          goto LAB_146cb59e5;
        }
        for (; pFVar24 = pFVar23, pFVar1 = pFVar23, pFVar23 < pFVar22; pFVar22 = pFVar22 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar22) {
            if (*(uint *)((longlong)&pFVar24->_padding_ + lVar19) <
                *(uint *)((longlong)&pFVar1->_padding_ + lVar19)) {
              pFVar24 = pFVar1;
            }
          }
          lVar3 = pFVar24->_padding_;
          pFVar2 = (pFVar24->ID).Data.AllocatorInstance.Data;
          iVar9 = (pFVar24->ID).Data.ArrayNum;
          iVar10 = (pFVar24->ID).Data.ArrayMax;
          pFVar4 = (pFVar24->Group).Data.AllocatorInstance.Data;
          iVar11 = (pFVar24->Group).Data.ArrayNum;
          iVar12 = (pFVar24->Group).Data.ArrayMax;
          pFVar5 = (pFVar24->Metadata).Data.AllocatorInstance.Data;
          pFVar6 = (pFVar22->ID).Data.AllocatorInstance.Data;
          iVar13 = (pFVar24->Metadata).Data.ArrayNum;
          iVar14 = (pFVar24->Metadata).Data.ArrayMax;
          uVar15 = pFVar24->Time1;
          uVar16 = pFVar24->Time2;
          pFVar24->_padding_ = pFVar22->_padding_;
          (pFVar24->ID).Data.AllocatorInstance.Data = pFVar6;
          iVar17 = (pFVar22->ID).Data.ArrayMax;
          pFVar6 = (pFVar22->Group).Data.AllocatorInstance.Data;
          (pFVar24->ID).Data.ArrayNum = (pFVar22->ID).Data.ArrayNum;
          (pFVar24->ID).Data.ArrayMax = iVar17;
          (pFVar24->Group).Data.AllocatorInstance.Data = pFVar6;
          iVar17 = (pFVar22->Group).Data.ArrayMax;
          pFVar6 = (pFVar22->Metadata).Data.AllocatorInstance.Data;
          (pFVar24->Group).Data.ArrayNum = (pFVar22->Group).Data.ArrayNum;
          (pFVar24->Group).Data.ArrayMax = iVar17;
          (pFVar24->Metadata).Data.AllocatorInstance.Data = pFVar6;
          iVar17 = (pFVar22->Metadata).Data.ArrayMax;
          uVar7 = pFVar22->Time1;
          uVar8 = pFVar22->Time2;
          (pFVar24->Metadata).Data.ArrayNum = (pFVar22->Metadata).Data.ArrayNum;
          (pFVar24->Metadata).Data.ArrayMax = iVar17;
          pFVar24->Time1 = uVar7;
          pFVar24->Time2 = uVar8;
          pFVar22->_padding_ = lVar3;
          (pFVar22->ID).Data.AllocatorInstance.Data = pFVar2;
          (pFVar22->ID).Data.ArrayNum = iVar9;
          (pFVar22->ID).Data.ArrayMax = iVar10;
          (pFVar22->Group).Data.AllocatorInstance.Data = pFVar4;
          (pFVar22->Group).Data.ArrayNum = iVar11;
          (pFVar22->Group).Data.ArrayMax = iVar12;
          (pFVar22->Metadata).Data.AllocatorInstance.Data = pFVar5;
          (pFVar22->Metadata).Data.ArrayNum = iVar13;
          (pFVar22->Metadata).Data.ArrayMax = iVar14;
          pFVar22->Time1 = uVar15;
          pFVar22->Time2 = uVar16;
        }
        goto LAB_146cb5b18;
      }
LAB_146cb5b07:
      local_348 = pFVar1;
      HeapSortInternal<FReplayEventListItem,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FReplayEventListItem::*>,TLess<void>_>
                (pFVar24,iVar17,param_3,param_4);
LAB_146cb5b18:
      ppFVar25 = ppFVar25 + -3;
    } while (&local_338 <= ppFVar25);
  }
  return;
code_r0x000146cb59dc:
  if (*(uint *)((longlong)&pFVar24->_padding_ + lVar19) <=
      *(uint *)((longlong)&pFVar23->_padding_ + lVar19)) goto LAB_146cb59d3;
LAB_146cb59e5:
  do {
    pFVar21 = pFVar20;
    pFVar20 = pFVar21 + -1;
    if (pFVar20 <= pFVar23) break;
  } while (*(uint *)((longlong)&pFVar23->_padding_ + lVar19) <=
           *(uint *)((longlong)&pFVar20->_padding_ + lVar19));
  pFVar2 = pFVar21[-1].ID.Data.AllocatorInstance.Data;
  if (pFVar24 <= pFVar20) {
    lVar3 = pFVar24->_padding_;
    pFVar4 = pFVar18[1].ID.Data.AllocatorInstance.Data;
    iVar9 = pFVar18[1].ID.Data.ArrayNum;
    iVar10 = pFVar18[1].ID.Data.ArrayMax;
    pFVar5 = pFVar18[1].Group.Data.AllocatorInstance.Data;
    iVar11 = pFVar18[1].Group.Data.ArrayNum;
    iVar12 = pFVar18[1].Group.Data.ArrayMax;
    pFVar6 = pFVar18[1].Metadata.Data.AllocatorInstance.Data;
    iVar13 = pFVar18[1].Metadata.Data.ArrayNum;
    iVar14 = pFVar18[1].Metadata.Data.ArrayMax;
    uVar15 = pFVar18[1].Time1;
    uVar16 = pFVar18[1].Time2;
    pFVar24->_padding_ = pFVar20->_padding_;
    pFVar18[1].ID.Data.AllocatorInstance.Data = pFVar2;
    iVar17 = pFVar21[-1].ID.Data.ArrayMax;
    pFVar2 = pFVar21[-1].Group.Data.AllocatorInstance.Data;
    pFVar18[1].ID.Data.ArrayNum = pFVar21[-1].ID.Data.ArrayNum;
    pFVar18[1].ID.Data.ArrayMax = iVar17;
    pFVar18[1].Group.Data.AllocatorInstance.Data = pFVar2;
    iVar17 = pFVar21[-1].Group.Data.ArrayMax;
    pFVar2 = pFVar21[-1].Metadata.Data.AllocatorInstance.Data;
    pFVar18[1].Group.Data.ArrayNum = pFVar21[-1].Group.Data.ArrayNum;
    pFVar18[1].Group.Data.ArrayMax = iVar17;
    pFVar18[1].Metadata.Data.AllocatorInstance.Data = pFVar2;
    iVar17 = pFVar21[-1].Metadata.Data.ArrayMax;
    uVar7 = pFVar21[-1].Time1;
    uVar8 = pFVar21[-1].Time2;
    pFVar18[1].Metadata.Data.ArrayNum = pFVar21[-1].Metadata.Data.ArrayNum;
    pFVar18[1].Metadata.Data.ArrayMax = iVar17;
    pFVar18[1].Time1 = uVar7;
    pFVar18[1].Time2 = uVar8;
    pFVar20->_padding_ = lVar3;
    pFVar21[-1].ID.Data.AllocatorInstance.Data = pFVar4;
    pFVar21[-1].ID.Data.ArrayNum = iVar9;
    pFVar21[-1].ID.Data.ArrayMax = iVar10;
    pFVar21[-1].Group.Data.AllocatorInstance.Data = pFVar5;
    pFVar21[-1].Group.Data.ArrayNum = iVar11;
    pFVar21[-1].Group.Data.ArrayMax = iVar12;
    pFVar21[-1].Metadata.Data.AllocatorInstance.Data = pFVar6;
    pFVar21[-1].Metadata.Data.ArrayNum = iVar13;
    pFVar21[-1].Metadata.Data.ArrayMax = iVar14;
    pFVar21[-1].Time1 = uVar15;
    pFVar21[-1].Time2 = uVar16;
    goto LAB_146cb59d3;
  }
  lVar3 = pFVar23->_padding_;
  pFVar4 = (pFVar23->ID).Data.AllocatorInstance.Data;
  iVar9 = (pFVar23->ID).Data.ArrayNum;
  iVar10 = (pFVar23->ID).Data.ArrayMax;
  pFVar5 = (pFVar23->Group).Data.AllocatorInstance.Data;
  iVar11 = (pFVar23->Group).Data.ArrayNum;
  iVar12 = (pFVar23->Group).Data.ArrayMax;
  pFVar6 = (pFVar23->Metadata).Data.AllocatorInstance.Data;
  local_348._0_4_ = (int)local_348 + -1;
  iVar13 = (pFVar23->Metadata).Data.ArrayNum;
  iVar14 = (pFVar23->Metadata).Data.ArrayMax;
  uVar15 = pFVar23->Time1;
  uVar16 = pFVar23->Time2;
  pFVar23->_padding_ = pFVar20->_padding_;
  (pFVar23->ID).Data.AllocatorInstance.Data = pFVar2;
  iVar17 = pFVar21[-1].ID.Data.ArrayMax;
  pFVar2 = pFVar21[-1].Group.Data.AllocatorInstance.Data;
  (pFVar23->ID).Data.ArrayNum = pFVar21[-1].ID.Data.ArrayNum;
  (pFVar23->ID).Data.ArrayMax = iVar17;
  (pFVar23->Group).Data.AllocatorInstance.Data = pFVar2;
  iVar17 = pFVar21[-1].Group.Data.ArrayMax;
  pFVar2 = pFVar21[-1].Metadata.Data.AllocatorInstance.Data;
  (pFVar23->Group).Data.ArrayNum = pFVar21[-1].Group.Data.ArrayNum;
  (pFVar23->Group).Data.ArrayMax = iVar17;
  (pFVar23->Metadata).Data.AllocatorInstance.Data = pFVar2;
  iVar17 = pFVar21[-1].Metadata.Data.ArrayMax;
  uVar7 = pFVar21[-1].Time1;
  uVar8 = pFVar21[-1].Time2;
  (pFVar23->Metadata).Data.ArrayNum = pFVar21[-1].Metadata.Data.ArrayNum;
  (pFVar23->Metadata).Data.ArrayMax = iVar17;
  pFVar23->Time1 = uVar7;
  pFVar23->Time2 = uVar8;
  pFVar20->_padding_ = lVar3;
  pFVar21[-1].ID.Data.AllocatorInstance.Data = pFVar4;
  pFVar21[-1].ID.Data.ArrayNum = iVar9;
  pFVar21[-1].ID.Data.ArrayMax = iVar10;
  pFVar21[-1].Group.Data.AllocatorInstance.Data = pFVar5;
  pFVar21[-1].Group.Data.ArrayNum = iVar11;
  pFVar21[-1].Group.Data.ArrayMax = iVar12;
  pFVar21[-1].Metadata.Data.AllocatorInstance.Data = pFVar6;
  pFVar21[-1].Metadata.Data.ArrayNum = iVar13;
  pFVar21[-1].Metadata.Data.ArrayMax = iVar14;
  pFVar21[-1].Time1 = uVar15;
  pFVar21[-1].Time2 = uVar16;
  if ((longlong)((longlong)pFVar20 + (-0x40 - (longlong)pFVar23) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pFVar22 - (longlong)pFVar24 & 0xffffffffffffffc0U)) {
    if (pFVar24 < pFVar22) {
      *ppFVar25 = pFVar24;
      ppFVar25[1] = pFVar22;
      *(int *)(ppFVar25 + 2) = (int)local_348;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar20 <= pFVar23 + 1) goto LAB_146cb5b18;
    pFVar22 = pFVar21 + -2;
    pFVar24 = pFVar23;
  }
  else {
    if (pFVar23 + 1 < pFVar20) {
      *ppFVar25 = pFVar23;
      ppFVar25[1] = pFVar21 + -2;
      *(int *)(ppFVar25 + 2) = (int)local_348;
      ppFVar25 = ppFVar25 + 3;
    }
    if (pFVar22 <= pFVar24) goto LAB_146cb5b18;
  }
  iVar17 = (int)((longlong)pFVar22 - (longlong)pFVar24 >> 6) + 1;
  pFVar23 = pFVar24;
  if ((int)local_348 == 0) goto LAB_146cb5b07;
  goto LAB_146cb5970;
}

// StaticEnum<enum_EHttpReplayResult> @ 146cb5da0

UEnum * __cdecl StaticEnum<enum_EHttpReplayResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
    Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                       (UObject *)pUVar1,L"EHttpReplayResult");
  }
  return Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146cb7260

void * __thiscall
IBaseDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7290

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb72d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7300

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7330

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7370

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb73b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb73f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7450

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7490

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb74c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,int,bool>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb74f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7530

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7570

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb75b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FString>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Payload).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7610

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7650

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHttpNetworkReplayStreamer,SharedPointerInternals::DefaultDeleter<FHttpNetworkReplayStreamer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FHttpNetworkReplayStreamer,SharedPointerInternals::DefaultDeleter<FHttpNetworkReplayStreamer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7690

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FQueuedGotoFakeCheckpoint,SharedPointerInternals::DefaultDeleter<FQueuedGotoFakeCheckpoint>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FQueuedGotoFakeCheckpoint,SharedPointerInternals::DefaultDeleter<FQueuedGotoFakeCheckpoint>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb76d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FQueuedHttpRequest,SharedPointerInternals::DefaultDeleter<FQueuedHttpRequest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FQueuedHttpRequest,SharedPointerInternals::DefaultDeleter<FQueuedHttpRequest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7710

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FQueuedHttpRequestAddEvent,SharedPointerInternals::DefaultDeleter<FQueuedHttpRequestAddEvent>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FQueuedHttpRequestAddEvent,SharedPointerInternals::DefaultDeleter<FQueuedHttpRequestAddEvent>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7750

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FQueuedHttpRequestAddUser,SharedPointerInternals::DefaultDeleter<FQueuedHttpRequestAddUser>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FQueuedHttpRequestAddUser,SharedPointerInternals::DefaultDeleter<FQueuedHttpRequestAddUser>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7790

void * __thiscall
FHttpNetworkReplayStreamer::_scalar_deleting_destructor_
          (FHttpNetworkReplayStreamer *this,uint param_1)

{
  ~FHttpNetworkReplayStreamer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb77d0

void * __thiscall
FHttpStreamFArchive::_scalar_deleting_destructor_(FHttpStreamFArchive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7820

void * __thiscall
FNetworkReplayList::_scalar_deleting_destructor_(FNetworkReplayList *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayList__6B_;
  DestructItems<FNetworkReplayListItem,int>
            ((FNetworkReplayListItem *)(this->Replays).AllocatorInstance.Data,
             (this->Replays).ArrayNum);
  pFVar1 = (this->Replays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7890

void * __thiscall
FNetworkReplayListItem::_scalar_deleting_destructor_(FNetworkReplayListItem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayListItem__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7910

void * __thiscall
FNetworkReplayStartDownloadingResponse::_scalar_deleting_destructor_
          (FNetworkReplayStartDownloadingResponse *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayStartDownloadingResponse__6B_;
  pFVar1 = (this->Metadata).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Viewer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->State).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7990

void * __thiscall
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (FNetworkReplayStartUploadingResponse *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayStartUploadingResponse__6B_;
  pFVar1 = (this->SessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb79f0

void * __thiscall
FNetworkReplayUserList::_scalar_deleting_destructor_(FNetworkReplayUserList *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNetworkReplayUserList__6B_;
  DestructItems<FString,int>((FString *)(this->Users).AllocatorInstance.Data,(this->Users).ArrayNum)
  ;
  pFVar1 = (this->Users).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7a60

void * __thiscall
FQueuedGotoFakeCheckpoint::_scalar_deleting_destructor_
          (FQueuedGotoFakeCheckpoint *this,uint param_1)

{
  *(undefined ***)this = &___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7ab0

void * __thiscall
FQueuedHttpRequest::_scalar_deleting_destructor_(FQueuedHttpRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Request).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7b00

void * __thiscall
FQueuedHttpRequestAddEvent::_scalar_deleting_destructor_
          (FQueuedHttpRequestAddEvent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FQueuedHttpRequestAddEvent__6B_;
  pFVar1 = (this->Meta).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Group).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7b80

void * __thiscall
FQueuedHttpRequestAddUser::_scalar_deleting_destructor_
          (FQueuedHttpRequestAddUser *this,uint param_1)

{
  *(undefined ***)this = &___7FQueuedHttpRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146cb7bd0

void * __thiscall
FUniqueNetIdRepl::_scalar_deleting_destructor_(FUniqueNetIdRepl *this,uint param_1)

{
  ~FUniqueNetIdRepl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// BuildRequestErrorString @ 146cb8590

FString * __cdecl
BuildRequestErrorString
          (FString *__return_storage_ptr__,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FString local_78;
  FString *local_68;
  int local_60;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  
  uVar4 = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (param_1->Object == (IHttpRequest *)0x0) {
    FString::operator=(&local_78,L"HttpRequest NULL.");
  }
  else {
    (*(code *)**(undefined8 **)param_1->Object)();
    FString::PrintfImpl(&local_58,L"URL: %s");
    iVar6 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (**(code **)(*(longlong *)param_1->Object + 0x58))(param_1->Object,local_38);
    FString::PrintfImpl(&local_48,L", Verb: %s");
    uVar7 = 0;
    uVar8 = local_48.Data.ArrayNum - 1;
    if (local_48.Data.ArrayNum == 0) {
      uVar8 = uVar7;
    }
    FString::AppendChars(&local_78,(wchar_t *)local_48.Data.AllocatorInstance.Data,uVar8);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (**(code **)(*(longlong *)param_1->Object + 0x30))(param_1->Object,&local_68);
    uVar9 = uVar4;
    if (0 < local_60) {
      do {
        FString::AppendChars(&local_78,L", ",2);
        uVar5 = (uint)uVar4;
        uVar8 = uVar7;
        if ((int)uVar5 < local_60) {
          uVar8 = ~uVar5 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FString *)(*pcVar1)();
          return pFVar3;
        }
        iVar6 = *(int *)((longlong)&(local_68->Data).ArrayNum + uVar9);
        uVar8 = iVar6 - 1;
        if (iVar6 == 0) {
          uVar8 = uVar7;
        }
        FString::AppendChars
                  (&local_78,
                   *(wchar_t **)((longlong)&(local_68->Data).AllocatorInstance.Data + uVar9),uVar8);
        uVar4 = (ulonglong)(uVar5 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar5 + 1) < local_60);
    }
    DestructItems<FString,int>(local_68,local_60);
    if (local_68 != (FString *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (param_2->Object != (IHttpResponse *)0x0) {
    (**(code **)((longlong)*param_2->Object + 0x58))();
  }
  FString::PrintfImpl(__return_storage_ptr__,L"Response code: %d, Extra info: %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeHttpNetworkReplayStreaming @ 146cbb460

void __cdecl EmptyLinkFunctionForGeneratedCodeHttpNetworkReplayStreaming(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHttpNetworkReplayStreaming_init @ 146cbb470

void __cdecl EmptyLinkFunctionForGeneratedCodeHttpNetworkReplayStreaming_init(void)

{
  return;
}

// GetUserStringFromUserIndex @ 146cbde10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl GetUserStringFromUserIndex(FString *__return_storage_ptr__,int param_1)

{
  ULocalPlayer *pUVar1;
  FUniqueNetIdWrapper *this;
  undefined1 auStack_68 [32];
  FUniqueNetIdRepl local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((((param_1 != -1) && (GWorld.World != (UWorld *)0x0)) && (GEngine != (UEngine *)0x0)) &&
     (pUVar1 = UEngine::GetLocalPlayerFromControllerId(GEngine,GWorld.World,param_1),
     pUVar1 != (ULocalPlayer *)0x0)) {
    this = (FUniqueNetIdWrapper *)(**(code **)(pUVar1->_padding_ + 0x360))(pUVar1,&local_48);
    FUniqueNetIdWrapper::ToString(this,__return_storage_ptr__);
    FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_48);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// LexToString @ 146cc5070

wchar_t * __cdecl LexToString(EHttpReplayResult param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"::Invalid";
  switch(param_1) {
  case Success:
    pwVar1 = L"EHttpReplayResult::Success";
    break;
  case FailedJsonParse:
    pwVar1 = L"EHttpReplayResult::FailedJsonParse";
    break;
  case DataUnavailable:
    pwVar1 = L"EHttpReplayResult::DataUnavailable";
    break;
  case InvalidHttpResponse:
    pwVar1 = L"EHttpReplayResult::InvalidHttpResponse";
    break;
  case CompressionFailed:
    pwVar1 = L"EHttpReplayResult::CompressionFailed";
    break;
  case DecompressionFailed:
    pwVar1 = L"EHttpReplayResult::DecompressionFailed";
    break;
  case InvalidPayload:
    pwVar1 = L"EHttpReplayResult::InvalidPayload";
    break;
  case Unknown:
    pwVar1 = L"EHttpReplayResult::Unknown";
    break;
  default:
    goto switchD_146cc5090_default;
  }
  do {
    pwVar1 = pwVar1 + 1;
  } while (*pwVar1 != L':');
switchD_146cc5090_default:
  return pwVar1 + 2;
}

// Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult @ 146cc9730

UEnum * __cdecl Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult(void)

{
  if (Z_Registration_Info_UEnum_EHttpReplayResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHttpReplayResult.InnerSingleton,
               &Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHttpReplayResult.InnerSingleton;
}

// IMPLEMENT_MODULE_HttpNetworkReplayStreaming @ 146cc9770

void __cdecl IMPLEMENT_MODULE_HttpNetworkReplayStreaming(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarChunkUploadDelayInSeconds'' @ 1503e0040

void __cdecl _dynamic_atexit_destructor_for__CVarChunkUploadDelayInSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChunkUploadDelayInSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxCacheSize'' @ 1503e0060

void __cdecl _dynamic_atexit_destructor_for__CVarMaxCacheSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxCacheSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaFilterOverride'' @ 1503e0080

void __cdecl _dynamic_atexit_destructor_for__CVarMetaFilterOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMetaFilterOverride);
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 1503e00a0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogHttpReplay'' @ 1503e00c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHttpReplay__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHttpReplay);
  return;
}

