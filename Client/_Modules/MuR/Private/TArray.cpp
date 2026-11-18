// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 91

// AddUniqueImpl<unsigned_int_const_&> @ 14a94f270

int __thiscall
TArray<unsigned_int,TFixedAllocator<4>_>::AddUniqueImpl<unsigned_int_const_&>
          (TArray<unsigned_int,TFixedAllocator<4>_> *this,uint *param_1)

{
  TArray<unsigned_int,TFixedAllocator<4>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<unsigned_int,TFixedAllocator<4>_> *pTVar5;
  
  pTVar1 = (TArray<unsigned_int,TFixedAllocator<4>_> *)
           ((this->AllocatorInstance).InlineData + this->ArrayNum);
  if (this != pTVar1) {
    pTVar5 = this;
    do {
      if (*(uint *)(pTVar5->AllocatorInstance).InlineData[0].Pad == *param_1) {
        iVar4 = (int)((longlong)pTVar5 - (longlong)this >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pTVar5 = (TArray<unsigned_int,TFixedAllocator<4>_> *)
               ((pTVar5->AllocatorInstance).InlineData + 1);
    } while (pTVar5 != pTVar1);
  }
  if (((this <= param_1) && (param_1 < (this->AllocatorInstance).InlineData + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<unsigned_int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  *(uint *)(this->AllocatorInstance).InlineData[iVar4].Pad = *param_1;
  return iVar4;
}

// AddUniqueImpl<UE::Mutable::Private::FBoneName_const_&> @ 14a94f360

int __thiscall
TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Mutable::Private::FBoneName_const_&>
          (TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *this,
          FBoneName *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(uint *)&pFVar5->field_0x0 == param_1->Id) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(uint *)(pFVar1 + (longlong)iVar4 * 4) = param_1->Id;
  return iVar4;
}

// AddUniqueImpl<UE::Mutable::Private::FBoxBody_const_&> @ 14a94f460

int __thiscall
TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Mutable::Private::FBoxBody_const_&>
          (TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *this,
          FBoxBody *param_1)

{
  FBoxBody *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *this_00;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (FBoxBody *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    this_00 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
    ::FString::FString((FString *)this_00,(FString *)param_1);
    *(int *)&this_00[0x10].field_0x0 = (int)param_1->_padding_;
    *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)&(param_1->Position).field0_0x0;
    *(float *)&this_00[0x20].field_0x0 = (param_1->Position).field0_0x0._s_0.Z;
    uVar3 = *(undefined8 *)&(param_1->Orientation).Z;
    *(undefined8 *)&this_00[0x30].field_0x0 = *(undefined8 *)&param_1->Orientation;
    *(undefined8 *)(this_00 + 0x38) = uVar3;
    *(undefined8 *)&this_00[0x40].field_0x0 = *(undefined8 *)&(param_1->Size).field0_0x0;
    *(float *)(this_00 + 0x48) = (param_1->Size).field0_0x0._s_0.Z;
  }
  return iVar5;
}

// AddUniqueImpl<UE::Mutable::Private::FConvexBody_const_&> @ 14a94f570

int __thiscall
TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Mutable::Private::FConvexBody_const_&>
          (TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *this,
          FConvexBody *param_1)

{
  FConvexBody *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FConvexBody *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1070,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    UE::Mutable::Private::FConvexBody::FConvexBody
              ((FConvexBody *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x70),param_1);
  }
  return iVar4;
}

// AddUniqueImpl<UE::Mutable::Private::FSphereBody_const_&> @ 14a94f640

int __thiscall
TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Mutable::Private::FSphereBody_const_&>
          (TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_> *this,
          FSphereBody *param_1)

{
  FScriptContainerElement *this_00;
  FSphereBody *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FSphereBody *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    this_00 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x28;
    ::FString::FString((FString *)this_00,(FString *)param_1);
    *(int *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[0x10].field_0x0)->
             AllocatorInstance).Data = (int)param_1->_padding_;
    *(undefined8 *)&this_00[0x18].field_0x0 = *(undefined8 *)&(param_1->Position).field0_0x0;
    *(float *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[0x20].field_0x0)->
               AllocatorInstance).Data = (param_1->Position).field0_0x0._s_0.Z;
    *(float *)&this_00[0x24].field_0x0 = param_1->Radius;
  }
  return iVar4;
}

// AddUniqueImpl<UE::Mutable::Private::FSphylBody_const_&> @ 14a94f740

int __thiscall
TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Mutable::Private::FSphylBody_const_&>
          (TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *this,
          FSphylBody *param_1)

{
  FSphylBody *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *this_00;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (FSphylBody *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    this_00 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
    ::FString::FString((FString *)this_00,(FString *)param_1);
    *(undefined4 *)&this_00[0x10].field_0x0 = *(undefined4 *)&param_1->field_0x10;
    *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)&(param_1->Position).field0_0x0;
    *(float *)&this_00[0x20].field_0x0 = (param_1->Position).field0_0x0._s_0.Z;
    uVar3 = *(undefined8 *)&(param_1->Orientation).Z;
    *(undefined8 *)&this_00[0x30].field_0x0 = *(undefined8 *)&param_1->Orientation;
    *(undefined8 *)(this_00 + 0x38) = uVar3;
    *(float *)&this_00[0x40].field_0x0 = param_1->Radius;
    *(float *)(this_00 + 0x44) = param_1->Length;
  }
  return iVar5;
}

