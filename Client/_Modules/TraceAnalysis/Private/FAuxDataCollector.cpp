// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 3

// Add @ 14d396df0

void __thiscall UE::Trace::FAuxDataCollector::Add(FAuxDataCollector *this,FAuxData *param_1)

{
  FAuxDataCollector *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FAuxData *pFVar6;
  FAuxDataCollector *pFVar7;
  FAuxDataCollector *pFVar8;
  uint uVar9;
  
  iVar5 = *(int *)&this->field_0x88;
  if (iVar5 == 0) {
    pFVar1 = *(FAuxDataCollector **)&this->field_0x80;
    pFVar8 = this;
    if (pFVar1 != (FAuxDataCollector *)0x0) {
      pFVar8 = pFVar1;
    }
    if (param_1 < pFVar8) goto LAB_14d396ff9;
    pFVar8 = this;
    if (pFVar1 != (FAuxDataCollector *)0x0) {
      pFVar8 = pFVar1;
    }
    pFVar6 = (FAuxData *)(&pFVar8->field_0x0 + (longlong)*(int *)&this->field_0x8c * 0x10);
  }
  else {
    uVar9 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar9 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = *(FAuxDataCollector **)&this->field_0x80;
    pFVar8 = this;
    if (pFVar1 != (FAuxDataCollector *)0x0) {
      pFVar8 = pFVar1;
    }
    pFVar8 = (FAuxDataCollector *)
             (&pFVar8->field_0x0 + (longlong)(*(int *)&this->field_0x88 + -1) * 0x10);
    if (*(ushort *)&pFVar8->field_0xc == param_1->FieldIndex) {
      while( true ) {
        pFVar7 = this;
        if (pFVar1 != (FAuxDataCollector *)0x0) {
          pFVar7 = pFVar1;
        }
        if ((pFVar8 <= pFVar7) || (*(ushort *)&pFVar8[-1].field_0x8c != param_1->FieldIndex)) break;
        pFVar8 = (FAuxDataCollector *)&pFVar8[-1].field_0x80;
      }
      pFVar8->field_0xf = pFVar8->field_0xf | 2;
      pFVar1 = *(FAuxDataCollector **)&this->field_0x80;
      pFVar8 = this;
      if (pFVar1 != (FAuxDataCollector *)0x0) {
        pFVar8 = pFVar1;
      }
      if (param_1 < pFVar8) goto LAB_14d396ff9;
      pFVar8 = this;
      if (pFVar1 != (FAuxDataCollector *)0x0) {
        pFVar8 = pFVar1;
      }
      pFVar6 = (FAuxData *)(&pFVar8->field_0x0 + (longlong)*(int *)&this->field_0x8c * 0x10);
    }
    else {
      pFVar8 = this;
      if (pFVar1 != (FAuxDataCollector *)0x0) {
        pFVar8 = pFVar1;
      }
      if (param_1 < pFVar8) goto LAB_14d396ff9;
      pFVar8 = this;
      if (pFVar1 != (FAuxDataCollector *)0x0) {
        pFVar8 = pFVar1;
      }
      pFVar6 = (FAuxData *)(&pFVar8->field_0x0 + (longlong)*(int *)&this->field_0x8c * 0x10);
    }
  }
  if ((param_1 < pFVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d396ff9:
  iVar5 = *(int *)&this->field_0x88;
  if (iVar5 == *(int *)&this->field_0x8c) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
                      (0x810,(ForElementType<UE::Trace::FAuxData> *)this,(int *)&this->field_0x8c);
  }
  *(int *)&this->field_0x88 = iVar5 + 1;
  uVar3 = *(undefined8 *)&param_1->DataSize;
  if (*(FAuxDataCollector **)&this->field_0x80 != (FAuxDataCollector *)0x0) {
    this = *(FAuxDataCollector **)&this->field_0x80;
  }
  *(uchar **)(&this->field_0x0 + (longlong)iVar5 * 0x10) = param_1->Data;
  *(undefined8 *)((longlong)(&this->field_0x0 + (longlong)iVar5 * 0x10) + 8) = uVar3;
  return;
}

// Defragment @ 14d39a2f0

void __thiscall UE::Trace::FAuxDataCollector::Defragment(FAuxDataCollector *this,FAuxData *param_1)

{
  uint *puVar1;
  code *pcVar2;
  FAuxData *pFVar3;
  bool bVar4;
  uint uVar5;
  uchar *_Dst;
  uint uVar6;
  FAuxDataCollector *pFVar7;
  FAuxData *pFVar8;
  uint *puVar9;
  uchar *_Dst_00;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_1->bFragmented == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.bFragmented",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                       ,0x74,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar11 = (ulonglong)param_1->DataSize;
  pFVar8 = param_1 + 1;
  do {
    uVar10 = (int)uVar11 + pFVar8->DataSize;
    uVar11 = (ulonglong)uVar10;
    uVar6 = *(int *)&this->field_0x88 - 1;
    uVar5 = 0;
    if ((int)uVar6 < *(int *)&this->field_0x88) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar7 = this;
    if (*(FAuxDataCollector **)&this->field_0x80 != (FAuxDataCollector *)0x0) {
      pFVar7 = *(FAuxDataCollector **)&this->field_0x80;
    }
  } while ((pFVar8 + 1 <=
            (FAuxData *)(&pFVar7->field_0x0 + (longlong)(*(int *)&this->field_0x88 + -1) * 0x10)) &&
          (pFVar3 = pFVar8 + 1, pFVar8 = pFVar8 + 1, pFVar3->FieldIndex == param_1->FieldIndex));
  _Dst = FMemory::Malloc(uVar11,0);
  memcpy(_Dst,param_1->Data,(ulonglong)param_1->DataSize);
  _Dst_00 = _Dst + param_1->DataSize;
  if (_Dst_00 < _Dst + uVar11) {
    puVar9 = &param_1->DataSize;
    do {
      puVar1 = puVar9 + 2;
      puVar9 = puVar9 + 4;
      memcpy(_Dst_00,*(void **)puVar1,(ulonglong)*puVar9);
      _Dst_00 = _Dst_00 + *puVar9;
    } while (_Dst_00 < _Dst + uVar11);
  }
  param_1->bFragmented = '\0';
  param_1->bOwnsData = '\x01';
  param_1->Data = _Dst;
  param_1->DataSize = uVar10;
  return;
}

// Reset @ 14d3a66f0

void __thiscall UE::Trace::FAuxDataCollector::Reset(FAuxDataCollector *this)

{
  int iVar1;
  undefined8 *puVar2;
  FAuxDataCollector *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&this->field_0x88;
  pFVar3 = this;
  if (*(FAuxDataCollector **)&this->field_0x80 != (FAuxDataCollector *)0x0) {
    pFVar3 = *(FAuxDataCollector **)&this->field_0x80;
  }
  puVar2 = (undefined8 *)&pFVar3->field_0x0;
  while( true ) {
    if (*(int *)&this->field_0x88 != iVar1) {
      `TCheckedPointerIterator<UE::Trace::FAuxData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == (FAuxDataCollector *)(puVar2 + (longlong)iVar1 * 2)) break;
    if ((pFVar3->field_0xf & 4) != 0) {
      FMemory::Free(*(void **)pFVar3);
    }
    pFVar3 = (FAuxDataCollector *)&pFVar3->field_0x10;
  }
  *(undefined4 *)&this->field_0x88 = 0;
  if (*(int *)&this->field_0x8c < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Trace::FAuxData>_>
              (0x10,8,0,(ForElementType<UE::Trace::FAuxData> *)this,0,(int *)&this->field_0x8c);
  }
  return;
}

