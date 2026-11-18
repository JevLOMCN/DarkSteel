// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 6

// Build @ 14ad486f0

void __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FInputDataVertex>::Build
          (TInterfaceConfigurationBuilder<Metasound::FInputDataVertex> *this,
          TArrayView<Metasound::FSubInterfaceDescription_const_,int> *param_1,
          TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> local_48;
  TArrayView<Metasound::FSubInterfaceDescription_const_,int> local_38;
  FString local_28;
  
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FSubInterfaceConfigurationBuilder::Build
            ((FSubInterfaceConfigurationBuilder *)this,&local_38,&local_48);
  pTVar6 = this->Vertices;
  uVar9 = 0;
  if (0 < pTVar6->ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < pTVar6->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (pTVar6->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      pTVar6 = this->Vertices;
      lVar3 = lVar8;
      uVar7 = uVar9;
      if ((int)uVar9 < pTVar6->ArrayNum) {
        do {
          uVar5 = 0;
          if ((int)uVar7 < pTVar6->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)(pFVar1 + lVar8 + 8) ==
              *(longlong *)((pTVar6->AllocatorInstance).Data + lVar3 + 0x40)) {
            ::FName::ToString((FName *)(pFVar1 + lVar8 + 8),&local_28);
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("VertexNameA != Vertices[IndexB].VertexName",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                               ,300,L"Found duplicate names (%s) in interface");
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pTVar6 = this->Vertices;
          uVar7 = uVar7 + 1;
          lVar3 = lVar3 + 0x38;
        } while ((int)uVar7 < pTVar6->ArrayNum);
      }
      lVar8 = lVar8 + 0x38;
    } while ((int)uVar9 < pTVar6->ArrayNum);
  }
  return;
}

// Build @ 14ad488d0

void __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex>::Build
          (TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex> *this,
          TArrayView<Metasound::FSubInterfaceDescription_const_,int> *param_1,
          TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  TArrayView<Metasound::FSubInterfaceConfiguration_const_,int> local_48;
  TArrayView<Metasound::FSubInterfaceDescription_const_,int> local_38;
  FString local_28;
  
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FSubInterfaceConfigurationBuilder::Build
            ((FSubInterfaceConfigurationBuilder *)this,&local_38,&local_48);
  pTVar6 = this->Vertices;
  uVar9 = 0;
  if (0 < pTVar6->ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < pTVar6->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (pTVar6->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      pTVar6 = this->Vertices;
      lVar3 = lVar8;
      uVar7 = uVar9;
      if ((int)uVar9 < pTVar6->ArrayNum) {
        do {
          uVar5 = 0;
          if ((int)uVar7 < pTVar6->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)(pFVar1 + lVar8 + 8) ==
              *(longlong *)((pTVar6->AllocatorInstance).Data + lVar3 + 0x28)) {
            ::FName::ToString((FName *)(pFVar1 + lVar8 + 8),&local_28);
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("VertexNameA != Vertices[IndexB].VertexName",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                               ,300,L"Found duplicate names (%s) in interface");
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pTVar6 = this->Vertices;
          uVar7 = uVar7 + 1;
          lVar3 = lVar3 + 0x20;
        } while ((int)uVar7 < pTVar6->ArrayNum);
      }
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar9 < pTVar6->ArrayNum);
  }
  return;
}

// InsertSubInterfaceInstance @ 14ad59d40

void __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FInputDataVertex>::
InsertSubInterfaceInstance
          (TInterfaceConfigurationBuilder<Metasound::FInputDataVertex> *this,uint param_1,
          uint param_2,uint param_3,uint param_4)

