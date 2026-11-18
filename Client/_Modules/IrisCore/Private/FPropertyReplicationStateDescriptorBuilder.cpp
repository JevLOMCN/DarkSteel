// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 58

// FPropertyReplicationStateDescriptorBuilder @ 1441f8dd0

FPropertyReplicationStateDescriptorBuilder * __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
FPropertyReplicationStateDescriptorBuilder(FPropertyReplicationStateDescriptorBuilder *this)

{
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->Members).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Members).ArrayNum = 0;
  (this->Members).ArrayMax = 0;
  (this->Functions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Functions).ArrayNum = 0;
  (this->Functions).ArrayMax = 0;
  (this->StructInfo).SizeAndAlignment.Size = 0;
  (this->StructInfo).SizeAndAlignment.Alignment = 0;
  (this->StructInfo).Struct = (UStruct *)0x0;
  (this->StructInfo).SerializerType = Struct;
  return this;
}

// ~FPropertyReplicationStateDescriptorBuilder @ 1441f9df0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
~FPropertyReplicationStateDescriptorBuilder(FPropertyReplicationStateDescriptorBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Functions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Members).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddMemberProperty @ 1441fb400

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::AddMemberProperty
          (FPropertyReplicationStateDescriptorBuilder *this,FMemberProperty *param_1)

{
  int *piVar1;
  FMemberProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UFunction *pUVar5;
  _func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
  *p_Var6;
  undefined8 uVar7;
  ulong64 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  
  pFVar2 = (FMemberProperty *)(this->Members).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Members).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar10 = (this->Members).ArrayNum;
  piVar1 = &(this->Members).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x848,&(this->Members).AllocatorInstance,piVar1);
  }
  lVar11 = (longlong)iVar10;
  (this->Members).ArrayNum = iVar10 + 1;
  pUVar5 = param_1->PropertyRepNotifyFunction;
  pFVar3 = (this->Members).AllocatorInstance.Data;
  *(FProperty **)(pFVar3 + lVar11 * 0x48) = param_1->Property;
  *(UFunction **)(pFVar3 + lVar11 * 0x48 + 8) = pUVar5;
  p_Var6 = param_1->CreateAndRegisterReplicationFragmentFunction;
  *(FPropertyNetSerializerInfo **)(pFVar3 + lVar11 * 0x48 + 0x10) = param_1->SerializerInfo;
  *(_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
    **)(pFVar3 + lVar11 * 0x48 + 0x10 + 8) = p_Var6;
  uVar7 = *(undefined8 *)&param_1->ChangeMaskBits;
  *(undefined8 *)(pFVar3 + lVar11 * 0x48 + 0x20) = *(undefined8 *)&param_1->Traits;
  *(undefined8 *)(pFVar3 + lVar11 * 0x48 + 0x20 + 8) = uVar7;
  uVar8 = (param_1->ExternalSizeAndAlignment).Size;
  *(undefined8 *)(pFVar3 + lVar11 * 0x48 + 0x30) =
       *(undefined8 *)&(param_1->ChangeMaskGroupName).Number;
  *(ulong64 *)(pFVar3 + lVar11 * 0x48 + 0x30 + 8) = uVar8;
  *(ulong64 *)(pFVar3 + lVar11 * 0x48 + 0x40) = (param_1->ExternalSizeAndAlignment).Alignment;
  return;
}

// AddSerializerConfigMemoryBlockToLayout @ 1441fb640

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::AddSerializerConfigMemoryBlockToLayout
          (FPropertyReplicationStateDescriptorBuilder *this,FLayout *param_1,FOffsetAndSize *param_2
          ,TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,TSizedDefaultAllocator<32>_>
           *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  undefined1 local_res10 [8];
  
  iVar2 = param_3->ArrayNum;
  pFVar5 = (param_3->AllocatorInstance).Data;
  uVar6 = 0xffffffffffffffff;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    if (((byte)pFVar5[0x40] & 1) == 0) {
      if (uVar6 == 0xffffffffffffffff) {
        uVar6 = ~(*(longlong *)(pFVar5 + 0x38) - 1U) &
                *(longlong *)(pFVar5 + 0x38) + (param_1->CurrentOffset - 1);
      }
      uVar3 = *(ulonglong *)(pFVar5 + 0x38);
      param_1->CurrentOffset =
           (~(uVar3 - 1) & (param_1->CurrentOffset - 1) + uVar3) + *(longlong *)(pFVar5 + 0x30);
      uVar4 = param_1->MaxAlignment;
      if (param_1->MaxAlignment < uVar3) {
        uVar4 = uVar3;
      }
      param_1->MaxAlignment = uVar4;
    }
    pFVar5 = pFVar5 + 0x48;
  }
  if (uVar6 == 0xffffffffffffffff) {
    uVar6 = param_1->CurrentOffset;
  }
  param_2->Offset = uVar6;
  param_2->Size = param_1->CurrentOffset - uVar6;
  return;
}

// AllocateAndInitializeDefaultInternalStateBuffer @ 1441fba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
AllocateAndInitializeDefaultInternalStateBuffer
          (FPropertyReplicationStateDescriptorBuilder *this,uchar *param_1,
          FReplicationStateDescriptor *param_2,UReplicationSystem *param_3,uchar **param_4)

{
  FReplicationStateMemberDescriptor *pFVar1;
  FProperty **ppFVar2;
  uchar *puVar3;
  uchar *puVar4;
  FInternalNetSerializationContext *pFVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FProperty **ppFVar8;
  ushort *puVar9;
  ulonglong uVar10;
  undefined1 auStack_458 [32];
  uchar *local_438;
  uchar **local_430;
  UReplicationSystem *local_428;
  FObjectReferenceCache *pFStack_420;
  FNetTokenStoreState *local_418;
  undefined8 uStack_410;
  ulonglong local_408;
  UIrisObjectReferencePackageMap *pUStack_400;
  ulonglong local_3f8;
  undefined1 local_3f0 [32];
  uchar *local_3d0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  UReplicationSystem **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_458;
  local_430 = param_4;
  local_438 = param_1;
  puVar4 = FMemory::MallocZeroed((ulonglong)param_2->InternalSize,(uint)param_2->InternalAlignment);
  puVar7 = local_3a0;
  local_3b8 = 0;
  local_3b0 = 0;
  lVar6 = 0x20;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  local_58 = local_58 & 0xfffffffc;
  local_3f8 = local_3f8 & 0xfffffffffffffff8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (UReplicationSystem **)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0xffffffff;
  local_418 = (FNetTokenStoreState *)0x0;
  uStack_410 = 0xffffffff00000000;
  local_408 = local_408 & 0xffffffffffffff00;
  pUStack_400 = (UIrisObjectReferencePackageMap *)0x0;
  local_428 = (UReplicationSystem *)0x0;
  pFStack_420 = (FObjectReferenceCache *)0x0;
  if (param_3 == (UReplicationSystem *)0x0) {
    pUStack_400 = GetOrCreateIrisObjectReferencePackageMap();
  }
  else {
    pFVar5 = FInternalNetSerializationContext::FInternalNetSerializationContext
                       ((FInternalNetSerializationContext *)local_3f0,param_3);
    local_428 = pFVar5->ReplicationSystem;
    pFStack_420 = pFVar5->ObjectReferenceCache;
    local_418 = (pFVar5->ResolveContext).RemoteNetTokenStoreState;
    uStack_410._0_4_ = (pFVar5->ResolveContext).ConnectionId;
    uStack_410._4_4_ = (pFVar5->ResolveContext).AsyncLoadingPriority;
    local_408 = *(ulonglong *)&(pFVar5->ResolveContext).bForceSyncLoad;
    pUStack_400 = pFVar5->PackageMap;
    local_3f8 = *(ulonglong *)&pFVar5->field_0x30;
  }
  puVar3 = local_438;
  local_58 = local_58 | 2;
  local_88 = &local_428;
  pFVar1 = param_2->MemberDescriptors;
  ppFVar2 = param_2->MemberProperties;
  if (param_2->MemberCount != 0) {
    puVar9 = &param_2->MemberPropertyDescriptors->ArrayIndex;
    lVar6 = (longlong)param_2->MemberSerializerDescriptors -
            (longlong)param_2->MemberPropertyDescriptors;
    uVar10 = (ulonglong)param_2->MemberCount;
    ppFVar8 = ppFVar2;
    do {
      local_3f0._8_8_ = (FObjectReferenceCache *)0x0;
      local_3f0._16_4_ = 0;
      local_3f0._0_8_ = *(undefined8 *)(lVar6 + (longlong)puVar9);
      local_3f0._24_8_ =
           puVar3 + (longlong)(*ppFVar8)->Offset_Internal +
                    (longlong)(int)((uint)*puVar9 * (*ppFVar8)->ElementSize);
      local_3d0 = puVar4 + *(uint *)((longlong)pFVar1 + (4 - (longlong)ppFVar2) + (longlong)ppFVar8)
      ;
      (**(code **)(*(longlong *)(lVar6 + -8 + (longlong)puVar9) + 0x28))(&local_3b8,local_3f0);
      ppFVar8 = ppFVar8 + 1;
      puVar9 = puVar9 + 8;
      uVar10 = uVar10 - 1;
      param_4 = local_430;
    } while (uVar10 != 0);
  }
  *param_4 = puVar4;
  return;
}

// Build @ 1441fc380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001441fc53f) */
/* WARNING: Removing unreachable block (ram,0x0001441fc555) */
/* WARNING: Removing unreachable block (ram,0x0001441fc583) */
/* WARNING: Removing unreachable block (ram,0x0001441fc5b0) */
/* WARNING: Removing unreachable block (ram,0x0001441fc61e) */
/* WARNING: Removing unreachable block (ram,0x0001441fc5db) */
/* WARNING: Removing unreachable block (ram,0x0001441fc5fe) */
/* WARNING: Removing unreachable block (ram,0x0001441fc645) */
/* WARNING: Removing unreachable block (ram,0x0001441fc719) */
/* WARNING: Removing unreachable block (ram,0x0001441fc746) */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::Build
          (FPropertyReplicationStateDescriptorBuilder *this,FString *param_1,
          FReplicationStateDescriptorRegistry *param_2,FBuildParameters *param_3)

