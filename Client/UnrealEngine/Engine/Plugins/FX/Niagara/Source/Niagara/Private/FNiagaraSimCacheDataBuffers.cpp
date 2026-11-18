// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticStruct @ 149377360

UScriptStruct * __cdecl FNiagaraSimCacheDataBuffers::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffers.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffers.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers,(UObject *)pUVar1,
                         L"NiagaraSimCacheDataBuffers");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimCacheDataBuffers.OuterSingleton;
}

// operator= @ 14938b590

FNiagaraSimCacheDataBuffers * __thiscall
FNiagaraSimCacheDataBuffers::operator=
          (FNiagaraSimCacheDataBuffers *this,FNiagaraSimCacheDataBuffers *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  this->NumInstances = param_1->NumInstances;
  this->IDAcquireTag = param_1->IDAcquireTag;
  this->IDToIndexTableElements = param_1->IDToIndexTableElements;
  iVar1 = (param_1->FloatData).ArrayNum;
  uVar2 = *(undefined4 *)&(param_1->FloatData).field_0xc;
  (this->FloatData).DataPtr = (param_1->FloatData).DataPtr;
  (this->FloatData).ArrayNum = iVar1;
  *(undefined4 *)&(this->FloatData).field_0xc = uVar2;
  iVar1 = (param_1->HalfData).ArrayNum;
  uVar2 = *(undefined4 *)&(param_1->HalfData).field_0xc;
  (this->HalfData).DataPtr = (param_1->HalfData).DataPtr;
  (this->HalfData).ArrayNum = iVar1;
  *(undefined4 *)&(this->HalfData).field_0xc = uVar2;
  iVar1 = (param_1->Int32Data).ArrayNum;
  uVar2 = *(undefined4 *)&(param_1->Int32Data).field_0xc;
  (this->Int32Data).DataPtr = (param_1->Int32Data).DataPtr;
  (this->Int32Data).ArrayNum = iVar1;
  *(undefined4 *)&(this->Int32Data).field_0xc = uVar2;
  iVar1 = (param_1->IDToIndexTable).ArrayNum;
  uVar2 = *(undefined4 *)&(param_1->IDToIndexTable).field_0xc;
  (this->IDToIndexTable).DataPtr = (param_1->IDToIndexTable).DataPtr;
  (this->IDToIndexTable).ArrayNum = iVar1;
  *(undefined4 *)&(this->IDToIndexTable).field_0xc = uVar2;
  iVar1 = (param_1->InterpMapping).ArrayNum;
  uVar2 = *(undefined4 *)&(param_1->InterpMapping).field_0xc;
  (this->InterpMapping).DataPtr = (param_1->InterpMapping).DataPtr;
  (this->InterpMapping).ArrayNum = iVar1;
  *(undefined4 *)&(this->InterpMapping).field_0xc = uVar2;
  FBulkDataBuffer<unsigned_char>::operator=(&this->DataBuffer,&param_1->DataBuffer);
  FBulkData::operator=((FBulkData *)&this->BulkData,(FBulkData *)&param_1->BulkData);
  return this;
}

// operator== @ 14938c230

bool __thiscall
FNiagaraSimCacheDataBuffers::operator==
          (FNiagaraSimCacheDataBuffers *this,FNiagaraSimCacheDataBuffers *param_1)