// AddUniqueImpl<UE::Mutable::Private::FTaperedCapsuleBody_const_&> @ 14a94f850

int __thiscall
TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Mutable::Private::FTaperedCapsuleBody_const_&>
          (TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *this,
          FTaperedCapsuleBody *param_1)

{
  FTaperedCapsuleBody *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *this_00;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (FTaperedCapsuleBody *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    this_00 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
    ::FString::FString((FString *)this_00,(FString *)param_1);
    *(int *)&this_00[0x10].field_0x0 = (int)param_1->_padding_;
    *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)&(param_1->Position).field0_0x0;
    *(float *)&this_00[0x20].field_0x0 = (param_1->Position).field0_0x0._s_0.Z;
    uVar3 = *(undefined8 *)&(param_1->Orientation).Z;
    *(undefined8 *)&this_00[0x30].field_0x0 = *(undefined8 *)&param_1->Orientation;
    *(undefined8 *)(this_00 + 0x38) = uVar3;
    *(float *)&this_00[0x40].field_0x0 = param_1->Radius0;
    *(float *)(this_00 + 0x44) = param_1->Radius1;
    *(float *)(this_00 + 0x48) = param_1->Length;
  }
  return iVar5;
}

// AddUniqueImpl<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_const_&> @ 14a94f960

int __thiscall
TArray<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
::
AddUniqueImpl<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_const_&>
          (TArray<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
           *this,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBase *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UObject **)&pFVar5->field_0x0 == param_1->Object) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(undefined8 *)(pFVar1 + (longlong)iVar4 * 8) = 0;
  this_00 = (UObjectBase *)param_1->Object;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)(pFVar1 + (longlong)iVar4 * 8) = this_00;
  }
  return iVar4;
}

// Append<unsigned_int,TSizedDefaultAllocator<32>_> @ 14a94fa80

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Append<unsigned_int,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 2);
  }
  return;
}

// CopyToEmpty<UE::Mutable::Private::FInstanceSurface,int> @ 14a950a30

void __thiscall
TArray<UE::Mutable::Private::FInstanceSurface,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::CopyToEmpty<UE::Mutable::Private::FInstanceSurface,int>
          (TArray<UE::Mutable::Private::FInstanceSurface,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,FInstanceSurface *param_1,int param_2,int param_3)