{
  FNetSerializerConfig *pFVar1;
  FNetSerializerConfig *pFVar2;
  UStruct *this_00;
  undefined8 *puVar3;
  code *pcVar4;
  FReplicationStateDescriptorRegistry *pFVar5;
  bool bVar6;
  ushort uVar7;
  EReplicationStateMemberTraits EVar8;
  EReplicationStateTraits EVar9;
  uint uVar10;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar11;
  FReplicationStateDescriptor *pFVar12;
  size_t sVar13;
  FNetDebugName *pFVar14;
  ulonglong uVar15;
  FNetSerializer *pFVar16;
  UScriptStruct *pUVar17;
  UClass *pUVar18;
  UFunction *pUVar19;
  UPackage *pUVar20;
  FProperty *pFVar21;
  longlong *plVar22;
  void *pvVar23;
  longlong lVar24;
  ushort uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  FScriptContainerElement *pFVar30;
  FReplicationStateMemberTagDescriptor *pFVar31;
  ForAnyElementType FVar32;
  ushort uVar33;
  longlong lVar34;
  ulong64 uVar35;
  FReplicationStateMemberSerializerDescriptor *pFVar36;
  FReplicationStateMemberTraitsDescriptor *pFVar37;
  FReplicationStateMemberFunctionDescriptor *pFVar38;
  FProperty **ppFVar39;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar40;
  FScriptContainerElement *pFVar41;
  FReplicationStateDescriptor *pFVar42;
  uint uVar43;
  int iVar44;
  longlong lVar45;
  FReplicationStateMemberDescriptor *pFVar46;
  FReplicationStateMemberSerializerDescriptor *pFVar47;
  FReplicationStateMemberTraitsDescriptor *pFVar48;
  FReplicationStateMemberFunctionDescriptor *pFVar49;
  FProperty **ppFVar50;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar51;
  longlong *plVar52;
  ulong64 uVar53;
  FMemberFunctionCacheEntry *pFVar54;
  FReplicationStateMemberPropertyDescriptor *pFVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  longlong *in_stack_00000028;
  undefined1 auStackY_c48 [32];
  undefined1 local_c08;
  undefined1 local_c07;
  undefined1 local_c06;
  undefined1 local_c05;
  undefined1 local_c04;
  undefined1 local_c03;
  undefined1 local_c02;
  undefined1 local_c01;
  undefined1 local_c00;
  undefined1 local_bff;
  undefined1 local_bfe [6];
  FReplicationStateDescriptor *local_bf8;
  FReplicationStateMemberDescriptor *local_bf0;
  FScriptContainerElement *local_be8;
  FReplicationStateMemberPropertyDescriptor *local_be0;
  ulonglong local_bd8;
  FString local_bd0;
  FReplicationStateDescriptor *local_bc0;
  FScriptContainerElement *local_bb8;
  FString local_bb0;
  FBuilderContext local_b98;
  FReplicationStateDescriptor *local_af8;
  FReplicationStateDescriptor *local_af0;
  FName local_ae8;
  FReplicationStateDescriptorRegistry *local_ae0;
  FReplicationStateMemberTagDescriptor *local_ad8;
  undefined8 local_ad0;
  ulonglong uStack_ac8;
  longlong *local_ac0;
  ulong64 local_ab8;
  FReplicationStateDescriptor *local_ab0;
  longlong local_aa8;
  undefined8 local_aa0;
  longlong local_a98;
  longlong local_a90;
  longlong local_a88;
  longlong lStack_a80;
  ulonglong local_a78;
  longlong local_a70;
  longlong local_a68;
  longlong local_a60;
  ulonglong local_a58;
  longlong local_a50;
  longlong local_a48;
  longlong local_a40;
  ulonglong local_a38;
  longlong local_a30;
  longlong local_a28;
  longlong lStack_a20;
  longlong local_a18;
  longlong lStack_a10;
  longlong local_a08;
  longlong lStack_a00;
  ulonglong local_9f8;
  longlong lStack_9f0;
  ulonglong local_9e8;
  longlong local_9e0;
  ulong64 local_9d8;
  longlong lStack_9d0;
  FReplicationStateDescriptor **local_9c8;
  FName local_9c0;
  FReplicationStateDescriptor **local_9b8;
  longlong local_9b0;
  undefined4 uStack_9a8;
  TStringBuilderBase<wchar_t> local_998;
  wchar_t local_978 [128];
  wchar_t local_878 [1040];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c48;
  uVar29 = 0;
  lVar45 = (longlong)(this->Members).ArrayNum;
  iVar26 = (this->Functions).ArrayNum;
  local_b98.BuildParams.ReplicationSystem = (UReplicationSystem *)in_stack_00000028[2];
  local_b98.BuildParams._24_8_ = in_stack_00000028[3];
  local_bb0.Data.ArrayNum = 1;
  local_bb0.Data.ArrayMax = 0;
  local_b98.External.Size = 0;
  local_b98.External.Alignment = 1;
  local_b98.bGeneratePropertyDescriptors = true;
  local_bb0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ac0 = in_stack_00000028;
  local_b98.MemberCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b98.Internal.Size = 0;
  local_b98.Internal.Alignment = 1;
  local_b98.BuildParams.PathName = (TStringBuilderBase<wchar_t> *)*in_stack_00000028;
  local_b98.BuildParams.DefaultStateSourceData = (uchar *)in_stack_00000028[1];
  local_b98.MemberCache.ArrayNum = 0;
  local_b98.MemberCache.ArrayMax = 0;
  local_b98.ReferenceCache.CacheEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b98.ReferenceCache.CacheEntries.ArrayNum = 0;
  local_b98.ReferenceCache.CacheEntries.ArrayMax = 0;
  local_b98.ReferenceCache.ReferenceCount = 0;
  local_b98.MemberTagCache.CacheEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b98.MemberTagCache.CacheEntries.ArrayNum = 0;
  local_b98.MemberTagCache.CacheEntries.ArrayMax = 0;
  local_b98.MemberTagCache.TagCount = 0;
  local_b98.MemberFunctionCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b98.MemberFunctionCache.ArrayNum = 0;
  local_b98.MemberFunctionCache.ArrayMax = 0;
  local_b98.CombinedPropertyTraits = None;
  local_b98.SharedPropertyTraits = None;
  local_ae0 = param_2;
  local_ab0 = (FReplicationStateDescriptor *)param_1;
  BuildMemberCache(this,&local_b98,(FReplicationStateDescriptorRegistry *)param_3);
  BuildMemberReferenceCache(this,&local_b98.ReferenceCache,&local_b98.MemberCache);
  BuildMemberTagCache(this,&local_b98.MemberTagCache,&local_b98.MemberCache);
  BuildMemberFunctionCache(this,&local_b98,(FReplicationStateDescriptorRegistry *)param_3);
  EVar9 = BuildReplicationStateTraits(this,&local_b98);
  local_a90 = lVar45 * 8;
  local_a28 = 0;
  lStack_a20 = 0;
  local_a88 = 0;
  lStack_a80 = 0;
  local_a18 = 0;
  lStack_a10 = 0;
  lVar34 = local_a90 + 200;
  local_a08 = 0;
  lStack_a00 = 0;
  local_9f8 = 0;
  lStack_9f0 = 0;
  local_9d8 = 0;
  lStack_9d0 = 0;
  local_bf0 = (FReplicationStateMemberDescriptor *)CONCAT44(local_bf0._4_4_,EVar9);
  local_aa8 = 0;
  local_aa0 = 200;
  local_a98 = 200;
  lVar24 = lVar34;
  if (local_b98.BuildParams.DescriptorType == Class) {
    lStack_a80 = lVar45 * 4;
    lVar24 = lVar34 + lStack_a80;
    local_a88 = lVar34;
  }
  local_a78 = lVar24 + 7U & 0xfffffffffffffff8;
  local_a70 = lVar45 * 0x10;
  local_a68 = local_a70 + local_a78;
  local_a60 = lVar45 * 2;
  local_a50 = (ulonglong)local_b98.MemberTagCache.TagCount * 0x10;
  local_a58 = local_a68 + local_a60 + 7 & 0xfffffffffffffff8;
  local_a48 = local_a50 + local_a58;
  local_a40 = (ulonglong)local_b98.ReferenceCache.ReferenceCount * 0xc;
  local_a30 = (longlong)iVar26 * 0x10;
  local_a38 = local_a40 + 7 + local_a48 & 0xfffffffffffffff8;
  lVar34 = local_a30 + local_a38;
  lVar24 = lVar34;
  if (local_b98.bGeneratePropertyDescriptors != false) {
    local_a18 = lVar34 + local_a90;
    lVar24 = local_a70 + local_a18;
    local_a28 = lVar34;
    lStack_a20 = local_a90;
    lStack_a10 = local_a70;
  }
  uStack_ac8 = 8;
  lVar34 = lVar24;
  if ((EVar9 >> 1 & 1) != 0) {
    lVar34 = lVar24 + lVar45;
    local_a08 = lVar24;
    lStack_a00 = lVar45;
  }
  if (((local_b98.BuildParams.DescriptorType == Class) ||
      (local_b98.BuildParams.DescriptorType == SingleProperty)) && (0 < (this->Members).ArrayNum)) {
    iVar26 = (this->Members).ArrayNum;
    pFVar41 = (this->Members).AllocatorInstance.Data;
    if ((iVar26 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
    }
    pFVar30 = pFVar41 + (longlong)iVar26 * 0x48;
    uVar33 = 0;
    uVar15 = 0;
    uVar28 = uVar29;
    for (; pFVar41 != pFVar30; pFVar41 = pFVar41 + 0x48) {
      uVar27 = uVar29;
      if ((uVar28 != 0) && (*(ulonglong *)pFVar41 == uVar28)) {
        uVar27 = (ulonglong)(ushort)((short)uVar15 + 1);
      }
      uVar28 = *(ulonglong *)pFVar41;
      uVar7 = (short)uVar27 + *(short *)(uVar28 + 0x40);
      if (uVar7 < uVar33) {
        uVar7 = uVar33;
      }
      uVar33 = uVar7;
      uVar15 = uVar27;
    }
    local_9f8 = lVar34 + 1U & 0xfffffffffffffffe;
    lStack_9f0 = (ulonglong)uVar33 * 2 + 2;
    lVar34 = lStack_9f0 + local_9f8;
  }
  iVar26 = local_b98.MemberCache.ArrayNum;
  uVar28 = (ulonglong)local_b98.MemberCache.ArrayNum;
  local_9e0 = lVar45 * 8;
  local_9e8 = lVar34 + 7U & 0xfffffffffffffff8;
  uVar29 = 8;
  uVar53 = 0xffffffffffffffff;
  uVar35 = local_9e0 + local_9e8;
  pFVar30 = local_b98.MemberCache.AllocatorInstance.Data + uVar28 * 0x48;
  pFVar41 = local_b98.MemberCache.AllocatorInstance.Data + 0x38;
  while( true ) {
    if ((int)uVar28 != iVar26) {
      local_c08 = 0;
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_c08);
      uVar28 = local_b98.MemberCache._8_8_ & 0xffffffff;
    }
    if (pFVar41 + -0x38 == pFVar30) break;
    if (((byte)pFVar41[8] & 1) == 0) {
      if (uVar53 == 0xffffffffffffffff) {
        uVar53 = (*(ulonglong *)pFVar41 - 1) + uVar35 & ~(*(ulonglong *)pFVar41 - 1);
      }
      uVar15 = *(ulonglong *)pFVar41;
      uVar35 = ((uVar35 - 1) + uVar15 & ~(uVar15 - 1)) + ((FSizeAndAlignment *)(pFVar41 + -8))->Size
      ;
      if (uVar29 < uVar15) {
        uVar29 = uVar15;
      }
    }
    pFVar41 = pFVar41 + 0x48;
  }
  local_9d8 = uVar53;
  if (uVar53 == 0xffffffffffffffff) {
    local_9d8 = uVar35;
  }
  lStack_9d0 = uVar35 - local_9d8;
  pFVar12 = FMemory::Malloc(uVar35,(uint)uVar29);
  local_bf8 = pFVar12;
  if (pFVar12 == (FReplicationStateDescriptor *)0x0) {
    local_ab0->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    pFVar12 = local_ab0;
    goto LAB_1441fd7eb;
  }
  memset(pFVar12,0,uVar35);
  pFVar42 = (FReplicationStateDescriptor *)((longlong)&pFVar12->MemberDescriptors + local_aa8);
  pFVar42->RefCount = (atomic<int>)0x0;
  local_bc0 = pFVar42;
  if ((pFVar42 != pFVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)Descriptor == (void*)Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                         ,0x709,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
    return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
  }
  pFVar5 = local_ae0;
  sVar13 = wcslen(*(wchar_t **)&local_ae0->RegisteredDescriptorsMap);
  pFVar14 = CreatePersistentNetDebugName
                      (*(wchar_t **)&pFVar5->RegisteredDescriptorsMap,(uint)sVar13);
  pFVar42->DebugName = pFVar14;
  pFVar42->Traits = (EReplicationStateTraits)local_bf0;
  if (local_b98.BuildParams.DescriptorType == Class) {
    uVar29 = local_b98.External.Size + 3 & 0xfffffffffffffffc;
    if ((uVar29 != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InternalStateOffset == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                           ,0x440,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
    }
    local_b98.External.Size = uVar29 + 4;
    uVar29 = 4;
    if (4 < local_b98.External.Alignment) {
      uVar29 = local_b98.External.Alignment;
    }
    local_b98.External.Alignment = uVar29;
    BuildMemberChangeMaskDescriptors
              (this,(FReplicationStateMemberChangeMaskDescriptor *)
                    ((longlong)&pFVar12->MemberDescriptors + local_a88),pFVar42,&local_b98);
  }
  local_bf0 = (FReplicationStateMemberDescriptor *)0x0;
  if (local_a90 != 0) {
    local_bf0 = (FReplicationStateMemberDescriptor *)
                ((longlong)&pFVar12->MemberDescriptors + local_a98);
  }
  iVar26 = (this->Members).ArrayNum;
  if (local_b98.BuildParams.DescriptorType - Struct < 2) {
    uVar29 = (this->StructInfo).SizeAndAlignment.Alignment;
    pFVar31 = (FReplicationStateMemberTagDescriptor *)(this->Members).AllocatorInstance.Data;
    uVar33 = 0;
    if (uVar29 < local_b98.External.Alignment) {
      uVar29 = local_b98.External.Alignment;
    }
    pFVar41 = local_b98.MemberCache.AllocatorInstance.Data + 0x28;
    local_ad8 = (FReplicationStateMemberTagDescriptor *)
                ((longlong)pFVar31 + (longlong)iVar26 * 0x48);
    local_be8 = (FScriptContainerElement *)0x0;
    uVar28 = local_b98.Internal.Alignment;
    local_bb8 = (FScriptContainerElement *)local_b98.Internal.Size;
    pFVar46 = local_bf0;
    while( true ) {
      local_bd8 = uVar28;
      if ((this->Members).ArrayNum != iVar26) {
        local_c06 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c06);
      }
      if (pFVar31 == local_ad8) break;
      pFVar30 = (FScriptContainerElement *)pFVar31->Tag;
      uVar10 = 0;
      uVar7 = 0;
      if (pFVar30 == local_be8) {
        uVar7 = uVar33 + 1;
      }
      uVar33 = uVar7;
      uVar15 = *(ulonglong *)(pFVar41 + -0x10);
      if (*(ulonglong *)(pFVar41 + -0x10) < uVar29) {
        uVar15 = uVar29;
      }
      if (pFVar30 != (FScriptContainerElement *)0x0) {
        uVar10 = (uint)uVar33 * *(int *)(pFVar30 + 0x34) + *(int *)(pFVar30 + 0x44);
      }
      pFVar46->ExternalMemberOffset = uVar10;
      uVar29 = *(ulonglong *)pFVar41;
      uVar27 = ((FSizeAndAlignment *)(pFVar41 + -8))->Size;
      uVar28 = uVar29;
      if (uVar29 < local_bd8) {
        uVar28 = local_bd8;
      }
      pFVar41 = pFVar41 + 0x48;
      pFVar31 = (FReplicationStateMemberTagDescriptor *)&pFVar31[4].MemberIndex;
      uVar29 = (ulonglong)(local_bb8 + (uVar29 - 1)) & ~(uVar29 - 1);
      pFVar46->InternalMemberOffset = (uint)uVar29;
      pFVar46 = pFVar46 + 1;
      local_bb8 = (FScriptContainerElement *)(uVar29 + uVar27);
      uVar29 = uVar15;
      local_be8 = pFVar30;
    }
    local_bc0->MemberDescriptors = local_bf0;
    local_bc0->MemberCount = (ushort)(this->Members).ArrayNum;
    if (uVar29 < local_b98.External.Alignment) {
      uVar29 = local_b98.External.Alignment;
    }
    local_b98.External.Size = local_b98.External.Size + (this->StructInfo).SizeAndAlignment.Size;
    local_b98.External.Alignment = uVar29;
    local_b98.Internal.Size = (ulong64)local_bb8;
    local_b98.Internal.Alignment = local_bd8;
  }
  else {
    pFVar41 = (this->Members).AllocatorInstance.Data;
    pFVar30 = local_b98.MemberCache.AllocatorInstance.Data + 0x10;
    local_bb8 = pFVar41 + (longlong)iVar26 * 0x48;
    local_bd8 = local_b98.External.Size;
    local_be8 = (FScriptContainerElement *)local_b98.Internal.Size;
    uVar35 = local_b98.External.Alignment;
    uVar53 = local_b98.Internal.Alignment;
    pFVar46 = local_bf0;
    while( true ) {
      if ((this->Members).ArrayNum != iVar26) {
        local_c07 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c07);
      }
      if (pFVar41 == local_bb8) break;
      uVar29 = *(ulonglong *)(pFVar30 + 8);
      lVar34 = *(longlong *)pFVar30;
      uVar28 = uVar29;
      if (uVar29 < uVar35) {
        uVar28 = uVar35;
      }
      local_bd8 = (local_bd8 - 1) + uVar29 & ~(uVar29 - 1);
      pFVar46->ExternalMemberOffset = (uint)local_bd8;
      uVar29 = *(ulonglong *)(pFVar30 + 0x18);
      local_bd8 = local_bd8 + lVar34;
      lVar34 = *(longlong *)(pFVar30 + 0x10);
      uVar15 = uVar29;
      if (uVar29 < uVar53) {
        uVar15 = uVar53;
      }
      pFVar30 = pFVar30 + 0x48;
      uVar29 = (ulonglong)(local_be8 + (uVar29 - 1)) & ~(uVar29 - 1);
      pFVar46->InternalMemberOffset = (uint)uVar29;
      pFVar46 = pFVar46 + 1;
      pFVar41 = pFVar41 + 0x48;
      local_be8 = (FScriptContainerElement *)(uVar29 + lVar34);
      uVar35 = uVar28;
      uVar53 = uVar15;
    }
    local_bc0->MemberDescriptors = local_bf0;
    local_bc0->MemberCount = (ushort)(this->Members).ArrayNum;
    local_b98.External.Size = local_bd8;
    local_b98.External.Alignment = uVar35;
    local_b98.Internal.Size = (ulong64)local_be8;
    local_b98.Internal.Alignment = uVar53;
  }
  pFVar42 = local_bc0;
  if (local_a70 != 0) {
    pFVar47 = (FReplicationStateMemberSerializerDescriptor *)
              ((longlong)&local_bf8->MemberDescriptors + local_a78);
    if ((local_bc0->MemberDescriptors == (FReplicationStateMemberDescriptor *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Descriptor->MemberDescriptors",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                           ,0x487,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
    }
    iVar26 = (this->Members).ArrayNum;
    pFVar30 = (this->Members).AllocatorInstance.Data;
    pFVar41 = pFVar30 + (longlong)iVar26 * 0x48;
    pFVar36 = pFVar47;
    while( true ) {
      if ((this->Members).ArrayNum != iVar26) {
        local_c05 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c05);
      }
      if (pFVar30 == pFVar41) break;
      pFVar16 = (FNetSerializer *)(**(code **)(**(longlong **)(pFVar30 + 0x10) + 0x10))();
      pFVar36->Serializer = pFVar16;
      pFVar36->SerializerConfig = (FNetSerializerConfig *)0x0;
      pFVar36 = pFVar36 + 1;
      pFVar30 = pFVar30 + 0x48;
    }
    pFVar42->MemberSerializerDescriptors = pFVar47;
  }
  if (local_a60 != 0) {
    pFVar30 = (this->Members).AllocatorInstance.Data;
    iVar26 = (this->Members).ArrayNum;
    pFVar48 = (FReplicationStateMemberTraitsDescriptor *)
              ((longlong)&local_bf8->MemberDescriptors + local_a68);
    pFVar41 = pFVar30 + 0x20;
    pFVar37 = pFVar48;
    while( true ) {
      if ((this->Members).ArrayNum != iVar26) {
        local_c04 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c04);
      }
      if (pFVar41 + -0x20 == pFVar30 + (longlong)iVar26 * 0x48) break;
      pFVar37->Traits =
           pFVar37->Traits |
           (EReplicationStateMemberTraits)(*(uint *)pFVar41 >> 5) & HasDynamicState;
      EVar8 = ((ushort)(*(uint *)pFVar41 >> 6) & 1) * 2 | pFVar37->Traits;
      pFVar37->Traits = EVar8;
      EVar8 = ((ushort)(*(uint *)pFVar41 >> 3) & 1) << 3 | EVar8;
      pFVar37->Traits = EVar8;
      EVar8 = ((ushort)(*(uint *)pFVar41 >> 0x12) & 1) << 4 | EVar8;
      pFVar37->Traits = EVar8;
      pFVar37->Traits = ((ushort)(*(uint *)pFVar41 >> 0x11) & 1) << 5 | EVar8;
      pFVar37 = pFVar37 + 1;
      pFVar41 = pFVar41 + 0x48;
    }
    pFVar42->MemberTraitsDescriptors = pFVar48;
  }
  if (local_a50 != 0) {
    pFVar31 = (FReplicationStateMemberTagDescriptor *)
              ((longlong)&local_bf8->MemberDescriptors + local_a58);
    local_af8 = pFVar42;
    local_ad8 = pFVar31;
    if ((pFVar42->MemberDescriptors == (FReplicationStateMemberDescriptor *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Descriptor->MemberDescriptors",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                           ,0x4ab,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
    }
    FVar32.Data = local_b98.MemberCache.AllocatorInstance.Data;
    iVar26 = local_b98.MemberTagCache.CacheEntries.ArrayNum;
    pFVar30 = local_b98.MemberTagCache.CacheEntries.AllocatorInstance.Data +
              (longlong)local_b98.MemberTagCache.CacheEntries.ArrayNum * 0x10;
    pFVar41 = local_b98.MemberTagCache.CacheEntries.AllocatorInstance.Data + 8;
    while( true ) {
      if (local_b98.MemberTagCache.CacheEntries.ArrayNum != iVar26) {
        local_c03 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberTagCacheEntry_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c03);
      }
      pFVar42 = local_bc0;
      if (pFVar41 + -8 == pFVar30) break;
      if (pFVar41[2] == (FScriptContainerElement)0x0) {
        pFVar31->Tag = *(ulong64 *)(pFVar41 + -8);
        pFVar31->MemberIndex = *(ushort *)pFVar41;
        pFVar31->InnerTagIndex = 0xffff;
        pFVar31 = pFVar31 + 1;
LAB_1441fcd76:
        pFVar41 = pFVar41 + 0x10;
      }
      else {
        uVar29 = 0;
        lVar34 = *(longlong *)(FVar32.Data + (ulonglong)*(ushort *)pFVar41 * 0x48 + 8);
        uVar33 = *(ushort *)(lVar34 + 0x80);
        if (uVar33 == 0) goto LAB_1441fcd76;
        do {
          pFVar31->Tag = *(ulong64 *)(*(longlong *)(lVar34 + 0x28) + uVar29 * 0x10);
          uVar7 = *(ushort *)pFVar41;
          pFVar31->InnerTagIndex = (ushort)uVar29;
          uVar25 = (ushort)uVar29 + 1;
          uVar29 = (ulonglong)uVar25;
          pFVar31->MemberIndex = uVar7;
          pFVar31 = pFVar31 + 1;
        } while (uVar25 != uVar33);
        pFVar41 = pFVar41 + 0x10;
      }
    }
    if (0xfffd < local_b98.MemberTagCache.TagCount) {
      local_9c8 = &local_af8;
      `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberTagDescriptors'::
      __l2::<lambda_1>::operator()(&local_9c8);
    }
    local_af8->MemberTagDescriptors = local_ad8;
    local_af8->TagCount = (ushort)local_b98.MemberTagCache.TagCount;
  }
  pFVar12 = local_bf8;
  if (local_a40 != 0) {
    BuildMemberReferenceDescriptors
              (this,(FReplicationStateMemberReferenceDescriptor *)
                    ((longlong)&local_bf8->MemberDescriptors + local_a48),pFVar42,&local_b98);
  }
  if (local_a30 != 0) {
    iVar26 = local_b98.MemberFunctionCache.ArrayNum;
    pFVar49 = (FReplicationStateMemberFunctionDescriptor *)
              ((longlong)&pFVar12->MemberDescriptors + local_a38);
    pFVar54 = (FMemberFunctionCacheEntry *)
              (local_b98.MemberFunctionCache.AllocatorInstance.Data +
              (longlong)local_b98.MemberFunctionCache.ArrayNum * 0x10);
    FVar32.Data = local_b98.MemberFunctionCache.AllocatorInstance.Data;
    pFVar38 = pFVar49;
    local_af0 = pFVar42;
    while( true ) {
      if (local_b98.MemberFunctionCache.ArrayNum != iVar26) {
        local_c02 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c02);
      }
      if ((FMemberFunctionCacheEntry *)FVar32.Data == pFVar54) break;
      pFVar38->Function = ((FMemberFunctionCacheEntry *)FVar32.Data)->Function;
      pFVar12 = (((FMemberFunctionCacheEntry *)FVar32.Data)->Descriptor).Reference;
      pFVar38->Descriptor = pFVar12;
      if ((pFVar12->Traits >> 3 & 1) != 0) {
        LOCK();
        pFVar12->RefCount = (atomic<int>)((int)pFVar12->RefCount + 1);
        UNLOCK();
      }
      pFVar38 = pFVar38 + 1;
      if (5 < (byte)LogIris._0_1_) {
        local_9c0 = (FName)((FMemberFunctionCacheEntry *)FVar32.Data)->Function->_padding_;
        ::FName::ToString(&local_9c0,&local_bb0);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_bb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bb0.Data.AllocatorInstance.Data);
        }
      }
      FVar32.Data = FVar32.Data + 0x10;
    }
    if (0xffff < local_b98.MemberFunctionCache.ArrayNum) {
      local_9b8 = &local_af0;
      `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberFunctionDescriptors'
      ::__l2::<lambda_1>::operator()(&local_9b8);
    }
    local_af0->FunctionCount = (ushort)local_b98.MemberFunctionCache.ArrayNum;
    local_af0->MemberFunctionDescriptors = pFVar49;
  }
  if (lStack_a20 != 0) {
    iVar26 = (this->Members).ArrayNum;
    pFVar30 = (this->Members).AllocatorInstance.Data;
    ppFVar50 = (FProperty **)((longlong)&local_bf8->MemberDescriptors + local_a28);
    pFVar41 = pFVar30 + (longlong)iVar26 * 0x48;
    ppFVar39 = ppFVar50;
    while( true ) {
      if ((this->Members).ArrayNum != iVar26) {
        local_c01 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c01);
      }
      if (pFVar30 == pFVar41) break;
      *ppFVar39 = *(FProperty **)pFVar30;
      ppFVar39 = ppFVar39 + 1;
      pFVar30 = pFVar30 + 0x48;
    }
    pFVar42->MemberProperties = ppFVar50;
  }
  if (lStack_a10 != 0) {
    iVar26 = (this->Members).ArrayNum;
    lVar34 = 0;
    pFVar55 = (FReplicationStateMemberPropertyDescriptor *)
              ((longlong)&local_bf8->MemberDescriptors + local_a18);
    uVar33 = 0;
    pFVar30 = (this->Members).AllocatorInstance.Data;
    pFVar41 = pFVar30 + (longlong)iVar26 * 0x48;
    local_be0 = pFVar55;
    while( true ) {
      if ((this->Members).ArrayNum != iVar26) {
        local_c00 = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c00);
      }
      if (pFVar30 == pFVar41) break;
      if ((lVar34 == 0) || (*(longlong *)pFVar30 != lVar34)) {
        uVar33 = 0;
      }
      else {
        uVar33 = uVar33 + 1;
      }
      lVar34 = *(longlong *)pFVar30;
      pFVar55->RepNotifyFunction = *(UFunction **)(pFVar30 + 8);
      pFVar55->ArrayIndex = uVar33;
      pFVar55 = pFVar55 + 1;
      pFVar30 = pFVar30 + 0x48;
    }
    local_bc0->MemberPropertyDescriptors = local_be0;
    pFVar42 = local_bc0;
  }
  if (lStack_a00 != 0) {
    iVar26 = (this->Members).ArrayNum;
    pFVar30 = (this->Members).AllocatorInstance.Data;
    pFVar51 = (FReplicationStateMemberLifetimeConditionDescriptor *)
              ((longlong)&local_bf8->MemberDescriptors + local_a08);
    pFVar41 = pFVar30 + (longlong)iVar26 * 0x48;
    pFVar40 = pFVar51;
    while( true ) {
      if ((this->Members).ArrayNum != iVar26) {
        local_bff = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_bff);
      }
      if (pFVar30 == pFVar41) break;
      pFVar40->Condition = (schar)pFVar30[0x24];
      pFVar40 = pFVar40 + 1;
      pFVar30 = pFVar30 + 0x48;
    }
    pFVar42->MemberLifetimeConditionDescriptors = pFVar51;
  }
  pFVar12 = local_bf8;
  if (lStack_9f0 != 0) {
    BuildMemberRepIndexToMemberDescriptors
              (this,(FReplicationStateMemberRepIndexToMemberIndexDescriptor *)
                    ((longlong)&local_bf8->MemberDescriptors + local_9f8),pFVar42);
  }
  plVar52 = local_ac0;
  if ((int)local_ac0[3] == 2) {
    pUVar17 = (UScriptStruct *)(this->StructInfo).Struct;
    if ((this->StructInfo).SerializerType == DerivedFromCustom) {
      pUVar17 = (UScriptStruct *)FindSuperStructWithCustomSerializer((UStruct *)pUVar17);
      if (pUVar17 == (UScriptStruct *)0x0) {
LAB_1441fd0b1:
        pUVar17 = (UScriptStruct *)0x0;
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6449277768747186327>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                           ,0x769,"BaseStruct != nullptr");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
        }
      }
      else {
        pUVar18 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar26 = (int)pUVar18->_padding_;
        if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar26) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar26 * 8) !=
            &pUVar18->_padding_)) goto LAB_1441fd0b1;
      }
      pFVar42->BaseStruct = pUVar17;
    }
    else {
      if (pUVar17 != (UScriptStruct *)0x0) {
        pUVar18 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar26 = (int)pUVar18->_padding_;
        if ((iVar26 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
            &pUVar18->_padding_)) {
          pFVar42->BaseStruct = pUVar17;
          goto LAB_1441fd149;
        }
      }
      pFVar42->BaseStruct = (UScriptStruct *)0x0;
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6449277768747186321>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                         ,0x76f,"Descriptor->BaseStruct");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
        return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
      }
    }
  }
