// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 7

// ~FTypeRegistry @ 14d3929c0

void __thiscall UE::Trace::FTypeRegistry::~FTypeRegistry(FTypeRegistry *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->TypeInfos).AllocatorInstance.Data;
  iVar1 = (this->TypeInfos).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->TypeInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Trace::FDispatch_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FMemory::Free(*(void **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (this->TypeInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Add @ 14d397050

FDispatch * __thiscall UE::Trace::FTypeRegistry::Add(FTypeRegistry *this,void *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FDispatch *pFVar3;
  
  if ((param_2 == 0) || (param_2 == 4)) {
    pFVar3 = AddVersion4(this,param_1);
    return pFVar3;
  }
  if ((param_2 != 6) && (param_2 != 7)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                       ,0x4d5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDispatch *)(*pcVar1)();
      return pFVar3;
    }
    return (FDispatch *)0x0;
  }
  pFVar3 = AddVersion6(this,param_1);
  return pFVar3;
}

// Add @ 14d3970b0

void __thiscall UE::Trace::FTypeRegistry::Add(FTypeRegistry *this,FDispatch *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar3 = (this->TypeInfos).ArrayNum;
  uVar2 = param_1->Uid;
  piVar1 = &(this->TypeInfos).ArrayNum;
  if (uVar2 < uVar3) {
    if (((int)uVar3 <= (int)(uint)uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar9 = (longlong)(int)(uint)uVar2;
    if (*(longlong *)((this->TypeInfos).AllocatorInstance.Data + lVar9 * 8) != 0) {
      if ((*piVar1 <= (int)(uint)uVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMemory::Free(*(void **)((this->TypeInfos).AllocatorInstance.Data + lVar9 * 8));
      if ((*piVar1 <= (int)(uint)uVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)((this->TypeInfos).AllocatorInstance.Data + lVar9 * 8) = 0;
    }
  }
  else {
    uVar8 = uVar2 + 1;
    if ((int)uVar3 < (int)uVar8) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar8 - uVar3,(ForAnyElementType *)this,piVar1,
                         &(this->TypeInfos).ArrayMax);
      memset((this->TypeInfos).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
             (longlong)(int)(uVar8 - uVar3) << 3);
    }
    else if ((int)uVar8 < (int)uVar3) {
      iVar6 = uVar3 - uVar8;
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (iVar6 == 0) goto LAB_14d39728a;
      _Dst = (this->TypeInfos).AllocatorInstance.Data + (ulonglong)uVar8 * 8;
      iVar7 = (*piVar1 - iVar6) - uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + (longlong)iVar6 * 8,(longlong)iVar7 << 3);
      }
      *piVar1 = *piVar1 - iVar6;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,*piVar1,&(this->TypeInfos).ArrayMax);
    }
  }
LAB_14d39728a:
  if ((*piVar1 <= (int)(uint)uVar2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(FDispatch **)((this->TypeInfos).AllocatorInstance.Data + (ulonglong)uVar2 * 8) = param_1;
  return;
}

// AddVersion4 @ 14d397630

FDispatch * __thiscall UE::Trace::FTypeRegistry::AddVersion4(FTypeRegistry *this,void *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  char cVar6;
  int iVar7;
  FField *pFVar8;
  FDispatch *pFVar9;
  char cVar10;
  byte *pbVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  char *pcVar14;
  void *pvVar15;
  FDispatchBuilder local_48;
  
  lVar13 = 0;
  local_48.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Buffer.ArrayNum = 0;
  local_48.Buffer.ArrayMax = 0;
  local_48.NameBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.NameBuffer.ArrayNum = 0;
  local_48.NameBuffer.ArrayMax = 0;
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x10,(ForAnyElementType *)&local_48,&local_48.Buffer.ArrayNum,
                     &local_48.Buffer.ArrayMax);
  FVar4.Data = local_48.Buffer.AllocatorInstance.Data;
  *(undefined8 *)(local_48.Buffer.AllocatorInstance.Data + iVar7) = 0;
  *(undefined8 *)(local_48.Buffer.AllocatorInstance.Data + iVar7 + 8) = 0;
  *(undefined4 *)(local_48.Buffer.AllocatorInstance.Data + 0xc) = 0;
  *(undefined4 *)local_48.Buffer.AllocatorInstance.Data = 0;
  *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 4) = 0;
  *(undefined4 *)(local_48.Buffer.AllocatorInstance.Data + 6) = 0;
  *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 10) = 0;
  bVar1 = *(byte *)((longlong)param_1 + 4);
  pvVar15 = (void *)(((ulonglong)*(byte *)((longlong)param_1 + 2) + 1) * 6 + (longlong)param_1);
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,bVar1 + 1,&local_48.NameBuffer.AllocatorInstance,
                     &local_48.NameBuffer.ArrayNum,&local_48.NameBuffer.ArrayMax);
  pFVar12 = local_48.NameBuffer.AllocatorInstance.Data + iVar7;
  memcpy(pFVar12,pvVar15,(ulonglong)bVar1);
  FVar5.Data = local_48.Buffer.AllocatorInstance.Data;
  pFVar12[bVar1] = (FScriptContainerElement)0x0;
  *(short *)(FVar4.Data + 10) = *(short *)(FVar4.Data + 10) + (short)iVar7;
  bVar1 = *(byte *)((longlong)param_1 + 5);
  pvVar15 = (void *)((longlong)pvVar15 + (ulonglong)*(byte *)((longlong)param_1 + 4));
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,bVar1 + 1,&local_48.NameBuffer.AllocatorInstance,
                     &local_48.NameBuffer.ArrayNum,&local_48.NameBuffer.ArrayMax);
  pFVar12 = local_48.NameBuffer.AllocatorInstance.Data + iVar7;
  memcpy(pFVar12,pvVar15,(ulonglong)bVar1);
  pFVar12[bVar1] = (FScriptContainerElement)0x0;
  *(short *)(FVar5.Data + 0xc) = (short)iVar7;
  pcVar14 = (char *)((ulonglong)*(byte *)((longlong)param_1 + 5) + (longlong)pvVar15);
  *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 4) = *(undefined2 *)param_1;
  bVar1 = *(byte *)((longlong)param_1 + 2);
  if ((ulonglong)bVar1 != 0) {
    pbVar11 = (byte *)((longlong)param_1 + 10);
    do {
      bVar2 = *pbVar11;
      cVar6 = '\x01' << (bVar2 & 3);
      pFVar8 = FDispatchBuilder::AddField
                         (&local_48,pcVar14,(uint)pbVar11[1],*(ushort *)(pbVar11 + -2));
      pFVar8->Offset = *(ushort *)(pbVar11 + -4);
      cVar10 = -cVar6;
      if ((bVar2 & 0x40) == 0) {
        cVar10 = cVar6;
      }
      lVar13 = lVar13 + 1;
      pFVar8->SizeAndType = cVar10;
      bVar2 = *pbVar11;
      pFVar8->Class = '\0';
      pFVar8->field_0xb = pFVar8->field_0xb | bVar2 & 0x18;
      bVar3 = *pbVar11;
      pFVar8->Class = bVar2 & 0x18;
      pFVar8->bArray = bVar3 >> 7;
      pcVar14 = pcVar14 + pbVar11[1];
      pbVar11 = pbVar11 + 6;
    } while (lVar13 < (longlong)(ulonglong)bVar1);
  }
  if ((*(byte *)((longlong)param_1 + 3) & 1) != 0) {
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 1);
  }
  if ((*(byte *)((longlong)param_1 + 3) & 2) != 0) {
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 2);
  }
  if ((*(byte *)((longlong)param_1 + 3) & 4) != 0) {
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 4);
  }
  pFVar9 = FDispatchBuilder::Finalize(&local_48);
  Add(this,pFVar9);
  if (local_48.NameBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.NameBuffer.AllocatorInstance.Data);
  }
  if (local_48.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Buffer.AllocatorInstance.Data);
  }
  return pFVar9;
}

