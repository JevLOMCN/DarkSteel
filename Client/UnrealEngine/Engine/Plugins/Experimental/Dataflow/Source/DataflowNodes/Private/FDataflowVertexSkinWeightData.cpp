// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 8

// StaticStruct @ 14dac1a50

UScriptStruct * __cdecl FDataflowVertexSkinWeightData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVertexSkinWeightData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowVertexSkinWeightData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexSkinWeightData,(UObject *)pUVar1,
                         L"DataflowVertexSkinWeightData");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVertexSkinWeightData.OuterSingleton;
}

// operator= @ 14dace4d0

FDataflowVertexSkinWeightData * __thiscall
FDataflowVertexSkinWeightData::operator=
          (FDataflowVertexSkinWeightData *this,FDataflowVertexSkinWeightData *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Bones).ArrayMax;
    piVar1 = &(this->Bones).ArrayMax;
    _Src = (param_1->Bones).AllocatorInstance.Data;
    iVar3 = (param_1->Bones).ArrayNum;
    (this->Bones).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Bones).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->Weights,&param_1->Weights);
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// FromArrays @ 14dad4ea0

void __thiscall
FDataflowVertexSkinWeightData::FromArrays
          (FDataflowVertexSkinWeightData *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  if (param_1 < this->ArrayNum) {
    if ((param_2->ArrayNum != param_3->ArrayNum) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3510307067720106162>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                           ,0xb2,"InIndices.Num() == InWeights.Num()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_1 * 0xc;
    iVar7 = 0;
    lVar9 = 0;
    lVar10 = (longlong)iVar6 * 2;
    do {
      if (iVar7 < param_2->ArrayNum) {
        uVar8 = (undefined2)*(undefined4 *)((param_2->AllocatorInstance).Data + lVar9);
      }
      else {
        uVar8 = 0xffff;
      }
      uVar1 = iVar7 + iVar6;
      uVar5 = 0;
      if ((int)uVar1 < (this->Bones).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
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
      *(undefined2 *)((this->Bones).AllocatorInstance.Data + lVar10) = uVar8;
      if (iVar7 < param_3->ArrayNum) {
        uVar11 = *(undefined4 *)((param_3->AllocatorInstance).Data + lVar9);
      }
      else {
        uVar11 = 0;
      }
      uVar5 = 0;
      if ((int)uVar1 < (this->Weights).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
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
      iVar7 = iVar7 + 1;
      lVar10 = lVar10 + 2;
      lVar2 = lVar9 + (longlong)iVar6 * 4;
      lVar9 = lVar9 + 4;
      *(undefined4 *)((this->Weights).AllocatorInstance.Data + lVar2) = uVar11;
    } while (iVar7 < 0xc);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3510307067720106160>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                       ,0xb0,"VertexIndex < ArrayNum");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Num @ 14dad7160

int __thiscall FDataflowVertexSkinWeightData::Num(FDataflowVertexSkinWeightData *this)

{
  return this->ArrayNum;
}

// Reset @ 14dad8930

void __thiscall FDataflowVertexSkinWeightData::Reset(FDataflowVertexSkinWeightData *this)

{
  (this->Bones).ArrayNum = 0;
  if ((this->Bones).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,&(this->Bones).ArrayMax);
  }
  (this->Weights).ArrayNum = 0;
  if ((this->Weights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Weights).AllocatorInstance,0,&(this->Weights).ArrayMax);
  }
  this->ArrayNum = 0;
  return;
}

// Serialize @ 14dad89d0

bool __thiscall
FDataflowVertexSkinWeightData::Serialize(FDataflowVertexSkinWeightData *this,FArchive *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->ArrayNum);
    }
  }
  else {
    this->ArrayNum = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArray<short,TSizedDefaultAllocator<32>_>::BulkSerialize(&this->Bones,param_1,false);
  TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize(&this->Weights,param_1,false);
  return true;
}

// SetNum @ 14dad8ae0

void __thiscall
FDataflowVertexSkinWeightData::SetNum(FDataflowVertexSkinWeightData *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  float local_res10 [2];
  undefined2 local_28 [8];
  
  if (this->ArrayNum != param_1) {
    local_28[0] = 0xffff;
    uVar7 = param_1 * 0xc;
    if (param_1 * 0xc < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &(this->Bones).ArrayMax;
    (this->Bones).ArrayNum = 0;
    if (*piVar1 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1 * 0xc) {
      uVar6 = (ulonglong)uVar7;
      do {
        pFVar2 = (this->Bones).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 2)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->Bones).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,(ForAnyElementType *)this,piVar1);
        }
        (this->Bones).ArrayNum = iVar5 + 1;
        *(undefined2 *)((this->Bones).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_28[0];
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    local_res10[0] = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->Weights,local_res10,uVar7);
    this->ArrayNum = param_1;
  }
  return;
}

// ToArrays @ 14dad8fa0

void __thiscall
FDataflowVertexSkinWeightData::ToArrays
          (FDataflowVertexSkinWeightData *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  int local_38 [4];
  
  if (param_1 < this->ArrayNum) {
    uVar6 = param_1 * 0xc;
    lVar11 = 0xc;
    lVar10 = (longlong)(int)uVar6 * 4;
    lVar7 = (longlong)(int)uVar6 * 2;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->Bones).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(short *)((this->Bones).AllocatorInstance.Data + lVar7) != -1) {
        uVar4 = 0;
        if ((int)uVar6 < (this->Bones).ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_38[0] = (int)*(short *)((this->Bones).AllocatorInstance.Data + lVar7);
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_38[0];
        uVar4 = 0;
        if ((int)uVar6 < (this->Weights).ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_3->AllocatorInstance).Data;
        pFVar9 = (this->Weights).AllocatorInstance.Data + lVar10;
        if (((pFVar1 <= pFVar9) && (pFVar9 < pFVar1 + (longlong)param_3->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_3->ArrayNum;
        if (iVar5 == param_3->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar5 + 1;
        *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 4) =
             *(undefined4 *)pFVar9;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 2;
      lVar10 = lVar10 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3510307067720106174>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                       ,0xbe,"VertexIndex < ArrayNum");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