LAB_1441fd149:
  if (local_9e0 != 0) {
    local_be0 = (FReplicationStateMemberPropertyDescriptor *)
                ((longlong)&pFVar12->MemberDescriptors + local_9e8);
    iVar26 = (this->Members).ArrayNum;
    pFVar30 = (this->Members).AllocatorInstance.Data;
    pFVar41 = pFVar30 + (longlong)iVar26 * 0x48;
    pFVar55 = local_be0;
    while( true ) {
      if ((this->Members).ArrayNum != iVar26) {
        local_bfe[0] = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_bfe);
      }
      if (pFVar30 == pFVar41) break;
      pvVar23 = *(void **)pFVar30;
      if (pvVar23 == (void *)0x0) {
        pFVar30 = pFVar30 + 0x48;
        pFVar55->RepNotifyFunction = (UFunction *)pFVar42->DebugName;
        pFVar55 = (FReplicationStateMemberPropertyDescriptor *)&pFVar55->ArrayIndex;
      }
      else {
        bVar6 = IsThisNotNull(pvVar23,"FField::GetFName");
        if (bVar6) {
          local_ae8 = *(FName *)((longlong)pvVar23 + 0x20);
        }
        else {
          local_ae8.ComparisonIndex.Value = 0;
          local_ae8.Number = 0;
        }
        ::FName::ToStringInternal(&local_ae8,local_878,0x40b);
        sVar13 = wcslen(local_878);
        pUVar19 = (UFunction *)CreatePersistentNetDebugName(local_878,(uint)sVar13);
        pFVar30 = pFVar30 + 0x48;
        pFVar55->RepNotifyFunction = pUVar19;
        pFVar55 = (FReplicationStateMemberPropertyDescriptor *)&pFVar55->ArrayIndex;
      }
    }
    pFVar42->MemberDebugDescriptors = (FReplicationStateMemberDebugDescriptor *)local_be0;
    plVar52 = local_ac0;
  }
  BuildMemberSerializerConfigs
            (this,(uchar *)((longlong)&local_bf8->MemberDescriptors + local_9d8),pFVar42,
             &local_b98.MemberCache);
  if (local_b98.BuildParams.DescriptorType == Class) {
    pFVar47 = pFVar42->MemberSerializerDescriptors;
    uVar10 = 0xffffffff;
    for (pFVar36 = pFVar47; pFVar36 != pFVar47 + pFVar42->MemberCount; pFVar36 = pFVar36 + 1) {
      uVar43 = uVar10;
      if (pFVar36->Serializer == &FNetRoleNetSerializerNetSerializerInfo::Serializer) {
        uVar29 = (longlong)pFVar36 - (longlong)pFVar47 >> 4;
        uVar43 = (uint)uVar29;
        if (uVar10 != 0xffffffff) {
          if (uVar43 != 0xffffffff) {
            pFVar46 = pFVar42->MemberDescriptors;
            uVar29 = uVar29 & 0xffffffff;
            iVar44 = pFVar46[uVar29].InternalMemberOffset - pFVar46[uVar10].InternalMemberOffset;
            iVar26 = pFVar46[uVar29].ExternalMemberOffset - pFVar46[uVar10].ExternalMemberOffset;
            pFVar1 = pFVar47[uVar10].SerializerConfig;
            pFVar2 = pFVar47[uVar29].SerializerConfig;
            *(int *)&pFVar1[1]._padding_ = iVar44;
            *(int *)((longlong)&pFVar1[1]._padding_ + 4) = iVar26;
            *(int *)((longlong)&pFVar2[1]._padding_ + 4) = -iVar26;
            *(int *)&pFVar2[1]._padding_ = -iVar44;
          }
          break;
        }
      }
      uVar10 = uVar43;
    }
  }
  uVar10 = 0;
  if ((pFVar42->Traits >> 0xb & 1) != 0) {
    pFVar42->MemberDescriptors->ExternalMemberOffset = 0;
    pFVar21 = *pFVar42->MemberProperties;
    uVar43 = uVar10;
    if ((pFVar21 != (FProperty *)0x0) && ((*(uint *)(pFVar21->_padding_ + 0x18) >> 0x14 & 1) != 0))
    {
      this_00 = (UStruct *)pFVar21[1]._padding_;
      if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar20 = Z_Construct_UPackage__Script_IrisCore();
        Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FIrisFastArraySerializer,(UObject *)pUVar20,
                             L"IrisFastArraySerializer");
        if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1441fd348;
LAB_1441fd36c:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(FIrisFastArraySerializer::StaticStruct())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                           ,0x92e,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
        }
      }
      else {
LAB_1441fd348:
        iVar26 = (int)(Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton)->
                      _padding_;
        if (((int)this_00->_padding_ < iVar26) ||
           ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar26 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton)->_padding_)
           ) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1441fd36c;
      }
      pFVar21 = UStruct::FindPropertyByName
                          (this_00,PropertyNetSerializerRegistry_NAME_ChangeMaskStorage);
      if (pFVar21 != (FProperty *)0x0) {
        if ((-1 < (int)pFVar21->PropertyFlags) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumHasAnyFlags(ChangeMaskProperty->PropertyFlags, EPropertyFlags::CPF_RepSkip)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                               ,0x935,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
        }
        uVar43 = pFVar21->Offset_Internal;
      }
    }
    pFVar42->ChangeMasksExternalOffset = uVar43;
  }
  pFVar42->ExternalAlignment = (ushort)local_b98.External.Alignment;
  pFVar42->ExternalSize =
       ~((int)local_b98.External.Alignment - 1U) &
       (int)local_b98.External.Size + -1 + (int)local_b98.External.Alignment;
  pFVar42->InternalAlignment = (ushort)local_b98.Internal.Alignment;
  pFVar42->ConstructReplicationState = ConstructPropertyReplicationState;
  pFVar42->DestructReplicationState = DestructPropertyReplicationState;
  pFVar42->InternalSize =
       ~((int)local_b98.Internal.Alignment - 1U) &
       (int)local_b98.Internal.Alignment + -1 + (int)local_b98.Internal.Size;
  if ((pFVar42->Traits >> 10 & 1) == 0) {
    if (pFVar42->MemberCount == 1) {
      if (((this->Members).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
        return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
      }
      if (*(longlong *)((this->Members).AllocatorInstance.Data + 0x18) != 0) goto LAB_1441fd49f;
    }
  }
  else {
LAB_1441fd49f:
    if (((this->Members).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar11.Reference = (FReplicationStateDescriptor *)(*pcVar4)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar11.Reference;
    }
    pFVar42->CreateAndRegisterReplicationFragmentFunction =
         *(_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
           **)((this->Members).AllocatorInstance.Data + 0x18);
  }
  puVar3 = (undefined8 *)*plVar52;
  uVar35 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar10 = (uint)(puVar3[1] - (longlong)*puVar3 >> 1);
    uVar35 = 0;
    if (uVar10 != 0) {
      uVar35 = CityHash64((char *)*puVar3,uVar10 * 2);
    }
  }
  local_bd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bd0.Data.ArrayNum = *(int *)&(local_ae0->RegisteredDescriptorsMap).field_0x8;
  lVar34 = (longlong)local_bd0.Data.ArrayNum;
  pvVar23 = *(void **)&local_ae0->RegisteredDescriptorsMap;
  if (local_bd0.Data.ArrayNum == 0) {
    local_bd0.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_bd0.Data.ArrayNum,0,(ForAnyElementType *)&local_bd0,local_bd0.Data.ArrayNum
               ,&local_bd0.Data.ArrayMax);
    memcpy(local_bd0.Data.AllocatorInstance.Data,pvVar23,lVar34 * 2);
  }
  ::FString::AppendfImpl(&local_bd0,L"%u%u%u");
  ::FString::ToUpperInline(&local_bd0);
  uVar35 = CityHash64WithSeed((char *)local_bd0.Data.AllocatorInstance.Data,
                              local_bd0.Data.ArrayNum * 2,uVar35);
  (pFVar42->DescriptorIdentifier).Value = uVar35;
  if (5 < (byte)LogIris._0_1_) {
    if (uVar10 == 0) {
      local_ad0 = L"";
      plVar22 = &local_ad0;
      uStack_ac8 = uStack_ac8 & 0xffffffff00000000;
    }
    else {
      local_9b0 = *(longlong *)*plVar52;
      plVar22 = &local_9b0;
      uStack_9a8 = (int)(((longlong *)*plVar52)[1] - local_9b0 >> 1);
    }
    local_ad0 = (wchar_t *)*plVar22;
    iVar26 = (int)plVar22[1];
    uStack_ac8 = plVar22[1];
    local_998.End = local_878;
    local_998.bIsDynamic = false;
    local_998.bIsExternal = false;
    local_998.Base = local_978;
    local_998.CurPos = local_978;
    uVar35 = (ulong64)iVar26;
    uVar56 = (int)*plVar22;
    uVar57 = *(undefined4 *)((longlong)plVar22 + 4);
    if (local_878 < local_978 + uVar35) {
      TStringBuilderBase<wchar_t>::Extend(&local_998,uVar35);
      uVar56 = (undefined4)local_ad0;
      uVar57 = local_ad0._4_4_;
    }
    if (iVar26 != 0) {
      pvVar23 = FGenericPlatformString::Memcpy
                          (local_998.CurPos,(void *)CONCAT44(uVar57,uVar56),uVar35 * 2);
      local_998.CurPos = (wchar_t *)((longlong)pvVar23 + uVar35 * 2);
    }
    if (local_998.End < local_998.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_998,1);
    }
    *local_998.CurPos = L'\0';
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_998);
  }
  if ((pFVar42->InternalSize != 0) && ((uchar *)plVar52[1] != (uchar *)0x0)) {
    AllocateAndInitializeDefaultInternalStateBuffer
              (this,(uchar *)plVar52[1],pFVar42,(UReplicationSystem *)plVar52[2],
               &pFVar42->DefaultStateBuffer);
    local_ab8 = 0;
    bVar6 = CalculateDefaultStateChecksum
                      (this,pFVar42,(UReplicationSystem *)plVar52[2],pFVar42->DefaultStateBuffer,
                       &local_ab8);
    if ((bVar6) &&
       ((pFVar42->DescriptorIdentifier).DefaultStateHash = local_ab8, 5 < (byte)LogIris._0_1_)) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  if (local_b98.BuildParams.bShouldValidateIsFullyPushModel != false) {
    ValidateIsFullyPushModelClassDescriptor(this,&local_b98,pFVar42);
  }
  pFVar12 = local_ab0;
  local_ab0->MemberDescriptors = (FReplicationStateMemberDescriptor *)pFVar42;
  if ((pFVar42->Traits >> 3 & 1) != 0) {
    LOCK();
    pFVar42->RefCount = (atomic<int>)((int)pFVar42->RefCount + 1);
    UNLOCK();
  }
  if (local_bd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
  }
LAB_1441fd7eb:
  DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,int>
            ((FMemberFunctionCacheEntry *)local_b98.MemberFunctionCache.AllocatorInstance.Data,
             local_b98.MemberFunctionCache.ArrayNum);
  if ((FMemberFunctionCacheEntry *)local_b98.MemberFunctionCache.AllocatorInstance.Data !=
      (FMemberFunctionCacheEntry *)0x0) {
    FMemory::Free(local_b98.MemberFunctionCache.AllocatorInstance.Data);
  }
  if (local_b98.MemberTagCache.CacheEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_b98.MemberTagCache.CacheEntries.AllocatorInstance.Data);
  }
  if (local_b98.ReferenceCache.CacheEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_b98.ReferenceCache.CacheEntries.AllocatorInstance.Data);
  }
  DestructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,int>
            ((FMemberCacheEntry *)local_b98.MemberCache.AllocatorInstance.Data,
             local_b98.MemberCache.ArrayNum);
  if ((FMemberCacheEntry *)local_b98.MemberCache.AllocatorInstance.Data != (FMemberCacheEntry *)0x0)
  {
    FMemory::Free(local_b98.MemberCache.AllocatorInstance.Data);
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)pFVar12;
}

// BuildMemberCache @ 1441fd870

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberCache
          (FPropertyReplicationStateDescriptorBuilder *this,FBuilderContext *param_1,
          FReplicationStateDescriptorRegistry *param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  FReplicationStateDescriptor *this_00;
  longlong lVar5;
  FParameters *pFVar6;
  ForAnyElementType this_01;
  code *pcVar7;
  ulong64 uVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  FNetSerializer *pFVar12;
  FMemberProperty *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FProperty *pFVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  bool local_res8;
  undefined1 local_res20 [8];
  EMemberPropertyTraits local_c8;
  EMemberPropertyTraits local_c4;
  FReplicationStateDescriptor *local_c0;
  FString local_b8;
  FScriptContainerElement *local_a8;
  FMemberProperty *local_a0;
  FString local_98;
  FReplicationStateDescriptorRegistry *local_88;
  undefined1 local_80 [16];
  byte local_70;
  undefined4 local_6c;
  FReplicationStateDescriptorRegistry *local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_60;
  byte local_50;
  undefined4 local_4c;
  
  uVar3 = (this->Members).ArrayNum;
  piVar1 = &(param_1->MemberCache).ArrayNum;
  iVar4 = *piVar1;
  uVar18 = (param_1->BuildParams).bAllMembersAreReplicated;
  local_c4 = None;
  local_c8 = ~None;
  if ((int)uVar3 < 1) {
    local_c8 = None;
  }
  if (iVar4 < (int)uVar3) {
    iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x48,8,uVar3 - iVar4,(ForAnyElementType *)param_1,piVar1,
                        &(param_1->MemberCache).ArrayMax);
    DefaultConstructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,int>
              ((param_1->MemberCache).AllocatorInstance.Data + (longlong)iVar11 * 0x48,uVar3 - iVar4
              );
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar4) {
      uVar15 = iVar4 - uVar3;
      if (((int)(uVar15 | uVar3) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar15 != 0) {
        TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&param_1->MemberCache,uVar3,uVar15);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,(ForAnyElementType *)param_1,*piVar1,&(param_1->MemberCache).ArrayMax);
      }
    }
  }
  local_a8 = (param_1->MemberCache).AllocatorInstance.Data;
  local_res8 = false;
  pFVar14 = local_a8 + 8;
  local_b8.Data.ArrayNum = (this->Members).ArrayNum;
  uVar17 = (ulonglong)local_b8.Data.ArrayNum;
  pFVar13 = (FMemberProperty *)(this->Members).AllocatorInstance.Data;
  local_a0 = pFVar13 + uVar17;
  while( true ) {
    if ((this->Members).ArrayNum != (int)uVar17) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar13 == local_a0) break;
    pFVar12 = (FNetSerializer *)
              (**(code **)(pFVar13->SerializerInfo->_padding_ + 0x10))
                        (pFVar13->SerializerInfo,pFVar13->Property);
    *(FNetSerializer **)local_a8 = pFVar12;
    if ((pFVar12->Traits & HasApply) != None) {
      uVar18 = 0;
    }
    if (pFVar12 == &FStructNetSerializerNetSerializerInfo::Serializer) {
      pFVar16 = pFVar13->Property;
      if ((pFVar16 == (FProperty *)0x0) || ((*(uint *)(pFVar16->_padding_ + 0x18) >> 0x14 & 1) == 0)
         ) {
        pFVar16 = (FProperty *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_6c = 0xffffffff;
      local_70 = (((byte)(pFVar13->Traits >> 0xd) & 1) * '\x02' | (byte)(pFVar13->Traits >> 0xb) & 1
                 ) << 2 | local_70 & 0xe3 | 3;
      local_80 = ZEXT416(0);
      local_88 = param_2;
      FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                ((UStruct *)&local_c0,(FParameters *)pFVar16[1]._padding_);
      if (pFVar14 == (FScriptContainerElement *)&local_c0) {
        if (local_c0 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::Release(local_c0);
        }
      }
      else {
        this_00 = *(FReplicationStateDescriptor **)pFVar14;
        *(FReplicationStateDescriptor **)pFVar14 = local_c0;
        local_c0 = (FReplicationStateDescriptor *)0x0;
        if (this_00 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::Release(this_00);
        }
      }
      if (bWarnAboutStructPropertiesWithSuspectedNotReplicatedProperties != false) {
        ValidateStructPropertyDescriptor(pFVar13,*(FReplicationStateDescriptor **)pFVar14);
      }
      lVar5 = *(longlong *)pFVar14;
      if ((*(byte *)(lVar5 + 0xb8) & 4) != 0) {
        pFVar13->Traits = pFVar13->Traits | HasObjectReference;
      }
      if ((*(byte *)(lVar5 + 0xb8) & 0x40) != 0) {
        pFVar13->Traits = pFVar13->Traits | HasDynamicState;
      }
      if ((*(uint *)(lVar5 + 0xb8) & 0x1000) != 0) {
        pFVar13->Traits = pFVar13->Traits | HasConnectionSpecificSerialization;
      }
      if ((*(uint *)(lVar5 + 0xb8) & 0x10000) != 0) {
        pFVar13->Traits = pFVar13->Traits | UseSerializerIsEqual;
      }
      if ((*(uint *)(lVar5 + 0xb8) & 0x200) == 0) {
        uVar18 = 0;
      }
      iVar4 = pFVar13->Property->ElementSize;
      iVar11 = (**(code **)(pFVar13->Property->_padding_ + 0x168))();
      *(longlong *)(pFVar14 + 8) = (longlong)iVar4;
      *(longlong *)&pFVar14[0x10].field_0x0 = (longlong)iVar11;
      uVar2 = *(ushort *)(lVar5 + 0x7a);
      *(ulonglong *)(pFVar14 + 0x18) = (ulonglong)*(uint *)(lVar5 + 0x74);
      *(ulonglong *)&pFVar14[0x20].field_0x0 = (ulonglong)uVar2;
      *(uint *)(pFVar14 + 0x38) = *(uint *)(pFVar14 + 0x38) | 2;
      local_res8 = true;
    }
    else if (pFVar12 == &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
      pFVar16 = pFVar13->Property;
      local_50 = local_50 & 0xe7 | 7;
      local_4c = 0xffffffff;
      local_60 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_>)ZEXT416(0);
      local_68 = param_2;
      if ((pFVar16 == (FProperty *)0x0) || ((*(uint *)(pFVar16->_padding_ + 0x18) >> 0x15 & 1) == 0)
         ) {
        pFVar16 = (FProperty *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = (FParameters *)pFVar16[1]._padding_;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      GetPropertyPathName(pFVar16,&local_98);
      CreateDescriptorForProperty(this,&local_b8,(FProperty *)&local_98,pFVar6);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      this_01.Data = local_b8.Data.AllocatorInstance.Data;
      if (pFVar14 != (FScriptContainerElement *)&local_b8) {
                    /* WARNING: Load size is inaccurate */
        this_01.Data = *pFVar14;
        *(FScriptContainerElement **)pFVar14 = local_b8.Data.AllocatorInstance.Data;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if ((FReplicationStateDescriptor *)this_01.Data != (FReplicationStateDescriptor *)0x0) {
        FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this_01.Data);
      }
      lVar5 = *(longlong *)pFVar14;
      if ((*(byte *)(lVar5 + 0xb8) & 4) != 0) {
        pFVar13->Traits = pFVar13->Traits | HasObjectReference;
      }
      if ((*(uint *)(lVar5 + 0xb8) & 0x10000) != 0) {
        pFVar13->Traits = pFVar13->Traits | UseSerializerIsEqual;
      }
      if ((*(uint *)(lVar5 + 0xb8) & 0x200) == 0) {
        uVar18 = 0;
      }
      iVar4 = pFVar13->Property->ElementSize;
      iVar11 = (**(code **)(pFVar13->Property->_padding_ + 0x168))();
      *(longlong *)(pFVar14 + 8) = (longlong)iVar4;
      *(longlong *)&pFVar14[0x10].field_0x0 = (longlong)iVar11;
      auVar19._0_4_ = FArrayPropertyNetSerializerNetSerializerInfo::Serializer._112_4_ & 0xffff;
      auVar19._4_4_ = 0;
      auVar19._8_2_ =
           FArrayPropertyNetSerializerNetSerializerInfo::Serializer.QuantizedTypeAlignment;
      auVar19._10_6_ = 0;
      *(undefined1 (*) [16])(pFVar14 + 0x18) = auVar19;
      *(uint *)(pFVar14 + 0x38) = *(uint *)(pFVar14 + 0x38) | 4;
      local_res8 = true;
    }
    else {
      pFVar16 = pFVar13->Property;
      if (pFVar16 == (FProperty *)0x0) {
        uVar8 = (pFVar13->ExternalSizeAndAlignment).Alignment;
        *(ulong64 *)(pFVar14 + 8) = (pFVar13->ExternalSizeAndAlignment).Size;
        *(ulong64 *)&pFVar14[0x10].field_0x0 = uVar8;
      }
      else {
        local_res8 = true;
        iVar4 = pFVar16->ElementSize;
        iVar11 = (**(code **)(pFVar16->_padding_ + 0x168))();
        *(longlong *)(pFVar14 + 8) = (longlong)iVar4;
        *(longlong *)&pFVar14[0x10].field_0x0 = (longlong)iVar11;
      }
      uVar2 = pFVar12->QuantizedTypeAlignment;
      *(ulonglong *)(pFVar14 + 0x18) = (ulonglong)pFVar12->QuantizedTypeSize;
      *(ulonglong *)&pFVar14[0x20].field_0x0 = (ulonglong)uVar2;
    }
    uVar3._0_2_ = pFVar12->ConfigTypeSize;
    uVar3._2_2_ = pFVar12->ConfigTypeAlignment;
    auVar20._0_4_ = uVar3 & 0xffff;
    auVar20._4_4_ = 0;
    auVar20._8_2_ = uVar3._2_2_;
    auVar20._10_6_ = 0;
    *(undefined1 (*) [16])(pFVar14 + 0x28) = auVar20;
    bVar10 = (**(code **)(pFVar13->SerializerInfo->_padding_ + 0x18))
                       (pFVar13->SerializerInfo,pFVar13->Property);
    local_a8 = local_a8 + 0x48;
    uVar17 = (ulonglong)(uint)local_b8.Data.ArrayNum;
    *(uint *)(pFVar14 + 0x38) =
         *(uint *)(pFVar14 + 0x38) ^ ((uint)bVar10 ^ *(uint *)(pFVar14 + 0x38)) & 1;
    pFVar14 = pFVar14 + 0x48;
    local_c4 = local_c4 | pFVar13->Traits;
    local_c8 = local_c8 & pFVar13->Traits;
    pFVar13 = pFVar13 + 1;
  }
  param_1->bGeneratePropertyDescriptors = local_res8;
  param_1->CombinedPropertyTraits = local_c4;
  param_1->SharedPropertyTraits = local_c8;
  (param_1->BuildParams).bAllMembersAreReplicated = (bool)uVar18;
  return;
}

// BuildMemberChangeMaskDescriptors @ 1441fddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberChangeMaskDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
  FVar1;
  int iVar2;
  EReplicationStateTraits EVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
  FVar9;
  ulong64 uVar10;
  ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
  FVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
  FVar16;
  ushort uVar17;
  int iVar18;
  ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
  FVar19;
  undefined1 auStack_198 [32];
  longlong *local_178;
  ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
  local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [4];
  longlong local_144;
  FReplicationStateMemberChangeMaskDescriptor local_13c;
  FScriptContainerElement *local_138;
  FReplicationStateDescriptor *local_130;
  FReplicationStateMemberChangeMaskDescriptor *local_128;
  FBuilderContext *local_120;
  ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
  local_118;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_130 = param_2;
  local_128 = param_1;
  local_120 = param_3;
  if ((param_2->MemberDescriptors != (FReplicationStateMemberDescriptor *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Descriptor->MemberDescriptors == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                         ,0x448,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Members).ArrayNum;
  FVar9 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
           )0x0;
  pFVar14 = (this->Members).AllocatorInstance.Data;
  bVar5 = (param_3->BuildParams).bIsInitState;
  local_118.SecondaryData =
       (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
        )0x0;
  local_50 = 0;
  local_138 = pFVar14 + (longlong)iVar2 * 0x48;
  local_4c = 0x10;
  pFVar13 = local_138;
  FVar16 = FVar9;
  FVar19 = FVar9;
LAB_1441fde94:
  do {
    while( true ) {
      if ((this->Members).ArrayNum != iVar2) {
        local_148[0] = 0;
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_148);
        FVar9._4_4_ = 0;
        FVar9._0_4_ = local_50;
        FVar16 = local_118.SecondaryData;
      }
      uVar8 = FVar9._0_4_;
      uVar7 = FVar19._0_2_;
      iVar18 = FVar19._0_4_;
      if (pFVar14 == pFVar13) {
        uVar12 = (ulonglong)(iVar18 + 0x1fU >> 5);
        EVar3 = local_130->Traits;
        local_130->MemberChangeMaskDescriptors = local_128;
        local_130->ChangeMaskBitCount = uVar7;
        local_130->ChangeMasksExternalOffset = (int)(local_120->External).Size + 3U & 0xfffffffc;
        iVar2 = (this->Members).ArrayNum;
        uVar10 = 4;
        if (4 < (local_120->External).Alignment) {
          uVar10 = (local_120->External).Alignment;
        }
        (local_120->External).Alignment = uVar10;
        lVar15 = uVar12 * 4;
        if ((EVar3 >> 1 & 1) != 0) {
          lVar15 = uVar12 * 8;
        }
        (local_120->External).Size =
             (ulonglong)local_130->ChangeMasksExternalOffset +
             lVar15 + (ulonglong)(iVar2 + 0x1fU >> 5) * 4;
        if (FVar16 != (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                       )0x0) {
          FMemory::Free((void *)FVar16);
        }
        return;
      }
      uVar17 = 0;
      if (bVar5 == false) {
        uVar17 = *(ushort *)(pFVar14 + 0x28);
      }
      lVar15 = *(longlong *)(pFVar14 + 0x2c);
      if (lVar15 != 0) break;
      param_1->BitCount = uVar17;
      if (bVar5 != false) {
        uVar7 = 0;
      }
      param_1->BitOffset = uVar7;
      param_1 = param_1 + 1;
      FVar19._0_4_ = iVar18 + (uint)uVar17;
      FVar19._4_4_ = 0;
      pFVar14 = pFVar14 + 0x48;
    }
    FVar11 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
              )&local_118;
    if (FVar16 != (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                   )0x0) {
      FVar11 = FVar16;
    }
    FVar1 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
             )((longlong)FVar11 + (longlong)(int)uVar8 * 0xc);
    for (; FVar11 != FVar1;
        FVar11 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                  )((longlong)FVar11 + 0xc)) {
      if (*(longlong *)FVar11 == lVar15) {
        *param_1 = *(FReplicationStateMemberChangeMaskDescriptor *)((longlong)FVar11 + 8);
        param_1 = param_1 + 1;
        pFVar14 = pFVar14 + 0x48;
        pFVar13 = local_138;
        goto LAB_1441fde94;
      }
    }
    param_1->BitCount = uVar17;
    if (bVar5 != false) {
      uVar7 = 0;
    }
    param_1->BitOffset = uVar7;
    local_13c = *param_1;
    FVar19._0_4_ = iVar18 + (uint)uVar17;
    FVar19._4_4_ = 0;
    FVar9 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
             )&local_118;
    if (FVar16 != (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                   )0x0) {
      FVar9 = FVar16;
    }
    local_144 = lVar15;
    if ((ulonglong)FVar9 <= &local_144) {
      FVar9 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
               )&local_118;
      if (FVar16 != (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                     )0x0) {
        FVar9 = FVar16;
      }
      if (&local_144 < (longlong *)((longlong)FVar9 + (longlong)(int)local_4c * 0xc)) {
        local_158 = 0xc;
        local_170 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                     )&local_118;
        if (FVar16 != (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                       )0x0) {
          local_170 = FVar16;
        }
        local_178 = &local_144;
        local_168 = (longlong)(int)local_4c;
        local_160 = (longlong)(int)uVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        FVar16 = local_118.SecondaryData;
        uVar8 = local_50;
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (uVar8 == local_4c) {
      uVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors_::__l2::FChangeMaskGroupInfo>_>
                        (0x40c,&local_118,(int *)&local_4c);
      FVar16 = local_118.SecondaryData;
    }
    local_50 = uVar8 + 1;
    FVar9 = (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
             )&local_118;
    if (FVar16 != (ForElementType<_private:_void___cdecl_UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberChangeMaskDescriptors(UE::Net::FReplicationStateMemberChangeMaskDescriptor_*,UE::Net::FReplicationStateDescriptor_*,UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FBuilderContext_&)const_::_2_::FChangeMaskGroupInfo>
                   )0x0) {
      FVar9 = FVar16;
    }
    param_1 = param_1 + 1;
    *(longlong *)((longlong)FVar9 + (longlong)(int)uVar8 * 0xc) = local_144;
    *(FReplicationStateMemberChangeMaskDescriptor *)
     ((uchar *)((longlong)FVar9 + 8) + (longlong)(int)uVar8 * 0xc) = local_13c;
    FVar9._4_4_ = 0;
    FVar9._0_4_ = local_50;
    pFVar14 = pFVar14 + 0x48;
    pFVar13 = local_138;
    FVar16 = local_118.SecondaryData;
  } while( true );
}