{
  ForElementType<UE::Mutable::Private::FInstanceSurface> FVar1;
  
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 1;
    return;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceSurface>_>
            (0x70,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<UE::Mutable::Private::FInstanceSurface>)0x0) {
    this = (TArray<UE::Mutable::Private::FInstanceSurface,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  ConstructItems<UE::Mutable::Private::FInstanceSurface,UE::Mutable::Private::FInstanceSurface,int>
            (this,param_1,param_2);
  return;
}

// operator= @ 14a978660

TArray<TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
::operator=(void *this,
           TArray<TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  if (this != param_1) {
    DestructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
              (*(TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>
                 **)this,*(int *)((longlong)this + 8));
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(FScriptContainerElement **)this = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)this + 8) = param_1->ArrayNum;
    *(int *)((longlong)this + 0xc) = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// operator= @ 14a9786c0

TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 14a978760

TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
* __thiscall
TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
::operator=(TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
            *this,TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                  *param_1)

{
  int iVar1;
  void *_Src;
  
  if (this != param_1) {
    _Src = (void *)(param_1->AllocatorInstance)._padding_;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
              (0x40,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((void *)(this->AllocatorInstance)._padding_,_Src,(longlong)iVar1 << 6);
    }
  }
  return this;
}

// operator= @ 14a978800

TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 14a9788a0

TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FMeshSurface *pFVar3;
  
  if (this != param_1) {
    DestructItems<UE::Mutable::Private::FMeshSurface,int>
              ((FMeshSurface *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FMeshSurface *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<UE::Mutable::Private::FMeshSurface,UE::Mutable::Private::FMeshSurface,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a978940

TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>::
operator=(TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
          *this,TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
                *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,int>
              ((TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Find @ 14a9a2d80

int __thiscall
TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *this,
          FBoxBody *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar6 = pFVar3;
  do {
    if (pFVar6 == pFVar3 + (longlong)iVar1 * 0x50) {
      return -1;
    }
    if (*(int *)(pFVar6 + 0x10) == (int)param_1->_padding_) {
      iVar5 = *(int *)(pFVar6 + 8);
      iVar2 = (int)param_1->_padding_;
      if (iVar5 == iVar2) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar6,(wchar_t *)param_1->_padding_);
          bVar7 = iVar5 == 0;
          goto LAB_14a9a2de0;
        }
      }
      else {
        iVar5 = iVar5 + iVar2;
        bVar7 = iVar5 == 1;
LAB_14a9a2de0:
        iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),bVar7);
        if (bVar7 == false) goto LAB_14a9a2e3a;
      }
      if (((((param_1->Position).field0_0x0._s_0.X == *(float *)(pFVar6 + 0x18)) &&
           ((param_1->Position).field0_0x0._s_0.Y == *(float *)(pFVar6 + 0x1c))) &&
          ((param_1->Position).field0_0x0._s_0.Z == *(float *)(pFVar6 + 0x20))) &&
         (((auVar4._4_4_ = -(uint)(*(float *)(pFVar6 + 0x34) == (param_1->Orientation).Y),
           auVar4._0_4_ = -(uint)(*(float *)(pFVar6 + 0x30) == (param_1->Orientation).X),
           auVar4._8_4_ = -(uint)(*(float *)(pFVar6 + 0x38) == (param_1->Orientation).Z),
           auVar4._12_4_ = -(uint)(*(float *)(pFVar6 + 0x3c) == (param_1->Orientation).W),
           iVar5 = movmskps(iVar5,auVar4), iVar5 == 0xf &&
           ((param_1->Size).field0_0x0._s_0.X == *(float *)(pFVar6 + 0x40))) &&
          (((param_1->Size).field0_0x0._s_0.Y == *(float *)(pFVar6 + 0x44) &&
           ((param_1->Size).field0_0x0._s_0.Z == *(float *)(pFVar6 + 0x48))))))) {
        return (int)(((longlong)pFVar6 - (longlong)pFVar3) / 0x50);
      }
    }
LAB_14a9a2e3a:
    pFVar6 = pFVar6 + 0x50;
  } while( true );
}

// Find @ 14a9a2e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *this,
          FConvexBody *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  bool bVar23;
  
  fVar19 = _UNK_1506895ec;
  fVar18 = _UNK_1506895e8;
  fVar17 = _UNK_1506895e4;
  fVar16 = ___xmm_38d1b71738d1b71738d1b71738d1b717;
  uVar15 = _UNK_15061cc7c;
  uVar14 = _UNK_15061cc78;
  uVar13 = _UNK_15061cc74;
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar1 * 0x70) {
    pFVar21 = pFVar3 + 0x30;
    pFVar22 = pFVar3;
    do {
      if (*(int *)(pFVar21 + -0x20) == (int)param_1->_padding_) {
        iVar20 = *(int *)(pFVar21 + -0x28);
        iVar2 = (int)param_1->_padding_;
        if (iVar20 == iVar2) {
          if (1 < iVar20) {
            iVar20 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar22,(wchar_t *)param_1->_padding_);
            bVar23 = iVar20 == 0;
            goto LAB_14a9a2f1f;
          }
        }
        else {
          bVar23 = iVar20 + iVar2 == 1;
LAB_14a9a2f1f:
          if (!bVar23) goto LAB_14a9a2fda;
        }
        if ((*(int *)(pFVar21 + -0x10) == (param_1->Vertices).ArrayNum) &&
           (bVar23 = CompareItems<UE::Math::TVector<float>,int>
                               (*(TVector<float> **)(pFVar21 + -0x18),
                                (TVector<float> *)(param_1->Vertices).AllocatorInstance.Data,
                                *(int *)(pFVar21 + -0x10)), bVar23)) {
          iVar20 = *(int *)pFVar21;
          if ((iVar20 == (param_1->Indices).ArrayNum) &&
             (((iVar20 == 0 ||
               (iVar20 = memcmp(*(void **)(pFVar21 + -8),(param_1->Indices).AllocatorInstance.Data,
                                (longlong)iVar20 << 2), iVar20 == 0)) &&
              (auVar4._4_4_ = -(uint)(fVar17 < (float)((uint)(*(float *)(pFVar21 + 0x24) -
                                                             (param_1->Transform).Translation.
                                                             m128_f32[1]) & uVar13)),
              auVar4._0_4_ = -(uint)(fVar16 < (float)((uint)(*(float *)(pFVar21 + 0x20) -
                                                            (param_1->Transform).Translation.
                                                            m128_f32[0]) & uVar12)),
              auVar4._8_4_ = -(uint)(fVar18 < (float)((uint)(*(float *)(pFVar21 + 0x28) -
                                                            (param_1->Transform).Translation.
                                                            m128_f32[2]) & uVar14)),
              auVar4._12_4_ =
                   -(uint)(fVar19 < (float)((uint)(*(float *)(pFVar21 + 0x2c) -
                                                  (param_1->Transform).Translation.m128_f32[3]) &
                                           uVar15)), iVar20 = movmskps(0,auVar4), iVar20 == 0)))) {
            fVar8 = (param_1->Transform).Rotation.m128_f32[0];
            fVar9 = (param_1->Transform).Rotation.m128_f32[1];
            fVar10 = (param_1->Transform).Rotation.m128_f32[2];
            fVar11 = (param_1->Transform).Rotation.m128_f32[3];
            auVar5._4_4_ = -(uint)(fVar17 < (float)((uint)(*(float *)(pFVar21 + 0x14) - fVar9) &
                                                   uVar13));
            auVar5._0_4_ = -(uint)(fVar16 < (float)((uint)(*(float *)(pFVar21 + 0x10) - fVar8) &
                                                   uVar12));
            auVar5._8_4_ = -(uint)(fVar18 < (float)((uint)(*(float *)(pFVar21 + 0x18) - fVar10) &
                                                   uVar14));
            auVar5._12_4_ =
                 -(uint)(fVar19 < (float)((uint)(*(float *)(pFVar21 + 0x1c) - fVar11) & uVar15));
            iVar20 = movmskps(0,auVar5);
            if (((iVar20 == 0) ||
                (auVar6._4_4_ = -(uint)(fVar17 < (float)((uint)(*(float *)(pFVar21 + 0x14) + fVar9)
                                                        & uVar13)),
                auVar6._0_4_ = -(uint)(fVar16 < (float)((uint)(*(float *)(pFVar21 + 0x10) + fVar8) &
                                                       uVar12)),
                auVar6._8_4_ = -(uint)(fVar18 < (float)((uint)(*(float *)(pFVar21 + 0x18) + fVar10)
                                                       & uVar14)),
                auVar6._12_4_ =
                     -(uint)(fVar19 < (float)((uint)(*(float *)(pFVar21 + 0x1c) + fVar11) & uVar15))
                , iVar20 = movmskps(iVar20,auVar6), iVar20 == 0)) &&
               (auVar7._4_4_ = -(uint)(fVar17 < (float)((uint)(*(float *)(pFVar21 + 0x34) -
                                                              (param_1->Transform).Scale3D.m128_f32
                                                              [1]) & uVar13)),
               auVar7._0_4_ = -(uint)(fVar16 < (float)((uint)(*(float *)(pFVar21 + 0x30) -
                                                             (param_1->Transform).Scale3D.m128_f32
                                                             [0]) & uVar12)),
               auVar7._8_4_ = -(uint)(fVar18 < (float)((uint)(*(float *)(pFVar21 + 0x38) -
                                                             (param_1->Transform).Scale3D.m128_f32
                                                             [2]) & uVar14)),
               auVar7._12_4_ =
                    -(uint)(fVar19 < (float)((uint)(*(float *)(pFVar21 + 0x3c) -
                                                   (param_1->Transform).Scale3D.m128_f32[3]) &
                                            uVar15)), iVar20 = movmskps(0,auVar7), iVar20 == 0)) {
              return (int)(((longlong)pFVar22 - (longlong)pFVar3) / 0x70);
            }
          }
        }
      }
LAB_14a9a2fda:
      pFVar22 = pFVar22 + 0x70;
      pFVar21 = pFVar21 + 0x70;
    } while (pFVar22 != pFVar3 + (longlong)iVar1 * 0x70);
  }
  return -1;
}