{
  longlong lVar1;
  uchar *_Buf1;
  longlong lVar2;
  uchar *_Buf2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  bVar7 = (this->InterpMapping).ArrayNum == (param_1->InterpMapping).ArrayNum;
  bVar8 = (this->IDToIndexTable).ArrayNum == (param_1->IDToIndexTable).ArrayNum;
  lVar1 = (this->DataBuffer).View.ArrayNum;
  _Buf1 = (this->DataBuffer).View.DataPtr;
  bVar9 = (this->Int32Data).ArrayNum == (param_1->Int32Data).ArrayNum;
  bVar10 = (this->HalfData).ArrayNum == (param_1->HalfData).ArrayNum;
  bVar11 = (this->FloatData).ArrayNum == (param_1->FloatData).ArrayNum;
  bVar12 = this->IDAcquireTag == param_1->IDAcquireTag;
  bVar13 = this->NumInstances == param_1->NumInstances;
  if ((0x7fffffff < lVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xc9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar2 = (param_1->DataBuffer).View.ArrayNum;
  _Buf2 = (param_1->DataBuffer).View.DataPtr;
  if ((0x7fffffff < lVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xc9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = (int)lVar1;
  bVar14 = iVar6 == (int)lVar2;
  bVar4 = (bVar13 && ((bVar11 && ((bVar9 && (bVar7 && bVar8)) && bVar10)) && bVar12)) && bVar14;
  if ((bVar13 && ((bVar11 && ((bVar9 && (bVar7 && bVar8)) && bVar10)) && bVar12)) && bVar14) {
    iVar6 = memcmp(_Buf1,_Buf2,(longlong)iVar6);
    bVar4 = iVar6 != 0 && bVar4;
  }
  return bVar4;
}

// operator!= @ 14938c400

bool __thiscall
FNiagaraSimCacheDataBuffers::operator!=
          (FNiagaraSimCacheDataBuffers *this,FNiagaraSimCacheDataBuffers *param_1)

{
  longlong lVar1;
  uchar *_Buf1;
  longlong lVar2;
  uchar *_Buf2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  bVar7 = (this->InterpMapping).ArrayNum == (param_1->InterpMapping).ArrayNum;
  bVar8 = (this->IDToIndexTable).ArrayNum == (param_1->IDToIndexTable).ArrayNum;
  lVar1 = (this->DataBuffer).View.ArrayNum;
  _Buf1 = (this->DataBuffer).View.DataPtr;
  bVar9 = (this->Int32Data).ArrayNum == (param_1->Int32Data).ArrayNum;
  bVar10 = (this->HalfData).ArrayNum == (param_1->HalfData).ArrayNum;
  bVar11 = (this->FloatData).ArrayNum == (param_1->FloatData).ArrayNum;
  bVar12 = this->IDAcquireTag == param_1->IDAcquireTag;
  bVar13 = this->NumInstances == param_1->NumInstances;
  if ((0x7fffffff < lVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xc9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar2 = (param_1->DataBuffer).View.ArrayNum;
  _Buf2 = (param_1->DataBuffer).View.DataPtr;
  if ((0x7fffffff < lVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= static_cast<InCountType>(TNumericLimits<SizeType>::Max())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xc9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = (int)lVar1;
  bVar14 = iVar6 == (int)lVar2;
  bVar4 = (bVar13 && ((bVar11 && ((bVar9 && (bVar7 && bVar8)) && bVar10)) && bVar12)) && bVar14;
  if ((bVar13 && ((bVar11 && ((bVar9 && (bVar7 && bVar8)) && bVar10)) && bVar12)) && bVar14) {
    iVar6 = memcmp(_Buf1,_Buf2,(longlong)iVar6);
    bVar4 = bVar4 && iVar6 != 0;
  }
  return (bool)(bVar4 ^ 1);
}

// SerializeAsArray @ 1493b5fb0

bool __thiscall
FNiagaraSimCacheDataBuffers::SerializeAsArray
          (FNiagaraSimCacheDataBuffers *this,FArchive *param_1,UObject *param_2,
          FNiagaraSimCacheDataBuffersLayout *param_3)

{
  size_t _Size;
  uchar *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *_Dst;
  int iVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  _Size = (this->DataBuffer).View.ArrayNum;
  _Dst = (uchar *)0x0;
  _Src = (this->DataBuffer).View.DataPtr;
  iVar4 = (int)_Size;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  if ((longlong)iVar4 != _Size) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OtherSizeType)NewNum == OtherNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xdac,L"Invalid number of elements to add to this array type: %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_28.ArrayNum = iVar4;
  if (_Size != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&local_28.AllocatorInstance,iVar4,&local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src,_Size);
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_28);
  if ((param_1->field_0x28 & 1) != 0) {
    if (0 < local_28.ArrayNum) {
      _Dst = FMemory::Malloc((longlong)local_28.ArrayNum,0);
      memcpy(_Dst,local_28.AllocatorInstance.Data,(longlong)local_28.ArrayNum);
    }
    FBulkDataBuffer<unsigned_char>::Reset(&this->DataBuffer,_Dst,(longlong)local_28.ArrayNum);
  }
  bVar2 = SetupForRead(this,param_3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar2;
}

// SerializeAsBulkData @ 1493b60f0

bool __thiscall
FNiagaraSimCacheDataBuffers::SerializeAsBulkData
          (FNiagaraSimCacheDataBuffers *this,FArchive *param_1,UObject *param_2,
          FNiagaraSimCacheDataBuffersLayout *param_3)

{
  size_t _Size;
  uchar *_Src;
  bool bVar1;
  void *_Dst;
  
  if ((param_1->field_0x28 & 4) != 0) {
    _Src = (this->DataBuffer).View.DataPtr;
    _Size = (this->DataBuffer).View.ArrayNum;
    if ((longlong)_Size < 1) {
      FBulkData::RemoveBulkData((FBulkData *)&this->BulkData);
    }
    else {
      FBulkData::Lock((FBulkData *)&this->BulkData,2);
      _Dst = FBulkData::Realloc((FBulkData *)&this->BulkData,_Size,1);
      memcpy(_Dst,_Src,_Size);
      FBulkData::Unlock((FBulkData *)&this->BulkData);
    }
  }
  FBulkData::Serialize((FBulkData *)&this->BulkData,param_1,param_2,false,1,None);
  bVar1 = SetupForRead(this,param_3);
  return bVar1;
}

// SetupForRead @ 1493b6fb0

bool __thiscall
FNiagaraSimCacheDataBuffers::SetupForRead
          (FNiagaraSimCacheDataBuffers *this,FNiagaraSimCacheDataBuffersLayout *param_1)

{
  FBulkDataBuffer<unsigned_char> *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  uchar *puVar4;
  bool bVar5;
  undefined1 uVar6;
  long64 lVar7;
  uchar *local_res8;
  undefined8 local_98 [2];
  FNiagaraSimCacheBuffersSetup local_88;
  
  FNiagaraSimCacheBuffersSetup::FNiagaraSimCacheBuffersSetup(&local_88,param_1,this);
  if ((this->DataBuffer).View.ArrayNum != local_88.BufferSize) {
    lVar7 = FBulkData::GetBulkDataSize((FBulkData *)&this->BulkData);
    if (lVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestedElementCount <= MaxElementCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                         ,0x43c,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    local_res8 = (uchar *)0x0;
    FBulkData::GetCopy((FBulkData *)&this->BulkData,&local_res8,true);
    puVar4 = local_res8;
    if (lVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar1 = &this->DataBuffer;
    if (pFVar1 == (FBulkDataBuffer<unsigned_char> *)local_98) {
      if (puVar4 != (uchar *)0x0) {
        FMemory::Free(puVar4);
      }
    }
    else {
      puVar2 = (pFVar1->View).DataPtr;
      if (puVar2 != (uchar *)0x0) {
        FMemory::Free(puVar2);
      }
      (pFVar1->View).DataPtr = puVar4;
      (this->DataBuffer).View.ArrayNum = lVar7;
    }
    FBulkData::UnloadBulkData((FBulkData *)&this->BulkData);
  }
  bVar5 = FNiagaraSimCacheBuffersSetup::SetArrayViews(&local_88,this);
  return bVar5;
}

// SetupForWrite @ 1493b7160

void __thiscall
FNiagaraSimCacheDataBuffers::SetupForWrite
          (FNiagaraSimCacheDataBuffers *this,FNiagaraSimCacheDataBuffersLayout *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  FNiagaraSimCacheBuffersSetup local_68;
  
  FNiagaraSimCacheBuffersSetup::FNiagaraSimCacheBuffersSetup(&local_68,param_1,this);
  FBulkData::RemoveBulkData((FBulkData *)&this->BulkData);
  puVar4 = FMemory::Malloc(local_68.BufferSize,0);
  puVar1 = (this->DataBuffer).View.DataPtr;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  if (local_68.BufferSize < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->DataBuffer).View.DataPtr = puVar4;
  (this->DataBuffer).View.ArrayNum = local_68.BufferSize;
  bVar3 = FNiagaraSimCacheBuffersSetup::SetArrayViews(&local_68,this);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                       ,0xa1,L"Cache Write setup can not fail.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

