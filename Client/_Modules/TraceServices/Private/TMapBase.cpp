// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 38

// FindOrAddImpl<unsigned_int_const_&> @ 14d3c8460

uint * __thiscall
TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return puVar2 + 1;
          }
          break;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (uint *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<unsigned_int_const_&,TFunction<FString___cdecl(void_const_*)>_> @ 14d3c8510

TFunction<FString___cdecl(void_const_*)> * __thiscall
TMapBase<unsigned_int,TFunction<FString___cdecl(void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<FString___cdecl(void_const_*)>,0>_>
::FindOrAddImpl<unsigned_int_const_&,TFunction<FString___cdecl(void_const_*)>_>
          (TMapBase<unsigned_int,TFunction<FString___cdecl(void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<FString___cdecl(void_const_*)>,0>_>
           *this,uint param_1,uint *param_2,TFunction<FString___cdecl(void_const_*)> *param_3)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  uint *local_18;
  TFunction<FString___cdecl(void_const_*)> *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (TFunction<FString___cdecl(void_const_*)> *)(puVar2 + 4);
          }
          break;
        }
        uVar1 = puVar2[0x10];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<unsigned_int,TFunction<FString___cdecl(void_const_*)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<FString___cdecl(void_const_*)>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<unsigned_int_const_&,TFunction<FString___cdecl(void_const_*)>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<unsigned_int_const_&,TFunction<FString___cdecl(void_const_*)>_&&> *)
             (ulonglong)param_1,(bool *)&local_18);
  return (TFunction<FString___cdecl(void_const_*)> *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 14d3c85d0

FList * __thiscall
TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FList *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FList *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 14d3ddbf0

uint * __thiscall
TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::Find(TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
       *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          puVar3 = (uint *)0x0;
          if (puVar2 != (uint *)0x0) {
            puVar3 = puVar2 + 1;
          }
          return puVar3;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (uint *)0x0;
}

// Find @ 14d3ddc50

FPendingActivity * __thiscall
TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
::Find(TMapBase<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
       *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  FPendingActivity *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FPendingActivity *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar3 = (FPendingActivity *)(puVar2 + 2);
          }
          return pFVar3;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPendingActivity *)0x0;
}

// Find @ 14d3ddcb0

TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_> *
__thiscall
TMapBase<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>_>
::Find(TMapBase<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
  *pTVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pTVar2 = (TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
                    *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
                      *)(pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TTuple<TSharedPtr<TraceServices::IProvider,1>,TSharedPtr<TraceServices::IEditableProvider,1>_>
          *)0x0;
}

// Find @ 14d3ddd50

FStatSeriesDefinition ** __thiscall
TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
::Find(TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FStatSeriesDefinition **ppFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar4 = (FStatSeriesDefinition **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FStatSeriesDefinition **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FStatSeriesDefinition **)0x0;
}

// Find @ 14d3dddd0

FClassInfo ** __thiscall
TMapBase<unsigned___int64,TraceServices::FClassInfo_const_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>_>
::Find(TMapBase<unsigned___int64,TraceServices::FClassInfo_const_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FClassInfo **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FClassInfo **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FClassInfo **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FClassInfo **)0x0;
}

// Find @ 14d3dde80

FList * __thiscall
TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
::Find(TMapBase<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FList *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FList *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FList *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FList *)0x0;
}

// Find @ 14d3ddef0

FNetTraceActiveObjectState * __thiscall
TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
::Find(TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FNetTraceActiveObjectState *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FNetTraceActiveObjectState *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FNetTraceActiveObjectState *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FNetTraceActiveObjectState *)0x0;
}

// Find @ 14d3ddf70

FPendingActivity * __thiscall
TMapBase<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
::Find(TMapBase<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FPendingActivity *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FPendingActivity *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FPendingActivity *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FPendingActivity *)0x0;
}

// FindChecked @ 14d3de5a0