// Find @ 14a9a3040

int __thiscall
TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_> *this,
          FSphereBody *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar3;
  do {
    if (pFVar5 == pFVar3 + (longlong)iVar1 * 0x28) {
      return -1;
    }
    if (*(int *)(pFVar5 + 0x10) == (int)param_1->_padding_) {
      iVar4 = *(int *)(pFVar5 + 8);
      iVar2 = (int)param_1->_padding_;
      if (iVar4 == iVar2) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar5,(wchar_t *)param_1->_padding_);
          bVar6 = iVar4 == 0;
          goto LAB_14a9a309b;
        }
      }
      else {
        bVar6 = iVar4 + iVar2 == 1;
LAB_14a9a309b:
        if (!bVar6) goto LAB_14a9a30ce;
      }
      if (((((param_1->Position).field0_0x0._s_0.X == *(float *)(pFVar5 + 0x18)) &&
           ((param_1->Position).field0_0x0._s_0.Y == *(float *)(pFVar5 + 0x1c))) &&
          ((param_1->Position).field0_0x0._s_0.Z == *(float *)(pFVar5 + 0x20))) &&
         (param_1->Radius == *(float *)(pFVar5 + 0x24))) {
        return (int)(((longlong)pFVar5 - (longlong)pFVar3) / 0x28);
      }
    }
LAB_14a9a30ce:
    pFVar5 = pFVar5 + 0x28;
  } while( true );
}

// Find @ 14a9a3120

int __thiscall
TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *this,
          FSphylBody *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auVar3 [16];
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar2;
  do {
    if (pFVar5 == pFVar2 + (longlong)iVar1 * 0x50) {
      return -1;
    }
    if (*(int *)(pFVar5 + 0x10) == *(int *)&param_1->field_0x10) {
      iVar4 = *(int *)(pFVar5 + 8);
      if (iVar4 == *(int *)&param_1->field_0x8) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar5,*(wchar_t **)param_1);
          bVar6 = iVar4 == 0;
          goto LAB_14a9a3180;
        }
      }
      else {
        iVar4 = iVar4 + *(int *)&param_1->field_0x8;
        bVar6 = iVar4 == 1;
LAB_14a9a3180:
        iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),bVar6);
        if (bVar6 == false) goto LAB_14a9a31cf;
      }
      if (((((param_1->Position).field0_0x0._s_0.X == *(float *)(pFVar5 + 0x18)) &&
           ((param_1->Position).field0_0x0._s_0.Y == *(float *)(pFVar5 + 0x1c))) &&
          ((param_1->Position).field0_0x0._s_0.Z == *(float *)(pFVar5 + 0x20))) &&
         (((auVar3._4_4_ = -(uint)(*(float *)(pFVar5 + 0x34) == (param_1->Orientation).Y),
           auVar3._0_4_ = -(uint)(*(float *)(pFVar5 + 0x30) == (param_1->Orientation).X),
           auVar3._8_4_ = -(uint)(*(float *)(pFVar5 + 0x38) == (param_1->Orientation).Z),
           auVar3._12_4_ = -(uint)(*(float *)(pFVar5 + 0x3c) == (param_1->Orientation).W),
           iVar4 = movmskps(iVar4,auVar3), iVar4 == 0xf &&
           (param_1->Radius == *(float *)(pFVar5 + 0x40))) &&
          (param_1->Length == *(float *)(pFVar5 + 0x44))))) {
        return (int)(((longlong)pFVar5 - (longlong)pFVar2) / 0x50);
      }
    }
