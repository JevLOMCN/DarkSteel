// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// FVariableTableDebugBlock @ 14d58eac0

FVariableTableDebugBlock * __thiscall
UE::Cameras::FVariableTableDebugBlock::FVariableTableDebugBlock
          (FVariableTableDebugBlock *this,FCameraVariableTable *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->ShowVariableIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowVariableIDsCVarName).Data.ArrayNum = 0;
  (this->ShowVariableIDsCVarName).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FVariableTableDebugBlock_Cameras_UE__6B_;
  Initialize(this,param_1);
  return this;
}

// FVariableTableDebugBlock @ 14d58eb10

FVariableTableDebugBlock * __thiscall
UE::Cameras::FVariableTableDebugBlock::FVariableTableDebugBlock(FVariableTableDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FVariableTableDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->ShowVariableIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowVariableIDsCVarName).Data.ArrayNum = 0;
  (this->ShowVariableIDsCVarName).Data.ArrayMax = 0;
  return this;
}

// GetTypeID @ 14d5abc90

FCameraObjectTypeID * __thiscall
UE::Cameras::FVariableTableDebugBlock::GetTypeID(FVariableTableDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// Initialize @ 14d5afcf0

void __thiscall
UE::Cameras::FVariableTableDebugBlock::Initialize
          (FVariableTableDebugBlock *this,FCameraVariableTable *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  TTransform<double> *this_00;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [16];
  FString local_168;
  undefined4 local_158 [2];
  FString local_150;
  FString local_140;
  undefined8 local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar4 = (param_1->Entries).ArrayNum;
  pFVar13 = (param_1->Entries).AllocatorInstance.Data;
  pFVar2 = pFVar13 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((param_1->Entries).ArrayNum != iVar4) {
      local_res10[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar2) {
      AlgoImpl::
      StableSortInternal<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FVariableTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
                ((FEntryDebugInfo *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum,
                 local_res10[0],(<lambda_1> *)local_res18);
      return;
    }
    this_00 = (TTransform<double> *)(param_1->Memory + *(uint *)(pFVar13 + 0x10));
    iVar10 = 0;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    switch(*(undefined4 *)(pFVar13 + 4)) {
    case 0:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        pwVar12 = L"true";
        if (*(char *)(this_00->Rotation).XY.m128d_f64 == '\0') {
          pwVar12 = L"false";
        }
        ::FString::FString(&local_128,pwVar12);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_128.Data._8_8_;
        iVar10 = local_128.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        uVar8 = local_128.Data._8_8_;
        local_128.Data.ArrayNum = (int)uVar7;
        local_128.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_128.Data.ArrayNum;
        local_168.Data.ArrayMax = local_128.Data.ArrayMax;
        local_128.Data._8_8_ = uVar8;
      }
      break;
    case 1:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_118,L"%d");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_118.Data._8_8_;
        iVar10 = local_118.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        uVar8 = local_118.Data._8_8_;
        local_118.Data.ArrayNum = (int)uVar7;
        local_118.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_118.Data.ArrayNum;
        local_168.Data.ArrayMax = local_118.Data.ArrayMax;
        local_118.Data._8_8_ = uVar8;
      }
      break;
    case 2:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_108,L"%f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_108.Data._8_8_;
        iVar10 = local_108.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        uVar8 = local_108.Data._8_8_;
        local_108.Data.ArrayNum = (int)uVar7;
        local_108.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_108.Data.ArrayNum;
        local_168.Data.ArrayMax = local_108.Data.ArrayMax;
        local_108.Data._8_8_ = uVar8;
      }
      break;
    case 3:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_f8,L"%f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_f8.Data._8_8_;
        iVar10 = local_f8.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        uVar8 = local_f8.Data._8_8_;
        local_f8.Data.ArrayNum = (int)uVar7;
        local_f8.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_f8.Data.ArrayNum;
        local_168.Data.ArrayMax = local_f8.Data.ArrayMax;
        local_f8.Data._8_8_ = uVar8;
      }
      break;
    case 4:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_e8,L"X=%3.3f Y=%3.3f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_e8.Data._8_8_;
        iVar10 = local_e8.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        uVar8 = local_e8.Data._8_8_;
        local_e8.Data.ArrayNum = (int)uVar7;
        local_e8.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_e8.Data.ArrayNum;
        local_168.Data.ArrayMax = local_e8.Data.ArrayMax;
        local_e8.Data._8_8_ = uVar8;
      }
      break;
    case 5:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_d8,L"X=%3.3f Y=%3.3f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_d8.Data._8_8_;
        iVar10 = local_d8.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        uVar8 = local_d8.Data._8_8_;
        local_d8.Data.ArrayNum = (int)uVar7;
        local_d8.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_d8.Data.ArrayNum;
        local_168.Data.ArrayMax = local_d8.Data.ArrayMax;
        local_d8.Data._8_8_ = uVar8;
      }
      break;
    case 6:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_c8.Data._8_8_;
        iVar10 = local_c8.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
        uVar8 = local_c8.Data._8_8_;
        local_c8.Data.ArrayNum = (int)uVar7;
        local_c8.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_c8.Data.ArrayNum;
        local_168.Data.ArrayMax = local_c8.Data.ArrayMax;
        local_c8.Data._8_8_ = uVar8;
      }
      break;
    case 7:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_b8.Data._8_8_;
        iVar10 = local_b8.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        uVar8 = local_b8.Data._8_8_;
        local_b8.Data.ArrayNum = (int)uVar7;
        local_b8.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_b8.Data.ArrayNum;
        local_168.Data.ArrayMax = local_b8.Data.ArrayMax;
        local_b8.Data._8_8_ = uVar8;
      }
      break;
    case 8:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_a8.Data._8_8_;
        iVar10 = local_a8.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        uVar8 = local_a8.Data._8_8_;
        local_a8.Data.ArrayNum = (int)uVar7;
        local_a8.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_a8.Data.ArrayNum;
        local_168.Data.ArrayMax = local_a8.Data.ArrayMax;
        local_a8.Data._8_8_ = uVar8;
      }
      break;
    case 9:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_98.Data._8_8_;
        iVar10 = local_98.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        uVar8 = local_98.Data._8_8_;
        local_98.Data.ArrayNum = (int)uVar7;
        local_98.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_98.Data.ArrayNum;
        local_168.Data.ArrayMax = local_98.Data.ArrayMax;
        local_98.Data._8_8_ = uVar8;
      }
      break;
    case 10:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_88,L"P=%f Y=%f R=%f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_88.Data._8_8_;
        iVar10 = local_88.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        uVar8 = local_88.Data._8_8_;
        local_88.Data.ArrayNum = (int)uVar7;
        local_88.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_88.Data.ArrayNum;
        local_168.Data.ArrayMax = local_88.Data.ArrayMax;
        local_88.Data._8_8_ = uVar8;
      }
      break;
    case 0xb:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        ::FString::PrintfImpl(&local_78,L"P=%f Y=%f R=%f");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_78.Data._8_8_;
        iVar10 = local_78.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        uVar8 = local_78.Data._8_8_;
        local_78.Data.ArrayNum = (int)uVar7;
        local_78.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_78.Data.ArrayNum;
        local_168.Data.ArrayMax = local_78.Data.ArrayMax;
        local_78.Data._8_8_ = uVar8;
      }
      break;
    case 0xc:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        UE::Math::TTransform<float>::ToString((TTransform<float> *)this_00,&local_68);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_68.Data._8_8_;
        iVar10 = local_68.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        uVar8 = local_68.Data._8_8_;
        local_68.Data.ArrayNum = (int)uVar7;
        local_68.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_68.Data.ArrayNum;
        local_168.Data.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data._8_8_ = uVar8;
      }
      break;
    case 0xd:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        UE::Math::TTransform<double>::ToString(this_00,&local_58);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uVar7 = local_58.Data._8_8_;
        iVar10 = local_58.Data.ArrayNum;
        local_168.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        uVar8 = local_58.Data._8_8_;
        local_58.Data.ArrayNum = (int)uVar7;
        local_58.Data.ArrayMax = SUB84(uVar7,4);
        local_168.Data.ArrayNum = local_58.Data.ArrayNum;
        local_168.Data.ArrayMax = local_58.Data.ArrayMax;
        local_58.Data._8_8_ = uVar8;
      }
      break;
    case 0xe:
      if (((byte)pFVar13[0x14] & 8) != 0) {
        if (*(UScriptStruct **)(pFVar13 + 8) == (UScriptStruct *)0x0) {
          pFVar11 = GetTypeName<UScriptStruct_const_>(&local_48);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar12);
        }
        UScriptStruct::ExportText
                  (*(UScriptStruct **)(pFVar13 + 8),&local_168,this_00,(void *)0x0,(UObject *)0x0,
                   0x20041,(UObject *)0x0,true);
        iVar10 = local_168.Data.ArrayNum;
      }
    }
    _Src.Data = local_168.Data.AllocatorInstance.Data;
    local_158[0] = *(undefined4 *)pFVar13;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Data.ArrayNum = iVar10;
    if (iVar10 == 0) {
      local_140.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_140,iVar10,&local_140.Data.ArrayMax);
      memcpy(local_140.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar10 * 2);
    }
    FVar3 = pFVar13[0x14];
    pFVar5 = (this->Entries).AllocatorInstance.Data;
    local_130 = (ulonglong)
                (CONCAT13((byte)FVar3 >> 4,
                          CONCAT12((byte)FVar3 >> 3,CONCAT11(FVar3,(byte)FVar3 >> 1))) & 0xff010101)
                & 0xffffffff01ffffff;
    if (((pFVar5 <= (FScriptContainerElement *)local_158) &&
        ((FScriptContainerElement *)local_158 < pFVar5 + (longlong)(this->Entries).ArrayMax * 0x30))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) break;
    iVar10 = (this->Entries).ArrayNum;
    piVar1 = &(this->Entries).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&(this->Entries).AllocatorInstance,piVar1);
    }
    pFVar5 = (this->Entries).AllocatorInstance.Data;
    (this->Entries).ArrayNum = iVar10 + 1;
    lVar14 = (longlong)iVar10 * 0x30;
    *(undefined4 *)(pFVar5 + lVar14) = local_158[0];
    ::FString::FString((FString *)(pFVar5 + lVar14 + 8),&local_150);
    ::FString::FString((FString *)(pFVar5 + lVar14 + 0x18),&local_140);
    pFVar5[lVar14 + 0x28] = local_130._0_1_;
    pFVar5[lVar14 + 0x29] = local_130._1_1_;
    pFVar5[lVar14 + 0x2a] = local_130._2_1_;
    pFVar5[lVar14 + 0x2b] = local_130._3_1_;
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 0x18;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// IsKindOf @ 14d5b4940