{
  TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *_Src;
  uint uVar6;
  FInputDataVertex *pFVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  FString local_38;
  
  uVar10 = (ulonglong)(int)param_3;
  if (((uint)this->Vertices->ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InProtoBegin + InProtoNum) <= static_cast<uint32>(Vertices.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                         ,0x136,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uint)this->Vertices->ArrayNum < param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInsertPos <= static_cast<uint32>(Vertices.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                         ,0x138,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pTVar1 = this->Vertices;
    pFVar7 = (FInputDataVertex *)((pTVar1->AllocatorInstance).Data + (ulonglong)param_1 * 0x38);
    if ((pFVar7 == (FInputDataVertex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x793,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,param_2,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax
                      );
    _Src = (pTVar1->AllocatorInstance).Data + uVar10 * 0x38;
    memmove(_Src + (longlong)(int)param_2 * 0x38,_Src,(longlong)(int)(iVar4 - param_3) * 0x38);
    ConstructItems<Metasound::FInputDataVertex,Metasound::FInputDataVertex,int>
              ((pTVar1->AllocatorInstance).Data + uVar10 * 0x38,pFVar7,param_2);
    if (param_3 < param_2 + param_3) {
      do {
        pTVar1 = this->Vertices;
        uVar9 = (uint)uVar10;
        uVar6 = ~uVar9 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar9 < pTVar1->ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar8 = (longlong)(int)uVar9 * 0x38;
        if (*(int *)((pTVar1->AllocatorInstance).Data + lVar8 + 0xc) != 0) {
          pTVar1 = this->Vertices;
          uVar5 = 0;
          if ((int)uVar9 < pTVar1->ArrayNum) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ::FName::ToString((FName *)((pTVar1->AllocatorInstance).Data + lVar8 + 8),&local_38);
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Vertices[VertexIndex].VertexName.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                             ,0x147,
                             L"Prototype vertex %s in sub interface cannot have a trailing number because it is in a sub interface."
                            );
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pTVar1 = this->Vertices;
        uVar5 = 0;
        if ((int)uVar9 < pTVar1->ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        *(uint *)((pTVar1->AllocatorInstance).Data + lVar8 + 0xc) = param_4 + 1;
      } while (uVar9 + 1 < param_2 + param_3);
    }
  }
  return;
}

// InsertSubInterfaceInstance @ 14ad5a010

void __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex>::
InsertSubInterfaceInstance
          (TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex> *this,uint param_1,
          uint param_2,uint param_3,uint param_4)

{
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *_Src;
  uint uVar6;
  FOutputDataVertex *pFVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  FString local_38;
  
  uVar10 = (ulonglong)(int)param_3;
  if (((uint)this->Vertices->ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InProtoBegin + InProtoNum) <= static_cast<uint32>(Vertices.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                         ,0x136,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uint)this->Vertices->ArrayNum < param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInsertPos <= static_cast<uint32>(Vertices.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                         ,0x138,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pTVar1 = this->Vertices;
    pFVar7 = (FOutputDataVertex *)((pTVar1->AllocatorInstance).Data + (ulonglong)param_1 * 0x20);
    if ((pFVar7 == (FOutputDataVertex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x793,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_2,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax
                      );
    _Src = (pTVar1->AllocatorInstance).Data + uVar10 * 0x20;
    memmove(_Src + (longlong)(int)param_2 * 0x20,_Src,(longlong)(int)(iVar4 - param_3) << 5);
    ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int>
              ((pTVar1->AllocatorInstance).Data + uVar10 * 0x20,pFVar7,param_2);
    if (param_3 < param_2 + param_3) {
      do {
        pTVar1 = this->Vertices;
        uVar9 = (uint)uVar10;
        uVar6 = ~uVar9 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar9 < pTVar1->ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar8 = (longlong)(int)uVar9 * 0x20;
        if (*(int *)((pTVar1->AllocatorInstance).Data + lVar8 + 0xc) != 0) {
          pTVar1 = this->Vertices;
          uVar5 = 0;
          if ((int)uVar9 < pTVar1->ArrayNum) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ::FName::ToString((FName *)((pTVar1->AllocatorInstance).Data + lVar8 + 8),&local_38);
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Vertices[VertexIndex].VertexName.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                             ,0x147,
                             L"Prototype vertex %s in sub interface cannot have a trailing number because it is in a sub interface."
                            );
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pTVar1 = this->Vertices;
        uVar5 = 0;
        if ((int)uVar9 < pTVar1->ArrayNum) {
          uVar5 = uVar6;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        *(uint *)((pTVar1->AllocatorInstance).Data + lVar8 + 0xc) = param_4 + 1;
      } while (uVar9 + 1 < param_2 + param_3);
    }
  }
  return;
}

// RemoveVerticesAt @ 14ad62440

void __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FInputDataVertex>::
RemoveVerticesAt(TInterfaceConfigurationBuilder<Metasound::FInputDataVertex> *this,uint param_1,
                uint param_2)

{
  TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((uint)this->Vertices->ArrayNum < param_1 + param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InVertexIndexBegin + InNum) <= static_cast<unsigned>(Vertices.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x150,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = this->Vertices;
  uVar3 = 0;
  if ((int)(param_1 + param_2) <= this_00->ArrayNum) {
    uVar3 = ~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (this_00,param_1,param_2);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
  }
  return;
}

// RemoveVerticesAt @ 14ad62530

void __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex>::
RemoveVerticesAt(TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex> *this,uint param_1,
                uint param_2)

{
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  if ((uint)this->Vertices->ArrayNum < param_1 + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InVertexIndexBegin + InNum) <= static_cast<unsigned>(Vertices.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x150,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = this->Vertices;
  uVar4 = 0;
  if ((int)(param_1 + param_2) <= pTVar1->ArrayNum) {
    uVar4 = ~(param_1 | param_2) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 != 0) {
    _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)param_1 * 0x20;
    iVar5 = (pTVar1->ArrayNum - param_1) - param_2;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)param_2 * 0x20,(longlong)iVar5 << 5);
    }
    pTVar1->ArrayNum = pTVar1->ArrayNum - param_2;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,&pTVar1->AllocatorInstance,pTVar1->ArrayNum,&pTVar1->ArrayMax);
  }
  return;
}