LAB_14a9a31cf:
    pFVar5 = pFVar5 + 0x50;
  } while( true );
}

// Find @ 14a9a3220

int __thiscall
TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *this,
          FTaperedCapsuleBody *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar6 = pFVar3;
  do {
    if (pFVar6 == pFVar3 + (longlong)iVar1 * 0x50) {
      return -1;
    }
    if (*(int *)(pFVar6 + 0x10) == (int)param_1->_padding_) {
      iVar5 = *(int *)(pFVar6 + 8);
      iVar2 = (int)param_1->_padding_;
      if (iVar5 == iVar2) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar6,(wchar_t *)param_1->_padding_);
          bVar7 = iVar5 == 0;
          goto LAB_14a9a3280;
        }
      }
      else {
        iVar5 = iVar5 + iVar2;
        bVar7 = iVar5 == 1;
LAB_14a9a3280:
        iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),bVar7);
        if (bVar7 == false) goto LAB_14a9a32da;
      }
      if (((((param_1->Position).field0_0x0._s_0.X == *(float *)(pFVar6 + 0x18)) &&
           ((param_1->Position).field0_0x0._s_0.Y == *(float *)(pFVar6 + 0x1c))) &&
          ((param_1->Position).field0_0x0._s_0.Z == *(float *)(pFVar6 + 0x20))) &&
         (((auVar4._4_4_ = -(uint)(*(float *)(pFVar6 + 0x34) == (param_1->Orientation).Y),
           auVar4._0_4_ = -(uint)(*(float *)(pFVar6 + 0x30) == (param_1->Orientation).X),
           auVar4._8_4_ = -(uint)(*(float *)(pFVar6 + 0x38) == (param_1->Orientation).Z),
           auVar4._12_4_ = -(uint)(*(float *)(pFVar6 + 0x3c) == (param_1->Orientation).W),
           iVar5 = movmskps(iVar5,auVar4), iVar5 == 0xf &&
           (param_1->Radius0 == *(float *)(pFVar6 + 0x40))) &&
          ((param_1->Radius1 == *(float *)(pFVar6 + 0x44) &&
           (param_1->Length == *(float *)(pFVar6 + 0x48))))))) {
        return (int)(((longlong)pFVar6 - (longlong)pFVar3) / 0x50);
      }
    }
LAB_14a9a32da:
    pFVar6 = pFVar6 + 0x50;
  } while( true );
}

// RemoveAtImpl @ 14a9c37b0

void __thiscall
TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
::RemoveAtImpl(TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_1 + (this->AllocatorInstance)._padding_);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2),(longlong)iVar1);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a9c37f0