// BuildMemberDebugDescriptors @ 1441fe120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberDebugDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberDebugDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  size_t sVar5;
  FNetDebugName *pFVar6;
  FReplicationStateMemberDebugDescriptor *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_898 [32];
  undefined1 local_878 [4];
  FName local_874;
  wchar_t local_868 [1040];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_898;
  pFVar8 = (this->Members).AllocatorInstance.Data;
  iVar2 = (this->Members).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x48;
  pFVar7 = param_1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_878);
    }
    if (pFVar8 == pFVar1) break;
    pvVar3 = *(void **)pFVar8;
    if (pvVar3 == (void *)0x0) {
      pFVar7->DebugName = param_2->DebugName;
      pFVar7 = pFVar7 + 1;
      pFVar8 = pFVar8 + 0x48;
    }
    else {
      bVar4 = IsThisNotNull(pvVar3,"FField::GetFName");
      if (bVar4) {
        local_874 = *(FName *)((longlong)pvVar3 + 0x20);
      }
      else {
        local_874.ComparisonIndex.Value = 0;
        local_874.Number = 0;
      }
      ::FName::ToStringInternal(&local_874,local_868,0x40b);
      sVar5 = wcslen(local_868);
      pFVar6 = CreatePersistentNetDebugName(local_868,(uint)sVar5);
      pFVar7->DebugName = pFVar6;
      pFVar7 = pFVar7 + 1;
      pFVar8 = pFVar8 + 0x48;
    }
  }
  param_2->MemberDebugDescriptors = param_1;
  return;
}

// BuildMemberDescriptors @ 1441fe230

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FReplicationStateMemberDescriptor *local_res10;
  FReplicationStateDescriptor *local_res18;
  ulong64 local_res20;
  
  pFVar7 = (this->Members).AllocatorInstance.Data;
  iVar2 = (this->Members).ArrayNum;
  local_res20 = (param_3->External).Size;
  uVar8 = (param_3->Internal).Size;
  pFVar11 = (param_3->MemberCache).AllocatorInstance.Data + 0x10;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x48;
  uVar9 = (param_3->External).Alignment;
  uVar10 = (param_3->Internal).Alignment;
  local_res10 = param_1;
  local_res18 = param_2;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    uVar6 = *(ulonglong *)(pFVar11 + 8);
    lVar3 = *(longlong *)pFVar11;
    uVar4 = uVar6;
    if (uVar6 < uVar9) {
      uVar4 = uVar9;
    }
    uVar5 = (local_res20 - 1) + uVar6 & ~(uVar6 - 1);
    param_1->ExternalMemberOffset = (uint)uVar5;
    uVar6 = *(ulonglong *)(pFVar11 + 0x18);
    local_res20 = lVar3 + uVar5;
    lVar3 = *(longlong *)(pFVar11 + 0x10);
    uVar5 = uVar6;
    if (uVar6 < uVar10) {
      uVar5 = uVar10;
    }
    pFVar11 = pFVar11 + 0x48;
    uVar6 = (uVar8 - 1) + uVar6 & ~(uVar6 - 1);
    param_1->InternalMemberOffset = (uint)uVar6;
    param_1 = param_1 + 1;
    pFVar7 = pFVar7 + 0x48;
    uVar8 = lVar3 + uVar6;
    uVar9 = uVar4;
    uVar10 = uVar5;
  }
  local_res18->MemberDescriptors = local_res10;
  local_res18->MemberCount = (ushort)(this->Members).ArrayNum;
  (param_3->External).Alignment = uVar9;
  (param_3->External).Size = local_res20;
  (param_3->Internal).Alignment = uVar10;
  (param_3->Internal).Size = uVar8;
  return;
}

// BuildMemberDescriptorsForStruct @ 1441fe370

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberDescriptorsForStruct
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  int local_res8 [2];
  FReplicationStateMemberDescriptor *local_res10;
  FReplicationStateDescriptor *local_res18;
  FBuilderContext *local_res20;
  longlong local_68;
  
  iVar2 = (this->Members).ArrayNum;
  uVar8 = (this->StructInfo).SizeAndAlignment.Alignment;
  pFVar11 = (this->Members).AllocatorInstance.Data;
  if (uVar8 < (param_3->External).Alignment) {
    uVar8 = (param_3->External).Alignment;
  }
  uVar12 = (param_3->Internal).Size;
  uVar9 = 0;
  pFVar10 = (param_3->MemberCache).AllocatorInstance.Data + 0x28;
  pFVar1 = pFVar11 + (longlong)iVar2 * 0x48;
  local_68 = 0;
  uVar13 = (param_3->Internal).Alignment;
  local_res8[0] = iVar2;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    uVar5 = 0;
    if (pFVar11 == pFVar1) break;
    lVar3 = *(longlong *)pFVar11;
    uVar9 = uVar9 + 1;
    if (lVar3 != local_68) {
      uVar9 = 0;
    }
    uVar6 = *(ulonglong *)(pFVar10 + -0x10);
    if (*(ulonglong *)(pFVar10 + -0x10) < uVar8) {
      uVar6 = uVar8;
    }
    if (lVar3 != 0) {
      uVar5 = (uint)uVar9 * *(int *)(lVar3 + 0x34) + *(int *)(lVar3 + 0x44);
    }
    param_1->ExternalMemberOffset = uVar5;
    uVar8 = *(ulonglong *)pFVar10;
    uVar4 = *(ulonglong *)(pFVar10 + -8);
    uVar7 = uVar8;
    if (uVar8 < uVar13) {
      uVar7 = uVar13;
    }
    pFVar10 = pFVar10 + 0x48;
    pFVar11 = pFVar11 + 0x48;
    uVar8 = (uVar12 - 1) + uVar8 & ~(uVar8 - 1);
    param_1->InternalMemberOffset = (uint)uVar8;
    param_1 = param_1 + 1;
    uVar12 = uVar4 + uVar8;
    uVar8 = uVar6;
    uVar13 = uVar7;
    local_68 = lVar3;
  }
  local_res18->MemberDescriptors = local_res10;
  local_res18->MemberCount = (ushort)(this->Members).ArrayNum;
  if (uVar8 < (local_res20->External).Alignment) {
    uVar8 = (local_res20->External).Alignment;
  }
  (local_res20->External).Alignment = uVar8;
  (local_res20->External).Size =
       (local_res20->External).Size + (this->StructInfo).SizeAndAlignment.Size;
  (local_res20->Internal).Alignment = uVar13;
  (local_res20->Internal).Size = uVar12;
  return;
}

// BuildMemberFunctionCache @ 1441fe4f0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberFunctionCache
          (FPropertyReplicationStateDescriptorBuilder *this,FBuilderContext *param_1,
          FReplicationStateDescriptorRegistry *param_2)

{
  TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FReplicationStateDescriptor *this_01;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FReplicationStateDescriptor *local_58;
  FReplicationStateDescriptorRegistry *local_50;
  longlong local_48;
  longlong lStack_40;
  byte local_38;
  undefined4 local_34;
  
  uVar3 = (this->Functions).ArrayNum;
  this_00 = &param_1->MemberFunctionCache;
  iVar4 = (param_1->MemberFunctionCache).ArrayNum;
  piVar1 = &(param_1->MemberFunctionCache).ArrayNum;
  if (iVar4 < (int)uVar3) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar3 - iVar4,&this_00->AllocatorInstance,piVar1,
                       &(param_1->MemberFunctionCache).ArrayMax);
    DefaultConstructItems<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10,uVar3 - iVar4);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar4) {
      uVar10 = iVar4 - uVar3;
      if (((int)(uVar10 | uVar3) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar10 != 0) {
        TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar3,uVar10);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,
                   &(param_1->MemberFunctionCache).ArrayMax);
      }
    }
  }
  pFVar9 = (this_00->AllocatorInstance).Data;
  pFVar11 = (this->Functions).AllocatorInstance.Data;
  iVar4 = (this->Functions).ArrayNum;
  pFVar8 = pFVar9 + 8;
  pFVar2 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Functions).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunction_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&stack0x00000008);
    }
    if (pFVar11 == pFVar2) break;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar11;
    local_38 = local_38 & 0xe7 | 7;
    local_34 = 0xffffffff;
    local_48 = 0;
    lStack_40 = 0;
    local_50 = param_2;
    FReplicationStateDescriptorBuilder::CreateDescriptorForFunction
              ((UFunction *)&stack0xffffffffffffffa8,*(FParameters **)pFVar11);
    this_01 = local_58;
    if (pFVar8 != (FScriptContainerElement *)&stack0xffffffffffffffa8) {
      this_01 = *(FReplicationStateDescriptor **)pFVar8;
      *(FReplicationStateDescriptor **)pFVar8 = local_58;
      local_58 = (FReplicationStateDescriptor *)0x0;
    }
    if (this_01 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(this_01);
    }
    pFVar9 = pFVar9 + 0x10;
    pFVar8 = pFVar8 + 0x10;
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// BuildMemberFunctionDescriptors @ 1441fe6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberFunctionDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberFunctionDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  int iVar1;
  FReplicationStateDescriptor *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FReplicationStateMemberFunctionDescriptor *pFVar5;
  FName local_res10;
  FReplicationStateDescriptor *local_res18 [2];
  FString local_38;
  
  iVar1 = (param_3->MemberFunctionCache).ArrayNum;
  pFVar3 = (param_3->MemberFunctionCache).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  pFVar5 = param_1;
  local_res18[0] = param_2;
  while( true ) {
    if ((param_3->MemberFunctionCache).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberFunctionCacheEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar3 == pFVar4) break;
    pFVar5->Function = *(UFunction **)pFVar3;
    pFVar2 = *(FReplicationStateDescriptor **)(pFVar3 + 8);
    pFVar5->Descriptor = pFVar2;
    if ((pFVar2->Traits & NeedsRefCount) != None) {
      LOCK();
      pFVar2->RefCount = (atomic<int>)((int)pFVar2->RefCount + 1);
      UNLOCK();
    }
    pFVar5 = pFVar5 + 1;
    if (5 < (byte)LogIris._0_1_) {
      local_res10 = *(FName *)(*(longlong *)pFVar3 + 0x18);
      ::FName::ToString(&local_res10,&local_38);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  if (0xffff < (param_3->MemberFunctionCache).ArrayNum) {
    local_res10 = (FName)local_res18;
    `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberFunctionDescriptors'::
    __l2::<lambda_1>::operator()(&local_res10);
  }
  local_res18[0]->FunctionCount = (ushort)(param_3->MemberFunctionCache).ArrayNum;
  local_res18[0]->MemberFunctionDescriptors = param_1;
  return;
}

// BuildMemberLifetimeConditionDescriptors @ 1441fe7f0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
BuildMemberLifetimeConditionDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberLifetimeConditionDescriptor *param_1,
          FReplicationStateDescriptor *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FReplicationStateMemberLifetimeConditionDescriptor *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Members).ArrayNum;
  pFVar3 = (this->Members).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  pFVar4 = param_1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar4->Condition = (schar)pFVar3[0x24];
    pFVar4 = pFVar4 + 1;
    pFVar3 = pFVar3 + 0x48;
  }
  param_2->MemberLifetimeConditionDescriptors = param_1;
  return;
}

// BuildMemberProperties @ 1441fe880

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberProperties
          (FPropertyReplicationStateDescriptorBuilder *this,FProperty **param_1,
          FReplicationStateDescriptor *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FProperty **ppFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Members).ArrayNum;
  pFVar3 = (this->Members).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  ppFVar4 = param_1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *ppFVar4 = *(FProperty **)pFVar3;
    ppFVar4 = ppFVar4 + 1;
    pFVar3 = pFVar3 + 0x48;
  }
  param_2->MemberProperties = param_1;
  return;
}

// BuildMemberPropertyDescriptors @ 1441fe910

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberPropertyDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberPropertyDescriptor *param_1,FReplicationStateDescriptor *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FReplicationStateMemberPropertyDescriptor *pFVar5;
  ushort uVar6;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Members).AllocatorInstance.Data;
  iVar2 = (this->Members).ArrayNum;
  lVar3 = 0;
  uVar6 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x48;
  pFVar5 = param_1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((lVar3 == 0) || (*(longlong *)pFVar4 != lVar3)) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 + 1;
    }
    lVar3 = *(longlong *)pFVar4;
    pFVar5->RepNotifyFunction = *(UFunction **)(pFVar4 + 8);
    pFVar5->ArrayIndex = uVar6;
    pFVar5 = pFVar5 + 1;
    pFVar4 = pFVar4 + 0x48;
  }
  param_2->MemberPropertyDescriptors = param_1;
  return;
}

// BuildMemberReferenceCache @ 1441fe9c0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberReferenceCache
          (FPropertyReplicationStateDescriptorBuilder *this,FMemberReferenceCache *param_1,
          TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  int local_48;
  uint uStack_44;
  int local_40;
  uint uStack_3c;
  int local_38;
  uint uStack_34;
  
  iVar3 = param_2->ArrayNum;
  uVar13 = 0;
  pFVar4 = (this->Members).AllocatorInstance.Data;
  pFVar14 = (param_2->AllocatorInstance).Data;
  pFVar2 = pFVar14 + (longlong)iVar3 * 0x48;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar2) break;
    iVar12 = (int)uVar13;
    if (((byte)pFVar4[uVar13 * 0x48 + 0x20] & 0x40) != 0) {
      if ((*(uint *)(pFVar14 + 0x40) & 2) == 0) {
        if (((*(uint *)(pFVar14 + 0x40) & 4) == 0) &&
           ((*(byte *)(*(longlong *)pFVar14 + 4) & 8) == 0)) {
          param_1->ReferenceCount = param_1->ReferenceCount + 1;
          pFVar5 = (param_1->CacheEntries).AllocatorInstance.Data;
          uStack_3c = uStack_3c & 0xfffffffe;
          local_40 = iVar12;
          if ((pFVar5 <= (FScriptContainerElement *)&local_40) &&
             ((FScriptContainerElement *)&local_40 <
              pFVar5 + (longlong)(param_1->CacheEntries).ArrayMax * 8)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar8 = (param_1->CacheEntries).ArrayNum;
          piVar1 = &(param_1->CacheEntries).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)param_1,piVar1);
          }
          iVar10 = iVar8 + 1;
          lVar11 = (longlong)iVar8;
          uVar9 = CONCAT44(uStack_3c,local_40);
        }
        else {
          param_1->ReferenceCount = param_1->ReferenceCount + 1;
          pFVar5 = (param_1->CacheEntries).AllocatorInstance.Data;
          uStack_34 = uStack_34 | 1;
          local_38 = iVar12;
          if ((pFVar5 <= (FScriptContainerElement *)&local_38) &&
             ((FScriptContainerElement *)&local_38 <
              pFVar5 + (longlong)(param_1->CacheEntries).ArrayMax * 8)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar8 = (param_1->CacheEntries).ArrayNum;
          piVar1 = &(param_1->CacheEntries).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)param_1,piVar1);
          }
          iVar10 = iVar8 + 1;
          lVar11 = (longlong)iVar8;
          uVar9 = CONCAT44(uStack_34,local_38);
        }
      }
      else {
        uStack_44 = uStack_44 | 1;
        param_1->ReferenceCount =
             param_1->ReferenceCount + (uint)*(ushort *)(*(longlong *)(pFVar14 + 8) + 0x82);
        pFVar5 = (param_1->CacheEntries).AllocatorInstance.Data;
        local_48 = iVar12;
        if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 <
            pFVar5 + (longlong)(param_1->CacheEntries).ArrayMax * 8)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = (param_1->CacheEntries).ArrayNum;
        piVar1 = &(param_1->CacheEntries).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)param_1,piVar1);
        }
        iVar10 = iVar8 + 1;
        lVar11 = (longlong)iVar8;
        uVar9 = CONCAT44(uStack_44,local_48);
      }
      (param_1->CacheEntries).ArrayNum = iVar10;
      *(undefined8 *)((param_1->CacheEntries).AllocatorInstance.Data + lVar11 * 8) = uVar9;
    }
    pFVar14 = pFVar14 + 0x48;
    uVar13 = (ulonglong)(iVar12 + 1);
  }
  return;
}

// BuildMemberReferenceDescriptors @ 1441fec70

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberReferenceDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberReferenceDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FReplicationStateMemberDescriptor *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  FReplicationStateMemberReferenceDescriptor *pFVar11;
  FScriptContainerElement *pFVar12;
  ushort uVar13;
  FReplicationStateDescriptor *local_res18;
  undefined1 local_res20 [8];
  FReplicationStateDescriptor **local_48 [2];
  
  local_res18 = param_2;
  if ((param_2->MemberDescriptors == (FReplicationStateMemberDescriptor *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Descriptor->MemberDescriptors",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                          ,0x4d2,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar12 = (param_3->ReferenceCache).CacheEntries.AllocatorInstance.Data;
  iVar5 = (param_3->ReferenceCache).CacheEntries.ArrayNum;
  pFVar6 = (param_3->MemberCache).AllocatorInstance.Data;
  pFVar7 = local_res18->MemberDescriptors;
  pFVar1 = pFVar12 + (longlong)iVar5 * 8;
  pFVar11 = param_1;
  do {
    while( true ) {
      if ((param_3->ReferenceCache).CacheEntries.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberReferenceCacheEntry_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      uVar13 = 0;
      if (pFVar12 == pFVar1) {
        if (0xfffe < (param_3->ReferenceCache).ReferenceCount) {
          local_48[0] = &local_res18;
          `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
          BuildMemberReferenceDescriptors'::__l2::<lambda_1>::operator()(local_48);
        }
        local_res18->MemberReferenceDescriptors = param_1;
        local_res18->ObjectReferenceCount = (ushort)(param_3->ReferenceCache).ReferenceCount;
        return;
      }
      pFVar2 = pFVar6 + (ulonglong)*(uint *)pFVar12 * 0x48;
      if (((byte)pFVar12[4] & 1) != 0) break;
      (pFVar11->Info).ResolveType = ResolveOnClient;
LAB_1441feda8:
      pFVar11->Offset = pFVar7[*(uint *)pFVar12].InternalMemberOffset;
      pFVar11->MemberIndex = *(ushort *)pFVar12;
      pFVar11->InnerReferenceIndex = 0xffff;
      pFVar11 = pFVar11 + 1;
LAB_1441fedc0:
      pFVar12 = pFVar12 + 8;
    }
    if ((*(uint *)(pFVar2 + 0x40) & 2) == 0) {
      if (((*(uint *)(pFVar2 + 0x40) & 4) != 0) || ((*(byte *)(*(longlong *)pFVar2 + 4) & 8) != 0))
      {
        (pFVar11->Info).ResolveType = Invalid;
        goto LAB_1441feda8;
      }
      goto LAB_1441fedc0;
    }
    lVar8 = *(longlong *)(pFVar2 + 8);
    uVar3 = *(ushort *)(lVar8 + 0x82);
    if (uVar3 == 0) goto LAB_1441fedc0;
    do {
      pFVar11->Info =
           *(FNetReferenceInfo *)(*(longlong *)(lVar8 + 0x30) + 4 + (ulonglong)uVar13 * 0xc);
      pFVar11->Offset =
           pFVar7[*(uint *)pFVar12].InternalMemberOffset +
           *(int *)(*(longlong *)(lVar8 + 0x30) + (ulonglong)uVar13 * 0xc);
      uVar4 = *(ushort *)pFVar12;
      pFVar11->InnerReferenceIndex = uVar13;
      uVar13 = uVar13 + 1;
      pFVar11->MemberIndex = uVar4;
      pFVar11 = pFVar11 + 1;
    } while (uVar13 != uVar3);
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// BuildMemberRepIndexToMemberDescriptors @ 1441fee30

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberRepIndexToMemberDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberRepIndexToMemberIndexDescriptor *param_1,
          FReplicationStateDescriptor *param_2)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  ushort uVar4;
  ulonglong uVar5;
  bool bVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ushort uVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FReplicationStateDescriptor *local_res18;
  
  iVar1 = (this->Members).ArrayNum;
  pFVar10 = (this->Members).AllocatorInstance.Data;
  local_res18 = param_2;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = 0;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x48;
  uVar13 = 0;
  uVar4 = uVar13;
  uVar5 = 0;
  uVar2 = uVar12;
  for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x48) {
    uVar9 = uVar12;
    if ((uVar2 != 0) && (*(ulonglong *)pFVar10 == uVar2)) {
      uVar9 = (ulonglong)(ushort)((short)uVar5 + 1);
    }
    uVar2 = *(ulonglong *)pFVar10;
    uVar7 = (short)uVar9 + *(short *)(uVar2 + 0x40);
    if (uVar7 < uVar4) {
      uVar7 = uVar4;
    }
    uVar4 = uVar7;
    uVar5 = uVar9;
  }
  local_res10 = uVar4 + 1;
  memset(param_1,0xff,(ulonglong)local_res10 * 2);
  pFVar11 = (this->Members).AllocatorInstance.Data;
  iVar1 = (this->Members).ArrayNum;
  pFVar10 = pFVar11 + (longlong)iVar1 * 0x48;
  while( true ) {
    if ((this->Members).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar10) break;
    if ((uVar12 == 0) || (*(ulonglong *)pFVar11 != uVar12)) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar13 + 1;
    }
    uVar12 = *(ulonglong *)pFVar11;
    lVar8 = (longlong)pFVar11 - (longlong)(this->Members).AllocatorInstance.Data;
    pFVar11 = pFVar11 + 0x48;
    param_1[(ushort)(uVar13 + *(short *)(uVar12 + 0x40))].MemberIndex = (ushort)(lVar8 / 0x48);
  }
  local_res18->MemberRepIndexToMemberIndexDescriptors = param_1;
  local_res18->RepIndexCount = (ushort)local_res10;
  return;
}

