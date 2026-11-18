// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 43

// AddUniqueImpl<FAssetData_const_&> @ 142ab2580

int __thiscall
TArray<FAssetData,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FAssetData_const_&>
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *this,FAssetData *param_1)

{
  FAssetData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAssetData *pFVar5;
  
  pFVar1 = (FAssetData *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar5 = pFVar1;
    do {
      if ((pFVar5->PackageName == param_1->PackageName) && (pFVar5->AssetName == param_1->AssetName)
         ) {
        iVar4 = (int)(((longlong)pFVar5 - (longlong)pFVar1) / 0x68);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  FAssetData::FAssetData
            ((FAssetData *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x68),param_1);
  return iVar4;
}

// Append<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> @ 142ab2950

void __thiscall
TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedDefaultAllocator<32>_>::
Append<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
          (TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedDefaultAllocator<32>_>
           *this,TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int iVar1;
  ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_> _Src;
  
  if ((TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
       *)this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    _Src = (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)param_1;
    if (FVar2 != (ForElementType<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>)0x0) {
      _Src = FVar2;
    }
    memmove((this->AllocatorInstance).Data + (longlong)iVar5 * 8,(void *)_Src,(longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// Append<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> @ 142ab2a20

void __thiscall
TArray<FPackageDependencyData,TSizedDefaultAllocator<32>_>::
Append<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
          (TArray<FPackageDependencyData,TSizedDefaultAllocator<32>_> *this,
          TArray<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<FPackageDependencyData> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FPackageDependencyData> _Src;
  
  if ((TArray<FPackageDependencyData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> *)
      this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    _Src = (ForElementType<FPackageDependencyData>)param_1;
    if (FVar2 != (ForElementType<FPackageDependencyData>)0x0) {
      _Src = FVar2;
    }
    memmove((this->AllocatorInstance).Data + (longlong)iVar5 * 0xe0,(void *)_Src,
            (longlong)iVar1 * 0xe0);
    param_1->ArrayNum = 0;
  }
  return;
}

// Append<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> @ 142ab2af0

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
Append<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,
          TArray<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<FString> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FString> _Src;
  
  if ((TArray<FString,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> *)this == param_1)
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    _Src = (ForElementType<FString>)param_1;
    if (FVar2 != (ForElementType<FString>)0x0) {
      _Src = FVar2;
    }
    memmove((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,(void *)_Src,
            (longlong)iVar1 << 4);
    param_1->ArrayNum = 0;
  }
  return;
}

// Contains<wchar_t_[4]> @ 142ab4790

bool __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[4]>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,wchar_t (*param_1) [4])

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar3;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,*param_1);
    if (iVar1 == 0) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// Contains<wchar_t_[5]> @ 142ab4810

bool __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[5]>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,wchar_t (*param_1) [5])

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar3;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,*param_1);
    if (iVar1 == 0) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// Contains<wchar_t_[12]> @ 142ab4890

bool __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[12]>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,wchar_t (*param_1) [12])

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar3;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,*param_1);
    if (iVar1 == 0) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// Contains<wchar_t_[13]> @ 142ab4910

bool __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Contains<wchar_t_[13]>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,wchar_t (*param_1) [13])

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar3;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,*param_1);
    if (iVar1 == 0) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// Empty @ 142af2690