bool __thiscall
UE::Cameras::FVariableTableDebugBlock::IsKindOf
          (FVariableTableDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FVariableTableDebugBlock>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5c14e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FVariableTableDebugBlock::OnDebugDraw
          (FVariableTableDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  uint uVar1;
  ulong64 uVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res20 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar1 = (this->Entries).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar10 = (this->Entries).AllocatorInstance.Data;
  pFVar7 = pFVar10 + uVar6 * 0x30;
  do {
    if ((this->Entries).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar7) {
      return;
    }
    FCameraDebugRenderer::AddText(param_2,L"[%d] <no name data> : ");
    if (pFVar10[0x2a] == (FScriptContainerElement)0x0) {
      ::FString::FString(&local_68,"{cam_warning}[Uninitialized]");
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.ArrayNum == 0) {
        FVar9.Data = (FScriptContainerElement *)L"";
LAB_14d5c15db:
        sVar4 = wcslen((wchar_t *)FVar9.Data);
        iVar3 = (int)sVar4;
      }
      else {
        iVar3 = 0;
        FVar9.Data = local_68.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14d5c15db;
      }
      uVar2 = (longlong)iVar3 * 2;
      if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar2) {
        TStringBuilderBase<wchar_t>::Extend
                  ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar3);
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
      if (iVar3 != 0) {
        pvVar5 = FGenericPlatformString::Memcpy
                           ((void *)(param_2->LineBuilder)._padding_,FVar9.Data,uVar2);
        (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar5 + uVar2);
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    else {
      FCameraDebugRenderer::AddText(param_2,(FString *)(pFVar10 + 0x18));
      FCameraDebugRenderer::AddText(param_2,L" ");
      if (pFVar10[0x2b] != (FScriptContainerElement)0x0) {
        FCameraDebugRenderer::AddText(param_2,L"{cam_passive}[WrittenThisFrame]");
      }
    }
    if (pFVar10[0x28] != (FScriptContainerElement)0x0) {
      ::FString::FString(&local_58,"{cam_notice2}[Input]");
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.ArrayNum == 0) {
        FVar9.Data = (FScriptContainerElement *)L"";
LAB_14d5c1670:
        sVar4 = wcslen((wchar_t *)FVar9.Data);
        iVar3 = (int)sVar4;
      }
      else {
        iVar3 = 0;
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14d5c1670;
      }
      uVar2 = (longlong)iVar3 * 2;
      if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar2) {
        TStringBuilderBase<wchar_t>::Extend
                  ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar3);
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      if (iVar3 != 0) {
        pvVar5 = FGenericPlatformString::Memcpy
                           ((void *)(param_2->LineBuilder)._padding_,FVar9.Data,uVar2);
        (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar5 + uVar2);
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    if (pFVar10[0x29] != (FScriptContainerElement)0x0) {
      ::FString::FString(&local_48,"{cam_notice2}[Private]");
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.ArrayNum == 0) {
        FVar9.Data = (FScriptContainerElement *)L"";
LAB_14d5c170b:
        sVar4 = wcslen((wchar_t *)FVar9.Data);
        iVar3 = (int)sVar4;
      }
      else {
        iVar3 = 0;
        FVar9.Data = local_48.Data.AllocatorInstance.Data;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14d5c170b;
      }
      uVar2 = (longlong)iVar3 * 2;
      if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar2) {
        TStringBuilderBase<wchar_t>::Extend
                  ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar3);
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      if (iVar3 != 0) {
        pvVar5 = FGenericPlatformString::Memcpy
                           ((void *)(param_2->LineBuilder)._padding_,FVar9.Data,uVar2);
        (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar5 + uVar2);
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    FCameraDebugRenderer::FlushText(param_2);
    iVar3 = param_2->IndentLevel * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin;
    (param_2->NextDrawPosition).field0_0x0._s_0.Y =
         (float)param_2->MaxCharHeight + (param_2->NextDrawPosition).field0_0x0._s_0.Y;
    (param_2->NextDrawPosition).field0_0x0._s_0.X = (float)iVar3;
    FCameraDebugRenderer::FlushText(param_2);
    pFVar10 = pFVar10 + 0x30;
    uVar6 = (ulonglong)uVar1;
    (param_2->DrawColor).field0_0x0._s_0 =
         (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  } while( true );
}

// OnSerialize @ 14d5c3970

void __thiscall
UE::Cameras::FVariableTableDebugBlock::OnSerialize(FVariableTableDebugBlock *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
            (param_1,&this->Entries);
  ::operator<<(param_1,&this->ShowVariableIDsCVarName);
  return;
}