// BuildMemberSerializerConfigs @ 1441fefa0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberSerializerConfigs
          (FPropertyReplicationStateDescriptorBuilder *this,uchar *param_1,
          FReplicationStateDescriptor *param_2,
          TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,TSizedDefaultAllocator<32>_>
          *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  FReplicationStateDescriptor *pFVar6;
  FReplicationStateDescriptor *pFVar7;
  FFieldClass *pFVar8;
  code *pcVar9;
  ForAnyElementType _Src;
  bool bVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  FArrayPropertyNetSerializerConfig *pFVar13;
  FFieldClass *pFVar14;
  FField *pFVar15;
  ulonglong uVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FNetSerializerConfig **ppFVar19;
  FScriptContainerElement *pFVar20;
  FArrayPropertyNetSerializerConfig *this_00;
  FScriptContainerElement *pFVar21;
  undefined1 local_res18 [8];
  uint local_res20;
  FFieldPath local_a8;
  FName local_88;
  FScriptContainerElement *local_80;
  FNetSerializerConfig **local_78;
  undefined4 local_70;
  FName local_6c;
  FString local_60;
  FString local_50;
  
  pFVar20 = (this->Members).AllocatorInstance.Data;
  local_res20 = (this->Members).ArrayNum;
  uVar16 = (ulonglong)(int)local_res20;
  pFVar21 = (param_3->AllocatorInstance).Data;
  ppFVar19 = &param_2->MemberSerializerDescriptors->SerializerConfig;
  pFVar18 = pFVar20 + uVar16 * 0x48;
  local_80 = pFVar18;
  do {
    uVar12 = 0;
    local_78 = ppFVar19;
    if ((this->Members).ArrayNum != (int)uVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar20 == pFVar18) {
      return;
    }
    if (((byte)pFVar21[0x40] & 1) == 0) {
      this_00 = (FArrayPropertyNetSerializerConfig *)
                ((ulonglong)(param_1 + *(longlong *)(pFVar21 + 0x38) + -1) &
                -*(longlong *)(pFVar21 + 0x38));
      if (*(FNetSerializer **)pFVar21 == &FStructNetSerializerNetSerializerInfo::Serializer) {
        pFVar13 = (FArrayPropertyNetSerializerConfig *)
                  FStructNetSerializerConfig::FStructNetSerializerConfig
                            ((FStructNetSerializerConfig *)this_00);
        pFVar6 = *(FReplicationStateDescriptor **)(pFVar21 + 8);
        pFVar7 = ((TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)
                 &pFVar13->MaxElementCount)->Reference;
        if (pFVar7 != pFVar6) {
          ((TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)&pFVar13->MaxElementCount)->
          Reference = pFVar6;
          if ((pFVar6 != (FReplicationStateDescriptor *)0x0) &&
             ((pFVar6->Traits & NeedsRefCount) != None)) {
            LOCK();
            pFVar6->RefCount = (atomic<int>)((int)pFVar6->RefCount + 1);
            UNLOCK();
          }
          if (pFVar7 != (FReplicationStateDescriptor *)0x0) {
            FReplicationStateDescriptor::Release(pFVar7);
          }
        }
      }
      else if (*(FNetSerializer **)pFVar21 ==
               &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
        pFVar13 = FArrayPropertyNetSerializerConfig::FArrayPropertyNetSerializerConfig(this_00);
        pFVar13->MaxElementCount = 0xffff;
        for (lVar5 = 0x3f; 0x1ffffUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
        pFVar13->ElementCountBitCount = (ushort)lVar5;
        pFVar15 = *(FField **)pFVar20;
        local_70 = (undefined4)lVar5;
        if ((pFVar15 == (FField *)0x0) ||
           (((uint)(int)pFVar15->ClassPrivate->CastFlags >> 0x15 & 1) == 0)) {
          pFVar15 = (FField *)0x0;
        }
        local_a8.ResolvedField = (FField *)0x0;
        local_a8.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_a8.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        local_a8.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Path.ArrayNum = 0;
        local_a8.Path.ArrayMax = 0;
        FFieldPath::Generate(&local_a8,pFVar15);
        pFVar14 = FArrayProperty::StaticClass();
        if ((local_a8.ResolvedField == (FField *)0x0) ||
           (bVar10 = FWeakObjectPtr::IsValid(&local_a8.ResolvedOwner.WeakPtr),
           pFVar15 = local_a8.ResolvedField, !bVar10)) {
          iVar17 = 0;
          if (local_a8.Path.ArrayNum != 0) {
            pFVar15 = FFieldPath::TryToResolvePath
                                (&local_a8,(UStruct *)0x0,UseStructIfOuterNotFound);
            if (pFVar15 != (FField *)0x0) {
              if ((pFVar14 == (FFieldClass *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FieldType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                      ,0x2dd,L""), bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar8 = pFVar15->ClassPrivate;
              if (pFVar14->Id == CASTCLASS_None) {
                for (; pFVar8 != (FFieldClass *)0x0; pFVar8 = pFVar8->SuperClass) {
                  if (pFVar8 == pFVar14) {
                    bVar10 = true;
                    goto LAB_1441ff2b0;
                  }
                }
                bVar10 = false;
              }
              else {
                bVar10 = (pFVar8->CastFlags & pFVar14->Id) != CASTCLASS_None;
              }
LAB_1441ff2b0:
              if (bVar10) goto LAB_1441ff2d4;
            }
            pFVar15 = local_a8.ResolvedField;
            if (local_a8.ResolvedField != (FField *)0x0) {
              local_a8.ResolvedOwner.WeakPtr.ObjectIndex = 0;
              local_a8.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
              local_a8.ResolvedField = (FField *)0x0;
              pFVar15 = local_a8.ResolvedField;
            }
            goto LAB_1441ff2d4;
          }
        }
        else {
LAB_1441ff2d4:
          local_a8.ResolvedField = pFVar15;
          iVar17 = local_a8.Path.ArrayNum;
        }
        _Src.Data = local_a8.Path.AllocatorInstance.Data;
        puVar1 = &(pFVar13->Property).field_0x10;
        *(FField **)&pFVar13->Property = local_a8.ResolvedField;
        *(int *)&(pFVar13->Property).field_0x8 = local_a8.ResolvedOwner.WeakPtr.ObjectIndex;
        *(int *)&(pFVar13->Property).field_0xc = local_a8.ResolvedOwner.WeakPtr.ObjectSerialNumber;
        if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar1 != &local_a8.Path) {
          iVar3 = *(int *)&(pFVar13->Property).field_0x1c;
          puVar2 = &(pFVar13->Property).field_0x1c;
          *(int *)&(pFVar13->Property).field_0x18 = iVar17;
          if ((iVar17 == 0) && (iVar3 == 0)) {
            *(undefined4 *)puVar2 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar17,iVar3,(ForAnyElementType *)puVar1,iVar17,(int *)puVar2);
            if (iVar17 != 0) {
              memcpy(*(void **)puVar1,_Src.Data,(longlong)iVar17 << 3);
            }
          }
        }
        if (local_a8.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Path.AllocatorInstance.Data);
        }
        pFVar6 = *(FReplicationStateDescriptor **)(pFVar21 + 8);
        pFVar7 = (pFVar13->StateDescriptor).Reference;
        pFVar18 = local_80;
        ppFVar19 = local_78;
        if (pFVar7 != pFVar6) {
          (pFVar13->StateDescriptor).Reference = pFVar6;
          if ((pFVar6 != (FReplicationStateDescriptor *)0x0) &&
             ((pFVar6->Traits & NeedsRefCount) != None)) {
            LOCK();
            pFVar6->RefCount = (atomic<int>)((int)pFVar6->RefCount + 1);
            UNLOCK();
          }
          if (pFVar7 != (FReplicationStateDescriptor *)0x0) {
            FReplicationStateDescriptor::Release(pFVar7);
            pFVar18 = local_80;
            ppFVar19 = local_78;
          }
        }
      }
      else {
        pFVar13 = (FArrayPropertyNetSerializerConfig *)
                  (**(code **)(**(longlong **)(pFVar20 + 0x10) + 0x20))
                            (*(longlong **)(pFVar20 + 0x10),this_00,*(longlong *)pFVar20);
      }
      *ppFVar19 = (FNetSerializerConfig *)pFVar13;
      param_1 = (uchar *)((longlong)&this_00->_padding_ + *(longlong *)(pFVar21 + 0x30));
    }
    else {
      if (*(longlong *)(*(longlong *)pFVar21 + 0x68) == 0) {
        pvVar4 = *(void **)pFVar20;
        bVar10 = IsThisNotNull(pvVar4,"FField::GetFName");
        if (bVar10) {
          local_88 = *(FName *)((longlong)pvVar4 + 0x20);
        }
        else {
          local_88.ComparisonIndex.Value = 0;
          local_88.Number = 0;
        }
        ::FName::ToString(&local_88,&local_50);
        lVar5 = *(longlong *)pFVar20;
        pUVar11 = Z_Construct_UClass_UObject_NoRegister();
        bVar10 = FFieldVariant::IsA((FFieldVariant *)(lVar5 + 0x10),pUVar11);
        if (bVar10) {
          uVar12 = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffe;
        }
        local_6c = *(FName *)(uVar12 + 0x18);
        ::FName::ToString(&local_6c,&local_60);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MemberCacheEntry->Serializer->DefaultConfig != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                            ,0x5ae,
                            L"Expected NetSerializer %s to have a default config for property %s::%s"
                           );
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        pFVar18 = local_80;
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *ppFVar19 = *(FNetSerializerConfig **)(*(longlong *)pFVar21 + 0x68);
    }
    pFVar21 = pFVar21 + 0x48;
    uVar16 = (ulonglong)local_res20;
    ppFVar19 = ppFVar19 + 2;
    pFVar20 = pFVar20 + 0x48;
  } while( true );
}

// BuildMemberSerializerDescriptors @ 1441ff3f0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberSerializerDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberSerializerDescriptor *param_1,FReplicationStateDescriptor *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FNetSerializer *pFVar5;
  FScriptContainerElement *pFVar6;
  FReplicationStateMemberSerializerDescriptor *pFVar7;
  undefined1 local_res8 [8];
  
  if (param_2->MemberDescriptors == (FReplicationStateMemberDescriptor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Descriptor->MemberDescriptors",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                       ,0x487,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->Members).ArrayNum;
  pFVar6 = (this->Members).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
  pFVar7 = param_1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pFVar5 = (FNetSerializer *)
             (**(code **)(**(longlong **)(pFVar6 + 0x10) + 0x10))
                       (*(longlong **)(pFVar6 + 0x10),*(undefined8 *)pFVar6);
    pFVar7->Serializer = pFVar5;
    pFVar7->SerializerConfig = (FNetSerializerConfig *)0x0;
    pFVar7 = pFVar7 + 1;
    pFVar6 = pFVar6 + 0x48;
  }
  param_2->MemberSerializerDescriptors = param_1;
  return;
}

// BuildMemberTagCache @ 1441ff4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberTagCache
          (FPropertyReplicationStateDescriptorBuilder *this,FMemberTagCache *param_1,
          TArray<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FNameEntryId FVar9;
  int iVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  longlong lVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  ushort uVar18;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [4];
  FName local_b4;
  undefined8 local_ac;
  FScriptContainerElement *local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  FName local_88;
  FScriptContainerElement *local_80;
  FString local_78;
  undefined8 local_68;
  ushort uStack_60;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  undefined8 local_58;
  ushort uStack_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_a0 = (this->Members).AllocatorInstance.Data;
  uVar18 = 0;
  iVar3 = param_2->ArrayNum;
  pFVar17 = (param_2->AllocatorInstance).Data;
  local_80 = pFVar17 + (longlong)iVar3 * 0x48;
  do {
    pFVar6 = local_80;
    if (param_2->ArrayNum != iVar3) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberCacheEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar17 == pFVar6) {
      return;
    }
    pvVar4 = *(void **)(local_a0 + (ulonglong)uVar18 * 0x48);
    if (pvVar4 == (void *)0x0) {
      local_ac = 0;
      FVar16.ComparisonIndex.Value = 0;
      FVar16.Number = 0;
    }
    else {
      bVar8 = IsThisNotNull(pvVar4,"FField::GetFName");
      if (bVar8) {
        FVar16 = *(FName *)((longlong)pvVar4 + 0x20);
        local_b4 = FVar16;
      }
      else {
        FVar16.ComparisonIndex.Value = 0;
        FVar16.Number = 0;
        local_b4.ComparisonIndex.Value = 0;
        local_b4.Number = 0;
      }
    }
    FVar9 = FNameEntryId::FromValidEName((EName)local_98);
    FVar11.Number = 0;
    FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
    if ((FVar16 == FVar11) ||
       (FVar9 = FNameEntryId::FromValidEName((EName)local_94), FVar12.Number = 0,
       FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar9.Value),
       FVar16 == FVar12)) {
      if (*(FNetSerializer **)pFVar17 == &FNetRoleNetSerializerNetSerializerInfo::Serializer) {
        FVar9 = FNameEntryId::FromValidEName((EName)local_8c);
        FVar14.Number = 0;
        FVar14.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar9.Value);
        local_68 = 0xf754c2703924c7aa;
        if (FVar16 == FVar14) {
          local_68 = 0xffaab417b1123942;
        }
LAB_1441ff690:
        param_1->TagCount = param_1->TagCount + 1;
        pFVar6 = (param_1->CacheEntries).AllocatorInstance.Data;
        uStack_5e = 0;
        uStack_60 = uVar18;
        if ((pFVar6 <= (FScriptContainerElement *)&local_68) &&
           (lVar15 = (longlong)(param_1->CacheEntries).ArrayMax,
           (FScriptContainerElement *)&local_68 < pFVar6 + lVar15 * 0x10)) {
          local_d0 = (longlong)(param_1->CacheEntries).ArrayNum;
          local_c8 = 0x10;
          local_e8 = &local_68;
          local_e0 = pFVar6;
          local_d8 = lVar15;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = (param_1->CacheEntries).ArrayNum;
        piVar1 = &(param_1->CacheEntries).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)param_1,piVar1);
        }
        (param_1->CacheEntries).ArrayNum = iVar10 + 1;
        pFVar6 = (param_1->CacheEntries).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(undefined8 *)pFVar6 = local_68;
        *(ulonglong *)(pFVar6 + 8) = CONCAT53(uStack_5d,CONCAT12(uStack_5e,uStack_60));
      }
    }
    else if ((pvVar4 != (void *)0x0) &&
            (FVar16 == ReplicationStateDescriptorBuilder_NAME_NetCullDistanceSquared)) {
      pFVar5 = *(FName **)((longlong)pvVar4 + 8);
      FVar16 = *pFVar5;
      FVar9 = FNameEntryId::FromValidEName((EName)local_90);
      FVar13.Number = 0;
      FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar9.Value);
      if (FVar16 == FVar13) {
        local_68 = 0x6bb13a5c1a655157;
        goto LAB_1441ff690;
      }
      if (2 < (byte)LogIris._0_1_) {
        local_88 = *pFVar5;
        ::FName::ToString(&local_88,&local_78);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
    if (((*(longlong *)(pFVar17 + 8) != 0) && (((byte)pFVar17[0x40] & 4) == 0)) &&
       (uVar2 = *(ushort *)(*(longlong *)(pFVar17 + 8) + 0x80), uVar2 != 0)) {
      param_1->TagCount = param_1->TagCount + (uint)uVar2;
      pFVar6 = (param_1->CacheEntries).AllocatorInstance.Data;
      local_58 = 0;
      uStack_4e = 1;
      uStack_50 = uVar18;
      if ((pFVar6 <= (FScriptContainerElement *)&local_58) &&
         (lVar15 = (longlong)(param_1->CacheEntries).ArrayMax,
         (FScriptContainerElement *)&local_58 < pFVar6 + lVar15 * 0x10)) {
        local_d0 = (longlong)(param_1->CacheEntries).ArrayNum;
        local_c8 = 0x10;
        local_e8 = &local_58;
        local_e0 = pFVar6;
        local_d8 = lVar15;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = (param_1->CacheEntries).ArrayNum;
      piVar1 = &(param_1->CacheEntries).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)param_1,piVar1);
      }
      (param_1->CacheEntries).ArrayNum = iVar10 + 1;
      pFVar6 = (param_1->CacheEntries).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar6 = local_58;
      *(ulonglong *)(pFVar6 + 8) = CONCAT53(uStack_4d,CONCAT12(uStack_4e,uStack_50));
    }
    uVar18 = uVar18 + 1;
    pFVar17 = pFVar17 + 0x48;
  } while( true );
}

