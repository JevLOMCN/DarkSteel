// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// IsLinkerExportBeingResolved @ 141ea98c0

bool __thiscall
FResolvingExportTracker::IsLinkerExportBeingResolved
          (FResolvingExportTracker *this,FLinkerLoad *param_1,int param_2)

{
  int iVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  
  pTVar2 = TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                   *)&this->ResolvingExports,param_1);
  if (pTVar2 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    return false;
  }
  if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
    FVar3 = (pTVar2->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(pTVar2->HashSize - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&pTVar2->Elements + (longlong)iVar1 * 0xc) == param_2)
        goto LAB_141ea992c;
        iVar1 = *(int *)(*(longlong *)&pTVar2->Elements + 4 + (longlong)iVar1 * 0xc);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_141ea992c:
  return iVar1 != -1;
}

// ResolvePlaceholders @ 141eb9a00

void __thiscall
FResolvingExportTracker::ResolvePlaceholders(FResolvingExportTracker *this,UClass *param_1)

{
  void *_Src;
  ULinkerPlaceholderExportObject *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  FLinkerLoad *this_01;
  UObject *pUVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  UClass *local_res20;
  ForAnyElementType local_58;
  int local_50;
  int local_4c [3];
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  local_res10 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_res10 = local_res10 >> 0x10 ^ local_res10;
  if (*(int *)&(this->ClassToPlaceholderMap).field_0x8 !=
      *(int *)&(this->ClassToPlaceholderMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ClassToPlaceholderMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ClassToPlaceholderMap).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ClassToPlaceholderMap).field_0x48 - 1U & local_res10)
                              * 4);
    if (iVar3 != -1) {
      while (plVar7 = (longlong *)
                      ((longlong)iVar3 * 0x20 +
                      *(longlong *)&(this->ClassToPlaceholderMap).field_0x0),
            (UClass *)*plVar7 != param_1) {
        iVar3 = (int)plVar7[3];
        if (iVar3 == -1) {
          return;
        }
      }
      plVar4 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      if (plVar4 != (longlong *)0x0) {
        local_50 = (int)plVar4[1];
        lVar10 = (longlong)local_50;
        _Src = (void *)*plVar4;
        local_58.Data = (FScriptContainerElement *)0x0;
        if (local_50 == 0) {
          local_4c[0] = 0;
          iVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_50,0,&local_58,local_50,local_4c);
          memcpy(local_58.Data,_Src,lVar10 << 3);
          iVar3 = local_50;
        }
        pFVar12 = local_58.Data + (longlong)iVar3 * 8;
        FVar13.Data = local_58.Data;
        local_res18 = pFVar12;
        iVar9 = iVar3;
        while( true ) {
          if (iVar9 != iVar3) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<ULinkerPlaceholderExportObject_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (FVar13.Data == pFVar12) break;
          this_00 = *(ULinkerPlaceholderExportObject **)FVar13.Data;
          bVar2 = FLinkerPlaceholderBase::IsMarkedResolved
                            ((FLinkerPlaceholderBase *)&this_00->field_0x28);
          if (!bVar2) {
            this_01 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
            if (this_01 == (FLinkerLoad *)0x0) {
              bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2825597286833192279>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                                 ,0x2a9,"Linker");
              pFVar12 = local_res18;
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            else {
              if ((*(int *)&this_00->field_0x30 < 1) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsExport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x5b,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar11 = *(int *)&this_00->field_0x30 - 1;
              UObject::SetLinker((UObject *)this_00,(FLinkerLoad *)0x0,-1,true,false);
              uVar6 = 0;
              if ((int)uVar11 < (int)this_01->_padding_) {
                uVar6 = ~uVar11 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *(undefined8 *)((longlong)(int)uVar11 * 0x68 + 0x40 + this_01->_padding_) = 0;
              pUVar5 = FLinkerLoad::CreateExport(this_01,uVar11);
              (**(code **)(*(longlong *)&this_00->field_0x28 + 0x10))(&this_00->field_0x28,pUVar5);
              UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
              FLinkerLoad::ResolvedDeferredSubobjects(this_01,this_00);
              pFVar12 = local_res18;
              if (pUVar5 != (UObject *)0x0) {
                FLinkerLoad::Preload((FLinkerLoad *)&this_01->_padding_,pUVar5);
                pFVar12 = local_res18;
              }
            }
          }
          FVar13.Data = FVar13.Data + 8;
          iVar9 = local_50;
        }
        local_res20 = param_1;
        if (*(int *)&(this->ClassToPlaceholderMap).field_0x8 !=
            *(int *)&(this->ClassToPlaceholderMap).field_0x34) {
          TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<UClass_const_*>
                    ((TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ClassToPlaceholderMap,local_res10,&local_res20);
        }
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
    }
  }
  return;
}

