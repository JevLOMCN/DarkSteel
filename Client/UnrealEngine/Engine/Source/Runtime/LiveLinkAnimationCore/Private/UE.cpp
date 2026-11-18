// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 11

// Construct<FAnimNode_LiveLinkPose> @ 14cfc11a0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_LiveLinkPose>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_LiveLinkPose__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  pUVar1 = ULiveLinkRemapAsset::StaticClass();
  *(UClass **)((longlong)param_1 + 0x30) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FAnimNode_LiveLinkPose> @ 14cfc11b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_LiveLinkPose>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_LiveLinkPose__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  pUVar1 = ULiveLinkRemapAsset::StaticClass();
  *(UClass **)((longlong)param_1 + 0x30) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FAnimNode_LiveLinkPose> @ 14cfc11c0

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_LiveLinkPose>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58));
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// SerializeArchive<FAnimNode_LiveLinkPose> @ 14cfc11f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FAnimNode_LiveLinkPose>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLiveLinkCustomVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_LiveLinkAnimationCore();
    Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose,(UObject *)pUVar3,
                         L"AnimNode_LiveLinkPose");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton;
  if ((param_1->field_0x28 & 5) != 0) {
    pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton)->
                        _padding_ + 0x2e0);
    this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
    FVar4 = FStructuredArchiveFromArchive::GetSlot(this);
    local_1c0 = 0;
    local_1c8 = 0;
    (*pcVar1)(pUVar2,*(undefined8 *)FVar4,param_2,pUVar2);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  }
  return true;
}

// Copy<FAnimNode_LiveLinkPose> @ 14cfc12e0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_LiveLinkPose>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_2 + 0x28);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x30) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x30));
    }
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x38) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x38));
    }
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
    lVar2 = *(longlong *)((longlong)param_2 + 0x58);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x50);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = uVar3;
    *(longlong *)((longlong)param_1 + 0x58) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x60) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x60));
    }
    puVar1 = (undefined8 *)((longlong)param_2 + 0x60);
    param_2 = (void *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x60) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return true;
}

// Construct<FLiveLinkInstanceProxy> @ 14cfc1c00

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkInstanceProxy>(void *param_1)

{
  FAnimInstanceProxy::FAnimInstanceProxy(param_1);
  *(undefined ***)param_1 = &___7FLiveLinkInstanceProxy__6B_;
  FAnimNode_LiveLinkPose::FAnimNode_LiveLinkPose
            ((FAnimNode_LiveLinkPose *)((longlong)param_1 + 0x808));
  return;
}

// ConstructForTests<FLiveLinkInstanceProxy> @ 14cfc1c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkInstanceProxy>(void *param_1)

{
  FAnimInstanceProxy::FAnimInstanceProxy(param_1);
  *(undefined ***)param_1 = &___7FLiveLinkInstanceProxy__6B_;
  FAnimNode_LiveLinkPose::FAnimNode_LiveLinkPose
            ((FAnimNode_LiveLinkPose *)((longlong)param_1 + 0x808));
  return;
}

// Destruct<FLiveLinkInstanceProxy> @ 14cfc1c60

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkInstanceProxy>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x860));
  *(undefined ***)((longlong)param_1 + 0x808) = &___7FAnimNode_Base__6B_;
  FAnimInstanceProxy::~FAnimInstanceProxy(param_1);
  return;
}

// Copy<FLiveLinkInstanceProxy> @ 14cfc1ca0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkInstanceProxy>(void *param_1,void *param_2,int param_3)

{
  FAnimInstanceProxy *pFVar1;
  FAnimInstanceProxy *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FAnimInstanceProxy *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FAnimInstanceProxy::operator=(this,pFVar1);
      FAnimNode_LiveLinkPose::operator=
                ((FAnimNode_LiveLinkPose *)&this->field_0x808,
                 (FAnimNode_LiveLinkPose *)&pFVar1->field_0x808);
      param_3 = param_3 + -1;
      this = (FAnimInstanceProxy *)&this[1].ComponentTransform.Scale3D;
    } while (param_3 != 0);
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_> @ 14cfc26e0

/* WARNING: Removing unreachable block (ram,0x00014cfc2727) */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<FName>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<FName>_> @ 14cfc2770

void __cdecl
UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::ForElementType<FName>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