void __thiscall
TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
::Empty(TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,int>
              ((TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 142af2700

void __thiscall
TArray<UE::AssetDataGather::Private::FCachedDirScanFile,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::AssetDataGather::Private::FCachedDirScanFile,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
              ((FCachedDirScanFile *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 142af2770

void __thiscall
TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 142af27c0

void __thiscall
TArray<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPackageDependencyData::FSearchableNamesDependency,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FPackageDependencyData::FSearchableNamesDependency,int>
              ((FSearchableNamesDependency *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// InsertUninitializedImpl @ 142b03eb0

void __thiscall
TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc0,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc0;
  memmove(_Src + (longlong)param_2 * 0xc0,_Src,(longlong)(iVar1 - param_1) * 0xc0);
  return;
}

// Remove @ 142b13890

int __thiscall
TArray<FAssetData_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *this,FAssetData **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(FAssetData **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(FAssetData **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAtImpl @ 142b14360

void __thiscall
TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FAssetBundleEntry *_Dst;
  int iVar1;
  
  _Dst = (FAssetBundleEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FAssetBundleEntry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 142b143e0

void __thiscall
TArray<FAssetData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FAssetData *_Dst;
  
  _Dst = (FAssetData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x68);
  DestructItems<FAssetData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x68);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 142b14450

void __thiscall
TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<UE::AssetDataGather::Private::FAssetDataDiscovery::FPriorityScanDirData,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  puVar3 = *(undefined8 **)(pFVar2 + (longlong)param_1 * 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x18,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x18,
            (longlong)iVar4 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 142b14500

void __thiscall
TArray<`UE::AssetDataGather::Private::FAssetDataDiscovery::SetPropertiesAndWait'::__l2::FScanDirAndQueryPath,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *_Dst;
  
  lVar2 = *(longlong *)this;
  _Dst = (longlong *)((longlong)param_1 * 0x10 + lVar2);
  puVar3 = (undefined8 *)*_Dst;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = ~param_1 + *(int *)((longlong)this + 8);
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst,(void *)((longlong)(*(int *)((longlong)this + 8) - iVar4) * 0x10 + lVar2),
            (longlong)iVar4 << 4);
  }
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) + -1;
  return;
}

// SetNum @ 142b1ef30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FAssetBundleEntry,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 142b1f060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FAssetData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FAssetData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x68,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// RemoveAll<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_> @ 142b44b00

int __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
RemoveAll<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this,
          TUniqueFunction<bool___cdecl(FDependsNode_const_*)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_res18;
  undefined8 local_res20;
  undefined8 local_50 [2];
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  local_res20 = *(undefined8 *)pFVar2;
  local_res18 = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar3 = *(code **)param_1;
  plVar6 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar6 = *(longlong **)&param_1->field_0x28;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5,&local_res20);
  bVar13 = cVar4 == '\0';
  lVar7 = 0;
  do {
    local_res20 = CONCAT44(local_res20._4_4_,iVar9);
    iVar10 = iVar9 + 1;
    lVar7 = lVar7 + 1;
    iVar11 = iVar9;
    if (lVar7 < lVar8) {
      do {
        local_50[0] = *(undefined8 *)(pFVar2 + lVar7 * 8);
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar3 = *(code **)param_1;
        plVar6 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_1->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar3)(uVar5,local_50);
        if (bVar13 != (cVar4 == '\0')) break;
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar8);
      iVar12 = local_res18;
      iVar11 = (int)local_res20;
    }
    iVar9 = iVar10;
    if (bVar13 != false) {
      if (iVar12 != iVar11) {
        memmove(pFVar2 + (longlong)iVar12 * 8,pFVar2 + (longlong)iVar11 * 8,
                (longlong)(iVar9 - iVar11) << 3);
      }
      iVar12 = iVar12 + (iVar9 - iVar11);
      local_res18 = iVar12;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    if (lVar8 <= lVar7) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// RemoveAllSwap<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_> @ 142b44ea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this,
          TUniqueFunction<bool___cdecl(FDependsNode_const_*)> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 local_res20;
  
  iVar7 = this->ArrayNum;
  bVar3 = false;
  uVar11 = 0;
  if (0 < iVar7) {
    lVar12 = 0;
    iVar9 = iVar7;
    do {
      uVar6 = 0;
      if ((int)uVar11 < iVar9) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar7 = (*pcVar2)();
          return iVar7;
        }
      }
      local_res20 = *(undefined8 *)((this->AllocatorInstance).Data + lVar12);
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar10 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar10 = (longlong *)&param_1->field_0x10;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar5 = (*pcVar2)(uVar8,&local_res20);
      if (cVar5 == '\0') {
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      }
      else {
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar11 < this->ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar7 = (*pcVar2)();
            return iVar7;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar9 = ~uVar11 + this->ArrayNum;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar11 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar9) * 8
                  ,(longlong)iVar9 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar9 = this->ArrayNum;
    } while ((int)uVar11 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar7 - this->ArrayNum;
}

// TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> @ 142b4de20

TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> @ 142b4ecb0

void __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
~TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_> @ 142b4ecd0

void __thiscall
TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_>::
~TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_>
          (TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FAssetDependency,TSizedDefaultAllocator<32>_> @ 142b4ecf0

void __thiscall
TArray<FAssetDependency,TSizedDefaultAllocator<32>_>::
~TArray<FAssetDependency,TSizedDefaultAllocator<32>_>
          (TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> @ 142b4ed10

void __thiscall
TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_>::
~TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_>
          (TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 142b4f450

TArray<FObjectExport,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FObjectExport,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FObjectExport,TSizedDefaultAllocator<32>_> *this,
          TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x68);
    }
  }
  return this;
}

// operator= @ 142b4f4f0

TArray<FObjectImport,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FObjectImport,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *this,
          TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x38);
    }
  }
  return this;
}

// Empty @ 142b58040

void __thiscall
TArray<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 142b58090

void __thiscall
TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Insert @ 142b59d50

int __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this,FDependsNode **param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar3 - param_2) << 3);
  *(FDependsNode **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = *param_1;
  return param_2;
}

// RemoveAt @ 142b62fb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Reset @ 142b64a40

void __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 142b64a90

void __thiscall
TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_>::Reset
          (TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 142b64ae0

void __thiscall
TArray<FGatherableTextData,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FGatherableTextData *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FGatherableTextData *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FGatherableTextData,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FGatherableTextData,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// Reset @ 142b64b70

void __thiscall
TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FSoftObjectPath *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FSoftObjectPath *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FSoftObjectPath,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FSoftObjectPath,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 142b6b670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 142b6b7b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<FAssetData,TSizedDefaultAllocator<32>_> @ 142b78d60

TArray<FAssetData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAssetData,TSizedDefaultAllocator<32>_>::TArray<FAssetData,TSizedDefaultAllocator<32>_>
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FAssetData,TSizedDefaultAllocator<32>_> @ 142b7c990

void __thiscall
TArray<FAssetData,TSizedDefaultAllocator<32>_>::~TArray<FAssetData,TSizedDefaultAllocator<32>_>
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAssetData,int>((FAssetData *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Reset @ 142ba59e0

void __thiscall
TArray<FAssetData,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FAssetData *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FAssetData *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<FAssetData,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<FAssetData,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 142bae4a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

