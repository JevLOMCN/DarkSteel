// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// operator= @ 14e03f190

FHairStreamingRequest * __thiscall
FHairStreamingRequest::operator=(FHairStreamingRequest *this,FHairStreamingRequest *param_1)

{
  TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  FBulkDataBatchRequest FVar3;
  FScriptContainerElement *pFVar4;
  
  if (this != param_1) {
    FVar3 = this->IORequest;
    this->IORequest = param_1->IORequest;
    param_1->IORequest = (FBulkDataBatchRequest)0x0;
    if (FVar3 != (FBulkDataBatchRequest)0x0) {
      (**(code **)(*(longlong *)FVar3 + 0x10))();
    }
  }
  pTVar1 = &param_1->Chunks;
  pTVar2 = &this->Chunks;
  if (pTVar2 != pTVar1) {
    DestructItems<FHairStreamingRequest::FChunk,int>
              ((FChunk *)(pTVar2->AllocatorInstance).Data,(this->Chunks).ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Chunks).ArrayNum = (param_1->Chunks).ArrayNum;
    (this->Chunks).ArrayMax = (param_1->Chunks).ArrayMax;
    (param_1->Chunks).ArrayNum = 0;
    (param_1->Chunks).ArrayMax = 0;
  }
  this->CurveCount = param_1->CurveCount;
  this->PointCount = param_1->PointCount;
  this->LODIndex = param_1->LODIndex;
  this->bSupportOffsetLoad = param_1->bSupportOffsetLoad;
  return this;
}

// IsCompleted @ 14e0a9230

bool __thiscall FHairStreamingRequest::IsCompleted(FHairStreamingRequest *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar4 = (this->Chunks).ArrayNum;
  pFVar9 = (this->Chunks).AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 0x28;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FHairStreamingRequest::FChunk_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    if (*(int *)(pFVar9 + 0x1c) == 4) {
      return true;
    }
    pFVar9 = pFVar9 + 0x28;
  }
  if ((this->IORequest != (FBulkDataBatchRequest)0x0) &&
     (uVar8 = (**(code **)(*(longlong *)this->IORequest + 0x20))(), 1 < uVar8)) {
    iVar4 = (this->Chunks).ArrayNum;
    pFVar9 = (this->Chunks).AllocatorInstance.Data;
    pFVar3 = pFVar9 + (longlong)iVar4 * 0x28;
    while( true ) {
      if ((this->Chunks).ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FHairStreamingRequest::FChunk,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar9 == pFVar3) break;
      *(undefined4 *)(pFVar9 + 0x1c) = 2;
      if ((*(longlong *)(pFVar9 + 0x20) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chunk.Container",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                             ,0x181,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar1 = pFVar9 + 0x20;
      pFVar2 = pFVar9 + 0x18;
      pFVar9 = pFVar9 + 0x28;
      **(undefined4 **)pFVar1 = *(undefined4 *)pFVar2;
    }
  }
  if ((this->Chunks).ArrayNum == 0) {
    return true;
  }
  if ((this->IORequest != (FBulkDataBatchRequest)0x0) &&
     (uVar8 = (**(code **)(*(longlong *)this->IORequest + 0x20))(), 1 < uVar8)) {
    return true;
  }
  return false;
}

// IsNone @ 14e0a9750

bool __thiscall FHairStreamingRequest::IsNone(FHairStreamingRequest *this)

{
  int iVar1;
  
  if (this->IORequest != (FBulkDataBatchRequest)0x0) {
    iVar1 = (**(code **)(*(longlong *)this->IORequest + 0x20))();
    return iVar1 == 0;
  }
  return true;
}

// IsUnloading @ 14e0a9780

bool __thiscall FHairStreamingRequest::IsUnloading(FHairStreamingRequest *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Chunks).ArrayNum;
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairStreamingRequest::FChunk_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)(pFVar3 + 0x1c) == 4) {
      return true;
    }
    pFVar3 = pFVar3 + 0x28;
  }
  return false;
}

// Request @ 14e0a9cc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FHairStreamingRequest::Request
          (FHairStreamingRequest *this,uint param_1,uint param_2,FHairStrandsBulkCommon *param_3,
          bool param_4,bool param_5,bool param_6,FName *param_7,bool *param_8)

{
  int iVar1;
  uint uVar2;
  FBuilder local_48;
  undefined4 local_30 [2];
  FHairStreamingRequest *local_28;
  FBuilder *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
  if ((iVar1 == 0) || (param_1 == 0)) {
    this->CurveCount = 0;
    this->PointCount = 0;
  }
  else {
    this->CurveCount = param_1;
    this->PointCount = param_2;
    iVar1 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    FBulkDataBatchRequest::FBatchBuilder::FBatchBuilder((FBatchBuilder *)&local_48,iVar1);
    local_20 = &local_48;
    local_30[0] = 3;
    local_18 = 0;
    uStack_10 = 0;
    local_28 = this;
    uVar2 = (**(code **)((longlong)*param_3 + 0x10))(param_3);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((this->Chunks).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar2,&(this->Chunks).AllocatorInstance,(this->Chunks).ArrayNum,
                 &(this->Chunks).ArrayMax);
    }
    (**(code **)((longlong)*param_3 + 0x18))(param_3,local_30);
    FBulkDataBatchRequest::FBatchBuilder::Issue((FBatchBuilder *)local_20,&this->IORequest);
    FBulkDataBatchRequest::FBuilder::~FBuilder(&local_48);
    if (param_4) {
      FBulkDataBatchRequest::Wait(&this->IORequest);
    }
  }
  if (param_8 != (bool *)0x0) {
    *param_8 = true;
  }
  return;
}

