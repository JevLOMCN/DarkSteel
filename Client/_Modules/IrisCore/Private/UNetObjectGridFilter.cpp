// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 33

// StaticClass @ 14421f7e0

UClass * __cdecl UNetObjectGridFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridFilter",
               &Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectGridFilter,0x198,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectGridFilter>,
               InternalVTableHelperCtorCaller<UNetObjectGridFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton;
}

// UNetObjectGridFilter @ 14422a480

UNetObjectGridFilter * __thiscall
UNetObjectGridFilter::UNetObjectGridFilter(UNetObjectGridFilter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectGridFilter__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Config).Object = (UObject *)0x0;
  (this->PerConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerConnectionInfos).ArrayNum = 0;
  (this->PerConnectionInfos).ArrayMax = 0;
  TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
            (&this->ObjectInfos,0);
  (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssignedObjectInfoIndices).Storage.ArrayNum = 0;
  (this->AssignedObjectInfoIndices).Storage.ArrayMax = 0;
  (this->AssignedObjectInfoIndices).BitCount = 0;
  (this->Stats).CullTestingTimeInCycles = 0;
  (this->Stats).CullTestedObjects = 0;
  *(undefined8 *)&this->Cells = 0;
  *(undefined8 *)&(this->Cells).field_0x8 = 0;
  *(undefined8 *)&(this->Cells).field_0x20 = 0;
  *(undefined4 *)&(this->Cells).field_0x28 = 0;
  *(undefined4 *)&(this->Cells).field_0x2c = 0x80;
  *(undefined4 *)&(this->Cells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cells).field_0x34 = 0;
  *(undefined8 *)&(this->Cells).field_0x40 = 0;
  *(undefined4 *)&(this->Cells).field_0x48 = 0;
  this->FrameIndex = 0;
  (this->DebugUpdateCellInfo).NewCellBox.MinX = 0;
  (this->DebugUpdateCellInfo).NewCellBox.MaxX = -1;
  (this->DebugUpdateCellInfo).NewCellBox.MinY = 0;
  (this->DebugUpdateCellInfo).NewCellBox.MaxY = -1;
  (this->DebugUpdateCellInfo).PrevCellBox.MinX = 0;
  (this->DebugUpdateCellInfo).PrevCellBox.MaxX = -1;
  (this->DebugUpdateCellInfo).PrevCellBox.MinY = 0;
  (this->DebugUpdateCellInfo).PrevCellBox.MaxY = -1;
  this->MaxNetCullDistance = 0.0;
  return this;
}

// UNetObjectGridFilter @ 14422a5a0

UNetObjectGridFilter * __thiscall
UNetObjectGridFilter::UNetObjectGridFilter(UNetObjectGridFilter *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UNetObjectGridFilter__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Config).Object = (UObject *)0x0;
  (this->PerConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerConnectionInfos).ArrayNum = 0;
  (this->PerConnectionInfos).ArrayMax = 0;
  TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
            (&this->ObjectInfos,0);
  (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssignedObjectInfoIndices).Storage.ArrayNum = 0;
  (this->AssignedObjectInfoIndices).Storage.ArrayMax = 0;
  (this->AssignedObjectInfoIndices).BitCount = 0;
  (this->Stats).CullTestingTimeInCycles = 0;
  (this->Stats).CullTestedObjects = 0;
  *(undefined8 *)&this->Cells = 0;
  *(undefined8 *)&(this->Cells).field_0x8 = 0;
  *(undefined8 *)&(this->Cells).field_0x20 = 0;
  *(undefined4 *)&(this->Cells).field_0x28 = 0;
  *(undefined4 *)&(this->Cells).field_0x2c = 0x80;
  *(undefined4 *)&(this->Cells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cells).field_0x34 = 0;
  *(undefined8 *)&(this->Cells).field_0x40 = 0;
  *(undefined4 *)&(this->Cells).field_0x48 = 0;
  this->FrameIndex = 0;
  (this->DebugUpdateCellInfo).NewCellBox.MinX = 0;
  (this->DebugUpdateCellInfo).NewCellBox.MaxX = -1;
  (this->DebugUpdateCellInfo).NewCellBox.MinY = 0;
  (this->DebugUpdateCellInfo).NewCellBox.MaxY = -1;
  (this->DebugUpdateCellInfo).PrevCellBox.MinX = 0;
  (this->DebugUpdateCellInfo).PrevCellBox.MaxX = -1;
  (this->DebugUpdateCellInfo).PrevCellBox.MinY = 0;
  (this->DebugUpdateCellInfo).PrevCellBox.MaxY = -1;
  this->MaxNetCullDistance = 0.0;
  return this;
}

// ~UNetObjectGridFilter @ 14422b540

void __thiscall UNetObjectGridFilter::~UNetObjectGridFilter(UNetObjectGridFilter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  
  this->_padding_ = (longlong)&___7UNetObjectGridFilter__6B_;
  *(undefined4 *)&(this->Cells).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Cells).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Cells);
  pFVar2 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->ObjectInfos).Chunks);
  DestructItems<UNetObjectGridFilter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->PerConnectionInfos).AllocatorInstance.Data,
             (this->PerConnectionInfos).ArrayNum);
  pFVar2 = (this->PerConnectionInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pUVar3 = (this->Config).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->Config).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7UNetObjectFilter__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddCellInfoForObject @ 14422d8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UNetObjectGridFilter::AddCellInfoForObject
          (UNetObjectGridFilter *this,FObjectLocationInfo *param_1,
          FReplicationInstanceProtocol *param_2)

{
  TMap<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>_>
  *this_00;
  float fVar1;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FPerObjectInfo *pFVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int local_res8 [2];
  uint local_res10 [2];
  uint local_res20 [2];
  int local_58;
  int iStack_54;
  int *local_50;
  FCellBox local_48;
  
  pFVar9 = TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
           operator[](&this->ObjectInfos,*(int *)&param_1->field_0x4);
  if (((this->Config).Object == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  fVar1 = *(float *)&(this->Config).Object[1].field_0x10;
  lVar2 = this->_padding_;
  pFVar9->CullDistance = fVar1;
  pFVar9->CullDistanceSq = fVar1 * fVar1;
  (**(code **)(lVar2 + 0x310))(this,pFVar9,param_1,param_2);
  if ((0.0 < this->MaxNetCullDistance) && (this->MaxNetCullDistance < pFVar9->CullDistance)) {
    return false;
  }
  local_48.MinX = ___xmm_ffffffff00000000ffffffff00000000;
  local_48.MaxX = _UNK_150b85a94;
  local_48.MinY = _UNK_150b85a98;
  local_48.MaxY = _UNK_150b85a9c;
  CalculateCellBox(this,pFVar9,&local_48);
  iVar5 = local_48.MinY;
  local_res10[0] = pFVar9->ObjectIndex;
  (pFVar9->CellBox).MinX = local_48.MinX;
  (pFVar9->CellBox).MaxX = local_48.MaxX;
  (pFVar9->CellBox).MinY = local_48.MinY;
  (pFVar9->CellBox).MaxY = local_48.MaxY;
  iVar15 = local_48.MaxX + 1;
  if (local_48.MinX < iVar15) {
    iVar16 = local_48.MaxY + 1;
    iVar12 = local_48.MinX;
    do {
      if (iVar5 < iVar16) {
        this_00 = &this->Cells;
        iVar11 = iVar5;
        local_58 = iVar12;
        do {
          uVar13 = local_58 * 0x17 + iVar11;
          iStack_54 = iVar11;
          if (*(int *)&(this->Cells).field_0x8 != *(int *)&(this->Cells).field_0x34) {
            puVar3 = *(undefined1 **)&(this->Cells).field_0x40;
            puVar10 = &(this->Cells).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar10 = puVar3;
            }
            iVar8 = *(int *)(puVar10 +
                            (ulonglong)(*(int *)&(this->Cells).field_0x48 - 1U & uVar13) * 4);
            if (iVar8 != -1) {
              do {
                puVar14 = (undefined8 *)((longlong)iVar8 * 0x60 + *(longlong *)&this_00->field_0x0);
                if ((int)*puVar14 == local_58 && (int)((ulonglong)*puVar14 >> 0x20) == iVar11) {
                  if (puVar14 != (undefined8 *)0x0) goto LAB_14422daf5;
                  break;
                }
                iVar8 = *(int *)(puVar14 + 0xb);
              } while (iVar8 != -1);
            }
          }
          local_50 = &local_58;
          TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&>_>
                    ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                      *)this_00,(uint)local_res8,
                     (TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&> *)(ulonglong)uVar13,
                     (bool *)&local_50);
          puVar14 = (undefined8 *)
                    ((longlong)local_res8[0] * 0x60 + *(longlong *)&this_00->field_0x0);
LAB_14422daf5:
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
          Emplace<unsigned_int_const_&>
                    ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                     (puVar14 + 1),local_res20,(bool *)local_res10);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar16);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar15);
  }
  return true;
}

// AddConnection @ 14422de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNetObjectGridFilter::AddConnection(UNetObjectGridFilter *this,uint param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [400];
  ForAnyElementType local_78;
  undefined8 uStack_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_208._384_8_ = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0;
  local_208._392_4_ = 0;
  local_208._396_4_ = 0x20;
  uStack_40 = 0;
  uVar5 = 0;
  if ((int)param_1 < (this->PerConnectionInfos).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  uStack_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_68.AllocatorInstance.InlineData[4] = '\0';
  local_68.AllocatorInstance.InlineData[5] = '\0';
  local_68.AllocatorInstance.InlineData[6] = '\0';
  local_68.AllocatorInstance.InlineData[7] = '\0';
  local_68.AllocatorInstance.InlineData[8] = '\0';
  local_68.AllocatorInstance.InlineData[9] = '\0';
  local_68.AllocatorInstance.InlineData[10] = '\0';
  local_68.AllocatorInstance.InlineData[0xb] = '\0';
  local_68.AllocatorInstance.InlineData[0xc] = '\0';
  local_68.AllocatorInstance.InlineData[0xd] = '\0';
  local_68.AllocatorInstance.InlineData[0xe] = '\0';
  local_68.AllocatorInstance.InlineData[0xf] = '\0';
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPerConnectionInfo::operator=
            ((FPerConnectionInfo *)
             ((this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x1e0),
             (FPerConnectionInfo *)local_208);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_78,0,(int *)((longlong)&uStack_70 + 4));
  }
  iVar3 = local_68.MaxBits;
  local_48 = 0xffffffff;
  local_68._24_8_ = (ulonglong)(uint)local_68.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if ((ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)local_208._384_8_ !=
      (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
    FMemory::Free((void *)local_208._384_8_);
  }
  return;
}

// AddObject @ 14422e8a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetObjectGridFilter::AddObject
          (UNetObjectGridFilter *this,uint param_1,FNetObjectFilterAddObjectParams *param_2)

{
  FName *pFVar1;
  FObjectLocationInfo *pFVar2;
  UObject *pUVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FPerObjectInfo *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FName *pFVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  FName local_res20;
  FName *local_78;
  FString local_70 [3];
  
  cVar6 = (**(code **)(this->_padding_ + 0x318))();
  if (cVar6 == '\0') {
    return false;
  }
  uVar17 = (this->AssignedObjectInfoIndices).Storage.ArrayNum;
  uVar9 = 0;
  pFVar12 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data;
  iVar13 = 0;
  uVar16 = 0xffffffff;
  pFVar2 = (FObjectLocationInfo *)param_2->OutInfo;
  if (uVar17 != 0) {
LAB_14422e911:
    if (*(uint *)pFVar12 == 0xffffffff) goto code_r0x00014422e919;
    uVar17 = ~*(uint *)pFVar12;
    iVar4 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
      }
    }
    iVar10 = 0x20;
    if (uVar17 != 0) {
      iVar10 = iVar4;
    }
    uVar16 = 0xffffffff;
    if ((uint)(iVar10 + iVar13) < (this->AssignedObjectInfoIndices).BitCount) {
      uVar16 = iVar10 + iVar13;
    }
  }
