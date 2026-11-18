// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 4

// Contains @ 14443cfb0

bool __thiscall
UE::Dataflow::FContextCachingFactory::Contains(FContextCachingFactory *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->CachingMap).field_0x8 != *(int *)&(this->CachingMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->CachingMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CachingMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->CachingMap).field_0x48 - 1U & param_1.Number + uVar1)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->CachingMap + (longlong)iVar2 * 0x50) == param_1)
        goto LAB_14443d01f;
        iVar2 = *(int *)(*(longlong *)&this->CachingMap + 0x40 + (longlong)iVar2 * 0x50);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14443d01f:
  return iVar2 != -1;
}

// GetInstance @ 14444b7b0

FContextCachingFactory * __cdecl UE::Dataflow::FContextCachingFactory::GetInstance(void)

{
  FContextCachingFactory *pFVar1;
  
  if (Instance == (FContextCachingFactory *)0x0) {
    pFVar1 = ::operator_new(0x50);
    Instance = (FContextCachingFactory *)0x0;
    if (pFVar1 != (FContextCachingFactory *)0x0) {
      *(undefined8 *)&pFVar1->CachingMap = 0;
      *(undefined8 *)&(pFVar1->CachingMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->CachingMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->CachingMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->CachingMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->CachingMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->CachingMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->CachingMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->CachingMap).field_0x48 = 0;
      Instance = pFVar1;
      return pFVar1;
    }
  }
  return Instance;
}

// RegisterSerializeFunction @ 14445aa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::FContextCachingFactory::RegisterSerializeFunction
          (FContextCachingFactory *this,FName *param_1,
          TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
          *param_2)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 local_38 [16];
  TPairInitializer<FName_const_&,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>_const_&>
  local_28;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->CachingMap).field_0x8 != *(int *)&(this->CachingMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CachingMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CachingMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->CachingMap).field_0x48 - 1U & FVar1.Number + uVar2) *
                              4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->CachingMap + (longlong)iVar3 * 0x50) == FVar1) {
          if (2 < (byte)LogDataflowContextCachingFactory._0_1_) {
            ::FName::ToString(param_1,(FString *)local_38);
            Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogDataflowContextCachingFactory);
            if ((FName *)local_38._0_8_ != (FName *)0x0) {
              FMemory::Free((void *)local_38._0_8_);
            }
          }
          goto LAB_14445aaf7;
        }
        iVar3 = *(int *)(*(longlong *)&this->CachingMap + 0x40 + (longlong)iVar3 * 0x50);
      } while (iVar3 != -1);
    }
  }
  local_38._0_8_ = param_1;
  local_38._8_8_ = param_2;
  TSet<TTuple<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>_const_&>_>
            ((TSet<TTuple<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,0>,FDefaultSetAllocator>
              *)this,&local_28,(bool *)local_38);
LAB_14445aaf7:
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// Serialize @ 144460280

/* WARNING: Enum "Type": Some values do not have unique names */

FContextCacheElementBase * __thiscall
UE::Dataflow::FContextCachingFactory::Serialize
          (FContextCachingFactory *this,FArchive *param_1,FContextCacheData *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
  *pTVar6;
  undefined8 uVar7;
  FContextCacheElementBase *pFVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  FContextCacheElementBase *local_res8;
  FString local_28;
  
  FVar1 = param_2->Type;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->CachingMap).field_0x8 != *(int *)&(this->CachingMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->CachingMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->CachingMap).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->CachingMap).field_0x48 - 1U & uVar4 + FVar1.Number)
                    * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->CachingMap + (longlong)iVar5 * 0x50) == FVar1) {
          pTVar6 = TMapBase<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,0>_>
                   ::FindChecked((TMapBase<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,0>_>
                                  *)this,param_2->Type);
          local_res8 = param_2->Data;
          Core::Private::Function::CheckCallable(*(void **)pTVar6);
          pcVar2 = *(code **)pTVar6;
          plVar9 = (longlong *)&pTVar6->field_0x10;
          if (*(longlong **)&pTVar6->field_0x28 != (longlong *)0x0) {
            plVar9 = *(longlong **)&pTVar6->field_0x28;
          }
          uVar7 = (**(code **)(*plVar9 + 8))();
          pFVar8 = (FContextCacheElementBase *)(*pcVar2)(uVar7,param_1,&local_res8);
          if ((param_1->field_0x28 & 4) == 0) {
            if ((param_1->field_0x28 & 1) == 0) {
              return pFVar8;
            }
            if (pFVar8 != (FContextCacheElementBase *)0x0) {
              return pFVar8;
            }
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("RetVal != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowContextCachingFactory.cpp"
                               ,0x2b,L"");
            if (!bVar3) {
              return (FContextCacheElementBase *)0x0;
            }
            pcVar2 = (code *)swi(3);
            pFVar8 = (FContextCacheElementBase *)(*pcVar2)();
            return pFVar8;
          }
          if (pFVar8 == (FContextCacheElementBase *)0x0) {
            return (FContextCacheElementBase *)0x0;
          }
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RetVal == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowContextCachingFactory.cpp"
                             ,0x27,L"");
          if (!bVar3) {
            return pFVar8;
          }
          pcVar2 = (code *)swi(3);
          pFVar8 = (FContextCacheElementBase *)(*pcVar2)();
          return pFVar8;
        }
        iVar5 = *(int *)(*(longlong *)&this->CachingMap + 0x40 + (longlong)iVar5 * 0x50);
      } while (iVar5 != -1);
    }
  }
  if (2 < (byte)LogDataflowContextCachingFactory._0_1_) {
    ::FName::ToString(&param_2->Type,&local_28);
    Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogDataflowContextCachingFactory);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (FContextCacheElementBase *)0x0;
}