void __thiscall
TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMeshBuffer *_Dst;
  
  _Dst = (FMeshBuffer *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<UE::Mutable::Private::FMeshBuffer,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a9c3870

void __thiscall
TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a9c38c0

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14a9c3940

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
::RemoveAtSwapImpl(TArray<TSharedPtr<UE::Mutable::Private::FImage,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
                   *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = (this->AllocatorInstance)._padding_;
  _Dst = (void *)((longlong)param_1 * 0x10 + lVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)(this->ArrayNum - iVar2) * 0x10 + lVar1),(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingle @ 14a9c3c60

int __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
::RemoveSingle(TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
               *this,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *_Dst;
  
  plVar1 = (longlong *)(this->AllocatorInstance)._padding_;
  if (plVar1 != plVar1 + (longlong)this->ArrayNum * 2) {
    plVar3 = plVar1;
    do {
      if ((FImage *)*plVar3 == param_1->Object) {
        iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 4);
        if (iVar2 == -1) {
          return 0;
        }
        _Dst = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(plVar1 + (longlong)iVar2 * 2);
        DestructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>(_Dst,1);
        memmove(_Dst,_Dst + 1,(longlong)((this->ArrayNum - iVar2) + -1) << 4);
        this->ArrayNum = this->ArrayNum + -1;
        return 1;
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar1 + (longlong)this->ArrayNum * 2);
  }
  return 0;
}

// RemoveSingle @ 14a9c3d10

int __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
::RemoveSingle(TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
               *this,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *_Dst;
  
  plVar1 = (longlong *)(this->AllocatorInstance)._padding_;
  if (plVar1 != plVar1 + (longlong)this->ArrayNum * 2) {
    plVar3 = plVar1;
    do {
      if ((FMesh *)*plVar3 == param_1->Object) {
        iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 4);
        if (iVar2 == -1) {
          return 0;
        }
        _Dst = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(plVar1 + (longlong)iVar2 * 2);
        DestructItems<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,int>(_Dst,1);
        memmove(_Dst,_Dst + 1,(longlong)((this->ArrayNum - iVar2) + -1) << 4);
        this->ArrayNum = this->ArrayNum + -1;
        return 1;
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar1 + (longlong)this->ArrayNum * 2);
  }
  return 0;
}

// SetNum @ 14a9e6a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FMeshBuffer,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x30,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14a9e6b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::RasterVertex<4>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::RasterVertex<4>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::RasterVertex<4>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14a9e6ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14a9e6dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14a9e6f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FReshapePointBindingData,TSizedDefaultAllocator<32>_>::
SetNumUninitialized(TArray<UE::Mutable::Private::FReshapePointBindingData,TSizedDefaultAllocator<32>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x1c;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x1c,(longlong)iVar4 * 0x1c);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14a9e7030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,0,
           (longlong)(param_1 - iVar5) * 0xc);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0xc,(longlong)iVar5 * 0xc);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14a9e7190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::RasterVertex<1>,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<UE::Mutable::Private::RasterVertex<1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,0,
           (longlong)(param_1 - iVar5) * 0xc);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0xc,(longlong)iVar5 * 0xc);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// RemoveAtImpl @ 14aae7890

void __thiscall
TArray<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(void *this,int param_1,int param_2)

{
  int iVar1;
  TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet> *_Dst;
  
  _Dst = (TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet> *)
         ((longlong)param_1 * 0x20 + *(longlong *)this);
  DestructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
            (_Dst,param_2);
  iVar1 = (*(int *)((longlong)this + 8) - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) - param_2;
  return;
}

// RemoveAtImpl @ 14aae7910