wchar_t ** __thiscall
TMapBase<int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>_>
::FindChecked(TMapBase<int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t **ppwVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (wchar_t **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (wchar_t **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppwVar6 = (wchar_t **)(*pcVar3)();
  return ppwVar6;
}

// FindChecked @ 14d3de640

FTagEntry * __thiscall
TMapBase<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TraceServices::FTagTracker::FTagEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTagTracker::FTagEntry,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTagEntry *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (FTagEntry *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FTagEntry *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FTagEntry *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14d3de6e0

TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1> * __thiscall
TMapBase<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,0>_>
::FindChecked(TMapBase<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1> *pTVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1> *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14d3de780

TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> * __thiscall
TMapBase<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
::FindChecked(TMapBase<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *pTVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14d3de820

uint * __thiscall
TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
::FindChecked(TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (uint *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (uint *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  puVar6 = (uint *)(*pcVar3)();
  return puVar6;
}

// FindRef @ 14d3de980

IEditableCounter * __thiscall
TMapBase<unsigned_short,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>_>
::FindRef(TMapBase<unsigned_short,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,TraceServices::IEditableCounter_*,0>_>
          *this,ushort param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ushort *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (IEditableCounter *)0x0;
          }
          return *(IEditableCounter **)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (IEditableCounter *)0x0;
}

// FindRef @ 14d3de9e0

IEditableCounter * __thiscall
TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
::FindRef(TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
          *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (IEditableCounter *)0x0;
          }
          return *(IEditableCounter **)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (IEditableCounter *)0x0;
}

// Remove @ 14d4007c0

int __thiscall
TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
::Remove(TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
         *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) != param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Emplace<unsigned_int_const_&,unsigned_int_const_&> @ 14d40ecb0

uint * __thiscall
TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::Emplace<unsigned_int_const_&,unsigned_int_const_&>
          (TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           *this,uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned_int,unsigned_int>_> *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    *(uint *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (uint *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar6 * 0x10);
}

// Emplace<unsigned_int_const_&,unsigned_int> @ 14d40edd0

uint * __thiscall
TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::Emplace<unsigned_int_const_&,unsigned_int>
          (TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           *this,uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned_int,unsigned_int>_> *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    *(uint *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (uint *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar6 * 0x10);
}

// FindOrAddImpl<unsigned_int_const_&> @ 14d417660

FStatSeriesValue * __thiscall
TMapBase<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,0>_>
           *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14d4176f2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FStatSeriesValue,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14d4176f2:
  return (FStatSeriesValue *)(lVar3 + 8);
}

// FindOrAddImpl<unsigned_int_const_&> @ 14d417710

TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_> * __thiscall
TMapBase<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,0>_>
           *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_14d4177a2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14d4177a2:
  return (TArray<TraceServices::FWaitingForTasks,TSizedDefaultAllocator<64>_> *)(lVar3 + 8);
}

// FindOrAddImpl<unsigned_int_const_&> @ 14d4177c0

TArray<unsigned___int64,TSizedDefaultAllocator<64>_> * __thiscall
TMapBase<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,0>_>
           *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_14d417852;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned___int64,TSizedDefaultAllocator<64>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14d417852:
  return (TArray<unsigned___int64,TSizedDefaultAllocator<64>_> *)(lVar3 + 8);
}

// Find @ 14d45e460

ushort * __thiscall
TMapBase<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
::Find(TMapBase<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == param_1) {
          puVar5 = (ushort *)0x0;
          if (lVar1 != 0) {
            puVar5 = (ushort *)(lVar1 + 8);
          }
          return puVar5;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return (ushort *)0x0;
}

// Find @ 14d45e500

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageSpec ** __thiscall
TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
::Find(TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FLogMessageSpec **ppFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar4 = (FLogMessageSpec **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FLogMessageSpec **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FLogMessageSpec **)0x0;
}

// Find @ 14d45e580

FResolvedSymbol ** __thiscall
TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
::Find(TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FResolvedSymbol **ppFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar4 = (FResolvedSymbol **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FResolvedSymbol **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FResolvedSymbol **)0x0;
}

// Find @ 14d45e600

FOpenRegions * __thiscall
TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
::Find(TMapBase<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FRegionProvider::FOpenRegions,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FOpenRegions *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FOpenRegions *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pFVar3 = (FOpenRegions *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FOpenRegions *)0x0;
}

// FindChecked @ 14d45fde0

uint * __thiscall
TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::FindChecked(TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar4 == param_1) {
          if (puVar4 != (uint *)0x0) {
            return puVar4 + 1;
          }
          break;
        }
        uVar3 = puVar4[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (uint *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  puVar4 = (uint *)(*pcVar1)();
  return puVar4;
}

// FindChecked @ 14d45fe80

FThreadInfoInternal ** __thiscall
TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
::FindChecked(TMapBase<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FThreadProvider::FThreadInfoInternal_*,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FThreadInfoInternal **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FThreadInfoInternal **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FThreadInfoInternal **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FThreadInfoInternal **)(*pcVar3)();
  return ppFVar6;
}

// FindChecked @ 14d45ff20

FInternalAggregationEntry * __thiscall
TMapBase<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
::FindChecked(TMapBase<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FClassInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
              *this,FClassInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInternalAggregationEntry *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x3a0 + *(longlong *)&(this->Pairs).Elements);
        if ((FClassInfo *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FInternalAggregationEntry *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[0x73];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FInternalAggregationEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInternalAggregationEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14d460000

FInternalAggregationEntry * __thiscall
TMapBase<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
::FindChecked(TMapBase<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FPackageInfo_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
              *this,FPackageInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInternalAggregationEntry *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x3a0 + *(longlong *)&(this->Pairs).Elements);
        if ((FPackageInfo *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FInternalAggregationEntry *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[0x73];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FInternalAggregationEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInternalAggregationEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14d4600e0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FAggregatedTimingStats * __thiscall
TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
::FindChecked(TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FAggregatedTimingStats,0>_>
              *this,FTimingProfilerTimer *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FAggregatedTimingStats *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x70 + *(longlong *)&(this->Pairs).Elements);
        if ((FTimingProfilerTimer *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FAggregatedTimingStats *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[0xd];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FAggregatedTimingStats *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FAggregatedTimingStats *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14d4601b0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FInternalAggregationEntry * __thiscall
TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
::FindChecked(TMapBase<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TraceServices::FTimingProfilerTimer_const_*,TraceServices::FTimelineStatistics::FInternalAggregationEntry,0>_>
              *this,FTimingProfilerTimer *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInternalAggregationEntry *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x3a0 + *(longlong *)&(this->Pairs).Elements);
        if ((FTimingProfilerTimer *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FInternalAggregationEntry *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[0x73];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FInternalAggregationEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInternalAggregationEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14d460290

/* WARNING: Enum "Type": Some values do not have unique names */

FLogCategoryInfo ** __thiscall
TMapBase<unsigned___int64,TraceServices::FLogCategoryInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogCategoryInfo_*,0>_>
::FindChecked(TMapBase<unsigned___int64,TraceServices::FLogCategoryInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogCategoryInfo_*,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLogCategoryInfo **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FLogCategoryInfo **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FLogCategoryInfo **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FLogCategoryInfo **)(*pcVar3)();
  return ppFVar6;
}

// FindChecked @ 14d460340

/* WARNING: Enum "Type": Some values do not have unique names */

FLogMessageSpec ** __thiscall
TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
::FindChecked(TMapBase<unsigned___int64,TraceServices::FLogMessageSpec_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FLogMessageSpec_*,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLogMessageSpec **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FLogMessageSpec **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FLogMessageSpec **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FLogMessageSpec **)(*pcVar3)();
  return ppFVar6;
}

// FindRef @ 14d460dd0

FTagSampleData * __thiscall
TMapBase<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>_>
::FindRef(TMapBase<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TraceServices::FMemoryProvider::FTagSampleData_*,0>_>
          *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(longlong *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FTagSampleData *)0x0;
          }
          return *(FTagSampleData **)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FTagSampleData *)0x0;
}

// FindRef @ 14d460e40

FResolvedSymbol * __thiscall
TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
::FindRef(TMapBase<unsigned___int64,TraceServices::FResolvedSymbol_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FResolvedSymbol_const_*,0>_>
          *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FResolvedSymbol *)0x0;
          }
          return *(FResolvedSymbol **)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FResolvedSymbol *)0x0;
}