// BuildMemberTagDescriptors @ 1441ff860

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberTagDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberTagDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  FReplicationStateMemberTagDescriptor *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  FReplicationStateDescriptor *local_res18;
  FReplicationStateDescriptor **local_res20;
  
  local_res18 = param_2;
  if ((param_2->MemberDescriptors == (FReplicationStateMemberDescriptor *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Descriptor->MemberDescriptors",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                         ,0x4ab,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (param_3->MemberTagCache).CacheEntries.ArrayNum;
  pFVar11 = (param_3->MemberTagCache).CacheEntries.AllocatorInstance.Data;
  pFVar4 = (param_3->MemberCache).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar3 * 0x10;
  pFVar9 = param_1;
  do {
    while( true ) {
      if ((param_3->MemberTagCache).CacheEntries.ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberTagCacheEntry_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar10) {
        if (0xfffd < (param_3->MemberTagCache).TagCount) {
          local_res20 = &local_res18;
          `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberTagDescriptors'
          ::__l2::<lambda_1>::operator()(&local_res20);
        }
        local_res18->MemberTagDescriptors = param_1;
        local_res18->TagCount = (ushort)(param_3->MemberTagCache).TagCount;
        return;
      }
      if (pFVar11[10] != (FScriptContainerElement)0x0) break;
      pFVar9->Tag = *(ulong64 *)pFVar11;
      pFVar9->MemberIndex = *(ushort *)(pFVar11 + 8);
      pFVar9->InnerTagIndex = 0xffff;
      pFVar9 = pFVar9 + 1;
LAB_1441ff958:
      pFVar11 = pFVar11 + 0x10;
    }
    uVar8 = 0;
    lVar5 = *(longlong *)(pFVar4 + (ulonglong)*(ushort *)(pFVar11 + 8) * 0x48 + 8);
    uVar1 = *(ushort *)(lVar5 + 0x80);
    if (uVar1 == 0) goto LAB_1441ff958;
    do {
      pFVar9->Tag = *(ulong64 *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)uVar8 * 0x10);
      uVar2 = *(ushort *)(pFVar11 + 8);
      pFVar9->InnerTagIndex = uVar8;
      uVar8 = uVar8 + 1;
      pFVar9->MemberIndex = uVar2;
      pFVar9 = pFVar9 + 1;
    } while (uVar8 != uVar1);
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// BuildMemberTraitsDescriptors @ 1441ff9c0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberTraitsDescriptors
          (FPropertyReplicationStateDescriptorBuilder *this,
          FReplicationStateMemberTraitsDescriptor *param_1,FReplicationStateDescriptor *param_2,
          FBuilderContext *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EReplicationStateMemberTraits EVar3;
  FScriptContainerElement *pFVar4;
  FReplicationStateMemberTraitsDescriptor *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Members).ArrayNum;
  pFVar4 = (this->Members).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x48;
  pFVar5 = param_1;
  while( true ) {
    if ((this->Members).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar5->Traits =
         pFVar5->Traits |
         (EReplicationStateMemberTraits)(*(uint *)(pFVar4 + 0x20) >> 5) & HasDynamicState;
    EVar3 = (EReplicationStateMemberTraits)(*(uint *)(pFVar4 + 0x20) >> 5) & HasObjectReference |
            pFVar5->Traits;
    pFVar5->Traits = EVar3;
    EVar3 = *(EReplicationStateMemberTraits *)(pFVar4 + 0x20) & HasRepNotifyAlways | EVar3;
    pFVar5->Traits = EVar3;
    EVar3 = (EReplicationStateMemberTraits)(*(uint *)(pFVar4 + 0x20) >> 0xe) & UseSerializerIsEqual
            | EVar3;
    pFVar5->Traits = EVar3;
    pFVar5->Traits =
         (EReplicationStateMemberTraits)(*(uint *)(pFVar4 + 0x20) >> 0xc) & HasPushBasedDirtiness |
         EVar3;
    pFVar5 = pFVar5 + 1;
    pFVar4 = pFVar4 + 0x48;
  }
  param_2->MemberTraitsDescriptors = param_1;
  return;
}

// BuildReplicationStateInternal @ 144200410

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildReplicationStateInternal
          (FPropertyReplicationStateDescriptorBuilder *this,FReplicationStateDescriptor *param_1,
          FBuilderContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (param_2->External).Size + 3 & 0xfffffffffffffffc;
  if (uVar4 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalStateOffset == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                       ,0x440,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (param_2->External).Size = uVar4 + 4;
  uVar3 = 4;
  if (4 < (param_2->External).Alignment) {
    uVar3 = (param_2->External).Alignment;
  }
  (param_2->External).Alignment = uVar3;
  return;
}

// BuildReplicationStateTraits @ 144200480

EReplicationStateTraits __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildReplicationStateTraits
          (FPropertyReplicationStateDescriptorBuilder *this,FBuilderContext *param_1)

{
  bool bVar1;
  EMemberPropertyTraits EVar2;
  EMemberPropertyTraits EVar3;
  EStructNetSerializerType EVar4;
  int iVar5;
  UClass *pUVar6;
  EReplicationStateTraits EVar7;
  EReplicationStateTraits EVar8;
  UStruct *pUVar9;
  
  EVar2 = param_1->CombinedPropertyTraits;
  bVar1 = (param_1->BuildParams).bIsInitState;
  EVar3 = param_1->SharedPropertyTraits;
  EVar8 = None;
  if ((EVar2 >> 1 & 1) == 0) {
    if (bVar1 != false) goto LAB_1442004cc;
  }
  else if (bVar1 == false) {
    EVar8 = HasLifetimeConditionals;
  }
  else {
LAB_1442004cc:
    EVar8 = InitOnly;
  }
  EVar7 = EVar8;
  if (((EVar2 & (RepNotifyAlways|RepNotifyOnChanged)) != None) &&
     (EVar7 = EVar8 | HasRepNotifies, (EVar2 >> 4 & 1) != 0)) {
    EVar7 = EVar8 | (KeepPreviousState|HasRepNotifies);
  }
  EVar8 = EVar7 | HasDynamicState;
  if ((EVar2 >> 5 & 1) == 0) {
    EVar8 = EVar7;
  }
  EVar7 = EVar8 | HasObjectReference;
  if ((EVar2 >> 6 & 1) == 0) {
    EVar7 = EVar8;
  }
  EVar8 = EVar7 | HasConnectionSpecificSerialization;
  if ((EVar2 >> 0x10 & 1) == 0) {
    EVar8 = EVar7;
  }
  EVar7 = EVar8 | UseSerializerIsEqual;
  if ((EVar2 >> 0x12 & 1) == 0) {
    EVar7 = EVar8;
  }
  EVar8 = EVar7;
  if (((EVar2 >> 0x11 & 1) != 0) &&
     (EVar8 = EVar7 | HasPushBasedDirtiness, (EVar3 >> 0x11 & 1) != 0)) {
    EVar8 = EVar7 | (HasFullPushBasedDirtiness|HasPushBasedDirtiness);
  }
  if ((param_1->BuildParams).DescriptorType == Struct) {
    EVar4 = (this->StructInfo).SerializerType;
    if (EVar4 == DerivedFromCustom) {
      EVar8 = EVar8 | IsDerivedFromStructWithCustomSerializer;
    }
    else if (EVar4 == Custom) {
      EVar8 = EVar8 | IsStructWithCustomSerializer;
    }
  }
  if ((param_1->BuildParams).bAllMembersAreReplicated == false) goto LAB_1442005f8;
  pUVar9 = (this->StructInfo).Struct;
  if (pUVar9 == (UStruct *)0x0) {
LAB_1442005a8:
    pUVar9 = (UStruct *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_1442005a8;
  }
  if (((EVar3 >> 8 & 1) != 0) &&
     ((pUVar9 == (UStruct *)0x0 || ((pUVar9[1]._padding_ & 0xa000) != 0)))) {
    EVar8 = EVar8 | IsSourceTriviallyConstructible;
  }
  if (((EVar3 >> 9 & 1) != 0) &&
     ((pUVar9 == (UStruct *)0x0 || ((pUVar9[1]._padding_ & 0x6000) != 0)))) {
    EVar8 = EVar8 | IsSourceTriviallyDestructible;
  }
  EVar8 = EVar8 | AllMembersAreReplicated;
LAB_1442005f8:
  if (((EVar3 >> 0xb & 1) != 0) && ((this->Members).ArrayNum == 1)) {
    EVar8 = EVar8 | (EVar2 >> 0xc & 1) << 0xb | IsFastArrayReplicationState;
  }
  if (((bVar1 == false) && ((param_1->BuildParams).DescriptorType != Function)) &&
     (0 < (this->Members).ArrayNum)) {
    EVar8 = EVar8 | SupportsDeltaCompression;
  }
  if (((param_1->MemberFunctionCache).ArrayNum != 0) && ((this->Members).ArrayNum == 0)) {
    EVar8 = EVar8 | (HasFullPushBasedDirtiness|HasPushBasedDirtiness);
  }
  return EVar8 | NeedsRefCount;
}

// CalculateDefaultStateChecksum @ 144200670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::CalculateDefaultStateChecksum
          (FPropertyReplicationStateDescriptorBuilder *this,FReplicationStateDescriptor *param_1,
          UReplicationSystem *param_2,uchar *param_3,ulong64 *param_4)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *this_00;
  longlong lVar6;
  FInternalNetSerializationContext *pFVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  ForElementType<unsigned_int> FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStackY_878 [32];
  FNetBitStreamWriter local_848;
  FInternalNetSerializationContext local_828;
  FInternalNetSerializationContext local_7f0;
  FNetRefHandle_u_0 local_7b8;
  longlong local_7b0;
  undefined8 local_7a0 [95];
  undefined4 local_4a8;
  undefined8 local_4a0;
  FNetBitStreamWriter *local_498;
  undefined8 local_490;
  FInternalNetSerializationContext *local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  uint local_458;
  TArray<unsigned_int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_448;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  this_00 = Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar11 = (ulonglong)*(uint *)&pUVar1[1].field_0x4 * (ulonglong)*(uint *)(pUVar1 + 1);
  uVar12 = uVar11 >> 5;
  if (0x7ffffffe < uVar12) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxBufferSize/4 < std::numeric_limits<int32>::max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                       ,0x396,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_448.ArrayMax = 0x100;
  local_448.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_448.ArrayNum = 0;
  iVar5 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,0x100,&local_448.AllocatorInstance,&local_448.ArrayNum,&local_448.ArrayMax)
  ;
  FVar10 = (ForElementType<unsigned_int>)&local_448;
  if (local_448.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_448.AllocatorInstance.SecondaryData;
  }
  memset((char *)((longlong)FVar10 + (longlong)iVar5 * 4),0,0x400);
  FNetBitStreamWriter::FNetBitStreamWriter(&local_848);
  lVar6 = 0x20;
  local_7b8.Value = 0;
  puVar9 = local_7a0;
  local_7b0 = 0;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  local_458 = local_458 & 0xfffffffc;
  local_498 = &local_848;
  local_828.bSerializeObjectReferencesAsRemoteIds = 0;
  local_828.bInlineObjectReferenceExports = 0;
  local_828.bDowngradeAutonomousProxyRole = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_490 = 0;
  local_488 = (FInternalNetSerializationContext *)0x0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  local_460 = 0;
  local_45c = 0xffffffff;
  local_828.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  local_828.ResolveContext.ConnectionId = 0;
  local_828.ResolveContext.AsyncLoadingPriority = -1;
  local_828.ResolveContext._16_8_ = local_828.ResolveContext._16_8_ & 0xffffffffffffff00;
  local_828.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  local_828.ReplicationSystem = (UReplicationSystem *)0x0;
  local_828.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  if (param_2 == (UReplicationSystem *)0x0) {
    local_828.PackageMap = GetOrCreateIrisObjectReferencePackageMap();
  }
  else {
    pFVar7 = FInternalNetSerializationContext::FInternalNetSerializationContext(&local_7f0,param_2);
    local_828.ReplicationSystem = pFVar7->ReplicationSystem;
    local_828.ObjectReferenceCache = pFVar7->ObjectReferenceCache;
    local_828.ResolveContext.RemoteNetTokenStoreState =
         (pFVar7->ResolveContext).RemoteNetTokenStoreState;
    local_828.ResolveContext.ConnectionId = (pFVar7->ResolveContext).ConnectionId;
    local_828.ResolveContext.AsyncLoadingPriority = (pFVar7->ResolveContext).AsyncLoadingPriority;
    local_828.ResolveContext._16_8_ = *(undefined8 *)&(pFVar7->ResolveContext).bForceSyncLoad;
    local_828.PackageMap = pFVar7->PackageMap;
    local_828._48_8_ = *(undefined8 *)&pFVar7->field_0x30;
  }
  local_458 = local_458 | 2;
  local_488 = &local_828;
  FVar10 = (ForElementType<unsigned_int>)&local_448;
  if (local_448.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_448.AllocatorInstance.SecondaryData;
  }
  FNetBitStreamWriter::InitBytes(&local_848,(void *)FVar10,0x400);
  FReplicationStateOperations::Serialize
            ((FNetSerializationContext *)&local_7b8._s_0,param_1->DefaultStateBuffer,param_1);
  if (local_848.OverflowBitCount != 0) {
    TArray<unsigned_int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_448,(int)uVar12,Default);
    FVar10 = (ForElementType<unsigned_int>)&local_448;
    if (local_448.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_448.AllocatorInstance.SecondaryData;
    }
    FNetBitStreamWriter::InitBytes(&local_848,(void *)FVar10,(uint)(uVar11 >> 3));
    FReplicationStateOperations::Serialize
              ((FNetSerializationContext *)&local_7b8._s_0,param_1->DefaultStateBuffer,param_1);
  }
  uVar13 = -(local_848.BufferBitPosition - local_848.BufferBitStartOffset) & 7;
  if (uVar13 != 0) {
    FNetBitStreamWriter::WriteBits(&local_848,0,uVar13);
  }
  if (local_7b0 == 0) {
    bVar3 = FNetSerializationContext::IsBitStreamOverflown
                      ((FNetSerializationContext *)&local_7b8._s_0);
    if (!bVar3) {
      FNetBitStreamWriter::CommitWrites(&local_848);
      FVar10 = (ForElementType<unsigned_int>)&local_448;
      if (local_448.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_448.AllocatorInstance.SecondaryData;
      }
      uVar8 = CityHash64((char *)FVar10,
                         (local_848.BufferBitPosition - local_848.BufferBitStartOffset) + 7 >> 3);
      *param_4 = uVar8;
      bVar3 = true;
      goto LAB_144200972;
    }
  }
  bVar3 = false;
LAB_144200972:
  FNetBitStreamWriter::~FNetBitStreamWriter(&local_848);
  if (local_448.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_448.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// CanStructUseStructNetSerializer @ 144200f30

bool __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::CanStructUseStructNetSerializer
          (FName param_1)

{
  FName *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *this;
  FName *pFVar7;
  
  if (bUseSupportsStructNetSerializerList) {
    this = UReplicationStateDescriptorConfig::StaticClass();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar2 = *(int *)&pUVar3[1].field_0x8;
    pFVar7 = *(FName **)(pUVar3 + 1);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar1 = (FName *)((longlong)pFVar7 + (longlong)iVar2 * 0xc);
    for (; pFVar7 != pFVar1; pFVar7 = (FName *)&pFVar7[1].Number) {
      if (*pFVar7 == param_1) {
        return (bool)(char)pFVar7[1].ComparisonIndex.Value;
      }
    }
  }
  return false;
}

// CreateDescriptorForProperty @ 1442028c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::CreateDescriptorForProperty
          (FPropertyReplicationStateDescriptorBuilder *this,FString *param_1,FProperty *param_2,
          FParameters *param_3)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FReplicationStateDescriptorRegistry *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar6;
  UObject *pUVar7;
  FPropertyNetSerializerInfo *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  UObject *this_01;
  bool bVar14;
  longlong *in_stack_00000028;
  undefined1 local_118 [8];
  FFieldObjectUnion local_110;
  FWeakObjectPtr local_108 [2];
  FPropertyReplicationStateDescriptorBuilder local_f8;
  FMemberProperty local_a8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId575,
               "FPropertyReplicationStateDescriptorBuilder_CreateDescriptorForProperty",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
               ,0x23f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId575);
  }
  pUVar13 = (UObject *)0x0;
  plVar1 = (longlong *)*in_stack_00000028;
  if (plVar1 != (longlong *)0x0) {
    if ((((ulonglong)param_3 & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar6.Reference;
    }
    if (((ulonglong)param_3 & 1) == 0) {
      pUVar7 = param_3->DefaultStateSource;
      while (((((ulonglong)pUVar7 & 1) == 0 ||
              ((UObject *)((ulonglong)pUVar7 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
             (GC::GIsIncrementalReachabilityPending == false))) {
        if ((((ulonglong)pUVar7 & 1) != 0) || (((ulonglong)pUVar7 & 0xfffffffffffffffe) == 0))
        goto LAB_1442029f0;
        pUVar7 = *(UObject **)((longlong)pUVar7 + 0x10);
      }
      GC::MarkAsReachable((UObject *)((ulonglong)pUVar7 & 0xfffffffffffffffe));
LAB_1442029f0:
      pUVar12 = (UObject *)((ulonglong)pUVar7 & 0xfffffffffffffffe);
      if (((ulonglong)pUVar7 & 1) == 0) {
        pUVar12 = pUVar13;
      }
    }
    else {
      pUVar12 = (UObject *)((ulonglong)param_3 & 0xfffffffffffffffe);
    }
    uVar10 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    pUVar7 = pUVar13;
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar11 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar11 = plVar1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar11 +
                      (ulonglong)((int)plVar1[9] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
      if (iVar5 != -1) {
        do {
          pUVar7 = (UObject *)((longlong)iVar5 * 0x30 + *plVar1);
          if (*(FParameters **)pUVar7 == param_3) break;
          iVar5 = *(int *)(pUVar7 + 1);
          pUVar7 = pUVar13;
        } while (iVar5 != -1);
      }
    }
    this_01 = (UObject *)&pUVar7->field_0x8;
    if (pUVar7 == (UObject *)0x0) {
      this_01 = pUVar13;
    }
    if ((pUVar12 == (UObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectForPruning != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                           ,0x5d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar6.Reference;
    }
    if ((this_01 != (UObject *)0x0) &&
       (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01), pUVar7 == pUVar12)) {
      if (((ulonglong)param_3 & 1) != 0) {
        local_108[0].ObjectIndex = *(int *)&this_01->field_0x18;
        local_108[0].ObjectSerialNumber = *(int *)&this_01->field_0x1c;
        pUVar7 = FWeakObjectPtr::Get(local_108);
        if (pUVar7 == (UObject *)0x0) {
          if (6 < (byte)LogIris._0_1_) {
            Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          }
          goto LAB_144202b17;
        }
      }
      if (&this_01->field_0x8 != (undefined1 *)0x0) {
        if ((*(int *)&this_01->field_0x10 != 1) &&
           (bVar4 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6449277768747187641>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                               ,0x247,"Result->Num() == 1"), bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar6.Reference;
        }
        if ((*(int *)&this_01->field_0x10 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar6.Reference;
        }
        pFVar2 = (FScriptContainerElement *)**(longlong **)&this_01->field_0x8;
        (param_1->Data).AllocatorInstance.Data = pFVar2;
        if ((pFVar2 != (FScriptContainerElement *)0x0) && (((byte)pFVar2[0xb8] & 8) != 0)) {
          LOCK();
          *(int *)(pFVar2 + 0xbc) = *(int *)(pFVar2 + 0xbc) + 1;
          UNLOCK();
        }
        goto LAB_144202ec0;
      }
    }
  }
LAB_144202b17:
  local_f8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.StructInfo.SizeAndAlignment.Size = 0;
  local_f8.StructInfo.SizeAndAlignment.Alignment = 0;
  local_f8.Name.Data.ArrayNum = 0;
  local_f8.Name.Data.ArrayMax = 0;
  local_f8.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Members.ArrayNum = 0;
  local_f8.Members.ArrayMax = 0;
  local_f8.Functions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Functions.ArrayNum = 0;
  local_f8.Functions.ArrayMax = 0;
  local_f8.StructInfo.Struct = (UStruct *)0x0;
  local_f8.StructInfo.SerializerType = Struct;
  local_a8.PropertyRepNotifyFunction = (UFunction *)0x0;
  local_a8.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_a8.Traits = None;
  local_a8.ReplicationCondition = COND_None;
  local_a8.ChangeMaskGroupName.ComparisonIndex.Value = 0;
  local_a8.ChangeMaskGroupName.Number = 0;
  pFVar8 = FPropertyNetSerializerInfoRegistry::FindSerializerInfo((FProperty *)param_3);
  if (pFVar8 == (FPropertyNetSerializerInfo *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6449277768747187631>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                       ,0x251,"bIsSupportedProperty");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar6.Reference;
    }
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_a8.ChangeMaskBits = 1;
    local_a8.ExternalSizeAndAlignment.Size = 0;
    local_a8.ExternalSizeAndAlignment.Alignment = 0;
    local_a8.Property = (FProperty *)param_3;
    local_a8.SerializerInfo = pFVar8;
    GetIrisPropertyTraits
              (&local_a8,(FProperty *)param_3,
               (TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *)0x0,(UClass *)0x0);
    GetSerializerTraits(&local_a8,(FProperty *)param_3,pFVar8,false);
    if (((local_a8.Traits >> 0xb & 1) != 0) ||
       (((local_a8.Traits >> 10 & 1) != 0 && (bIrisUseChangeMaskForTArray != false)))) {
      local_a8.ChangeMaskBits = 0x40;
    }
    if (local_a8.CreateAndRegisterReplicationFragmentFunction ==
        (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
         *)0x0) {
      local_a8.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)(**(code **)(pFVar8->_padding_ + 0x28))(pFVar8);
    }
    if (((local_f8.Members.AllocatorInstance.Data <= &local_a8) &&
        (&local_a8 <
         (FMemberProperty *)
         (local_f8.Members.AllocatorInstance.Data + (longlong)local_f8.Members.ArrayMax * 0x48))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar6.Reference;
    }
    iVar5 = local_f8.Members.ArrayNum;
    if (local_f8.Members.ArrayNum == local_f8.Members.ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&local_f8.Members.AllocatorInstance,&local_f8.Members.ArrayMax);
    }
    local_f8.Members.ArrayNum = iVar5 + 1;
    lVar9 = (longlong)iVar5;
    *(FProperty **)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48) = local_a8.Property;
    *(UFunction **)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 8) =
         local_a8.PropertyRepNotifyFunction;
    *(FPropertyNetSerializerInfo **)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 0x10)
         = local_a8.SerializerInfo;
    *(_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
      **)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 0x10 + 8) =
         local_a8.CreateAndRegisterReplicationFragmentFunction;
    *(undefined8 *)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 0x20) = local_a8._32_8_
    ;
    *(ulonglong *)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 0x20 + 8) =
         CONCAT44(local_a8.ChangeMaskGroupName.ComparisonIndex.Value,
                  CONCAT22(local_a8._42_2_,local_a8.ChangeMaskBits));
    *(ulonglong *)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 0x30) =
         CONCAT44(local_a8._52_4_,local_a8.ChangeMaskGroupName.Number);
    *(ulong64 *)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 0x30 + 8) =
         local_a8.ExternalSizeAndAlignment.Size;
    *(ulong64 *)(local_f8.Members.AllocatorInstance.Data + lVar9 * 0x48 + 0x40) =
         local_a8.ExternalSizeAndAlignment.Alignment;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_2b = 1;
    local_30 = 4;
    local_2c = 0;
    Build(&local_f8,(FString *)local_118,(FReplicationStateDescriptorRegistry *)param_2,
          (FBuildParameters *)*in_stack_00000028);
    this_00 = (FReplicationStateDescriptorRegistry *)*in_stack_00000028;
    if ((this_00 != (FReplicationStateDescriptorRegistry *)0x0) &&
       (local_118 != (undefined1  [8])0x0)) {
      local_110 = (FFieldObjectUnion)param_3;
      if (((ulonglong)param_3 & 1) == 0) {
LAB_144202e0f:
        pUVar7 = *(UObject **)(local_110.Unknown + 0x10);
        while (((((ulonglong)pUVar7 & 1) == 0 ||
                ((UObject *)((ulonglong)pUVar7 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
               (GC::GIsIncrementalReachabilityPending == false))) {
          if ((((ulonglong)pUVar7 & 1) != 0) || (((ulonglong)pUVar7 & 0xfffffffffffffffe) == 0))
          goto LAB_144202e64;
          pUVar7 = *(UObject **)((longlong)pUVar7 + 0x10);
        }
        GC::MarkAsReachable((UObject *)((ulonglong)pUVar7 & 0xfffffffffffffffe));
LAB_144202e64:
        pUVar12 = (UObject *)((ulonglong)pUVar7 & 0xfffffffffffffffe);
        if (((ulonglong)pUVar7 & 1) == 0) {
          pUVar12 = pUVar13;
        }
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
          return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar6.Reference;
        }
        if ((local_110.Unknown & 1) == 0) goto LAB_144202e0f;
        pUVar12 = (UObject *)(local_110.Unknown & 0xfffffffffffffffe);
      }
      FReplicationStateDescriptorRegistry::Register
                (this_00,(FFieldVariant *)&local_110,pUVar12,
                 (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)local_118);
    }
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_118;
    local_118 = (undefined1  [8])0x0;
  }
  if (local_f8.Functions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Functions.AllocatorInstance.Data);
  }
  if ((FMemberProperty *)local_f8.Members.AllocatorInstance.Data != (FMemberProperty *)0x0) {
    FMemory::Free(local_f8.Members.AllocatorInstance.Data);
  }
  if (local_f8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Name.Data.AllocatorInstance.Data);
  }
LAB_144202ec0:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// FinalizeDescriptor @ 144208d40

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FinalizeDescriptor
          (FPropertyReplicationStateDescriptorBuilder *this,FReplicationStateDescriptor *param_1,
          FBuilderContext *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = (param_2->External).Alignment;
  uVar2 = (param_2->Internal).Alignment;
  uVar3 = (param_2->External).Size;
  uVar4 = (param_2->Internal).Size;
  param_1->ExternalAlignment = (ushort)uVar1;
  iVar6 = (int)uVar1;
  iVar5 = (int)uVar2;
  param_1->ExternalSize = (int)uVar3 + -1 + iVar6 & ~(iVar6 - 1U);
  param_1->InternalAlignment = (ushort)(param_2->Internal).Alignment;
  param_1->InternalSize = (int)uVar4 + -1 + iVar5 & ~(iVar5 - 1U);
  return;
}

// FindSuperStructWithCustomSerializer @ 144209470

UStruct * __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FindSuperStructWithCustomSerializer
          (UStruct *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FFieldClass *pFVar5;
  UStruct *pUVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  longlong lVar12;
  FIdentityFunctor local_res8 [8];
  
  pUVar6 = (param_1->SuperStruct).field0_0x0.DebugPtr;
  uVar7 = FPropertyNetSerializerInfoRegistry::Registry._8_8_;
joined_r0x00014420948d:
  if (pUVar6 == (UStruct *)0x0) {
    FPropertyNetSerializerInfoRegistry::Registry.ArrayNum =
         FPropertyNetSerializerInfoRegistry::Registry.ArrayNum;
    FPropertyNetSerializerInfoRegistry::Registry.ArrayMax =
         FPropertyNetSerializerInfoRegistry::Registry.ArrayMax;
    return (UStruct *)0x0;
  }
  lVar1 = pUVar6->_padding_;
  if (FPropertyNetSerializerInfoRegistry::bRegistryIsDirty != false) {
    AlgoImpl::
    IntroSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
              ((TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)
               FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data,(int)uVar7,
               local_res8[0],(<lambda_1> *)local_res8);
    FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = false;
  }
  pFVar5 = FStructProperty::StaticClass();
  for (FVar10 = FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance;
      uVar7 = FPropertyNetSerializerInfoRegistry::Registry._8_8_,
      FVar10.Data !=
      FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data +
      (longlong)FPropertyNetSerializerInfoRegistry::Registry.ArrayNum * 0x10;
      FVar10.Data = FVar10.Data + 0x10) {
    if (*(FFieldClass **)FVar10.Data == pFVar5) {
      uVar11 = (longlong)FVar10.Data -
               (longlong)FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data >> 4;
      iVar8 = (int)uVar11;
      if ((iVar8 != -1) && (iVar8 < FPropertyNetSerializerInfoRegistry::Registry.ArrayNum)) {
        lVar12 = (longlong)iVar8 << 4;
        goto LAB_144209530;
      }
      break;
    }
  }
  goto LAB_1442095f4;
  while( true ) {
    uVar4 = 0;
    if ((int)uVar9 < (int)uVar7) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar7 = FPropertyNetSerializerInfoRegistry::Registry._8_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UStruct *)(*pcVar2)();
      return pUVar6;
    }
    if (*(longlong *)
         (*(longlong *)
           (FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data + lVar12 + 8) + 8)
        == lVar1) {
      return pUVar6;
    }
    uVar11 = (ulonglong)(uVar9 + 1);
    lVar12 = lVar12 + 0x10;
    if ((int)uVar7 <= (int)(uVar9 + 1)) break;
LAB_144209530:
    uVar9 = (uint)uVar11;
    uVar4 = 0;
    if ((int)uVar9 < (int)uVar7) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar7 = FPropertyNetSerializerInfoRegistry::Registry._8_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UStruct *)(*pcVar2)();
      return pUVar6;
    }
    if (*(FFieldClass **)
         (FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data + lVar12) != pFVar5)
    break;
  }
LAB_1442095f4:
  pUVar6 = (pUVar6->SuperStruct).field0_0x0.DebugPtr;
  goto joined_r0x00014420948d;
}

// FixupDescriptorForNativeFastArray @ 1442099d0

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FixupDescriptorForNativeFastArray
          (FPropertyReplicationStateDescriptorBuilder *this,FReplicationStateDescriptor *param_1)

{
  int iVar1;
  UStruct *this_00;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FProperty *pFVar5;
  
  param_1->MemberDescriptors->ExternalMemberOffset = 0;
  pFVar5 = *param_1->MemberProperties;
  if ((pFVar5 == (FProperty *)0x0) || ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x14 & 1) == 0))
  goto LAB_144209ae4;
  this_00 = (UStruct *)pFVar5[1]._padding_;
  if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIrisFastArraySerializer,(UObject *)pUVar4,
                         L"IrisFastArraySerializer");
    if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_144209a3f;
LAB_144209a63:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct->IsChildOf(FIrisFastArraySerializer::StaticStruct())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                       ,0x92e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
LAB_144209a3f:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton)->
                 _padding_;
    if (((int)this_00->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_144209a63;
  }
  pFVar5 = UStruct::FindPropertyByName(this_00,PropertyNetSerializerRegistry_NAME_ChangeMaskStorage)
  ;
  if (pFVar5 != (FProperty *)0x0) {
    if (-1 < (int)pFVar5->PropertyFlags) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(ChangeMaskProperty->PropertyFlags, EPropertyFlags::CPF_RepSkip)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                         ,0x935,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_1->ChangeMasksExternalOffset = pFVar5->Offset_Internal;
    return;
  }
LAB_144209ae4:
  param_1->ChangeMasksExternalOffset = 0;
  return;
}

// FixupNetRoleNetSerializerConfigs @ 144209b00

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FixupNetRoleNetSerializerConfigs
          (FPropertyReplicationStateDescriptorBuilder *this,FReplicationStateDescriptor *param_1)

{
  FReplicationStateMemberSerializerDescriptor *pFVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  FNetSerializerConfig *pFVar3;
  FNetSerializerConfig *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  FReplicationStateMemberSerializerDescriptor *pFVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = param_1->MemberSerializerDescriptors;
  uVar9 = 0xffffffff;
  pFVar7 = pFVar1;
  if (pFVar1 == pFVar1 + param_1->MemberCount) {
    return;
  }
  do {
    uVar5 = uVar9;
    if (pFVar7->Serializer == &FNetRoleNetSerializerNetSerializerInfo::Serializer) {
      uVar6 = (longlong)pFVar7 - (longlong)pFVar1 >> 4;
      uVar5 = (uint)uVar6;
      if (uVar9 != 0xffffffff) {
        if (uVar5 == 0xffffffff) {
          return;
        }
        pFVar2 = param_1->MemberDescriptors;
        uVar6 = uVar6 & 0xffffffff;
        iVar10 = pFVar2[uVar6].InternalMemberOffset - pFVar2[uVar9].InternalMemberOffset;
        iVar8 = pFVar2[uVar6].ExternalMemberOffset - pFVar2[uVar9].ExternalMemberOffset;
        pFVar3 = pFVar1[uVar6].SerializerConfig;
        pFVar4 = pFVar1[uVar9].SerializerConfig;
        *(int *)&pFVar4[1]._padding_ = iVar10;
        *(int *)((longlong)&pFVar4[1]._padding_ + 4) = iVar8;
        *(int *)((longlong)&pFVar3[1]._padding_ + 4) = -iVar8;
        *(int *)&pFVar3[1]._padding_ = -iVar10;
        return;
      }
    }
    uVar9 = uVar5;
    pFVar7 = pFVar7 + 1;
  } while (pFVar7 != pFVar1 + param_1->MemberCount);
  return;
}

// GetConnectionFilterTrait @ 144209ff0

EMemberPropertyTraits __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetConnectionFilterTrait
          (ELifetimeCondition param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  EMemberPropertyTraits local_78 [28];
  
  local_78[0] = HasLifetimeConditionals;
  local_78[0x16] = 0xd;
  local_78[1] = 2;
  uVar1 = 0;
  local_78[2] = 3;
  local_78[3] = 2;
  local_78[4] = 4;
  local_78[5] = 2;
  local_78[6] = 5;
  local_78[7] = 2;
  local_78[8] = 6;
  local_78[9] = 2;
  local_78[10] = 7;
  local_78[0xb] = 2;
  local_78[0xc] = 8;
  local_78[0xd] = 2;
  local_78[0xe] = 9;
  local_78[0xf] = 2;
  local_78[0x10] = 10;
  local_78[0x11] = 2;
  local_78[0x12] = 0xb;
  local_78[0x13] = 2;
  local_78[0x14] = 0xc;
  local_78[0x15] = 2;
  local_78[0x17] = 2;
  local_78[0x18] = 0xe;
  local_78[0x19] = 2;
  uVar2 = 0xd;
  do {
    uVar3 = uVar2 >> 1;
    if ((int)local_78[(uVar3 + uVar1) * 2] < (int)param_1) {
      uVar1 = (ulonglong)((uint)uVar2 & 1) + uVar3 + uVar1;
    }
    uVar2 = uVar3;
  } while (uVar3 != 0);
  if ((uVar1 < 0xd) && ((int)local_78[uVar1 * 2] <= (int)param_1)) {
    return local_78[uVar1 * 2 + 1];
  }
  return None;
}

// GetDescriptorForArrayProperty @ 14420a1d0

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetDescriptorForArrayProperty
          (FPropertyReplicationStateDescriptorBuilder *this,FProperty *param_1,
          FReplicationStateDescriptorRegistry *param_2)

{
  FParameters *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar4;
  ForAnyElementType local_38;
  longlong local_30;
  longlong local_20;
  longlong lStack_18;
  byte local_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_10 = local_10 & 0xe7 | 7;
  local_20 = 0;
  lStack_18 = 0;
  if ((param_2 == (FReplicationStateDescriptorRegistry *)0x0) ||
     ((*(uint *)(*(longlong *)&(param_2->RegisteredDescriptorsMap).field_0x8 + 0x18) >> 0x15 & 1) ==
      0)) {
    param_2 = (FReplicationStateDescriptorRegistry *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Reference = (FReplicationStateDescriptor *)(*pcVar2)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar4.Reference;
    }
  }
  pFVar1 = (FParameters *)((FProperty *)((longlong)param_2 + 0x70))->_padding_;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  GetPropertyPathName((FProperty *)param_2,(FString *)&stack0xffffffffffffffc8);
  CreateDescriptorForProperty(this,(FString *)param_1,(FProperty *)&stack0xffffffffffffffc8,pFVar1);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// GetDescriptorForStructProperty @ 14420a2d0

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetDescriptorForStructProperty
          (FPropertyReplicationStateDescriptorBuilder *this,FMemberProperty *param_1,
          FReplicationStateDescriptorRegistry *param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)&param_2->RegisteredDescriptorsMap;
  if ((lVar4 == 0) || ((*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) >> 0x14 & 1) == 0)) {
    lVar4 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FReplicationStateDescriptor *)(*pcVar1)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar3.Reference;
    }
  }
  FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
            ((UStruct *)param_1,*(FParameters **)(lVar4 + 0x70));
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// GetFastArrayChangeMaskOffset @ 14420a420

ulong64 __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetFastArrayChangeMaskOffset
          (FProperty *param_1)

{
  int iVar1;
  UStruct *this;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  ulong64 uVar5;
  FProperty *pFVar6;
  
  if (param_1 == (FProperty *)0x0) {
    return 0;
  }
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0) {
    return 0;
  }
  this = (UStruct *)param_1[1]._padding_;
  if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIrisFastArraySerializer,(UObject *)pUVar4,
                         L"IrisFastArraySerializer");
    if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14420a478;
  }
  else {
LAB_14420a478:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton)->
                 _padding_;
    if (((int)this->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14420a4c2;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(FIrisFastArraySerializer::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                     ,0x92e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
LAB_14420a4c2:
  pFVar6 = UStruct::FindPropertyByName(this,PropertyNetSerializerRegistry_NAME_ChangeMaskStorage);
  if (pFVar6 == (FProperty *)0x0) {
    return 0;
  }
  if ((-1 < (int)pFVar6->PropertyFlags) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(ChangeMaskProperty->PropertyFlags, EPropertyFlags::CPF_RepSkip)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                         ,0x935,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return (longlong)pFVar6->Offset_Internal;
}

// GetFastArrayPropertyTraits @ 14420a530

/* WARNING: Enum "Type": Some values do not have unique names */

EMemberPropertyTraits __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetFastArrayPropertyTraits
          (FNetSerializer *param_1,FProperty *param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  FField *pFVar3;
  bool bVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  uint uVar7;
  UStruct *local_res8;
  FName local_res20;
  TFieldIterator<FProperty> local_b8;
  FMemberProperty local_98;
  FIsSupportedPropertyParams local_48;
  
  if (param_1 == &FStructNetSerializerNetSerializerInfo::Serializer) {
    if (param_2 == (FProperty *)0x0) {
      return None;
    }
    if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0) {
      return None;
    }
    local_res8 = (UStruct *)param_2[1]._padding_;
    pUVar6 = FFastArraySerializer::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)local_res8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar7 = 0;
        local_98.Property = (FProperty *)0x0;
        local_98.PropertyRepNotifyFunction = (UFunction *)0x0;
        local_98.SerializerInfo = (FPropertyNetSerializerInfo *)0x0;
        local_98.CreateAndRegisterReplicationFragmentFunction =
             (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
              *)0x0;
        local_98.Traits = None;
        local_98.ReplicationCondition = COND_None;
        local_98.ChangeMaskBits = 0;
        local_98.ChangeMaskGroupName.ComparisonIndex.Value = 0;
        local_98.ChangeMaskGroupName.Number = 0;
        local_98.ExternalSizeAndAlignment.Size = 0;
        local_98.ExternalSizeAndAlignment.Alignment = 0;
        bVar4 = IsStructWithCustomSerializer(local_res8);
        if (!bVar4) {
          bVar4 = false;
          local_b8.Struct = local_res8;
          if (local_res8 == (UStruct *)0x0) {
            local_b8.Field = (FField *)0x0;
          }
          else {
            local_b8.Field = local_res8->ChildProperties;
          }
          local_b8.InterfaceIndex = -1;
          local_b8.bIncludeSuper = true;
          local_b8.bIncludeDeprecated = true;
          local_b8.bIncludeInterface = false;
          TFieldIterator<FProperty>::IterateToNext(&local_b8);
          if ((FProperty *)local_b8.Field != (FProperty *)0x0) {
            do {
              pFVar3 = local_b8.Field;
              if (-1 < (int)*(EPropertyFlags *)((longlong)local_b8.Field + 0x38)) {
                local_48.bAllowFastArrayWithExtraReplicatedProperties = false;
                uVar7 = uVar7 + 1;
                local_48.LifeTimeProperties =
                     (TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *)0x0;
                local_48.InObjectClass = (UClass *)0x0;
                bVar5 = IsSupportedProperty(&local_98,(FProperty *)local_b8.Field,&local_48);
                if (!bVar5) {
                  return IsInvalidFastArray;
                }
                if ((local_98.Traits >> 0xe & 1) != 0) {
                  bVar4 = true;
                }
                if (!param_3) {
                  if (1 < uVar7) {
                    return IsInvalidFastArray;
                  }
                  if (local_98.Property == (FProperty *)0x0) {
                    return IsInvalidFastArray;
                  }
                  if ((*(uint *)((local_98.Property)->_padding_ + 0x18) >> 0x15 & 1) == 0) {
                    return IsInvalidFastArray;
                  }
                }
              }
              local_b8.Field = pFVar3->Next;
              TFieldIterator<FProperty>::IterateToNext(&local_b8);
            } while ((FProperty *)local_b8.Field != (FProperty *)0x0);
            if (bVar4) {
              if ((bIrisUseNativeFastArray == false) || (uVar7 != 1)) {
                if (1 < uVar7) {
                  return IsFastArrayWithExtraProperties|IsFastArray;
                }
                return IsFastArray;
              }
              pUVar6 = FIrisFastArraySerializer::StaticStruct();
              if (pUVar6 == (UScriptStruct *)0x0) {
                return IsFastArray;
              }
              iVar1 = (int)pUVar6->_padding_;
              if (((int)local_res8->_padding_ < iVar1) ||
                 ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
                  &pUVar6->_padding_)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                return HasPushBasedDirtiness|IsNativeFastArray|IsFastArray;
              }
              return IsFastArray;
            }
          }
        }
        return IsInvalidFastArray;
      }
    }
    pUVar6 = FFastArraySerializerItem::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)local_res8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        bVar4 = IsStructWithCustomSerializer(local_res8);
        if (!bVar4) {
          return IsFastArrayItem;
        }
        if (1 < (byte)LogIris._0_1_) {
          local_res20 = (FName)local_res8->_padding_;
          ::FName::ToString(&local_res20,(FString *)&local_b8);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_b8.Struct != (UStruct *)0x0) {
            FMemory::Free(local_b8.Struct);
          }
        }
        local_res20 = (FName)&local_res8;
        `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetFastArrayPropertyTraits'::
        __l48::<lambda_1>::operator()(&local_res20);
      }
    }
  }
  else if ((((param_1 == &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) &&
            (param_2 != (FProperty *)0x0)) &&
           ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) != 0)) &&
          ((lVar2 = param_2[1]._padding_, lVar2 != 0 &&
           ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x14 & 1) != 0)))) {
    lVar2 = *(longlong *)(lVar2 + 0x70);
    pUVar6 = FFastArraySerializerItem::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return IsFastArrayItem;
      }
      return None;
    }
  }
  return None;
}