LAB_14422e94b:
  if ((uint)(this->ObjectInfos).NumElements <= uVar16) {
    TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::Add
              (&this->ObjectInfos,0x492);
  }
  pFVar12 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data;
  if (((this->AssignedObjectInfoIndices).BitCount <= uVar16) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  *(uint *)(pFVar12 + (ulonglong)(uVar16 >> 5) * 4) =
       *(uint *)(pFVar12 + (ulonglong)(uVar16 >> 5) * 4) | 1 << (uVar16 & 0x1f);
  *(short *)&pFVar2->field_0x4 = (short)uVar16;
  *(short *)&pFVar2->field_0x6 = (short)(uVar16 >> 0x10);
  pFVar11 = TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
            operator[](&this->ObjectInfos,uVar16);
  pFVar11->ObjectIndex = param_1;
  local_res20 = param_2->ProfileName;
  if (((this->Config).Object == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pUVar3 = (this->Config).Object;
  uVar15 = *(ushort *)&pUVar3[1].field_0x4;
  if (local_res20 != (FName)0x0) {
    if ((pUVar3 == (UObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pUVar3 = (this->Config).Object;
    pFVar14 = *(FName **)&pUVar3[1].field_0x18;
    pFVar1 = (FName *)((longlong)pFVar14 + (longlong)*(int *)&pUVar3[1].field_0x20 * 0xc);
    for (; pFVar14 != pFVar1; pFVar14 = (FName *)&pFVar14[1].Number) {
      if (*pFVar14 == local_res20) {
        uVar15 = (ushort)pFVar14[1].ComparisonIndex.Value;
        goto LAB_14422ea91;
      }
    }
    local_78 = &local_res20;
    `UNetObjectGridFilter::GetFrameCountBeforeCulling'::__l2::<lambda_1>::operator()(&local_78);
  }
LAB_14422ea91:
  pFVar11->FrameCountBeforeCulling = uVar15;
  bVar7 = AddCellInfoForObject(this,pFVar2,param_2->InstanceProtocol);
  if (bVar7) {
    bVar7 = true;
  }
  else {
    if (2 < (byte)LogIris._0_1_) {
      UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                ((FNetRefHandleManager *)this->_padding_,local_70,param_1);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x2c8))(this,param_1,pFVar2);
    bVar7 = false;
  }
  return bVar7;
code_r0x00014422e919:
  uVar9 = uVar9 + 1;
  pFVar12 = pFVar12 + 4;
  iVar13 = iVar13 + 0x20;
  if (uVar17 <= uVar9) goto LAB_14422e94b;
  goto LAB_14422e911;
}

// AllocObjectInfo @ 14422f940

uint __thiscall UNetObjectGridFilter::AllocObjectInfo(UNetObjectGridFilter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  
  uVar6 = (this->AssignedObjectInfoIndices).Storage.ArrayNum;
  uVar4 = 0;
  pFVar7 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data;
  iVar9 = 0;
  uVar8 = 0xffffffff;
  if (uVar6 != 0) {
    do {
      if (*(uint *)pFVar7 != 0xffffffff) {
        uVar6 = ~*(uint *)pFVar7;
        iVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        iVar5 = 0x20;
        if (uVar6 != 0) {
          iVar5 = iVar1;
        }
        uVar8 = 0xffffffff;
        if ((uint)(iVar5 + iVar9) < (this->AssignedObjectInfoIndices).BitCount) {
          uVar8 = iVar5 + iVar9;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      pFVar7 = pFVar7 + 4;
      iVar9 = iVar9 + 0x20;
    } while (uVar4 < uVar6);
  }
  if ((uint)(this->ObjectInfos).NumElements <= uVar8) {
    TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::Add
              (&this->ObjectInfos,0x492);
  }
  pFVar7 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data;
  if (((this->AssignedObjectInfoIndices).BitCount <= uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  pFVar7 = pFVar7 + (ulonglong)(uVar8 >> 5) * 4;
  *(uint *)pFVar7 = *(uint *)pFVar7 | 1 << (uVar8 & 0x1f);
  return uVar8;
}

// AreCellsDisjoint @ 144231a80

bool __cdecl UNetObjectGridFilter::AreCellsDisjoint(FCellBox *param_1,FCellBox *param_2)

{
  return (param_2->MaxX < param_1->MinX ||
         (param_2->MaxY < param_1->MinY || param_1->MaxY < param_2->MinY)) ||
         param_1->MaxX < param_2->MinX;
}

// BuildObjectInfo @ 1442328e0

bool __thiscall
UNetObjectGridFilter::BuildObjectInfo
          (UNetObjectGridFilter *this,uint param_1,FNetObjectFilterAddObjectParams *param_2)

{
  return false;
}

// CalculateCellBox @ 144232a80

void __thiscall
UNetObjectGridFilter::CalculateCellBox
          (UNetObjectGridFilter *this,FPerObjectInfo *param_1,FCellBox *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  UObject *pUVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  UNetObjectGridFilter *local_88;
  FPerObjectInfo *local_80;
  double local_78;
  
  local_78 = (param_1->Position).field0_0x0._s_0.Z;
  fVar1 = param_1->CullDistance;
  dVar9 = (param_1->Position).field0_0x0._s_0.X;
  dVar5 = (param_1->Position).field0_0x0._s_0.Y;
  iVar14 = _finite(dVar9);
  if (iVar14 != 0) {
    iVar14 = _finite(dVar5);
    if (iVar14 != 0) {
      iVar14 = _finite(local_78);
      if (iVar14 != 0) goto LAB_144232b1d;
    }
  }
  local_88 = this;
  local_80 = param_1;
  `UNetObjectGridFilter::CalculateCellBox'::__l2::<lambda_1>::operator()(&local_88);
LAB_144232b1d:
  dVar8 = (double)fVar1;
  dVar4 = (this->MinWorldPos).field0_0x0._s_0.Y;
  dVar10 = dVar5 - dVar8;
  if (dVar5 - dVar8 <= dVar4) {
    dVar10 = dVar4;
  }
  dVar4 = (this->MinWorldPos).field0_0x0._s_0.X;
  dVar11 = dVar9 - dVar8;
  if (dVar9 - dVar8 <= dVar4) {
    dVar11 = dVar4;
  }
  dVar4 = (this->MaxWorldPos).field0_0x0._s_0.Y;
  dVar12 = dVar8 + dVar5;
  if (dVar4 <= dVar8 + dVar5) {
    dVar12 = dVar4;
  }
  dVar5 = (this->MaxWorldPos).field0_0x0._s_0.X;
  dVar4 = dVar8 + dVar9;
  if (dVar5 <= dVar8 + dVar9) {
    dVar4 = dVar5;
  }
  if ((this->Config).Object == (UObject *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dVar5 = __real_3fe0000000000000;
  pUVar6 = (this->Config).Object;
  dVar9 = (dVar11 + dVar11) / (double)*(float *)&pUVar6[1].field_0x8 - __real_3fe0000000000000;
  if (pUVar6 == (UObject *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar6 = (this->Config).Object;
  fVar1 = *(float *)&pUVar6[1].field_0xc;
  if (pUVar6 == (UObject *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar6 = (this->Config).Object;
  fVar2 = *(float *)&pUVar6[1].field_0x8;
  if (pUVar6 == (UObject *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar3 = *(float *)&(this->Config).Object[1].field_0xc;
  param_2->MinX = (int)((longlong)ROUND(dVar9) >> 1);
  param_2->MaxX = (int)((longlong)ROUND((dVar4 + dVar4) / (double)fVar2 - dVar5) >> 1);
  param_2->MinY = (int)((longlong)ROUND((dVar10 + dVar10) / (double)fVar1 - dVar5) >> 1);
  param_2->MaxY = (int)((longlong)ROUND((dVar12 + dVar12) / (double)fVar3 - dVar5) >> 1);
  return;
}

// CalculateCellCoord @ 144232cf0

void __thiscall
UNetObjectGridFilter::CalculateCellCoord
          (UNetObjectGridFilter *this,FCellCoord *param_1,TVector<double> *param_2)

{
  double dVar1;
  UObject *pUVar2;
  code *pcVar3;
  FCellCoord FVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  
  if ((this->Config).Object == (UObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  dVar5 = __real_3fe0000000000000;
  pUVar2 = (this->Config).Object;
  dVar7 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (dVar7 + dVar7) / (double)*(float *)&pUVar2[1].field_0x8 - __real_3fe0000000000000;
  if (pUVar2 == (UObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  FVar4.Y = (int)((longlong)
                  ROUND((dVar1 + dVar1) / (double)*(float *)&(this->Config).Object[1].field_0xc -
                        dVar5) >> 1);
  FVar4.X = (int)((longlong)ROUND(dVar7) >> 1);
  *param_1 = FVar4;
  return;
}

// DoesCellContainCoord @ 144237be0

bool __cdecl UNetObjectGridFilter::DoesCellContainCoord(FCellBox *param_1,FCellCoord *param_2)

{
  return (param_1->MinY <= param_2->Y &&
         (param_2->Y <= param_1->MaxY && param_2->X <= param_1->MaxX)) &&
         param_1->MinX <= param_2->X;
}

// Filter @ 1442389e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNetObjectGridFilter::Filter(UNetObjectGridFilter *this,FNetObjectFilteringParams *param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  double dVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  UObject *pUVar8;
  FNetObjectFilteringInfo *pFVar9;
  code *pcVar10;
  FNetBitArrayView *pFVar11;
  double dVar12;
  FNetObjectFilteringParams *pFVar13;
  LARGE_INTEGER LVar14;
  bool bVar15;
  int iVar16;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar17;
  longlong *plVar18;
  int iVar19;
  ForElementType<UE::Net::FReplicationView::FView> FVar20;
  longlong lVar21;
  double *pdVar22;
  uint uVar23;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar24;
  double *pdVar25;
  TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar26;
  uint uVar27;
  ulonglong uVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  longlong *plVar30;
  longlong *plVar31;
  UNetObjectGridFilter *pUVar32;
  uint uVar33;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> FVar34;
  ForElementType<UE::Net::FReplicationView::FView> FVar35;
  bool bVar36;
  undefined1 auStackY_5b8 [32];
  undefined1 local_567;
  undefined1 local_566;
  undefined1 local_565;
  undefined1 local_564;
  undefined1 local_563;
  undefined1 local_562;
  undefined1 local_561;
  undefined1 local_560 [4];
  uint local_55c;
  UNetObjectGridFilter *local_558;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> local_550;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> local_548;
  FNetObjectFilteringParams *local_540;
  uint local_538 [2];
  LARGE_INTEGER local_530;
  longlong *local_528;
  uint uStack_520;
  uint uStack_51c;
  TBitArray<FDefaultBitArrayAllocator> *local_518;
  undefined4 uStack_510;
  uint uStack_50c;
  uint local_508;
  undefined4 uStack_504;
  int iStack_500;
  undefined4 uStack_4fc;
  longlong *local_4f8;
  undefined1 auStack_4f0 [16];
  uint uStack_4e0;
  uint uStack_4dc;
  longlong local_4d8;
  TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_4d0;
  TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_4c8;
  undefined2 local_4c0;
  int local_4b8;
  int local_4b4;
  TPairInitializer<unsigned_int_const_&,unsigned_short_const_&> local_4b0;
  LARGE_INTEGER local_4a0;
  FCellCoord local_498;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> local_490;
  LARGE_INTEGER local_488;
  FCellCoord local_480;
  longlong *local_478;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_470;
  undefined8 uStack_450;
  longlong *local_448;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_440;
  undefined8 uStack_420;
  uint *local_418;
  longlong local_410;
  uint *local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [32];
  longlong local_3d8;
  TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_3d0;
  undefined4 local_3ac;
  undefined4 local_38c;
  FCellAndTimestamp local_388;
  TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_378;
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp> local_1e8;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  bVar36 = -1 < CpuChannel->Enabled;
  local_558 = this;
  local_540 = param_1;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId138,"UNetObjectGridFilter_Filter",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\NetObjectGridFilter.cpp"
               ,0x8a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId138);
  }
  uVar27 = param_1->ConnectionId;
  uVar23 = 0;
  if ((int)uVar27 < (this->PerConnectionInfos).ArrayNum) {
    uVar23 = ~uVar27 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_1e8.SecondaryData = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0;
  FVar34 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)
           ((longlong)(int)uVar27 * 0x1e0 +
           (longlong)(this->PerConnectionInfos).AllocatorInstance.Data);
  iVar16 = *(int *)((longlong)FVar34 + 0x188);
  local_60 = iVar16;
  FVar24 = *(ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *)((longlong)FVar34 + 0x180);
  if (*(ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *)((longlong)FVar34 + 0x180) ==
      (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
    FVar24 = FVar34;
  }
  local_550 = FVar34;
  if (iVar16 == 0) {
    local_5c = 0x20;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
              (0xc,4,iVar16,0,&local_1e8,iVar16,&local_5c);
    FVar17 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      FVar17 = local_1e8.SecondaryData;
    }
    memcpy((void *)FVar17,(void *)FVar24,(longlong)iVar16 * 0xc);
  }
  *(undefined4 *)((longlong)FVar34 + 0x188) = 0;
  if (*(int *)((longlong)FVar34 + 0x18c) < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
              (0xc,4,0,(ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *)FVar34,0,
               (int *)((longlong)FVar34 + 0x18c));
  }
  dVar12 = __real_3fe0000000000000;
  FVar35 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  local_378.AllocatorInstance.SecondaryData =
       (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0;
  local_378.ArrayNum = 0;
  FVar20 = FVar35;
  if (FVar35 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar20 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  iVar16 = (param_1->View).Views.ArrayNum;
  if (FVar35 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar35 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  local_378.ArrayMax = 0x20;
  do {
    if ((param_1->View).Views.ArrayNum != iVar16) {
      local_567 = 0;
      `TCheckedPointerIterator<UE::Net::FReplicationView::FView,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_567);
    }
    pUVar32 = local_558;
    if (FVar35 == (ForElementType<UE::Net::FReplicationView::FView>)
                  ((longlong)FVar20 + (longlong)iVar16 * 0x48)) {
      if (((local_558->Config).Object == (UObject *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                              ,0x67,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pUVar8 = (pUVar32->Config).Object;
      if (pUVar8[1].field_0x14 == '\0') {
        if ((pUVar8 == (UObject *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                ,0x67,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar16 = local_60;
        uVar27 = *(uint *)((pUVar32->Config).Object + 1);
        FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_1e8;
        if (local_1e8.SecondaryData != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0)
        {
          FVar24 = local_1e8.SecondaryData;
        }
        FVar34 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)
                 ((longlong)FVar24 + (longlong)local_60 * 0xc);
        while( true ) {
          if (local_60 != iVar16) {
            local_565 = 0;
            `TCheckedPointerIterator<UNetObjectGridFilter::FCellAndTimestamp,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_565);
          }
          if (FVar24 == FVar34) break;
          if (pUVar32->FrameIndex - *(int *)((longlong)FVar24 + 8) <= uVar27) {
            FVar17 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378;
            if (local_378.AllocatorInstance.SecondaryData !=
                (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
              FVar17 = local_378.AllocatorInstance.SecondaryData;
            }
            if ((ulonglong)FVar17 <= (ulonglong)FVar24) {
              FVar17 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378;
              if (local_378.AllocatorInstance.SecondaryData !=
                  (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
                FVar17 = local_378.AllocatorInstance.SecondaryData;
              }
              if (((ulonglong)FVar24 <
                   (ulonglong)((longlong)FVar17 + (longlong)local_378.ArrayMax * 0xc)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            uVar23 = local_378.ArrayNum;
            if (local_378.ArrayNum == local_378.ArrayMax) {
              uVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
                                 (0x40c,&local_378.AllocatorInstance,&local_378.ArrayMax);
            }
            local_378.ArrayNum = uVar23 + 1;
            FVar17 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378;
            if (local_378.AllocatorInstance.SecondaryData !=
                (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
              FVar17 = local_378.AllocatorInstance.SecondaryData;
            }
            *(undefined8 *)((longlong)FVar17 + (longlong)(int)uVar23 * 0xc) = *(undefined8 *)FVar24;
            *(int *)((uchar *)((longlong)FVar17 + 8) + (longlong)(int)uVar23 * 0xc) =
                 *(int *)((longlong)FVar24 + 8);
          }
          FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)((longlong)FVar24 + 0xc)
          ;
        }
      }
      iVar16 = local_378.ArrayNum;
      FVar24 = local_550;
      if (local_550 != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378) {
        lVar21 = (longlong)local_378.ArrayNum;
        piVar1 = (int *)((longlong)local_550 + 0x18c);
        *(int *)((longlong)local_550 + 0x188) = local_378.ArrayNum;
        FVar34 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378;
        if (local_378.AllocatorInstance.SecondaryData !=
            (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
          FVar34 = local_378.AllocatorInstance.SecondaryData;
        }
        if ((local_378.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0x20;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
                    (0xc,4,local_378.ArrayNum,*piVar1,
                     (ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *)local_550,
                     local_378.ArrayNum,piVar1);
          FVar17 = *(ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *)
                    ((longlong)FVar24 + 0x180);
          if (FVar17 != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
            FVar24 = FVar17;
          }
          if (iVar16 != 0) {
            memcpy((void *)FVar24,(void *)FVar34,lVar21 * 0xc);
          }
        }
      }
      pFVar13 = local_540;
      local_408 = (local_540->OutAllowedObjects).Storage;
      uStack_400._0_4_ = (local_540->OutAllowedObjects).WordCount;
      uStack_400._4_4_ = (local_540->OutAllowedObjects).BitCount;
      pFVar11 = &local_540->OutAllowedObjects;
      local_540 = (FNetObjectFilteringParams *)local_408;
      memset(local_408,0,(ulonglong)pFVar11->WordCount << 2);
      if (((pUVar32->Config).Object == (UObject *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                              ,0x67,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((pUVar32->Config).Object[1].field_0x14 == '\0') {
        uVar28 = (ulonglong)local_378.ArrayNum;
        local_550._0_4_ = local_378.ArrayNum;
        FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378;
        if (local_378.AllocatorInstance.SecondaryData !=
            (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
          FVar24 = local_378.AllocatorInstance.SecondaryData;
        }
        uVar27 = uStack_400._4_4_;
        local_55c = uStack_400._4_4_;
        local_530.QuadPart = (longlong)FVar24 + uVar28 * 0xc;
        while( true ) {
          LVar14 = local_530;
          local_548 = FVar24;
          if (local_378.ArrayNum != (uint)uVar28) {
            local_561 = 0;
            `TCheckedPointerIterator<UNetObjectGridFilter::FCellAndTimestamp,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_561);
          }
          if (FVar24 == (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)LVar14.QuadPart)
          break;
          local_480 = *(FCellCoord *)FVar24;
          iVar16 = TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<UNetObjectGridFilter::FCellCoord>
                             ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                               *)&pUVar32->Cells,local_480.Y + local_480.X * 0x17,&local_480);
          if (iVar16 == -1) {
            lVar21 = 0;
          }
          else {
            lVar21 = (longlong)iVar16 * 0x60 + *(longlong *)&pUVar32->Cells;
          }
          plVar18 = (longlong *)0x0;
          plVar31 = (longlong *)(lVar21 + 8);
          if (lVar21 == 0) {
            plVar31 = plVar18;
          }
          if (plVar31 != (longlong *)0x0) {
            uVar23 = *(uint *)(plVar31 + 5);
            local_518 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar31 + 2);
            uStack_520 = 0;
            uStack_51c = 1;
            uStack_50c = uStack_520;
            local_508 = uStack_520;
            if (uVar23 != 0) {
              pTVar29 = local_518;
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar31[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar31[4];
              }
              uVar33 = *(uint *)(pTVar29->AllocatorInstance).InlineData;
              plVar30 = plVar18;
              while( true ) {
                uStack_520 = (uint)plVar18;
                local_508 = (uint)plVar30;
                if (uVar33 != 0) break;
                lVar21 = (longlong)(int)uStack_520;
                local_508 = local_508 + 0x20;
                plVar30 = (longlong *)(ulonglong)local_508;
                uStack_520 = uStack_520 + 1;
                plVar18 = (longlong *)(ulonglong)uStack_520;
                uStack_50c = uVar23;
                if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_520
                   ) goto LAB_1442398cf;
                uVar33 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar21 * 4 + 4);
              }
              uStack_51c = -uVar33 & uVar33;
              uVar28 = (ulonglong)uStack_51c * 2 + 1;
              lVar21 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_4b0.Key._4_4_ = (int)lVar21;
              uStack_50c = (local_508 - 1) + local_4b0.Key._4_4_;
              if ((int)uVar23 < (int)uStack_50c) {
                uStack_50c = uVar23;
              }
            }
LAB_1442398cf:
            uVar23 = *(uint *)(plVar31 + 5);
            uStack_504 = local_38c;
            iStack_500 = (int)plVar31[1] - *(int *)((longlong)plVar31 + 0x34);
            uVar33 = uVar23 & 0xffffffe0;
            TStack_440._padding_ = CONCAT44(uStack_51c,uStack_520);
            uStack_510 = 0xffffffff;
            TStack_440.CurrentBitIndex = uStack_50c;
            TStack_440.UnvisitedBitMask = 0xffffffff;
            iVar16 = (int)uVar23 >> 5;
            TStack_440._28_4_ = local_38c;
            TStack_440.BaseBitIndex = local_508;
            uStack_420 = CONCAT44(uStack_4fc,iStack_500);
            local_528 = plVar31;
            local_448 = plVar31;
            TStack_440.Array = local_518;
            if (((int)uVar23 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar13 = local_540;
            uVar7 = *(uint *)(plVar31 + 5);
            if (uVar23 != uVar7) {
              pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar31 + 2);
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar31[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar31[4];
              }
              uVar23 = -1 << ((byte)uVar23 & 0x1f) &
                       *(uint *)((pTVar29->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
              while (uVar23 == 0) {
                lVar21 = (longlong)iVar16;
                uVar33 = uVar33 + 0x20;
                iVar16 = iVar16 + 1;
                uVar23 = uVar7;
                if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                goto LAB_1442399f0;
                uVar23 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar21 * 4 + 4);
              }
              uVar28 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
              lVar21 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_4b0.Value._0_4_ = (int)lVar21;
              uVar23 = (uVar33 - 1) + (int)local_4b0.Value;
              if ((int)uVar7 < (int)uVar23) {
                uVar23 = uVar7;
              }
            }
LAB_1442399f0:
            while( true ) {
              plVar18 = local_448;
              if ((int)local_448[1] - *(int *)((longlong)local_448 + 0x34) != (int)uStack_420) {
                local_560[0] = 0;
                `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_560);
              }
              if (((TStack_440.CurrentBitIndex == uVar23) &&
                  (TStack_440.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar31 + 2))) &&
                 (FVar24 = local_548, pUVar32 = local_558, plVar18 == plVar31)) break;
              uVar33 = *(uint *)(*plVar18 + (longlong)TStack_440.CurrentBitIndex * 0xc);
              if ((uVar27 <= uVar33) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2a2,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)((longlong)pFVar13 + (ulonglong)(uVar33 >> 5) * 4) =
                   *(uint *)((longlong)pFVar13 + (ulonglong)(uVar33 >> 5) * 4) |
                   1 << (uVar33 & 0x1f);
              TStack_440.UnvisitedBitMask =
                   TStack_440.UnvisitedBitMask & ~TStack_440._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_440);
            }
          }
          uVar28 = (ulonglong)local_550 & 0xffffffff;
          FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)((longlong)FVar24 + 0xc)
          ;
        }
      }
      else {
        QueryPerformanceCounter(&local_4a0);
        uVar28 = (ulonglong)local_378.ArrayNum;
        local_530 = local_4a0;
        local_490 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378;
        if (local_378.AllocatorInstance.SecondaryData !=
            (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
          local_490 = local_378.AllocatorInstance.SecondaryData;
        }
        local_55c = local_378.ArrayNum;
        FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_378;
        if (local_378.AllocatorInstance.SecondaryData !=
            (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
          FVar24 = local_378.AllocatorInstance.SecondaryData;
        }
        local_490 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)
                    ((longlong)local_490 + uVar28 * 0xc);
        while( true ) {
          FVar34 = local_490;
          local_548 = FVar24;
          if (local_378.ArrayNum != (uint)uVar28) {
            local_564 = 0;
            `TCheckedPointerIterator<UNetObjectGridFilter::FCellAndTimestamp,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_564);
          }
          if (FVar24 == FVar34) break;
          local_498 = *(FCellCoord *)FVar24;
          iVar16 = TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<UNetObjectGridFilter::FCellCoord>
                             ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                               *)&pUVar32->Cells,local_498.Y + local_498.X * 0x17,&local_498);
          if (iVar16 == -1) {
            lVar21 = 0;
          }
          else {
            lVar21 = (longlong)iVar16 * 0x60 + *(longlong *)&pUVar32->Cells;
          }
          plVar18 = (longlong *)0x0;
          plVar31 = (longlong *)(lVar21 + 8);
          if (lVar21 == 0) {
            plVar31 = plVar18;
          }
          if (plVar31 == (longlong *)0x0) {
            FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)
                     ((longlong)FVar24 + 0xc);
            uVar28 = (ulonglong)local_55c;
            pUVar32 = local_558;
          }
          else {
            uVar27 = *(uint *)(plVar31 + 5);
            local_518 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar31 + 2);
            uStack_520 = 0;
            uStack_51c = 1;
            uStack_50c = uStack_520;
            local_508 = uStack_520;
            if (uVar27 != 0) {
              pTVar29 = local_518;
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar31[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar31[4];
              }
              uVar23 = *(uint *)(pTVar29->AllocatorInstance).InlineData;
              plVar30 = plVar18;
              while( true ) {
                uStack_520 = (uint)plVar18;
                local_508 = (uint)plVar30;
                if (uVar23 != 0) break;
                lVar21 = (longlong)(int)uStack_520;
                local_508 = local_508 + 0x20;
                plVar30 = (longlong *)(ulonglong)local_508;
                uStack_520 = uStack_520 + 1;
                plVar18 = (longlong *)(ulonglong)uStack_520;
                uStack_50c = uVar27;
                if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_520
                   ) goto LAB_14423928f;
                uVar23 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar21 * 4 + 4);
              }
              uStack_51c = -uVar23 & uVar23;
              uVar28 = (ulonglong)uStack_51c * 2 + 1;
              lVar21 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_4b8 = (int)lVar21;
              uStack_50c = (local_508 - 1) + local_4b8;
              if ((int)uVar27 < (int)uStack_50c) {
                uStack_50c = uVar27;
              }
            }
LAB_14423928f:
            uVar23 = *(uint *)(plVar31 + 5);
            uStack_504 = local_3ac;
            iStack_500 = (int)plVar31[1] - *(int *)((longlong)plVar31 + 0x34);
            uVar33 = uVar23 & 0xffffffe0;
            TStack_470._padding_ = CONCAT44(uStack_51c,uStack_520);
            uStack_510 = 0xffffffff;
            TStack_470.CurrentBitIndex = uStack_50c;
            TStack_470.UnvisitedBitMask = 0xffffffff;
            iVar16 = (int)uVar23 >> 5;
            TStack_470._28_4_ = local_3ac;
            TStack_470.BaseBitIndex = local_508;
            uStack_450 = CONCAT44(uStack_4fc,iStack_500);
            local_528 = plVar31;
            local_478 = plVar31;
            TStack_470.Array = local_518;
            if ((((int)uVar23 < 0) || ((int)uVar27 < (int)uVar23)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar27 = *(uint *)(plVar31 + 5);
            if (uVar23 != uVar27) {
              plVar18 = plVar31 + 2;
              if ((longlong *)plVar31[4] != (longlong *)0x0) {
                plVar18 = (longlong *)plVar31[4];
              }
              uVar23 = -1 << ((byte)uVar23 & 0x1f) &
                       *(uint *)((longlong)plVar18 + (longlong)iVar16 * 4);
              while (uVar23 == 0) {
                lVar21 = (longlong)iVar16;
                uVar33 = uVar33 + 0x20;
                iVar16 = iVar16 + 1;
                uVar23 = uVar27;
                if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                goto LAB_1442393a0;
                uVar23 = *(uint *)((longlong)plVar18 + lVar21 * 4 + 4);
              }
              uVar28 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
              lVar21 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_4b4 = (int)lVar21;
              uVar23 = local_4b4 + -1 + uVar33;
              if ((int)uVar27 < (int)uVar23) {
                uVar23 = uVar27;
              }
            }
LAB_1442393a0:
            while( true ) {
              plVar18 = local_478;
              if ((int)local_478[1] - *(int *)((longlong)local_478 + 0x34) != (int)uStack_450) {
                local_563 = 0;
                `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_563);
              }
              if (((TStack_470.CurrentBitIndex == uVar23) &&
                  (TStack_470.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar31 + 2))) &&
                 (plVar18 == plVar31)) break;
              uVar27 = *(uint *)(*plVar18 + (longlong)TStack_470.CurrentBitIndex * 0xc);
              uVar33 = 0;
              if ((int)uVar27 < (pFVar13->FilteringInfos).ArrayNum) {
                uVar33 = ~uVar27 >> 0x1f;
              }
              local_538[0] = uVar27;
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pUVar32 = local_558;
              pFVar9 = (pFVar13->FilteringInfos).DataPtr;
              uVar5 = pFVar9[(int)uVar27].Data[3];
              iVar16 = CONCAT22(uVar5,pFVar9[(int)uVar27].Data[2]);
              uVar33 = (iVar16 / 0x492 + ((int)(short)uVar5 >> 0xf)) - ((int)(short)uVar5 >> 0xf);
              uVar27 = 0;
              if ((int)uVar33 < (local_558->ObjectInfos).Chunks.Array.ArrayNum) {
                uVar27 = ~uVar33 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar35 = (pFVar13->View).Views.AllocatorInstance.SecondaryData;
              pdVar22 = (double *)
                        ((ulonglong)(iVar16 + uVar33 * -0x492) * 0x38 +
                        *(longlong *)
                         ((pUVar32->ObjectInfos).Chunks.Array.AllocatorInstance.Data +
                         (longlong)(int)uVar33 * 8));
              iVar16 = (pFVar13->View).Views.ArrayNum;
              if (FVar35 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
                FVar35 = (ForElementType<UE::Net::FReplicationView::FView>)&pFVar13->View;
              }
              pdVar25 = (double *)((longlong)FVar35 + 0x20);
              while( true ) {
                if ((pFVar13->View).Views.ArrayNum != iVar16) {
                  local_562 = 0;
                  `TCheckedPointerIterator<UE::Net::FReplicationView::FView,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(&local_562);
                }
                if (pdVar25 + -4 == (double *)((longlong)FVar35 + (longlong)iVar16 * 0x48))
                goto LAB_14423958a;
                if ((pdVar25[-1] - pdVar22[1]) * (pdVar25[-1] - pdVar22[1]) +
                    (pdVar25[-2] - *pdVar22) * (pdVar25[-2] - *pdVar22) +
                    (*pdVar25 - pdVar22[2]) * (*pdVar25 - pdVar22[2]) <=
                    (double)*(float *)((longlong)pdVar22 + 0x34)) break;
                pdVar25 = pdVar25 + 9;
              }
              local_418 = local_538;
              local_410 = (longlong)pdVar22 + 0x2c;
              TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_short_const_&>_>
                        ((TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
                          *)((longlong)local_550 + 400),&local_4b0,(bool *)&local_418);
LAB_14423958a:
              TStack_470.UnvisitedBitMask =
                   TStack_470.UnvisitedBitMask & ~TStack_470._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_470);
            }
            uVar28 = (ulonglong)local_55c;
            puVar2 = &(local_558->Stats).CullTestedObjects;
            *puVar2 = *puVar2 + ((int)plVar31[1] - *(int *)((longlong)plVar31 + 0x34));
            FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)
                     ((longlong)local_548 + 0xc);
            pUVar32 = local_558;
          }
        }
        QueryPerformanceCounter(&local_488);
        pTVar26 = (TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                   *)((longlong)local_550 + 400);
        (pUVar32->Stats).CullTestingTimeInCycles =
             (pUVar32->Stats).CullTestingTimeInCycles + (local_488.QuadPart - (longlong)local_530);
        TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_3f8,
                   (TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
                    *)pTVar26);
        pFVar13 = local_540;
        stack0xfffffffffffffb18 = local_3f8._16_16_;
        local_4f8 = (longlong *)local_3f8._0_8_;
        auStack_4f0._0_8_ = local_3f8._8_8_;
        local_4c0 = 0;
        local_4d8 = local_3d8;
        pTStack_4d0 = pTStack_3d0;
        uVar28 = local_3f8._24_8_ >> 0x20;
        local_4c8 = pTVar26;
        if ((int)local_3f8._28_4_ < *(int *)(local_3f8._16_8_ + 0x18)) {
          uVar27 = uStack_400._4_4_;
          uVar23 = local_3f8._28_4_;
          do {
            sVar6 = *(short *)(*local_4f8 + 4 + (longlong)(int)uVar28 * 0x10);
            if (sVar6 == 0) {
              TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_4d0,uVar23);
              local_4c0 = CONCAT11(local_4c0._1_1_,1);
            }
            else {
              *(short *)(*local_4f8 + 4 + (longlong)(int)uVar23 * 0x10) = sVar6 + -1;
              uVar23 = *(uint *)(*local_4f8 + (longlong)(int)uVar23 * 0x10);
              if ((uVar27 <= uVar23) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < BitCount",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x2a2,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)((longlong)pFVar13 + (ulonglong)(uVar23 >> 5) * 4) =
                   *(uint *)((longlong)pFVar13 + (ulonglong)(uVar23 >> 5) * 4) |
                   1 << (uVar23 & 0x1f);
            }
            uStack_4e0 = uStack_4e0 & ~auStack_4f0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_4f0);
            uVar28 = (ulonglong)uStack_4dc;
            uVar23 = uStack_4dc;
          } while ((int)uStack_4dc < *(int *)(auStack_4f0._8_8_ + 0x18));
          if (((char)local_4c0 != '\0') && (local_4c0._1_1_ != '\0')) {
            uVar27 = *(int *)((local_4c8->AllocatorInstance).InlineData + 8) -
                     *(int *)((local_4c8->AllocatorInstance).InlineData + 0x34);
            if (uVar27 < 4) {
              iVar16 = 1;
            }
            else {
              uVar28 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
              lVar21 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar16 = 1 << ((byte)lVar21 & 0x1f);
            }
            if (((0 < (int)uVar27) &&
                (*(int *)((local_4c8->AllocatorInstance).InlineData + 0x48) < iVar16)) ||
               (iVar16 < *(int *)((local_4c8->AllocatorInstance).InlineData + 0x48))) {
              *(int *)((local_4c8->AllocatorInstance).InlineData + 0x48) = iVar16;
              TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
              ::Rehash((TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
                        *)local_4c8);
            }
          }
        }
      }
      if (local_378.AllocatorInstance.SecondaryData !=
          (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
        FMemory::Free((void *)local_378.AllocatorInstance.SecondaryData);
      }
      if (local_1e8.SecondaryData != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
        FMemory::Free((void *)local_1e8.SecondaryData);
      }
      if (bVar36) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_388.Timestamp = local_558->FrameIndex;
    if (((local_558->Config).Object == (UObject *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pUVar8 = (pUVar32->Config).Object;
    dVar4 = *(double *)((longlong)FVar35 + 0x10);
    fVar3 = *(float *)&pUVar8[1].field_0x8;
    if ((pUVar8 == (UObject *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_388.Cell.X = (int)((longlong)ROUND((dVar4 + dVar4) / (double)fVar3 - dVar12) >> 1);
    local_388.Cell.Y =
         (int)((longlong)
               ROUND((*(double *)((longlong)FVar35 + 0x18) + *(double *)((longlong)FVar35 + 0x18)) /
                     (double)*(float *)&(pUVar32->Config).Object[1].field_0xc - dVar12) >> 1);
    TArray<UNetObjectGridFilter::FCellAndTimestamp,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
    ::AddUniqueImpl<UNetObjectGridFilter::FCellAndTimestamp_const_&>(&local_378,&local_388);
    iVar19 = local_60;
    FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      FVar24 = local_1e8.SecondaryData;
    }
    FVar34 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)
             ((longlong)FVar24 + (longlong)local_60 * 0xc);
    while( true ) {
      if (local_60 != iVar19) {
        local_566 = 0;
        `TCheckedPointerIterator<UNetObjectGridFilter::FCellAndTimestamp,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_566);
      }
      if (FVar24 == FVar34) goto LAB_144238e5b;
      if (*(int *)FVar24 == local_388.Cell.X && *(int *)((longlong)FVar24 + 4) == local_388.Cell.Y)
      break;
      FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)((longlong)FVar24 + 0xc);
    }
    FVar34 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      FVar34 = local_1e8.SecondaryData;
    }
    lVar21 = ((longlong)FVar24 - (longlong)FVar34) / 6 +
             ((longlong)FVar24 - (longlong)FVar34 >> 0x3f);
    uVar23 = (int)(lVar21 >> 1) - (int)(lVar21 >> 0x3f);
    uVar27 = 0;
    if ((int)uVar23 < local_60) {
      uVar27 = ~uVar23 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar24 = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
      FVar24 = local_1e8.SecondaryData;
    }
    iVar19 = (local_60 - uVar23) + -1;
    if (1 < iVar19) {
      iVar19 = 1;
    }
    if (iVar19 != 0) {
      memmove((int *)((longlong)FVar24 + (longlong)(int)uVar23 * 0xc),
              (int *)((longlong)FVar24 + (longlong)(local_60 - iVar19) * 0xc),(longlong)iVar19 * 0xc
             );
    }
    local_60 = local_60 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
              (0xc,4,&local_1e8,local_60,&local_5c);
LAB_144238e5b:
    FVar35 = (ForElementType<UE::Net::FReplicationView::FView>)((longlong)FVar35 + 0x48);
  } while( true );
}

// FreeObjectInfo @ 14423abc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UNetObjectGridFilter::FreeObjectInfo(UNetObjectGridFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FPerObjectInfo *pFVar10;
  int local_60;
  int iStack_5c;
  
  pFVar1 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedObjectInfoIndices).BitCount <= param_1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = _UNK_150b85a98;
  uVar8 = ___xmm_ffffffff00000000ffffffff00000000;
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) & ~(1 << (param_1 & 0x1f));
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pFVar10 = TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
            operator[](&this->ObjectInfos,param_1);
  local_60 = (int)uVar8;
  iStack_5c = (int)((ulonglong)uVar8 >> 0x20);
  (pFVar10->Position).field0_0x0._s_0.X = (double)uVar5;
  (pFVar10->Position).field0_0x0._s_0.Y = (double)uVar6;
  *(undefined4 *)((longlong)&(pFVar10->Position).field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(pFVar10->Position).field0_0x0 + 0x14) = uVar7;
  (pFVar10->CellBox).MinX = local_60;
  (pFVar10->CellBox).MaxX = iStack_5c;
  uVar8 = _UNK_150b85a98;
  _UNK_150b85a98 = (undefined4)uVar3;
  _UNK_150b85a9c = SUB84(uVar3,4);
  uVar4 = _UNK_150b85a9c;
  (pFVar10->CellBox).MinY = _UNK_150b85a98;
  _UNK_150b85a98 = uVar8;
  (pFVar10->CellBox).MaxY = uVar4;
  pFVar10->ObjectIndex = 0;
  pFVar10->FrameCountBeforeCulling = 0;
  *(undefined2 *)&pFVar10->field_0x2e = 0;
  pFVar10->CullDistance = 0.0;
  pFVar10->CullDistanceSq = 0.0;
  return;
}

// GetFrameCountBeforeCulling @ 14423c5a0

ushort __thiscall
UNetObjectGridFilter::GetFrameCountBeforeCulling(UNetObjectGridFilter *this,FName param_1)

{
  FName *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  FName *pFVar6;
  FName *local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  if (((this->Config).Object == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  pUVar2 = (this->Config).Object;
  uVar5 = *(ushort *)&pUVar2[1].field_0x4;
  if (local_res10 != (FName)0x0) {
    if ((pUVar2 == (UObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    pUVar2 = (this->Config).Object;
    pFVar6 = *(FName **)&pUVar2[1].field_0x18;
    pFVar1 = (FName *)((longlong)pFVar6 + (longlong)*(int *)&pUVar2[1].field_0x20 * 0xc);
    for (; pFVar6 != pFVar1; pFVar6 = (FName *)&pFVar6[1].Number) {
      if (*pFVar6 == local_res10) {
        return (ushort)pFVar6[1].ComparisonIndex.Value;
      }
    }
    local_res8 = &local_res10;
    `UNetObjectGridFilter::GetFrameCountBeforeCulling'::__l2::<lambda_1>::operator()(&local_res8);
  }
  return uVar5;
}

// GetPrivateStaticClass @ 14423e420

UClass * __cdecl UNetObjectGridFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectGridFilter",
               &Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectGridFilter,0x198,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectGridFilter>,
               InternalVTableHelperCtorCaller<UNetObjectGridFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectGridFilter.InnerSingleton;
}

// OnDeinit @ 144245be0

void __thiscall UNetObjectGridFilter::OnDeinit(UNetObjectGridFilter *this)

{
  TStrongObjectPtr<UNetObjectGridFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TMap<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>_>
  *this_00;
  int iVar4;
  bool bVar5;
  undefined8 local_18 [2];
  
  pTVar1 = &this->Config;
  if (pTVar1 != (TStrongObjectPtr<UNetObjectGridFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)local_18) {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)0x0;
  }
  DestructItems<UNetObjectGridFilter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->PerConnectionInfos).AllocatorInstance.Data,
             (this->PerConnectionInfos).ArrayNum);
  piVar2 = &(this->PerConnectionInfos).ArrayMax;
  (this->PerConnectionInfos).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1e0,8,0,&(this->PerConnectionInfos).AllocatorInstance,0,piVar2);
  }
  TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->ObjectInfos).Chunks,0);
  (this->ObjectInfos).NumElements = 0;
  (this->AssignedObjectInfoIndices).BitCount = 0;
  piVar2 = &(this->AssignedObjectInfoIndices).Storage.ArrayMax;
  (this->AssignedObjectInfoIndices).Storage.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->AssignedObjectInfoIndices,0,piVar2);
  }
  this_00 = &this->Cells;
  bVar5 = 1 < *(int *)&(this->Cells).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->Cells).field_0x8);
  puVar3 = &(this->Cells).field_0xc;
  *(undefined4 *)&(this->Cells).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->Cells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cells).field_0x34 = 0;
  iVar4 = *(int *)&(this->Cells).field_0x2c;
  *(undefined4 *)&(this->Cells).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->Cells).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Cells).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->Cells).field_0x48 = 1;
    TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// OnInit @ 144245ef0

void __thiscall
UNetObjectGridFilter::OnInit(UNetObjectGridFilter *this,FNetObjectFilterInitParams *param_1)

{
  TStrongObjectPtr<UNetObjectGridFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int *piVar2;
  UObjectBase *this_00;
  UObject *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this_00 = (UObjectBase *)param_1->Config;
  if (this_00 == (UObjectBase *)0x0) {
    pFVar10 = GetTypeName<UNetObjectGridFilterConfig>(&local_40);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar8 = UNetObjectGridFilterConfig::StaticClass();
  pUVar9 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  iVar12 = (int)pUVar8->_padding_;
  if (((int)pUVar9->_padding_ < iVar12) ||
     ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar12 * 8) != &pUVar8->_padding_))
  {
    pFVar10 = GetTypeName<UNetObjectGridFilterConfig>(&local_30);
    pwVar11 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UNetObjectFilterConfig>
                        (&local_20,(UNetObjectFilterConfig *)this_00);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar13);
  }
  UObjectBase::AddRef(this_00);
  pTVar1 = &this->Config;
  if (pTVar1 == (TStrongObjectPtr<UNetObjectGridFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_48) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)this_00;
  }
  if (pTVar1->Object == (UObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Config.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\NetObjectGridFilter.cpp"
                       ,0x14,L"Need config to operate.");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Net::FNetBitArray::Init(&this->AssignedObjectInfoIndices,param_1->CurrentMaxInternalIndex);
  piVar2 = &(this->PerConnectionInfos).ArrayNum;
  iVar12 = *piVar2;
  uVar14 = param_1->MaxConnectionCount + 1;
  if (iVar12 < (int)uVar14) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1e0,8,uVar14 - iVar12,&(this->PerConnectionInfos).AllocatorInstance,piVar2,
                       &(this->PerConnectionInfos).ArrayMax);
    DefaultConstructItems<UNetObjectGridFilter::FPerConnectionInfo,int>
              ((this->PerConnectionInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x1e0,
               uVar14 - iVar12);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar12) {
      iVar12 = iVar12 - uVar14;
      if (iVar12 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (iVar12 == 0) goto LAB_144246092;
      TArray<UNetObjectGridFilter::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&this->PerConnectionInfos,uVar14,iVar12);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1e0,8,&(this->PerConnectionInfos).AllocatorInstance,*piVar2,
                 &(this->PerConnectionInfos).ArrayMax);
    }
  }
LAB_144246092:
  pUVar9 = Z_Construct_UClass_UWorldLocationsConfig_NoRegister();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  pUVar3 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
  dVar5 = *(double *)&pUVar3[1].field_0x8;
  (this->MinWorldPos).field0_0x0._s_0.X = *(double *)(pUVar3 + 1);
  (this->MinWorldPos).field0_0x0._s_0.Y = dVar5;
  (this->MinWorldPos).field0_0x0._s_0.Z = *(double *)&pUVar3[1].field_0x10;
  pUVar9 = Z_Construct_UClass_UWorldLocationsConfig_NoRegister();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  pUVar3 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
  dVar5 = *(double *)&pUVar3[1].field_0x20;
  (this->MaxWorldPos).field0_0x0._s_0.X = *(double *)&pUVar3[1].field_0x18;
  (this->MaxWorldPos).field0_0x0._s_0.Y = dVar5;
  (this->MaxWorldPos).field0_0x0._s_0.Z = *(double *)(pUVar3 + 2);
  pUVar9 = Z_Construct_UClass_UWorldLocationsConfig_NoRegister();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  this->MaxNetCullDistance =
       *(float *)&(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x8;
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246a80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNetObjectGridFilter::OnMaxInternalNetRefIndexIncreased(UNetObjectGridFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  (this->AssignedObjectInfoIndices).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->AssignedObjectInfoIndices).Storage,param_1 + 0x1f >> 5,No);
  uVar2 = (this->AssignedObjectInfoIndices).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data +
             (longlong)(this->AssignedObjectInfoIndices).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  return;
}

// OnObjectRemoved @ 144246c30

void __thiscall UNetObjectGridFilter::OnObjectRemoved(UNetObjectGridFilter *this,uint param_1)

{
  return;
}

// PostFilter @ 144246ff0

void __thiscall
UNetObjectGridFilter::PostFilter(UNetObjectGridFilter *this,FNetObjectPostFilteringParams *param_1)

{
  if (!__CsvProfilerStat263) {
    FCsvProfilerTrace::OutputInlineStat("CullTestingTimeInMS",_GCsvCategory_Iris.Index);
    __CsvProfilerStat263 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("CullTestingTimeInMS",_GCsvCategory_Iris.Index,
             (double)(this->Stats).CullTestingTimeInCycles * FGenericPlatformTime::SecondsPerCycle64
             * __real_408f400000000000,Set);
  if (__CsvProfilerStat264 == false) {
    FCsvProfilerTrace::OutputInlineStat("CullTestedObjectsCount",_GCsvCategory_Iris.Index);
    __CsvProfilerStat264 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("CullTestedObjectsCount",_GCsvCategory_Iris.Index,(this->Stats).CullTestedObjects,Set);
  return;
}

// PreFilter @ 144247360

void __thiscall
UNetObjectGridFilter::PreFilter(UNetObjectGridFilter *this,FNetObjectPreFilteringParams *param_1)

{
  this->FrameIndex = this->FrameIndex + 1;
  (this->Stats).CullTestingTimeInCycles = 0;
  *(undefined8 *)&(this->Stats).CullTestedObjects = 0;
  return;
}

// PrintDebugInfoForObject @ 144248470

FString * __thiscall
UNetObjectGridFilter::PrintDebugInfoForObject
          (UNetObjectGridFilter *this,FString *__return_storage_ptr__,FDebugInfoParams *param_1,
          uint param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  FNetObjectFilteringInfo *pFVar6;
  FString *pFVar7;
  uint uVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<UE::Net::FReplicationView::FView> FVar11;
  double *pdVar12;
  TVector<double> *this_00;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  double dVar15;
  uint uVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  FString local_68 [4];
  
  pFVar6 = TArrayView<FNetObjectFilteringInfo_const_,int>::operator[]
                     (&param_1->FilteringInfos,param_2);
  iVar1 = *(int *)(pFVar6->Data + 2);
  uVar5 = iVar1 / 0x492;
  uVar8 = 0;
  if ((int)uVar5 < (this->ObjectInfos).Chunks.Array.ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  uVar8 = param_1->ConnectionId;
  this_00 = (TVector<double> *)
            ((longlong)(iVar1 % 0x492) * 0x38 +
            *(longlong *)
             ((this->ObjectInfos).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar5 * 8));
  if ((-1 < (int)uVar8) && ((int)uVar8 < (this->PerConnectionInfos).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar8 < (this->PerConnectionInfos).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    pFVar13 = (this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x1e0;
    if ((pFVar13 != (FScriptContainerElement *)0x0) &&
       (*(int *)(pFVar13 + 0x198) != *(int *)(pFVar13 + 0x1c4))) {
      pFVar10 = *(FScriptContainerElement **)(pFVar13 + 0x1d0);
      if (*(FScriptContainerElement **)(pFVar13 + 0x1d0) == (FScriptContainerElement *)0x0) {
        pFVar10 = pFVar13 + 0x1c8;
      }
      uVar5 = *(uint *)(pFVar10 + (ulonglong)(*(int *)(pFVar13 + 0x1d8) - 1U & param_2) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar5 * 0x10 + *(longlong *)(pFVar13 + 400));
          if (*puVar9 == param_2) break;
          uVar5 = puVar9[2];
        } while (uVar5 != 0xffffffff);
      }
    }
  }
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  FVar11 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  iVar1 = (param_1->View).Views.ArrayNum;
  uVar14 = (uint)__real_47eff933c78cdfad;
  uVar18 = (uint)((ulonglong)__real_47eff933c78cdfad >> 0x20);
  if (FVar11 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar11 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  pdVar12 = (double *)((longlong)FVar11 + 0x18);
  uVar21 = uVar14;
  uVar22 = uVar18;
  while( true ) {
    if ((param_1->View).Views.ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Net::FReplicationView::FView_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pdVar12 + -3 == (double *)((longlong)FVar11 + (longlong)iVar1 * 0x48)) break;
    dVar3 = pdVar12[-1] - (this_00->field0_0x0)._s_0.X;
    dVar15 = *pdVar12 - (this_00->field0_0x0)._s_0.Y;
    auVar16._0_8_ = dVar15 * dVar15;
    auVar16._8_8_ = 0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar3 * dVar3 + auVar16._0_8_;
    auVar17 = sqrtpd(auVar16,auVar17);
    dVar3 = (this_00->field0_0x0)._s_0.Z - pdVar12[1];
    dVar15 = auVar17._0_8_;
    if ((double)CONCAT44(uVar18,uVar14) <= dVar15) {
      dVar15 = (double)CONCAT44(uVar18,uVar14);
    }
    pdVar12 = pdVar12 + 9;
    uVar19 = SUB84(dVar3,0) & uVar5;
    uVar20 = (uint)((ulonglong)dVar3 >> 0x20) & uVar8;
    if ((double)CONCAT44(uVar22,uVar21) <= (double)CONCAT44(uVar20,uVar19)) {
      uVar19 = uVar21;
      uVar20 = uVar22;
    }
    uVar14 = SUB84(dVar15,0);
    uVar18 = (uint)((ulonglong)dVar15 >> 0x20);
    uVar21 = uVar19;
    uVar22 = uVar20;
  }
  UE::Math::TVector<double>::ToCompactString(this_00,local_68);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"[GridFilter] Dist2D: %.2f, CullDistance: %.2f, CulledFrameCount: %u, DistZ: %.2f, Pos: %s"
            );
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RemoveCellInfoForObject @ 14424d940

void __thiscall
UNetObjectGridFilter::RemoveCellInfoForObject
          (UNetObjectGridFilter *this,FObjectLocationInfo *param_1)

{
  FCellBox FVar1;
  uint uVar2;
  int iVar3;
  FPerObjectInfo *pFVar4;
  longlong lVar5;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  FCellCoord local_res10;
  int local_res18;
  int iStackX_1c;
  int iStack_40;
  
  pFVar4 = TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
           operator[](&this->ObjectInfos,*(int *)&param_1->field_0x4);
  FVar1 = pFVar4->CellBox;
  uVar9 = FVar1._0_8_;
  uVar2 = pFVar4->ObjectIndex;
  iVar10 = FVar1.MaxX + 1;
  if (FVar1.MinX < iVar10) {
    iStack_40 = FVar1.MinY;
    iVar7 = FVar1.MaxY + 1;
    do {
      iVar8 = (int)uVar9;
      if (iStack_40 < iVar7) {
        iVar6 = iStack_40;
        local_res18 = iVar8;
        do {
          local_res10.X = local_res18;
          iStackX_1c = iVar6;
          local_res10.Y = iVar6;
          iVar3 = TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UNetObjectGridFilter::FCellCoord>
                            ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                              *)&this->Cells,iVar8 * 0x17 + iVar6,&local_res10);
          if (iVar3 != -1) {
            lVar5 = (longlong)iVar3 * 0x60 + *(longlong *)&this->Cells;
            this_00 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                      (lVar5 + 8);
            if (lVar5 == 0) {
              this_00 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                        0x0;
            }
            if ((this_00 !=
                 (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)0x0) &&
               (local_res10.X = uVar2,
               *(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34)) {
              TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
              RemoveImpl<unsigned_int>(this_00,uVar2,(uint *)&local_res10);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
    } while ((int)(iVar8 + 1U) < iVar10);
  }
  return;
}

// RemoveConnection @ 14424dec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNetObjectGridFilter::RemoveConnection(UNetObjectGridFilter *this,uint param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [400];
  ForAnyElementType local_78;
  undefined8 uStack_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_208._384_8_ = (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0;
  local_208._392_4_ = 0;
  local_208._396_4_ = 0x20;
  uStack_40 = 0;
  uVar5 = 0;
  if ((int)param_1 < (this->PerConnectionInfos).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  uStack_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_68.AllocatorInstance.InlineData[4] = '\0';
  local_68.AllocatorInstance.InlineData[5] = '\0';
  local_68.AllocatorInstance.InlineData[6] = '\0';
  local_68.AllocatorInstance.InlineData[7] = '\0';
  local_68.AllocatorInstance.InlineData[8] = '\0';
  local_68.AllocatorInstance.InlineData[9] = '\0';
  local_68.AllocatorInstance.InlineData[10] = '\0';
  local_68.AllocatorInstance.InlineData[0xb] = '\0';
  local_68.AllocatorInstance.InlineData[0xc] = '\0';
  local_68.AllocatorInstance.InlineData[0xd] = '\0';
  local_68.AllocatorInstance.InlineData[0xe] = '\0';
  local_68.AllocatorInstance.InlineData[0xf] = '\0';
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPerConnectionInfo::operator=
            ((FPerConnectionInfo *)
             ((this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x1e0),
             (FPerConnectionInfo *)local_208);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_78,0,(int *)((longlong)&uStack_70 + 4));
  }
  iVar3 = local_68.MaxBits;
  local_48 = 0xffffffff;
  local_68._24_8_ = (ulonglong)(uint)local_68.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if ((ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)local_208._384_8_ !=
      (ForElementType<UNetObjectGridFilter::FCellAndTimestamp>)0x0) {
    FMemory::Free((void *)local_208._384_8_);
  }
  return;
}

// RemoveObject @ 14424f2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNetObjectGridFilter::RemoveObject
          (UNetObjectGridFilter *this,uint param_1,FNetObjectFilteringInfo *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FPerObjectInfo *pFVar11;
  longlong lVar12;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  FNetObjectFilteringInfo *local_res18;
  uint local_res20 [2];
  FCellCoord local_c8;
  FCellBox local_c0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  pFVar19 = (this->PerConnectionInfos).AllocatorInstance.Data;
  iVar1 = (this->PerConnectionInfos).ArrayNum;
  uVar20 = (ulonglong)(int)param_1;
  pFVar15 = pFVar19 + 0x1c4;
  pFVar18 = pFVar19 + (longlong)iVar1 * 0x1e0;
  local_res10 = param_1;
  local_res18 = param_2;
  do {
    while( true ) {
      if ((this->PerConnectionInfos).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UNetObjectGridFilter::FPerConnectionInfo,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar19 == pFVar18) {
        pFVar11 = TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
                  ::operator[](&this->ObjectInfos,*(int *)(param_2->Data + 2));
        local_c0 = pFVar11->CellBox;
        uVar17 = local_c0._0_8_;
        iVar1 = local_c0.MaxY;
        uVar2 = pFVar11->ObjectIndex;
        iVar9 = local_c0.MaxX + 1;
        if (local_c0.MinX < iVar9) {
          do {
            iVar16 = (int)uVar17;
            param_2 = local_res18;
            for (iVar14 = local_c0.MinY; local_res18 = param_2, iVar14 < iVar1 + 1;
                iVar14 = iVar14 + 1) {
              local_c8.Y = iVar14;
              local_c8.X = iVar16;
              iVar10 = TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<UNetObjectGridFilter::FCellCoord>
                                 ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                                   *)&this->Cells,iVar16 * 0x17 + iVar14,&local_c8);
              if (iVar10 != -1) {
                lVar12 = (longlong)iVar10 * 0x60 + *(longlong *)&this->Cells;
                this_00 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *
                          )(lVar12 + 8);
                if (lVar12 == 0) {
                  this_00 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                             *)0x0;
                }
                if ((this_00 !=
                     (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)0x0)
                   && (local_res20[0] = uVar2,
                      *(int *)&(this_00->Elements).field_0x8 !=
                      *(int *)&(this_00->Elements).field_0x34)) {
                  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
                  RemoveImpl<unsigned_int>(this_00,uVar2,local_res20);
                }
              }
              param_2 = local_res18;
            }
            uVar17 = (ulonglong)(iVar16 + 1U);
          } while ((int)(iVar16 + 1U) < iVar9);
          uVar20 = (ulonglong)local_res10;
        }
        (**(code **)(this->_padding_ + 800))(this,uVar20 & 0xffffffff);
        uVar2 = *(uint *)(param_2->Data + 2);
        pFVar15 = (this->AssignedObjectInfoIndices).Storage.AllocatorInstance.Data;
        if (((this->AssignedObjectInfoIndices).BitCount <= uVar2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2b7,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_88 = 0;
        local_98 = ___xmm_ffffffff00000000ffffffff00000000;
        uStack_90 = _UNK_150b85a98;
        *(uint *)(pFVar15 + (ulonglong)(uVar2 >> 5) * 4) =
             *(uint *)(pFVar15 + (ulonglong)(uVar2 >> 5) * 4) & ~(1 << (uVar2 & 0x1f));
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        pFVar11 = TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>
                  ::operator[](&this->ObjectInfos,uVar2);
        (pFVar11->Position).field0_0x0._s_0.X = (double)uVar4;
        (pFVar11->Position).field0_0x0._s_0.Y = (double)uVar5;
        *(undefined4 *)((longlong)&(pFVar11->Position).field0_0x0 + 0x10) = uVar6;
        *(undefined4 *)((longlong)&(pFVar11->Position).field0_0x0 + 0x14) = uVar7;
        (pFVar11->CellBox).MinX = (int)local_98;
        (pFVar11->CellBox).MaxX = local_98._4_4_;
        (pFVar11->CellBox).MinY = (undefined4)uStack_90;
        (pFVar11->CellBox).MaxY = uStack_90._4_4_;
        pFVar11->ObjectIndex = (undefined4)local_88;
        pFVar11->FrameCountBeforeCulling = local_88._4_2_;
        *(undefined2 *)&pFVar11->field_0x2e = local_88._6_2_;
        pFVar11->CullDistance = 0.0;
        pFVar11->CullDistanceSq = 0.0;
        return;
      }
      if (*(int *)(pFVar15 + -0x2c) != *(int *)pFVar15) break;
LAB_14424f38e:
      pFVar19 = pFVar19 + 0x1e0;
      pFVar15 = pFVar15 + 0x1e0;
    }
    pFVar13 = *(FScriptContainerElement **)(pFVar15 + 0xc);
    if (pFVar13 == (FScriptContainerElement *)0x0) {
      pFVar13 = pFVar15 + 4;
    }
    iVar9 = *(int *)(pFVar13 + ((longlong)*(int *)(pFVar15 + 0x14) - 1U & uVar20) * 4);
    if (iVar9 == -1) goto LAB_14424f38e;
    do {
      if (*(uint *)(*(longlong *)(pFVar15 + -0x34) + (longlong)iVar9 * 0x10) == param_1) {
        TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<unsigned_int,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_short,0>,FDefaultSetAllocator>
                         *)(pFVar15 + -0x34),iVar9);
        goto LAB_14424f38e;
      }
      iVar9 = *(int *)(*(longlong *)(pFVar15 + -0x34) + 8 + (longlong)iVar9 * 0x10);
    } while (iVar9 != -1);
    pFVar19 = pFVar19 + 0x1e0;
    pFVar15 = pFVar15 + 0x1e0;
  } while( true );
}

// StaticRegisterNativesUNetObjectGridFilter @ 144254920

void __cdecl UNetObjectGridFilter::StaticRegisterNativesUNetObjectGridFilter(void)

{
  return;
}

// UpdateCellInfoForObject @ 144256640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNetObjectGridFilter::UpdateCellInfoForObject
          (UNetObjectGridFilter *this,FObjectLocationInfo *param_1,
          FReplicationInstanceProtocol *param_2)

{
  TMap<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>_>
  *pTVar1;
  uint uVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  FCellCoord FVar11;
  FCellCoord FVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  FPerObjectInfo *pFVar18;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  UNetObjectGridFilter *local_res8;
  uint local_res10;
  uint local_b0 [2];
  uint local_a8;
  int iStack_a4;
  FCellCoord local_a0;
  FCellBox local_98;
  uint local_88;
  int iStack_84;
  uint local_80;
  int iStack_7c;
  uint local_78 [2];
  FCellCoord local_70;
  FPerObjectInfo *local_68;
  
  local_res8 = this;
  pFVar18 = TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::
            operator[](&this->ObjectInfos,*(int *)&param_1->field_0x4);
  local_68 = pFVar18;
  (**(code **)(this->_padding_ + 0x310))(this,pFVar18,param_1,param_2);
  uVar6 = (pFVar18->CellBox).MinX;
  uVar7 = (pFVar18->CellBox).MaxX;
  iVar8 = (pFVar18->CellBox).MinY;
  iVar9 = (pFVar18->CellBox).MaxY;
  local_98.MinX = ___xmm_ffffffff00000000ffffffff00000000;
  local_98.MaxX = _UNK_150b85a94;
  local_98.MinY = _UNK_150b85a98;
  local_98.MaxY = _UNK_150b85a9c;
  CalculateCellBox(this,pFVar18,&local_98);
  uVar15 = local_98._8_8_;
  uVar13 = local_98._0_8_;
  iVar21 = local_98.MaxY;
  iVar23 = local_98.MinY;
  iVar17 = local_98.MaxX;
  iVar20 = local_98.MinX;
  local_res10 = local_98.MinX;
  if ((local_98.MaxX != uVar7 || (local_98.MaxY != iVar9 || local_98.MinY != iVar8)) ||
      local_98.MinX != uVar6) {
    uVar2 = pFVar18->ObjectIndex;
    bVar5 = iVar9 < local_98.MinY;
    bVar4 = local_98.MaxY < iVar8;
    (pFVar18->CellBox).MinX = local_98.MinX;
    (pFVar18->CellBox).MaxX = local_98.MaxX;
    (pFVar18->CellBox).MinY = local_98.MinY;
    (pFVar18->CellBox).MaxY = local_98.MaxY;
    uVar30 = uVar7 + 1;
    local_98.MaxY = iVar21;
    local_98.MinX = iVar20;
    local_a8 = iVar9;
    local_88 = iVar8;
    local_78[0] = uVar2;
    if (((int)uVar7 < iVar20 || (bVar5 || bVar4)) || iVar17 < (int)uVar6) {
      local_98.MinY = iVar23;
      local_98.MaxX = iVar17;
      if ((int)uVar6 < (int)uVar30) {
        uVar28 = iVar8;
        uVar22 = uVar6;
        do {
          local_80 = uVar22;
          if ((int)uVar28 < iVar9 + 1) {
            pTVar1 = &this->Cells;
            iVar20 = uVar28;
            local_b0[0] = uVar2;
            do {
              local_a0.Y = iVar20;
              local_a0.X = local_80;
              iStack_7c = iVar20;
              iVar17 = TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<UNetObjectGridFilter::FCellCoord>
                                 ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                                   *)pTVar1,uVar22 * 0x17 + iVar20,&local_a0);
              pTVar19 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                        0x0;
              if (iVar17 != -1) {
                pTVar19 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *
                          )((longlong)iVar17 * 0x60 + *(longlong *)&pTVar1->field_0x0);
              }
              pTVar27 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                        &(pTVar19->Elements).field_0x8;
              if (pTVar19 ==
                  (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)0x0) {
                pTVar27 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *
                          )0x0;
              }
              if (*(int *)&(pTVar27->Elements).field_0x8 != *(int *)&(pTVar27->Elements).field_0x34)
              {
                TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
                RemoveImpl<unsigned_int>(pTVar27,uVar2,local_b0);
              }
              iVar20 = iVar20 + 1;
              this = local_res8;
              uVar28 = local_88;
            } while (iVar20 < iVar9 + 1);
          }
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < (int)uVar30);
      }
      iVar20 = local_98.MaxX + 1;
      if (local_98.MinX < iVar20) {
        iVar17 = local_98.MaxY + 1;
        iVar23 = local_98.MinY;
        local_a8 = local_98.MinX;
        do {
          pFVar18 = local_68;
          if (iVar23 < iVar17) {
            pTVar1 = &this->Cells;
            do {
              uVar16 = local_98._8_8_;
              uVar14 = local_98._0_8_;
              local_98.MinX = (int)uVar13;
              local_98.MaxX = SUB84(uVar13,4);
              (this->DebugUpdateCellInfo).NewCellBox.MinX = local_98.MinX;
              (this->DebugUpdateCellInfo).NewCellBox.MaxX = local_98.MaxX;
              local_98.MinY = (int)uVar15;
              local_98.MaxY = SUB84(uVar15,4);
              (this->DebugUpdateCellInfo).NewCellBox.MinY = local_98.MinY;
              (this->DebugUpdateCellInfo).NewCellBox.MaxY = local_98.MaxY;
              FVar11.Y = iVar23;
              FVar11.X = local_a8;
              (this->DebugUpdateCellInfo).Coord = FVar11;
              (this->DebugUpdateCellInfo).PrevCellBox.MinX = uVar6;
              (this->DebugUpdateCellInfo).PrevCellBox.MaxX = uVar7;
              (this->DebugUpdateCellInfo).PrevCellBox.MinY = iVar8;
              (this->DebugUpdateCellInfo).PrevCellBox.MaxY = iVar9;
              iVar21 = *(int *)&(this->Cells).field_0x8;
              (this->DebugUpdateCellInfo).CellsSize =
                   (longlong)(iVar21 - *(int *)&(this->Cells).field_0x34);
              dVar10 = (pFVar18->Position).field0_0x0._s_0.Y;
              (this->DebugUpdateCellInfo).ObjectPosition.field0_0x0._s_0.X =
                   (pFVar18->Position).field0_0x0._s_0.X;
              (this->DebugUpdateCellInfo).ObjectPosition.field0_0x0._s_0.Y = dVar10;
              (this->DebugUpdateCellInfo).ObjectPosition.field0_0x0._s_0.Z =
                   (pFVar18->Position).field0_0x0._s_0.Z;
              uVar30 = local_a8 * 0x17 + iVar23;
              (this->DebugUpdateCellInfo).ObjectCullDistance = pFVar18->CullDistance;
              iStack_a4 = iVar23;
              local_98._0_8_ = uVar14;
              local_98._8_8_ = uVar16;
              if (iVar21 != *(int *)&(this->Cells).field_0x34) {
                puVar3 = *(undefined1 **)&(this->Cells).field_0x40;
                puVar25 = &(this->Cells).field_0x38;
                if (puVar3 != (undefined1 *)0x0) {
                  puVar25 = puVar3;
                }
                iVar21 = *(int *)(puVar25 +
                                 (ulonglong)(*(int *)&(this->Cells).field_0x48 - 1U & uVar30) * 4);
                if (iVar21 != -1) {
                  do {
                    puVar26 = (undefined8 *)
                              ((longlong)iVar21 * 0x60 + *(longlong *)&pTVar1->field_0x0);
                    if ((uint)*puVar26 == local_a8 && (int)((ulonglong)*puVar26 >> 0x20) == iVar23)
                    {
                      if (puVar26 != (undefined8 *)0x0) goto LAB_144256996;
                      break;
                    }
                    iVar21 = *(int *)(puVar26 + 0xb);
                  } while (iVar21 != -1);
                }
              }
              local_a0 = (FCellCoord)&local_a8;
              TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&>_>
                        ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                          *)pTVar1,(uint)&local_res8,
                         (TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&> *)
                         (ulonglong)uVar30,(bool *)&local_a0);
              puVar26 = (undefined8 *)
                        ((longlong)(int)local_res8 * 0x60 + *(longlong *)&pTVar1->field_0x0);
LAB_144256996:
              TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
              Emplace<unsigned_int_const_&>
                        ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                         (puVar26 + 1),&local_80,(bool *)local_78);
              iVar23 = iVar23 + 1;
            } while (iVar23 < iVar17);
            iVar23 = local_98.MinY;
            local_a8 = local_res10;
          }
          local_a8 = local_a8 + 1;
          local_res10 = local_a8;
        } while ((int)local_a8 < iVar20);
      }
    }
    else {
      uVar28 = uVar6;
      if ((int)uVar6 < iVar20) {
        uVar28 = iVar20;
      }
      uVar22 = uVar7;
      if (iVar17 < (int)uVar7) {
        uVar22 = iVar17;
      }
      iVar20 = iVar8;
      if (iVar8 < iVar23) {
        iVar20 = iVar23;
      }
      iVar17 = iVar9;
      if (iVar21 < iVar9) {
        iVar17 = iVar21;
      }
      local_res8 = (UNetObjectGridFilter *)CONCAT44(local_res8._4_4_,iVar17);
      local_b0[0] = uVar30;
      local_80 = uVar22;
      if ((int)uVar6 < (int)uVar30) {
        iVar23 = iVar9 + 1;
        uVar29 = iVar8;
        uVar24 = uVar6;
        do {
          local_a0.X = uVar24;
          if ((int)uVar29 < iVar23) {
            bVar4 = (int)uVar22 < (int)uVar24;
            iVar21 = uVar29;
            do {
              local_a0.Y = iVar21;
              if (iVar17 < iVar21 || (iVar21 < iVar20 || (bVar4 || (int)uVar24 < (int)uVar28))) {
                local_70 = local_a0;
                iVar17 = TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<UNetObjectGridFilter::FCellCoord>
                                   ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                                     *)&this->Cells,iVar21 + uVar24 * 0x17,&local_70);
                pTVar19 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *
                          )0x0;
                if (iVar17 != -1) {
                  pTVar19 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                             *)((longlong)iVar17 * 0x60 + *(longlong *)&this->Cells);
                }
                local_70.X = uVar2;
                pTVar27 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *
                          )&(pTVar19->Elements).field_0x8;
                if (pTVar19 ==
                    (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)0x0)
                {
                  pTVar27 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                             *)0x0;
                }
                if (*(int *)&(pTVar27->Elements).field_0x8 !=
                    *(int *)&(pTVar27->Elements).field_0x34) {
                  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
                  RemoveImpl<unsigned_int>(pTVar27,uVar2,(uint *)&local_70);
                }
                iVar17 = (int)local_res8;
              }
              iVar21 = iVar21 + 1;
              iVar23 = local_a8 + 1;
              uVar29 = local_88;
              uVar30 = local_b0[0];
              uVar22 = local_80;
            } while (iVar21 < iVar23);
          }
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < (int)uVar30);
      }
      uVar30 = local_98.MaxX + 1;
      if (local_98.MinX < (int)uVar30) {
        iVar23 = local_98.MaxY + 1;
        local_88 = local_98.MinX;
        local_a8 = uVar30;
        do {
          uVar2 = local_88;
          uVar29 = local_88;
          for (iVar21 = local_98.MinY; iVar21 < iVar23; iVar21 = iVar21 + 1) {
            if (iVar17 < iVar21 ||
                (iVar21 < iVar20 || ((int)uVar22 < (int)uVar29 || (int)uVar29 < (int)uVar28))) {
              FVar12.Y = iVar21;
              FVar12.X = local_88;
              pTVar1 = &this->Cells;
              (this->DebugUpdateCellInfo).Coord = FVar12;
              local_98.MinX = (int)uVar13;
              local_98.MaxX = SUB84(uVar13,4);
              (this->DebugUpdateCellInfo).NewCellBox.MinX = local_98.MinX;
              (this->DebugUpdateCellInfo).NewCellBox.MaxX = local_98.MaxX;
              local_98.MinY = (int)uVar15;
              local_98.MaxY = SUB84(uVar15,4);
              (this->DebugUpdateCellInfo).NewCellBox.MinY = local_98.MinY;
              (this->DebugUpdateCellInfo).NewCellBox.MaxY = local_98.MaxY;
              (this->DebugUpdateCellInfo).PrevCellBox.MinX = uVar6;
              (this->DebugUpdateCellInfo).PrevCellBox.MaxX = uVar7;
              (this->DebugUpdateCellInfo).PrevCellBox.MinY = iVar8;
              (this->DebugUpdateCellInfo).PrevCellBox.MaxY = iVar9;
              iVar17 = *(int *)&(this->Cells).field_0x8;
              (this->DebugUpdateCellInfo).CellsSize =
                   (longlong)(iVar17 - *(int *)&(this->Cells).field_0x34);
              dVar10 = (local_68->Position).field0_0x0._s_0.Y;
              uVar30 = uVar29 * 0x17 + iVar21;
              (this->DebugUpdateCellInfo).ObjectPosition.field0_0x0._s_0.X =
                   (local_68->Position).field0_0x0._s_0.X;
              (this->DebugUpdateCellInfo).ObjectPosition.field0_0x0._s_0.Y = dVar10;
              (this->DebugUpdateCellInfo).ObjectPosition.field0_0x0._s_0.Z =
                   (local_68->Position).field0_0x0._s_0.Z;
              (this->DebugUpdateCellInfo).ObjectCullDistance = local_68->CullDistance;
              iStack_84 = iVar21;
              if (iVar17 != *(int *)&(this->Cells).field_0x34) {
                puVar3 = *(undefined1 **)&(this->Cells).field_0x40;
                puVar25 = &(this->Cells).field_0x38;
                if (puVar3 != (undefined1 *)0x0) {
                  puVar25 = puVar3;
                }
                iVar17 = *(int *)(puVar25 +
                                 (ulonglong)(*(int *)&(this->Cells).field_0x48 - 1U & uVar30) * 4);
                if (iVar17 != -1) {
                  do {
                    puVar26 = (undefined8 *)
                              ((longlong)iVar17 * 0x60 + *(longlong *)&pTVar1->field_0x0);
                    if ((uint)*puVar26 == uVar29 && (int)((ulonglong)*puVar26 >> 0x20) == iVar21) {
                      if (puVar26 != (undefined8 *)0x0) goto LAB_144256c66;
                      break;
                    }
                    iVar17 = *(int *)(puVar26 + 0xb);
                  } while (iVar17 != -1);
                }
              }
              local_a0 = (FCellCoord)&local_88;
              TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&>_>
                        ((TSet<TTuple<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects>,TDefaultMapHashableKeyFuncs<UNetObjectGridFilter::FCellCoord,UNetObjectGridFilter::FCellObjects,0>,FDefaultSetAllocator>
                          *)pTVar1,(uint)&local_80,
                         (TKeyInitializer<UNetObjectGridFilter::FCellCoord_const_&> *)
                         (ulonglong)uVar30,(bool *)&local_a0);
              puVar26 = (undefined8 *)
                        ((longlong)(int)local_80 * 0x60 + *(longlong *)&pTVar1->field_0x0);
LAB_144256c66:
              TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
              Emplace<unsigned_int_const_&>
                        ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                         (puVar26 + 1),(uint *)&local_70,(bool *)local_78);
              iVar17 = (int)local_res8;
              uVar29 = local_88;
            }
            uVar2 = local_res10;
            uVar30 = local_a8;
          }
          local_88 = uVar2 + 1;
          local_res10 = local_88;
        } while ((int)local_88 < (int)uVar30);
      }
    }
  }
  return;
}

// UpdateObjectInfo @ 14425a5f0

void __thiscall
UNetObjectGridFilter::UpdateObjectInfo
          (UNetObjectGridFilter *this,FPerObjectInfo *param_1,FObjectLocationInfo *param_2,
          FReplicationInstanceProtocol *param_3)

{
  return;
}

// UpdatePositionAndCullDistance @ 14425b970

void __thiscall
UNetObjectGridFilter::UpdatePositionAndCullDistance
          (UNetObjectGridFilter *this,FObjectLocationInfo *param_1,FPerObjectInfo *param_2,
          FReplicationInstanceProtocol *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014425b97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x310))(this,param_2,param_1);
  return;
}

// operator() @ 1504b34c0

bool __thiscall `UNetObjectGridFilter::CalculateCellBox'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7308372876938182159>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x40),&local_18,
               *(uint *)(*(longlong *)((longlong)this + 8) + 0x28));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7308372876938182159>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b3533;
    }
  }
  bVar2 = false;
LAB_1504b3533:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b3570

bool __thiscall
`UNetObjectGridFilter::GetFrameCountBeforeCulling'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7308372876938182588>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7308372876938182588>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b35d7;
    }
  }
  bVar2 = false;
LAB_1504b35d7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