// AddVersion6 @ 14d3978a0

FDispatch * __thiscall UE::Trace::FTypeRegistry::AddVersion6(FTypeRegistry *this,void *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FField *pFVar10;
  FDispatch *pFVar11;
  byte *pbVar12;
  char cVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  char *pcVar16;
  void *pvVar17;
  FDispatchBuilder local_48;
  
  lVar15 = 0;
  local_48.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Buffer.ArrayNum = 0;
  local_48.Buffer.ArrayMax = 0;
  local_48.NameBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.NameBuffer.ArrayNum = 0;
  local_48.NameBuffer.ArrayMax = 0;
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x10,(ForAnyElementType *)&local_48,&local_48.Buffer.ArrayNum,
                     &local_48.Buffer.ArrayMax);
  FVar5.Data = local_48.Buffer.AllocatorInstance.Data;
  *(undefined8 *)(local_48.Buffer.AllocatorInstance.Data + iVar9) = 0;
  *(undefined8 *)(local_48.Buffer.AllocatorInstance.Data + iVar9 + 8) = 0;
  *(undefined4 *)(local_48.Buffer.AllocatorInstance.Data + 0xc) = 0;
  *(undefined4 *)local_48.Buffer.AllocatorInstance.Data = 0;
  *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 4) = 0;
  *(undefined4 *)(local_48.Buffer.AllocatorInstance.Data + 6) = 0;
  *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 10) = 0;
  bVar1 = *(byte *)((longlong)param_1 + 4);
  pvVar17 = (void *)((ulonglong)*(byte *)((longlong)param_1 + 2) * 8 + 6 + (longlong)param_1);
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,bVar1 + 1,&local_48.NameBuffer.AllocatorInstance,
                     &local_48.NameBuffer.ArrayNum,&local_48.NameBuffer.ArrayMax);
  pFVar14 = local_48.NameBuffer.AllocatorInstance.Data + iVar9;
  memcpy(pFVar14,pvVar17,(ulonglong)bVar1);
  FVar6.Data = local_48.Buffer.AllocatorInstance.Data;
  pFVar14[bVar1] = (FScriptContainerElement)0x0;
  *(short *)(FVar5.Data + 10) = *(short *)(FVar5.Data + 10) + (short)iVar9;
  bVar1 = *(byte *)((longlong)param_1 + 5);
  pvVar17 = (void *)((longlong)pvVar17 + (ulonglong)*(byte *)((longlong)param_1 + 4));
  iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,bVar1 + 1,&local_48.NameBuffer.AllocatorInstance,
                     &local_48.NameBuffer.ArrayNum,&local_48.NameBuffer.ArrayMax);
  pFVar14 = local_48.NameBuffer.AllocatorInstance.Data + iVar9;
  memcpy(pFVar14,pvVar17,(ulonglong)bVar1);
  pFVar14[bVar1] = (FScriptContainerElement)0x0;
  *(short *)(FVar6.Data + 0xc) = (short)iVar9;
  pcVar16 = (char *)((ulonglong)*(byte *)((longlong)param_1 + 5) + (longlong)pvVar17);
  *(undefined2 *)(local_48.Buffer.AllocatorInstance.Data + 4) = *(undefined2 *)param_1;
  bVar1 = *(byte *)((longlong)param_1 + 2);
  if ((ulonglong)bVar1 != 0) {
    pbVar12 = (byte *)((longlong)param_1 + 0xc);
    do {
      bVar2 = pbVar12[-6];
      if (bVar2 == 0) {
        bVar2 = *pbVar12;
        cVar7 = '\x01' << (bVar2 & 3);
        pFVar10 = FDispatchBuilder::AddField
                            (&local_48,pcVar16,(uint)pbVar12[1],*(ushort *)(pbVar12 + -2));
        pFVar10->Offset = *(ushort *)(pbVar12 + -4);
        cVar13 = -cVar7;
        if ((bVar2 & 0x40) == 0) {
          cVar13 = cVar7;
        }
        pFVar10->SizeAndType = cVar13;
        bVar2 = *pbVar12;
        pFVar10->Class = '\0';
        pFVar10->field_0xb = pFVar10->field_0xb | bVar2 & 0x18;
        bVar3 = *pbVar12;
        pFVar10->Class = bVar2 & 0x18;
        pFVar10->bArray = bVar3 >> 7;
        pcVar16 = pcVar16 + pbVar12[1];
      }
      else if (bVar2 == 1) {
        if ((*pbVar12 & 0xc0) != 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Field.Reference.TypeInfo & Protocol0::Field_CategoryMask) == Protocol0::Field_Integer"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                             ,0x547,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FDispatch *)(*pcVar4)();
            return pFVar11;
          }
        }
        cVar13 = '\x01' << (*pbVar12 & 3);
        pFVar10 = FDispatchBuilder::AddField(&local_48,pcVar16,(uint)pbVar12[1],(short)cVar13);
        pFVar10->Offset = *(ushort *)(pbVar12 + -4);
        pFVar10->SizeAndType = cVar13;
        pFVar10->RefUid = (uint)*(ushort *)(pbVar12 + -2);
        pFVar10->Class = '\0';
        pFVar10->bArray = '\0';
        pcVar16 = pcVar16 + pbVar12[1];
      }
      else if (bVar2 == 2) {
        if ((pbVar12[1] & 0xc0) != 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Field.DefinitionId.TypeInfo & Protocol0::Field_CategoryMask) == Protocol0::Field_Integer"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                             ,0x555,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FDispatch *)(*pcVar4)();
            return pFVar11;
          }
        }
        cVar13 = '\x01' << (pbVar12[1] & 3);
        pFVar10 = FDispatchBuilder::AddField(&local_48,"DefinitionId",0xc,(short)cVar13);
        pFVar10->Offset = *(ushort *)(pbVar12 + -4);
        pFVar10->SizeAndType = cVar13;
        pFVar10->RefUid = (uint)*(ushort *)param_1;
        pFVar10->Class = '\0';
        pFVar10->bArray = '\0';
      }
      lVar15 = lVar15 + 1;
      pbVar12 = pbVar12 + 8;
    } while (lVar15 < (longlong)(ulonglong)bVar1);
  }
  if ((*(byte *)((longlong)param_1 + 3) & 1) != 0) {
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 1);
  }
  if ((*(byte *)((longlong)param_1 + 3) & 2) != 0) {
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 2);
  }
  if ((*(byte *)((longlong)param_1 + 3) & 4) != 0) {
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 4);
  }
  if ((*(byte *)((longlong)param_1 + 3) & 8) != 0) {
    local_48.Buffer.AllocatorInstance.Data[7] =
         (FScriptContainerElement)((byte)local_48.Buffer.AllocatorInstance.Data[7] | 8);
  }
  pFVar11 = FDispatchBuilder::Finalize(&local_48);
  Add(this,pFVar11);
  if (local_48.NameBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.NameBuffer.AllocatorInstance.Data);
  }
  if (local_48.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Buffer.AllocatorInstance.Data);
  }
  return pFVar11;
}

// Get @ 14d39c4d0

FDispatch * __thiscall UE::Trace::FTypeRegistry::Get(FTypeRegistry *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDispatch *pFVar5;
  
  uVar1 = (this->TypeInfos).ArrayNum;
  if (uVar1 <= param_1) {
    return (FDispatch *)0x0;
  }
  uVar4 = 0;
  if ((int)param_1 < (int)uVar1) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDispatch *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FDispatch **)((this->TypeInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// IsUidValid @ 14d3a0780

bool __thiscall UE::Trace::FTypeRegistry::IsUidValid(FTypeRegistry *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = (this->TypeInfos).ArrayNum;
  if (param_1 < uVar1) {
    uVar5 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(longlong *)((this->TypeInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 8) != 0) {
      return true;
    }
  }
  return false;
}