void __thiscall
TArray<UE::Mutable::Private::FExtensionDataConstant,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FExtensionDataConstant,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<UE::Mutable::Private::FExtensionDataConstant,int>
            ((FExtensionDataConstant *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7990

void __thiscall
TArray<UE::Mutable::Private::FParameterDesc::FIntValueDesc,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Mutable::Private::FParameterDesc::FIntValueDesc,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  FIntValueDesc *_Dst;
  int iVar1;
  
  _Dst = (FIntValueDesc *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<UE::Mutable::Private::FParameterDesc::FIntValueDesc,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7a10

void __thiscall
TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMeshSurface *_Dst;
  
  _Dst = (FMeshSurface *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<UE::Mutable::Private::FMeshSurface,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7a80

void __thiscall
TArray<UE::Mutable::Private::FParameterDesc,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FParameterDesc,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FParameterDesc *_Dst;
  
  _Dst = (FParameterDesc *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x70);
  DestructItems<UE::Mutable::Private::FParameterDesc,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x70);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7af0

void __thiscall
TArray<UE::Mutable::Private::FRangeDesc,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FRangeDesc,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FRangeDesc *_Dst;
  int iVar1;
  
  _Dst = (FRangeDesc *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<UE::Mutable::Private::FRangeDesc,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7b70

void __thiscall
TArray<UE::Mutable::Private::CodeRunner::FScheduledOpData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::CodeRunner::FScheduledOpData,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScheduledOpData *_Dst;
  
  _Dst = (FScheduledOpData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<UE::Mutable::Private::CodeRunner::FScheduledOpData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7bf0

void __thiscall
TArray<UE::Mutable::Private::FProgram::FState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FProgram::FState,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FState *_Dst;
  int iVar1;
  
  _Dst = (FState *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x48);
  DestructItems<UE::Mutable::Private::FProgram::FState,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7c70

void __thiscall
TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
  *_Dst;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar1;
  int iVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
           )this;
  if (FVar1 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                )0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
          *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,int>
            (_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7cf0

void __thiscall
TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7d70

void __thiscall
TArray<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7df0

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7e70

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7ef0

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7f70

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae7ff0

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *_Dst;
  
  _Dst = (TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae8070

void __thiscall
TArray<TSharedPtr<UE::Mutable::Private::CodeRunner::FIssuedTask,1>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TSharedPtr<UE::Mutable::Private::CodeRunner::FIssuedTask,1>,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar1 = this->ArrayNum + ~param_1;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtImpl @ 14aae80d0

void __thiscall
TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<void,1> *_Dst;
  
  _Dst = (TSharedPtr<void,1> *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<void,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14aae8150

void __thiscall
TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *_Dst;
  
  _Dst = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14aaf7940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<signed_char,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<signed_char,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14aaf7a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
::SetNum(TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((void *)((longlong)iVar4 + (this->AllocatorInstance)._padding_),0,
           (longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (void *)((longlong)param_1 + (this->AllocatorInstance)._padding_);
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar6 + (longlong)_Dst),(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14aaf7ba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
::SetNum(TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                      (0x40,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FMesh::FBonePose,int>
              ((void *)((longlong)iVar4 * 0x40 + (this->AllocatorInstance)._padding_),
               param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (void *)((longlong)param_1 * 0x40 + (this->AllocatorInstance)._padding_);
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar6 * 0x40 + (longlong)_Dst),(longlong)iVar5 << 6);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                    (0x40,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14aaf7cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FLayoutBlock,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FLayoutBlock,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x20,(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14aaf7e40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FMeshBufferChannel,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14aaf7f90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FSurfaceSubMesh,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<UE::Mutable::Private::FSurfaceSubMesh,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<UE::Mutable::Private::FSurfaceSubMesh> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FSurfaceSubMesh>_>
                      (0x14,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
      this = (TArray<UE::Mutable::Private::FSurfaceSubMesh,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    DefaultConstructItems<UE::Mutable::Private::FSurfaceSubMesh,int>
              ((void *)((longlong)this + (longlong)iVar5 * 0x14),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)this;
        if (FVar2 != (ForElementType<UE::Mutable::Private::FSurfaceSubMesh>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x14);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 0x14),(longlong)iVar6 * 0x14
                 );
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FSurfaceSubMesh>_>
                    (0x14,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14aaf80f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
  FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>_>
                      (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>
                  )0x0) {
      this = (TArray<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    memset((void *)((longlong)this + (longlong)iVar6 * 0x18),0,(longlong)(param_1 - iVar2) * 0x18);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>_>_>
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14aaf8230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TSharedPtr<void,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14aaf8360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x20,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14aaf8a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
::SetNumUninitialized
          (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::
    ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>::ForAnyElementType>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (void *)((longlong)param_1 + (this->AllocatorInstance)._padding_);
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar5 + (longlong)_Dst),(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FImageMemoryCounter>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14aaf8b50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
::SetNumUninitialized
          (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::
    ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (void *)((longlong)param_1 + (this->AllocatorInstance)._padding_);
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar5 + (longlong)_Dst),(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14aaf8c70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>_>
::SetNumUninitialized
          (TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::
    ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>::ForAnyElementType>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (void *)((longlong)param_1 + (this->AllocatorInstance)._padding_);
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar5 + (longlong)_Dst),(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14aaf8d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
::SetNumZeroed(TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
               *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((void *)((longlong)iVar4 + (this->AllocatorInstance)._padding_),0,
           (longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (void *)((longlong)param_1 + (this->AllocatorInstance)._padding_);
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar6 + (longlong)_Dst),(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// HeapPop<TLess<UE::Mutable::Private::NeighborFace>_> @ 14ab01000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::NeighborFace,TSizedDefaultAllocator<32>_>::
HeapPop<TLess<UE::Mutable::Private::NeighborFace>_>
          (TArray<UE::Mutable::Private::NeighborFace,TSizedDefaultAllocator<32>_> *this,
          NeighborFace *param_1,TLess<UE::Mutable::Private::NeighborFace> *param_2,
          EAllowShrinking param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  uVar2 = *(undefined8 *)pFVar3;
  uVar6 = *(undefined8 *)(pFVar3 + 8);
  param_1->neighborFace = (int)uVar2;
  param_1->newVertex = (int)((ulonglong)uVar2 >> 0x20);
  param_1->previousFace = (int)uVar6;
  param_1->numUVIslandChanges = (int)((ulonglong)uVar6 >> 0x20);
  uVar2 = *(undefined8 *)(pFVar3 + 0x10);
  param_1->step = (int)uVar2;
  param_1->changesUVIsland = (bool)(char)((ulonglong)uVar2 >> 0x20);
  *(int3 *)&param_1->field_0x15 = (int3)((ulonglong)uVar2 >> 0x28);
  if ((this->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  iVar13 = this->ArrayNum + -1;
  if (1 < iVar13) {
    iVar13 = 1;
  }
  if (iVar13 != 0) {
    memmove(pFVar3,pFVar3 + (longlong)(this->ArrayNum - iVar13) * 0x18,(longlong)iVar13 * 0x18);
  }
  iVar13 = this->ArrayNum + -1;
  this->ArrayNum = iVar13;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,&this->AllocatorInstance,iVar13,&this->ArrayMax);
  }
  iVar13 = this->ArrayNum;
  pFVar3 = (this->AllocatorInstance).Data;
  if (1 < iVar13) {
    do {
      iVar5 = iVar12 * 2;
      iVar10 = iVar5 + 1;
      if (iVar5 + 2 < iVar13) {
        if (*(int *)(pFVar3 + (longlong)iVar10 * 0x18 + 0x10) <
            *(int *)(pFVar3 + (longlong)iVar5 * 0x18 + 0x40)) {
          iVar10 = iVar5;
        }
        iVar10 = iVar10 + 1;
      }
      lVar11 = (longlong)iVar10;
      pFVar1 = pFVar3 + (longlong)iVar12 * 0x18;
      if (*(int *)(pFVar1 + 0x10) <= *(int *)(pFVar3 + lVar11 * 0x18 + 0x10)) {
        return;
      }
      uVar6 = *(undefined8 *)(pFVar3 + lVar11 * 0x18 + 8);
      uVar2 = *(undefined8 *)(pFVar1 + 0x10);
      uVar7 = *(undefined8 *)pFVar1;
      uVar8 = *(undefined8 *)(pFVar1 + 8);
      *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar3 + lVar11 * 0x18);
      *(undefined8 *)(pFVar1 + 8) = uVar6;
      *(undefined8 *)(pFVar1 + 0x10) = *(undefined8 *)(pFVar3 + lVar11 * 0x18 + 0x10);
      *(undefined8 *)(pFVar3 + lVar11 * 0x18) = uVar7;
      *(undefined8 *)(pFVar3 + lVar11 * 0x18 + 8) = uVar8;
      *(undefined8 *)(pFVar3 + lVar11 * 0x18 + 0x10) = uVar2;
      iVar12 = iVar10;
    } while (iVar10 * 2 + 1 < iVar13);
  }
  return;
}

// operator= @ 14ab121a0

TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FMeshBuffer *pFVar3;
  
  if (this != param_1) {
    DestructItems<UE::Mutable::Private::FMeshBuffer,int>
              ((FMeshBuffer *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FMeshBuffer *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<UE::Mutable::Private::FMeshBuffer,UE::Mutable::Private::FMeshBuffer,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// RemoveAtImpl @ 14ab53bf0

void __thiscall
TArray<TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>,int>
            ((TUniquePtr<TStaticArray<unsigned_int,1024,4294967295>,TDefaultDelete<TStaticArray<unsigned_int,1024,4294967295>_>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14ab54440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::UntypedMeshBufferIteratorConst,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::UntypedMeshBufferIteratorConst,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::UntypedMeshBufferIteratorConst,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14ab54590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::PROJECTED_VERTEX,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<UE::Mutable::Private::PROJECTED_VERTEX,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_1 - iVar5) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_><UE::Math::TVector<float>_const_,int> @ 14ab55b50

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_><UE::Math::TVector<float>_const_,int>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  int iVar1;
  TVector<float> *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
  return this;
}

// AddUniqueImpl<UE::Mutable::Private::FModel_const_*> @ 14ab59890

int __thiscall
TArray<UE::Mutable::Private::FModel_const_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Mutable::Private::FModel_const_*>
          (TArray<UE::Mutable::Private::FModel_const_*,TSizedDefaultAllocator<32>_> *this,
          FModel **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FModel **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FModel **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// RemoveAtImpl @ 14ab84a00

void __thiscall
TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FBoxBody *_Dst;
  
  _Dst = (FBoxBody *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<UE::Mutable::Private::FBoxBody,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ab84a80

void __thiscall
TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FConvexBody *_Dst;
  
  _Dst = (FConvexBody *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x70);
  DestructItems<UE::Mutable::Private::FConvexBody,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x70);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ab84af0

void __thiscall
TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FPhysicsBodyAggregate *_Dst;
  
  _Dst = (FPhysicsBodyAggregate *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ab84b70

void __thiscall
TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FSphereBody *_Dst;
  int iVar1;
  
  _Dst = (FSphereBody *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<UE::Mutable::Private::FSphereBody,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ab84bf0

void __thiscall
TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FSphylBody *_Dst;
  
  _Dst = (FSphylBody *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<UE::Mutable::Private::FSphylBody,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ab84c70

void __thiscall
TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FTaperedCapsuleBody *_Dst;
  
  _Dst = (FTaperedCapsuleBody *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<UE::Mutable::Private::FTaperedCapsuleBody,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ab84cf0

void __thiscall
TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
  *_Dst;
  
  _Dst = (TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14ab84d70

void __thiscall
TArray<UE::Mutable::Private::FLiveInstance,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
::RemoveAtSwapImpl(TArray<UE::Mutable::Private::FLiveInstance,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
                   *this,int param_1)

{
  longlong lVar1;
  FLiveInstance *this_00;
  int iVar2;
  
  lVar1 = (this->AllocatorInstance)._padding_;
  this_00 = (FLiveInstance *)((longlong)param_1 * 0x68 + lVar1);
  UE::Mutable::Private::FLiveInstance::~FLiveInstance(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,(void *)((longlong)(this->ArrayNum - iVar2) * 0x68 + lVar1),
            (longlong)iVar2 * 0x68);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ab84df0

void __thiscall
TArray<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
::RemoveAtSwapImpl(TArray<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
                   *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FModelCacheEntry *this_00;
  
  lVar1 = (this->AllocatorInstance)._padding_;
  this_00 = (FModelCacheEntry *)((longlong)param_1 * 0x40 + lVar1);
  UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry::~FModelCacheEntry(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,(void *)((longlong)(this->ArrayNum - iVar2) * 0x40 + lVar1),(longlong)iVar2 << 6
           );
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 14ab891d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FBoneName,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14ab89310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FBoxBody,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x50,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14ab89440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FConvexBody,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x70,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14ab89570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x50,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14ab896a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FSphereBody,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x28,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14ab897d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FSphylBody,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x50,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14ab89900

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Mutable::Private::FTaperedCapsuleBody,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x50,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14ab89a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x50,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