// GetHasObjectReferenceTraits @ 14420a8d0

EMemberPropertyTraits __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetHasObjectReferenceTraits
          (FNetSerializer *param_1)

{
  ENetSerializerTraits EVar1;
  bool bVar2;
  
  EVar1 = param_1->Traits;
  bVar2 = IsObjectReferenceNetSerializer(param_1);
  return (uint)bVar2 << 6 |
         -(uint)((EVar1 & HasCustomNetReference) != None) &
         (HasCustomObjectReference|HasObjectReference);
}

// GetInitOnlyTrait @ 14420a900

EMemberPropertyTraits __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetInitOnlyTrait
          (ELifetimeCondition param_1)

{
  return (EMemberPropertyTraits)(param_1 == COND_InitialOnly);
}

// GetIrisPropertyTraits @ 14420a9c0

void __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetIrisPropertyTraits
          (FMemberProperty *param_1,FProperty *param_2,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_3,UClass *param_4)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  EPropertyFlags EVar4;
  FFieldClass *pFVar5;
  _func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
  *p_Var6;
  code *pcVar7;
  bool bVar8;
  FFieldClass *pFVar9;
  UFunction *pUVar10;
  EMemberPropertyTraits EVar11;
  UFunction *pUVar12;
  uint uVar13;
  EMemberPropertyTraits EVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  EMemberPropertyTraits EVar17;
  EMemberPropertyTraits EVar18;
  UFunction *pUVar19;
  EMemberPropertyTraits local_c8 [28];
  UClass *local_58;
  
  pUVar10 = (UFunction *)0x0;
  pUVar19 = pUVar10;
  local_58 = param_4;
  if (param_3 != (TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar2 = param_2->RepIndex;
    if ((param_3->ArrayNum <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar19 = (UFunction *)((param_3->AllocatorInstance).Data + (ulonglong)uVar2 * 0x18);
  }
  EVar4 = param_2->PropertyFlags;
  pFVar9 = FArrayProperty::StaticClass();
  if ((pFVar9 == (FFieldClass *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x2dd,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (FFieldClass *)param_2->_padding_;
  uVar13 = 0;
  if (pFVar9->Id == CASTCLASS_None) {
    for (; pFVar5 != (FFieldClass *)0x0; pFVar5 = pFVar5->SuperClass) {
      if (pFVar5 == pFVar9) {
        uVar13 = 1;
        break;
      }
    }
  }
  else {
    uVar13 = (uint)((pFVar5->CastFlags & pFVar9->Id) != CASTCLASS_None);
  }
  EVar14 = -(uint)((EVar4 & (CPF_IsPlainOldData|CPF_ZeroConstructor)) != CPF_None) &
           IsSourceTriviallyConstructible |
           -(uint)((EVar4 & (CPF_NoDestructor|CPF_IsPlainOldData)) != CPF_None) &
           IsSourceTriviallyDestructible | uVar13 << 10;
  if (pUVar19 == (UFunction *)0x0) {
    param_1->PropertyRepNotifyFunction = (UFunction *)0x0;
    param_1->Traits = EVar14;
    param_1->ReplicationCondition = COND_None;
    param_1->CreateAndRegisterReplicationFragmentFunction =
         (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
          *)0x0;
  }
  else {
    iVar3 = *(int *)((longlong)&pUVar19->_padding_ + 4);
    local_c8[0xc] = 8;
    local_c8[0x16] = 0xd;
    EVar17 = None;
    local_c8[0] = HasLifetimeConditionals;
    local_c8[1] = 2;
    local_c8[2] = 3;
    local_c8[3] = 2;
    local_c8[4] = 4;
    local_c8[5] = 2;
    local_c8[6] = 5;
    local_c8[7] = 2;
    local_c8[8] = 6;
    local_c8[9] = 2;
    local_c8[10] = 7;
    local_c8[0xb] = 2;
    local_c8[0xd] = 2;
    local_c8[0xe] = 9;
    local_c8[0xf] = 2;
    local_c8[0x10] = 10;
    local_c8[0x11] = 2;
    local_c8[0x12] = 0xb;
    local_c8[0x13] = 2;
    local_c8[0x14] = 0xc;
    local_c8[0x15] = 2;
    local_c8[0x17] = 2;
    local_c8[0x18] = 0xe;
    local_c8[0x19] = 2;
    pUVar12 = pUVar10;
    uVar15 = 0xd;
    do {
      uVar16 = uVar15 >> 1;
      puVar1 = (undefined1 *)((longlong)&pUVar12->_padding_ + uVar16);
      if ((int)local_c8[(longlong)puVar1 * 2] < iVar3) {
        pUVar12 = (UFunction *)(puVar1 + ((uint)uVar15 & 1));
      }
      uVar15 = uVar16;
    } while (uVar16 != 0);
    EVar18 = EVar17;
    if ((pUVar12 < (UFunction *)&DAT_0000000d) && ((int)local_c8[(longlong)pUVar12 * 2] <= iVar3)) {
      EVar18 = local_c8[(longlong)pUVar12 * 2 + 1];
    }
    EVar14 = EVar14 | -(uint)(*(char *)((longlong)&pUVar19->_padding_ + 4) != '\0') &
                      HasPushBasedDirtiness | (uint)(iVar3 == 1) | EVar18;
    if (param_2->RepNotifyFunc != (FName)0x0) {
      pUVar10 = UClass::FindFunctionByName(local_58,param_2->RepNotifyFunc,IncludeSuper);
      iVar3 = (int)pUVar19->_padding_;
      EVar18 = EVar17;
      if (iVar3 == 1) {
        EVar18 = RepNotifyAlways;
      }
      EVar11 = EVar17;
      if (iVar3 == 0) {
        EVar11 = RepNotifyOnChanged;
      }
      if (pUVar10->NumParms != 0) {
        EVar17 = NeedPreviousState;
      }
      EVar14 = EVar14 | EVar18 | EVar11 | EVar17;
      if ((1 < pUVar10->NumParms) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PropertyRepNotifyFunction->NumParms < 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorBuilder.cpp"
                             ,0x828,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    p_Var6 = (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
              *)pUVar19->_padding_;
    param_1->PropertyRepNotifyFunction = pUVar10;
    param_1->Traits = EVar14;
    param_1->ReplicationCondition = *(ELifetimeCondition *)((longlong)&pUVar19->_padding_ + 4);
    param_1->CreateAndRegisterReplicationFragmentFunction = p_Var6;
  }
  return;
}

// GetOrCreateDescriptorForFunction @ 14420b0c0

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetOrCreateDescriptorForFunction
          (FPropertyReplicationStateDescriptorBuilder *this,UFunction *param_1,
          FReplicationStateDescriptorRegistry *param_2)

{
  FReplicationStateDescriptorBuilder::CreateDescriptorForFunction(param_1,(FParameters *)param_2);
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// GetPropertyPathName @ 14420ca80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetPropertyPathName
          (FProperty *param_1,FString *param_2)

{
  FField *pFVar1;
  code *pcVar2;
  bool bVar3;
  FFieldObjectUnion *pFVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FFieldVariant FVar7;
  size_t sVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  wchar_t *_Str;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_298 [32];
  FFieldObjectUnion local_278;
  undefined1 local_270 [8];
  FString local_268;
  FName local_258 [2];
  FString local_248;
  FFieldObjectUnion local_238 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  lVar9 = 4;
  pFVar4 = local_238;
  do {
    pFVar4->Field = (FField *)0x0;
    pFVar4[1].Field = (FField *)0x0;
    pFVar4[2].Field = (FField *)0x0;
    pFVar4[3].Field = (FField *)0x0;
    pFVar4[4].Field = (FField *)0x0;
    pFVar4[5].Field = (FField *)0x0;
    pFVar4[6].Field = (FField *)0x0;
    pFVar4[7].Field = (FField *)0x0;
    pFVar4[8].Field = (FField *)0x0;
    pFVar4[9].Field = (FField *)0x0;
    pFVar4[10].Field = (FField *)0x0;
    pFVar4[0xb].Field = (FField *)0x0;
    pFVar4[0xc].Field = (FField *)0x0;
    pFVar4[0xd].Field = (FField *)0x0;
    pFVar4[0xe].Field = (FField *)0x0;
    pFVar4[0xf].Field = (FField *)0x0;
    lVar9 = lVar9 + -1;
    pFVar4 = pFVar4 + 0x10;
  } while (lVar9 != 0);
  pUVar5 = Z_Construct_UClass_UClass_NoRegister();
  pUVar6 = Z_Construct_UClass_UStruct_NoRegister();
  uVar12 = 0x40;
  local_278 = (FFieldObjectUnion)param_1;
  if ((((ulonglong)param_1 & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  while (((local_278.Unknown & 0xfffffffffffffffe) != 0 &&
         (((int)uVar12 != 0 ||
          (bVar3 = `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
                   GetPropertyPathName'::__l5::<lambda_1>::operator()(local_270), bVar3))))) {
    uVar12 = (ulonglong)((int)uVar12 - 1);
    local_238[uVar12].Field = (FField *)local_278;
    if (((local_278.Unknown & 1) != 0) &&
       (((UObject *)(local_278.Unknown & 0xfffffffffffffffe) != (UObject *)0x0 &&
        (GC::GIsIncrementalReachabilityPending != false)))) {
      GC::MarkAsReachable((UObject *)(local_278.Unknown & 0xfffffffffffffffe));
    }
    bVar3 = FFieldVariant::IsA((FFieldVariant *)&local_278,pUVar5);
    if ((bVar3) || (bVar3 = FFieldVariant::IsA((FFieldVariant *)&local_278,pUVar6), bVar3)) break;
    FVar7 = FFieldVariant::GetOwnerVariant((FFieldVariant *)&local_278);
                    /* WARNING: Load size is inaccurate */
    local_278.Field = *FVar7.Container;
    if (((local_278.Unknown & 1) != 0) &&
       (((UObject *)(local_278.Unknown & 0xfffffffffffffffe) != (UObject *)0x0 &&
        (GC::GIsIncrementalReachabilityPending != false)))) {
      GC::MarkAsReachable((UObject *)(local_278.Unknown & 0xfffffffffffffffe));
    }
  }
  ::FString::Empty(param_2,0x200);
  if ((uint)uVar12 < 0x40) {
    pFVar4 = local_238 + uVar12;
    do {
      pFVar1 = pFVar4->Field;
      if ((*(byte *)pFVar4 & 1) == 0) {
        if (pFVar1 != (FField *)0x0) {
          bVar3 = IsThisNotNull(pFVar1,"FField::GetName");
          if (bVar3) {
            ::FName::ToString(&pFVar1->NamePrivate,&local_268);
          }
          else {
            ::FString::FString(&local_268,L"None");
          }
          iVar13 = local_268.Data.ArrayNum + -1;
          if (local_268.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(param_2,(wchar_t *)local_268.Data.AllocatorInstance.Data,iVar13);
          _Str = L".";
          if ((int)uVar12 == 0x3f) {
            _Str = L"";
          }
          sVar8 = wcslen(_Str);
          ::FString::AppendChars(param_2,_Str,(int)sVar8);
          FVar10.Data = local_268.Data.AllocatorInstance.Data;
          goto LAB_14420ccff;
        }
      }
      else if (((ulonglong)pFVar1 & 0xfffffffffffffffe) != 0) {
        local_258[0] = *(FName *)(((ulonglong)pFVar1 & 0xfffffffffffffffe) + 0x18);
        ::FName::ToString(local_258,&local_248);
        iVar13 = local_248.Data.ArrayNum + -1;
        if (local_248.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars(param_2,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar13);
        ::FString::AppendChar(param_2,L'.');
        FVar10.Data = local_248.Data.AllocatorInstance.Data;
LAB_14420ccff:
        if (FVar10.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar10.Data);
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      pFVar4 = pFVar4 + 1;
    } while (uVar11 < 0x40);
  }
  return;
}

// GetRepIndexCount @ 14420d160

uint __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetRepIndexCount
          (TArrayView<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty_const_,int>
           *param_1)

{
  FMemberProperty *pFVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  FProperty *pFVar5;
  FMemberProperty *pFVar6;
  
  pFVar6 = param_1->DataPtr;
  pFVar5 = (FProperty *)0x0;
  sVar3 = 0;
  pFVar1 = pFVar6 + param_1->ArrayNum;
  uVar2 = 0;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
    if ((pFVar5 == (FProperty *)0x0) || (pFVar6->Property != pFVar5)) {
      sVar3 = 0;
    }
    else {
      sVar3 = sVar3 + 1;
    }
    pFVar5 = pFVar6->Property;
    uVar4 = sVar3 + pFVar5->RepIndex;
    if (uVar4 < uVar2) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4;
  }
  return uVar2 + 1;
}

// GetRepTagFromProperty @ 14420d1d0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetRepTagFromProperty
          (FMemberCacheEntry *param_1,FMemberProperty *param_2)

{
  FProperty *pFVar1;
  FName *pFVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulong64 uVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName local_res10;
  FString local_18;
  
  pFVar1 = param_2->Property;
  if ((pFVar1 == (FProperty *)0x0) || (bVar3 = IsThisNotNull(pFVar1,"FField::GetFName"), !bVar3)) {
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
  }
  else {
    FVar10 = (FName)pFVar1->_padding_;
  }
  FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if ((FVar10 == FVar6) ||
     (FVar4 = FNameEntryId::FromValidEName((EName)&local_res10), FVar7.Number = 0,
     FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value), FVar10 == FVar7))
  {
    if (param_1->Serializer == &FNetRoleNetSerializerNetSerializerInfo::Serializer) {
      FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
      FVar9.Number = 0;
      FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar4.Value);
      uVar5 = 0xf754c2703924c7aa;
      if (FVar10 == FVar9) {
        uVar5 = 0xffaab417b1123942;
      }
      return uVar5;
    }
  }
  else if ((pFVar1 != (FProperty *)0x0) &&
          (FVar10 == ReplicationStateDescriptorBuilder_NAME_NetCullDistanceSquared)) {
    pFVar2 = (FName *)pFVar1->_padding_;
    FVar10 = *pFVar2;
    FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar4.Value);
    if (FVar10 == FVar8) {
      return 0x6bb13a5c1a655157;
    }
    if (2 < (byte)LogIris._0_1_) {
      local_res10 = *pFVar2;
      ::FName::ToString(&local_res10,&local_18);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return 0;
}

// GetSerializerTraits @ 14420d7a0

void __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetSerializerTraits
          (FMemberProperty *param_1,FProperty *param_2,FPropertyNetSerializerInfo *param_3,
          bool param_4)

{
  ENetSerializerTraits EVar1;
  bool bVar2;
  EMemberPropertyTraits EVar3;
  FNetSerializer *pFVar4;
  
  pFVar4 = (FNetSerializer *)(**(code **)(param_3->_padding_ + 0x10))(param_3);
  EVar1 = pFVar4->Traits;
  bVar2 = IsObjectReferenceNetSerializer(pFVar4);
  param_1->Traits =
       param_1->Traits |
       -(uint)((EVar1 & HasCustomNetReference) != None) &
       (HasCustomObjectReference|HasObjectReference) | (uint)bVar2 << 6;
  EVar3 = (pFVar4->Traits & HasDynamicState) << 4 | param_1->Traits;
  param_1->Traits = EVar3;
  EVar3 = (pFVar4->Traits & HasConnectionSpecificSerialization) << 0xe | EVar3;
  param_1->Traits = EVar3;
  param_1->Traits = (pFVar4->Traits & UseSerializerIsEqual) << 0xe | EVar3;
  EVar3 = GetFastArrayPropertyTraits(pFVar4,param_2,param_4);
  param_1->Traits = param_1->Traits | EVar3;
  if (pFVar4 == &FNetRoleNetSerializerNetSerializerInfo::Serializer) {
    param_1->ChangeMaskGroupName = ReplicationStateDescriptorBuilder_NAME_RoleGroup;
  }
  return;
}

// IsStructWithCustomSerializer @ 144211d40

bool __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::IsStructWithCustomSerializer
          (UStruct *param_1)

{
  FPropertyNetSerializerInfo *pFVar1;
  
  do {
    pFVar1 = FPropertyNetSerializerInfoRegistry::FindStructSerializerInfo((FName)param_1->_padding_)
    ;
    if (pFVar1 != (FPropertyNetSerializerInfo *)0x0) {
      return true;
    }
    param_1 = (param_1->SuperStruct).field0_0x0.DebugPtr;
  } while (param_1 != (UStruct *)0x0);
  return false;
}

// IsSupportedProperty @ 144212250

bool __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::IsSupportedProperty
          (FMemberProperty *param_1,FProperty *param_2,FIsSupportedPropertyParams *param_3)

{
  bool bVar1;
  FPropertyNetSerializerInfo *pFVar2;
  _func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
  *p_Var3;
  
  pFVar2 = FPropertyNetSerializerInfoRegistry::FindSerializerInfo(param_2);
  bVar1 = false;
  if (pFVar2 != (FPropertyNetSerializerInfo *)0x0) {
    param_1->Property = param_2;
    param_1->SerializerInfo = pFVar2;
    param_1->ChangeMaskBits = 1;
    (param_1->ExternalSizeAndAlignment).Size = 0;
    (param_1->ExternalSizeAndAlignment).Alignment = 0;
    GetIrisPropertyTraits(param_1,param_2,param_3->LifeTimeProperties,param_3->InObjectClass);
    GetSerializerTraits(param_1,param_2,pFVar2,param_3->bAllowFastArrayWithExtraReplicatedProperties
                       );
    if (((param_1->Traits >> 0xb & 1) != 0) ||
       (((param_1->Traits >> 10 & 1) != 0 && (bIrisUseChangeMaskForTArray != false)))) {
      param_1->ChangeMaskBits = 0x40;
    }
    if (param_1->CreateAndRegisterReplicationFragmentFunction ==
        (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
         *)0x0) {
      p_Var3 = (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
                *)(**(code **)(pFVar2->_padding_ + 0x28))(pFVar2);
      param_1->CreateAndRegisterReplicationFragmentFunction = p_Var3;
    }
    bVar1 = true;
  }
  return bVar1;
}

// IsSupportedStructWithCustomSerializer @ 144212310

EStructNetSerializerType __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::IsSupportedStructWithCustomSerializer
          (FMemberProperty *param_1,UStruct *param_2)

{
  short sVar1;
  UStruct *pUVar2;
  EStructNetSerializerType EVar3;
  FPropertyNetSerializerInfo *pFVar4;
  _func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
  *p_Var5;
  
  pFVar4 = FPropertyNetSerializerInfoRegistry::FindStructSerializerInfo((FName)param_2->_padding_);
  if (pFVar4 == (FPropertyNetSerializerInfo *)0x0) {
    for (pUVar2 = (param_2->SuperStruct).field0_0x0.DebugPtr; pUVar2 != (UStruct *)0x0;
        pUVar2 = (pUVar2->SuperStruct).field0_0x0.DebugPtr) {
      pFVar4 = FPropertyNetSerializerInfoRegistry::FindStructSerializerInfo
                         ((FName)pUVar2->_padding_);
      if (pFVar4 != (FPropertyNetSerializerInfo *)0x0) {
        EVar3 = DerivedFromCustom;
        goto LAB_144212385;
      }
    }
    EVar3 = Struct;
  }
  else {
    EVar3 = Custom;
LAB_144212385:
    param_1->SerializerInfo = pFVar4;
    param_1->ChangeMaskBits = 1;
    param_1->Property = (FProperty *)0x0;
    sVar1 = param_2->MinAlignment;
    (param_1->ExternalSizeAndAlignment).Size =
         (longlong)(param_2->PropertiesSize + -1 + (int)sVar1 & -(int)sVar1);
    (param_1->ExternalSizeAndAlignment).Alignment = (longlong)sVar1;
    param_1->ReplicationCondition = COND_None;
    param_1->PropertyRepNotifyFunction = (UFunction *)0x0;
    p_Var5 = (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
              *)(**(code **)(pFVar4->_padding_ + 0x28))(pFVar4);
    param_1->CreateAndRegisterReplicationFragmentFunction = p_Var5;
    param_1->Traits = None;
    GetSerializerTraits(param_1,(FProperty *)0x0,pFVar4,false);
  }
  return EVar3;
}

// ShouldValidateIsFullyPushModel @ 14421bd00

bool __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::ShouldValidateIsFullyPushModel
          (UClass *param_1)

{
  longlong *plVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *this;
  longlong *plVar7;
  FName local_res10;
  longlong local_res18 [2];
  
  local_res18[0] = param_1->_padding_;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (&UniqueClassNames,&local_res10,(bool *)local_res18);
  this = UReplicationStateDescriptorConfig::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3[1].field_0x20 == '\0') {
    plVar7 = *(longlong **)&pUVar3[1].field_0x10;
    iVar2 = *(int *)&pUVar3[1].field_0x18;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    plVar1 = plVar7 + iVar2;
    while( true ) {
      if (plVar7 == plVar1) {
        return false;
      }
      if (*plVar7 == param_1->_padding_) break;
      plVar7 = plVar7 + 1;
    }
  }
  return true;
}

// ValidateIsFullyPushModelClassDescriptor @ 14421c790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
ValidateIsFullyPushModelClassDescriptor
          (FPropertyReplicationStateDescriptorBuilder *this,FBuilderContext *param_1,
          FReplicationStateDescriptor *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  bool bVar5;
  TStringBuilderWithBuffer<wchar_t,128> *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 auStack_10a8 [32];
  undefined1 local_1088 [8];
  undefined1 local_1080 [12];
  uint uStack_1074;
  FReplicationStateDescriptor *local_1070;
  TStringBuilderWithBuffer<wchar_t,128> local_1068 [14];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_10a8;
  if ((param_2->Traits & HasPushBasedDirtiness) == None) {
    local_1080._0_8_ = &local_1070;
    unique0x100004ca = param_1;
    local_1070 = param_2;
    `UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
    ValidateIsFullyPushModelClassDescriptor'::__l2::<lambda_1>::operator()(local_1080);
    if ((this->Members).ArrayNum == 0) {
      if ((byte)LogIris._0_1_ < 3) {
        return;
      }
      pTVar4 = (param_1->BuildParams).PathName;
      if (pTVar4 == (TStringBuilderBase<wchar_t> *)0x0) {
        stack0xffffffffffffef88 = (FBuilderContext *)((ulonglong)uStack_1074 << 0x20);
        local_1080._0_8_ = L"";
      }
      else {
        local_1080._0_8_ = pTVar4->Base;
        stack0xffffffffffffef88 =
             (FBuilderContext *)
             CONCAT44(uStack_1074,(int)((longlong)pTVar4->CurPos - local_1080._0_8_ >> 1));
      }
      this_00 = WriteToString<128,TStringView<wchar_t>_>
                          (local_1068,(TStringView<wchar_t> *)local_1080);
      if ((ulonglong)this_00->_padding_ < this_00->_padding_ + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
      }
      *(undefined2 *)this_00->_padding_ = 0;
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    else {
      local_1068[0]._padding_ = (longlong)local_1068[0].StringBuffer;
      local_1068[0]._padding_._0_2_ = 0;
      local_1068[0]._padding_ = (longlong)local_1068[0].StringBuffer;
      local_1068[0]._padding_ = (longlong)local_48;
      TStringBuilderBase<wchar_t>::AppendfImpl
                ((TStringBuilderBase<wchar_t> *)local_1068,
                 L"Members of ReplicationStateDescriptor %s lacking HasPushBasedDirtiness trait:\n")
      ;
      iVar2 = (this->Members).ArrayNum;
      pFVar6 = (this->Members).AllocatorInstance.Data;
      pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
      while( true ) {
        if ((this->Members).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1088);
        }
        if (pFVar6 == pFVar1) break;
        if ((*(uint *)(pFVar6 + 0x20) & 0x20000) == 0) {
          pvVar3 = *(void **)pFVar6;
          if (pvVar3 == (void *)0x0) {
            if (local_1070->MemberDebugDescriptors == (FReplicationStateMemberDebugDescriptor *)0x0)
            {
              TStringBuilderBase<wchar_t>::AppendfImpl
                        ((TStringBuilderBase<wchar_t> *)local_1068,L"Member index: %u\n");
              goto LAB_14421c9b8;
            }
            TStringBuilderBase<wchar_t>::AppendfImpl
                      ((TStringBuilderBase<wchar_t> *)local_1068,L"Member debug name: %s\n");
            pFVar6 = pFVar6 + 0x48;
          }
          else {
            bVar5 = IsThisNotNull(pvVar3,"FField::GetName");
            if (bVar5) {
              ::FName::ToString((FName *)((longlong)pvVar3 + 0x20),(FString *)local_1080);
            }
            else {
              ::FString::FString((FString *)local_1080,L"None");
            }
            TStringBuilderBase<wchar_t>::AppendfImpl
                      ((TStringBuilderBase<wchar_t> *)local_1068,L"Member property name: %s\n");
            if ((FScriptContainerElement *)local_1080._0_8_ == (FScriptContainerElement *)0x0)
            goto LAB_14421c9b8;
            FMemory::Free((void *)local_1080._0_8_);
            pFVar6 = pFVar6 + 0x48;
          }
        }
        else {
LAB_14421c9b8:
          pFVar6 = pFVar6 + 0x48;
        }
      }
      if (2 < (byte)LogIris._0_1_) {
        if ((ulonglong)local_1068[0]._padding_ < (wchar_t *)(local_1068[0]._padding_ + 2)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_1068,1);
        }
        *(wchar_t *)local_1068[0]._padding_ = L'\0';
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_1068);
  }
  return;
}

// ValidateStructPropertyDescriptor @ 14421cb20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::ValidateStructPropertyDescriptor
          (FMemberProperty *param_1,FReplicationStateDescriptor *param_2)

{
  FProperty **ppFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FProperty *pFVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FPropertyNetSerializerInfo *pFVar10;
  FProperty *pFVar11;
  FProperty *pFVar12;
  FProperty *pFVar13;
  FProperty **ppFVar14;
  FProperty *pFVar15;
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  
  if ((param_2->Traits & AllMembersAreReplicated) != None) {
    pFVar15 = param_1->Property;
    pFVar12 = (FProperty *)0x0;
    if (((pFVar15 == (FProperty *)0x0) || ((*(uint *)(pFVar15->_padding_ + 0x18) >> 0x14 & 1) == 0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("CastResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar15 = pFVar12,
          bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar7 = (*pcVar6)();
      return (bool)uVar7;
    }
    lVar4 = pFVar15[1]._padding_;
    pFVar10 = FPropertyNetSerializerInfoRegistry::FindStructSerializerInfo(*(FName *)(lVar4 + 0x18))
    ;
    if ((pFVar10 == (FPropertyNetSerializerInfo *)0x0) &&
       ((*(UStruct **)(lVar4 + 0x40) == (UStruct *)0x0 ||
        (bVar8 = IsStructWithCustomSerializer(*(UStruct **)(lVar4 + 0x40)), !bVar8)))) {
      ppFVar14 = param_2->MemberProperties;
      ppFVar1 = ppFVar14 + param_2->MemberCount;
      pFVar15 = pFVar12;
      pFVar11 = pFVar12;
      for (; ppFVar14 != ppFVar1; ppFVar14 = ppFVar14 + 1) {
        pFVar5 = *ppFVar14;
        iVar2 = pFVar5->ElementSize;
        iVar3 = pFVar5->ArrayDim;
        iVar9 = (**(code **)(pFVar5->_padding_ + 0x168))(pFVar5);
        pFVar12 = (FProperty *)((longlong)pFVar12 + (longlong)iVar9 + -1 & ~((longlong)iVar9 - 1U));
        pFVar13 = pFVar15;
        if (pFVar5 != pFVar11) {
          pFVar11 = (FProperty *)(longlong)pFVar5->Offset_Internal;
          if ((pFVar11 != pFVar12) && (pFVar11 != pFVar15)) {
            if ((byte)LogIris._0_1_ < 3) {
              return false;
            }
            local_res10 = *(FName *)(lVar4 + 0x18);
            ::FName::ToString(&local_res10,&local_58);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
            goto LAB_14421cca3;
          }
          pFVar13 = pFVar12;
          if (pFVar15 == pFVar11) {
            pFVar13 = pFVar15;
          }
          pFVar12 = (FProperty *)((longlong)&pFVar13->_padding_ + (longlong)(iVar2 * iVar3));
          pFVar11 = pFVar5;
        }
        pFVar15 = pFVar13;
      }
      if ((FProperty *)(longlong)*(int *)(lVar4 + 0x58) != pFVar12) {
        if (2 < (byte)LogIris._0_1_) {
          local_res18[0] = *(FName *)(lVar4 + 0x18);
          ::FName::ToString(local_res18,&local_48);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
LAB_14421cca3:
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        return false;
      }
    }
  }
  return true;
}

// operator() @ 1504b22d0

bool __thiscall
`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberFunctionDescriptors'::__l2
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747186912>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_6449277768747186912>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b2340

bool __thiscall
`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberReferenceDescriptors'::
__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747186931>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_6449277768747186931>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b23b0

bool __thiscall
`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::BuildMemberTagDescriptors'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747186997>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_6449277768747186997>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b2420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::
ValidateIsFullyPushModelClassDescriptor'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  wchar_t **ppwVar6;
  void *pvVar7;
  ulong64 uVar8;
  bool bVar9;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  wchar_t *local_190;
  undefined4 uStack_188;
  wchar_t *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_1b8;
  bVar9 = false;
  local_198 = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6449277768747187709>);
  if (bVar4) {
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + 0x78);
    if (plVar1 == (longlong *)0x0) {
      local_178 = 7;
      local_180 = L"UNKNOWN";
      ppwVar6 = &local_180;
    }
    else {
      local_190 = (wchar_t *)*plVar1;
      ppwVar6 = &local_190;
      uStack_188 = (int)(plVar1[1] - *plVar1 >> 1);
    }
    local_170 = *(undefined4 *)ppwVar6;
    uStack_16c = *(undefined4 *)((longlong)ppwVar6 + 4);
    uStack_168 = *(undefined4 *)(ppwVar6 + 1);
    uStack_164 = *(undefined4 *)((longlong)ppwVar6 + 0xc);
    pwVar2 = ppwVar6[1];
    local_148.End = (wchar_t *)local_28;
    local_148.Base = local_128;
    uVar8 = (ulong64)(int)pwVar2;
    local_148.CurPos = local_128;
    local_148.bIsDynamic = false;
    local_148.bIsExternal = false;
    local_160 = local_170;
    uStack_15c = uStack_16c;
    uStack_158 = uStack_168;
    uStack_154 = uStack_164;
    if (local_28 < local_128 + uVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_148,uVar8);
    }
    if ((int)pwVar2 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy
                         (local_148.CurPos,(void *)CONCAT44(uStack_16c,local_170),uVar8 * 2);
      local_148.CurPos = (wchar_t *)((longlong)pvVar7 + uVar8 * 2);
    }
    if (local_148.End < local_148.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_148,1);
    }
    *local_148.CurPos = L'\0';
    bVar9 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449277768747187709>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b25af;
    }
  }
  bVar4 = false;
LAB_1504b25af:
  if (bVar9) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  }
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// operator() @ 1504b2790

bool __thiscall
`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetPropertyPathName'::__l5::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747185906>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449277768747185906>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b2b70

bool __thiscall
`UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::GetFastArrayPropertyTraits'::__l48::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6449277768747185780>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6449277768747185780>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b2be8;
    }
  }
  bVar2 = false;
LAB_1504b2be8:
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

