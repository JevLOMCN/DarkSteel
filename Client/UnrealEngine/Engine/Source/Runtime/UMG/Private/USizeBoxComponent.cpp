// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 76

// GetPadding_WrapperImpl @ 1469689f0

void __cdecl USizeBoxComponent::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 146968a00

void __cdecl USizeBoxComponent::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FMargin> local_38;
  
  local_38.Value._0_8_ = *(undefined8 *)param_2;
  local_38.Value._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x58) = local_38.Value._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x60) = local_38.Value._8_8_;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968a33;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_38.bIsSet = true;
      local_38.Getter._16_8_ = 0;
      local_38.Getter._0_8_ = 0;
      local_38.Getter._8_8_ = 0;
      SBox::SetPadding(*(SBox **)((longlong)param_1 + 0x90),&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146968a33:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetHorizontalAlignment_WrapperImpl @ 146968ad0

void __cdecl USizeBoxComponent::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x68);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146968ae0

void __cdecl USizeBoxComponent::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x68) = bVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968b12;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      SBox::SetHAlign(*(SBox **)((longlong)param_1 + 0x90),(uint)bVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_146968b12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetVerticalAlignment_WrapperImpl @ 146968b50

void __cdecl USizeBoxComponent::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x69);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 146968b60

void __cdecl USizeBoxComponent::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x69) = bVar1;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968b92;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      SBox::SetVAlign(*(SBox **)((longlong)param_1 + 0x90),(uint)bVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_146968b92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetWidthOverride_WrapperImpl @ 146968bd0

void __cdecl USizeBoxComponent::GetWidthOverride_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x6c);
  return;
}

// SetWidthOverride_WrapperImpl @ 146968be0

void __cdecl USizeBoxComponent::SetWidthOverride_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 1;
  *(float *)((longlong)param_1 + 0x6c) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968c20;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetWidthOverride(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146968c20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetHeightOverride_WrapperImpl @ 146968c80

void __cdecl USizeBoxComponent::GetHeightOverride_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x70);
  return;
}

// SetHeightOverride_WrapperImpl @ 146968c90

void __cdecl USizeBoxComponent::SetHeightOverride_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 2;
  *(float *)((longlong)param_1 + 0x70) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968cd0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetHeightOverride(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146968cd0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetMinDesiredWidth_WrapperImpl @ 146968d70

void __cdecl USizeBoxComponent::GetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x74);
  return;
}

// SetMinDesiredWidth_WrapperImpl @ 146968d80

void __cdecl USizeBoxComponent::SetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 4;
  *(float *)((longlong)param_1 + 0x74) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968dc0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMinDesiredWidth(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146968dc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetMinDesiredHeight_WrapperImpl @ 146968e60

void __cdecl USizeBoxComponent::GetMinDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x78);
  return;
}

// SetMinDesiredHeight_WrapperImpl @ 146968eb0

void __cdecl USizeBoxComponent::SetMinDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 8;
  *(float *)((longlong)param_1 + 0x78) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968ef0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMinDesiredHeight(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146968ef0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetMaxDesiredWidth_WrapperImpl @ 146968f90

void __cdecl USizeBoxComponent::GetMaxDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x7c);
  return;
}

// SetMaxDesiredWidth_WrapperImpl @ 146968fa0

void __cdecl USizeBoxComponent::SetMaxDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 0x10;
  *(float *)((longlong)param_1 + 0x7c) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146968fe0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMaxDesiredWidth(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146968fe0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetMaxDesiredHeight_WrapperImpl @ 146969040

void __cdecl USizeBoxComponent::GetMaxDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x80);
  return;
}

// SetMaxDesiredHeight_WrapperImpl @ 146969050

void __cdecl USizeBoxComponent::SetMaxDesiredHeight_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 0x20;
  *(float *)((longlong)param_1 + 0x80) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146969090;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMaxDesiredHeight(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146969090:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetMinAspectRatio_WrapperImpl @ 1469690f0

void __cdecl USizeBoxComponent::GetMinAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x84);
  return;
}

// SetMinAspectRatio_WrapperImpl @ 146969100

void __cdecl USizeBoxComponent::SetMinAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 0x40;
  *(float *)((longlong)param_1 + 0x84) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146969140;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMinAspectRatio(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146969140:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetMaxAspectRatio_WrapperImpl @ 1469691a0

void __cdecl USizeBoxComponent::GetMaxAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x88);
  return;
}

// SetMaxAspectRatio_WrapperImpl @ 1469691b0

void __cdecl USizeBoxComponent::SetMaxAspectRatio_WrapperImpl(void *param_1,void *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  local_28.Value.Size = *(float *)param_2;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 0x80;
  *(float *)((longlong)param_1 + 0x88) = local_28.Value.Size;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469691f0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)((longlong)param_1 + 0x90) != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMaxAspectRatio(*(SBox **)((longlong)param_1 + 0x90),&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469691f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// StaticClass @ 146969290

UClass * __cdecl USizeBoxComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USizeBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SizeBoxComponent",
               &Z_Registration_Info_UClass_USizeBoxComponent.InnerSingleton,
               StaticRegisterNativesUSizeBoxComponent,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USizeBoxComponent>,
               InternalVTableHelperCtorCaller<USizeBoxComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USizeBoxComponent.InnerSingleton;
}

// USizeBoxComponent @ 14698d600

USizeBoxComponent * __thiscall
USizeBoxComponent::USizeBoxComponent(USizeBoxComponent *this,FVTableHelper *param_1)

{
  UUIComponent::UUIComponent((UUIComponent *)this,param_1);
  this->MinAspectRatio = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  this->WidthOverride = 0.0;
  this->HeightOverride = 0.0;
  this->MinDesiredWidth = 0.0;
  this->MinDesiredHeight = 0.0;
  this->MaxDesiredWidth = 0.0;
  this->MaxDesiredHeight = 0.0;
  (this->MySizeBox).Object = (SBox *)0x0;
  (this->MySizeBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MaxAspectRatio = 1.0;
  return this;
}

// USizeBoxComponent @ 14698d670

USizeBoxComponent * __thiscall
USizeBoxComponent::USizeBoxComponent(USizeBoxComponent *this,FObjectInitializer *param_1)

{
  UUIComponent::UUIComponent((UUIComponent *)this,param_1);
  this->MinAspectRatio = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  this->WidthOverride = 0.0;
  this->HeightOverride = 0.0;
  this->MinDesiredWidth = 0.0;
  this->MinDesiredHeight = 0.0;
  this->MaxDesiredWidth = 0.0;
  this->MaxDesiredHeight = 0.0;
  (this->MySizeBox).Object = (SBox *)0x0;
  (this->MySizeBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MaxAspectRatio = 1.0;
  return this;
}

// ~USizeBoxComponent @ 146994240

void __thiscall USizeBoxComponent::~USizeBoxComponent(USizeBoxComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  UUIComponent::~UUIComponent((UUIComponent *)this);
  return;
}

// ClearHeightOverride @ 1469a64f0

void __thiscall USizeBoxComponent::ClearHeightOverride(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_HeightOverride = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a6523;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetHeightOverride(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a6523:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ClearMaxAspectRatio @ 1469a6730

void __thiscall USizeBoxComponent::ClearMaxAspectRatio(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxAspectRatio = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a6763;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxAspectRatio(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a6763:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ClearMaxDesiredHeight @ 1469a6820

void __thiscall USizeBoxComponent::ClearMaxDesiredHeight(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredHeight = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a6853;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredHeight(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a6853:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ClearMaxDesiredWidth @ 1469a6910

void __thiscall USizeBoxComponent::ClearMaxDesiredWidth(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredWidth = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a6943;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredWidth(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a6943:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ClearMinAspectRatio @ 1469a6ba0

void __thiscall USizeBoxComponent::ClearMinAspectRatio(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinAspectRatio = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a6bd3;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinAspectRatio(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a6bd3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ClearMinDesiredHeight @ 1469a6c90

void __thiscall USizeBoxComponent::ClearMinDesiredHeight(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredHeight = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a6cc3;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredHeight(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a6cc3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ClearMinDesiredWidth @ 1469a6d80

void __thiscall USizeBoxComponent::ClearMinDesiredWidth(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredWidth = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a6db3;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredWidth(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a6db3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ClearWidthOverride @ 1469a7410

void __thiscall USizeBoxComponent::ClearWidthOverride(USizeBoxComponent *this)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_WidthOverride = '\0';
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469a7443;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetWidthOverride(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_1469a7443:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetHeightOverride @ 1469d0ff0

float __thiscall USizeBoxComponent::GetHeightOverride(USizeBoxComponent *this)

{
  return this->HeightOverride;
}

// GetHorizontalAlignment @ 1469d12f0

EHorizontalAlignment __thiscall USizeBoxComponent::GetHorizontalAlignment(USizeBoxComponent *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetMaxAspectRatio @ 1469d1c30

float __thiscall USizeBoxComponent::GetMaxAspectRatio(USizeBoxComponent *this)

{
  return this->MaxAspectRatio;
}

// GetMaxDesiredHeight @ 1469d1c50

float __thiscall USizeBoxComponent::GetMaxDesiredHeight(USizeBoxComponent *this)

{
  return this->MaxDesiredHeight;
}

// GetMaxDesiredWidth @ 1469d1c70

float __thiscall USizeBoxComponent::GetMaxDesiredWidth(USizeBoxComponent *this)

{
  return this->MaxDesiredWidth;
}

// GetMinAspectRatio @ 1469d1db0

float __thiscall USizeBoxComponent::GetMinAspectRatio(USizeBoxComponent *this)

{
  return this->MinAspectRatio;
}

// GetMinDesiredHeight @ 1469d1dd0

float __thiscall USizeBoxComponent::GetMinDesiredHeight(USizeBoxComponent *this)

{
  return this->MinDesiredHeight;
}

// GetMinDesiredWidth @ 1469d1e20

float __thiscall USizeBoxComponent::GetMinDesiredWidth(USizeBoxComponent *this)

{
  return this->MinDesiredWidth;
}

// GetPadding @ 1469d36a0

FMargin * __thiscall
USizeBoxComponent::GetPadding(USizeBoxComponent *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Padding).Top;
  fVar2 = (this->Padding).Right;
  fVar3 = (this->Padding).Bottom;
  __return_storage_ptr__->Left = (this->Padding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1469d5be0

UClass * __cdecl USizeBoxComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USizeBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SizeBoxComponent",
               &Z_Registration_Info_UClass_USizeBoxComponent.InnerSingleton,
               StaticRegisterNativesUSizeBoxComponent,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USizeBoxComponent>,
               InternalVTableHelperCtorCaller<USizeBoxComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USizeBoxComponent.InnerSingleton;
}

// GetVerticalAlignment @ 1469d9cb0

EVerticalAlignment __thiscall USizeBoxComponent::GetVerticalAlignment(USizeBoxComponent *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// GetWidthOverride @ 1469da3f0

float __thiscall USizeBoxComponent::GetWidthOverride(USizeBoxComponent *this)

{
  return this->WidthOverride;
}

// IsHeightOverride @ 1469e1790

bool __thiscall USizeBoxComponent::IsHeightOverride(USizeBoxComponent *this)

{
  return this->bOverride_HeightOverride;
}

// IsMaxAspectRatioOverride @ 1469e2390

bool __thiscall USizeBoxComponent::IsMaxAspectRatioOverride(USizeBoxComponent *this)

{
  return this->bOverride_MaxAspectRatio;
}

// IsMaxDesiredHeightOverride @ 1469e23d0

bool __thiscall USizeBoxComponent::IsMaxDesiredHeightOverride(USizeBoxComponent *this)

{
  return this->bOverride_MaxDesiredHeight;
}

// IsMaxDesiredWidthOverride @ 1469e2410

bool __thiscall USizeBoxComponent::IsMaxDesiredWidthOverride(USizeBoxComponent *this)

{
  return this->bOverride_MaxDesiredWidth;
}

// IsMinAspectRatioOverride @ 1469e2450

bool __thiscall USizeBoxComponent::IsMinAspectRatioOverride(USizeBoxComponent *this)

{
  return this->bOverride_MinAspectRatio;
}

// IsMinDesiredHeightOverride @ 1469e2490

bool __thiscall USizeBoxComponent::IsMinDesiredHeightOverride(USizeBoxComponent *this)

{
  return this->bOverride_MinDesiredHeight;
}

// IsMinDesiredWidthOverride @ 1469e24d0

bool __thiscall USizeBoxComponent::IsMinDesiredWidthOverride(USizeBoxComponent *this)

{
  return this->bOverride_MinDesiredWidth;
}

// IsWidthOverride @ 1469e38f0

bool __thiscall USizeBoxComponent::IsWidthOverride(USizeBoxComponent *this)

{
  return this->bOverride_WidthOverride;
}

// RebuildWidgetWithContent @ 146a08f20

TSharedRef<SWidget,1> * __thiscall
USizeBoxComponent::RebuildWidgetWithContent
          (USizeBoxComponent *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FArguments *pFVar5;
  longlong lVar6;
  FSharedReferencer<1> FVar7;
  atomic<int> *paVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedRef<SBox,1> local_3b8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3a8;
  undefined1 local_390 [16];
  FArguments local_380;
  
  pFVar5 = SBox::FArguments::FArguments(&local_380);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar5->_Content).Widget.Object = pSVar3;
  (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3a8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\SizeBoxComponent.cpp"
             ,0x141,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_3a8,&local_3b8,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a8._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_380);
  if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_3b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MySizeBox == (TWeakPtr<SBox,1> *)local_390) {
    if (local_3b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
    goto LAB_146a090a1;
    LOCK();
    paVar8 = &(local_3b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar1 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar1 != (atomic<int>)0x1) goto LAB_146a090a1;
    lVar6 = (local_3b8.SharedReferenceCount.ReferenceController)->_padding_;
    FVar7.ReferenceController = local_3b8.SharedReferenceCount.ReferenceController;
  }
  else {
    FVar7.ReferenceController = (this->MySizeBox).WeakReferenceCount.ReferenceController;
    (this->MySizeBox).Object = local_3b8.Object;
    (this->MySizeBox).WeakReferenceCount.ReferenceController =
         local_3b8.SharedReferenceCount.ReferenceController;
    if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_146a090a1;
    LOCK();
    paVar8 = &(FVar7.ReferenceController)->WeakReferenceCount;
    aVar1 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar1 != (atomic<int>)0x1) goto LAB_146a090a1;
    lVar6 = (FVar7.ReferenceController)->_padding_;
  }
  (**(code **)(lVar6 + 8))(FVar7.ReferenceController,1);
LAB_146a090a1:
  if (local_3b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = &(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  SynchronizeProperties(this,&local_3b8);
  __return_storage_ptr__->Object = (SWidget *)local_3b8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_3b8.SharedReferenceCount.ReferenceController;
  if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// SetHeightOverride @ 146a147a0

void __thiscall USizeBoxComponent::SetHeightOverride(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_HeightOverride = '\x01';
  this->HeightOverride = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a147e0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetHeightOverride(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a147e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetHorizontalAlignment @ 146a15360

void __thiscall
USizeBoxComponent::SetHorizontalAlignment(USizeBoxComponent *this,EHorizontalAlignment param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a15390;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      SBox::SetHAlign(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a15390:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetMaxAspectRatio @ 146a16b40

void __thiscall USizeBoxComponent::SetMaxAspectRatio(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxAspectRatio = '\x01';
  this->MaxAspectRatio = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a16b80;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetMaxAspectRatio(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a16b80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetMaxDesiredHeight @ 146a16c40

void __thiscall USizeBoxComponent::SetMaxDesiredHeight(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredHeight = '\x01';
  this->MaxDesiredHeight = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a16c80;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetMaxDesiredHeight(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a16c80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetMaxDesiredWidth @ 146a16d40

void __thiscall USizeBoxComponent::SetMaxDesiredWidth(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MaxDesiredWidth = '\x01';
  this->MaxDesiredWidth = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a16d80;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetMaxDesiredWidth(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a16d80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetMinAspectRatio @ 146a17260

void __thiscall USizeBoxComponent::SetMinAspectRatio(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinAspectRatio = '\x01';
  this->MinAspectRatio = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a172a0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetMinAspectRatio(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a172a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetMinDesiredHeight @ 146a17360

void __thiscall USizeBoxComponent::SetMinDesiredHeight(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredHeight = '\x01';
  this->MinDesiredHeight = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a173a0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetMinDesiredHeight(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a173a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetMinDesiredWidth @ 146a176a0

void __thiscall USizeBoxComponent::SetMinDesiredWidth(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_MinDesiredWidth = '\x01';
  this->MinDesiredWidth = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a176e0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetMinDesiredWidth(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a176e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetPadding @ 146a18bb0

void __thiscall USizeBoxComponent::SetPadding(USizeBoxComponent *this,FMargin *param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FMargin> local_38;
  
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  (this->Padding).Left = local_38.Value.Left;
  (this->Padding).Top = local_38.Value.Top;
  (this->Padding).Right = local_38.Value.Right;
  (this->Padding).Bottom = local_38.Value.Bottom;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a18be3;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_38.bIsSet = true;
      local_38.Getter._16_8_ = 0;
      local_38.Getter._0_8_ = 0;
      local_38.Getter._8_8_ = 0;
      SBox::SetPadding(this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a18be3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetVerticalAlignment @ 146a1d760

void __thiscall
USizeBoxComponent::SetVerticalAlignment(USizeBoxComponent *this,EVerticalAlignment param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a1d790;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      SBox::SetVAlign(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a1d790:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetWidthOverride @ 146a1e050

void __thiscall USizeBoxComponent::SetWidthOverride(USizeBoxComponent *this,float param_1)

{
  SBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  this->bOverride_WidthOverride = '\x01';
  this->WidthOverride = param_1;
  pTVar3 = (this->MySizeBox).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a1e090;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->MySizeBox).Object;
    if (this_00 != (SBox *)0x0) {
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Value.Size = param_1;
      SBox::SetWidthOverride(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a1e090:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// StaticRegisterNativesUSizeBoxComponent @ 146a1ef80

void __cdecl USizeBoxComponent::StaticRegisterNativesUSizeBoxComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_USizeBoxComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a25630

void __thiscall
USizeBoxComponent::SynchronizeProperties(USizeBoxComponent *this,TSharedRef<SBox,1> *param_1)

{
  FOptionalSize FVar1;
  undefined1 local_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  undefined8 local_10;
  
  FVar1.Size = FOptionalSize::Unspecified;
  if (this->bOverride_WidthOverride != 0) {
    FVar1.Size = this->WidthOverride;
  }
  local_38[4] = true;
  local_38._0_4_ = FVar1.Size;
  auStack_30._16_8_ = 0;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetWidthOverride(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38._0_4_ = FOptionalSize::Unspecified;
  if (this->bOverride_HeightOverride != '\0') {
    local_38._0_4_ = this->HeightOverride;
  }
  auStack_30._16_8_ = 0;
  local_38[4] = true;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetHeightOverride(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38._0_4_ = FOptionalSize::Unspecified;
  if (this->bOverride_MinDesiredWidth != '\0') {
    local_38._0_4_ = this->MinDesiredWidth;
  }
  auStack_30._16_8_ = 0;
  local_38[4] = true;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetMinDesiredWidth(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38._0_4_ = FOptionalSize::Unspecified;
  if (this->bOverride_MinDesiredHeight != '\0') {
    local_38._0_4_ = this->MinDesiredHeight;
  }
  auStack_30._16_8_ = 0;
  local_38[4] = true;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetMinDesiredHeight(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38._0_4_ = FOptionalSize::Unspecified;
  if (this->bOverride_MaxDesiredWidth != '\0') {
    local_38._0_4_ = this->MaxDesiredWidth;
  }
  auStack_30._16_8_ = 0;
  local_38[4] = true;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetMaxDesiredWidth(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38._0_4_ = FOptionalSize::Unspecified;
  if (this->bOverride_MaxDesiredHeight != '\0') {
    local_38._0_4_ = this->MaxDesiredHeight;
  }
  auStack_30._16_8_ = 0;
  local_38[4] = true;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetMaxDesiredHeight(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38._0_4_ = FOptionalSize::Unspecified;
  if (this->bOverride_MinAspectRatio != '\0') {
    local_38._0_4_ = this->MinAspectRatio;
  }
  auStack_30._16_8_ = 0;
  local_38[4] = true;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetMinAspectRatio(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38._0_4_ = FOptionalSize::Unspecified;
  if ((bool)this->bOverride_MaxAspectRatio) {
    local_38._0_4_ = this->MaxAspectRatio;
  }
  auStack_30._16_8_ = 0;
  local_38[4] = true;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  SBox::SetMaxAspectRatio(param_1->Object,(TAttribute<FOptionalSize> *)local_38);
  local_38 = *(undefined1 (*) [8])&this->Padding;
  auStack_30._0_4_ = (this->Padding).Right;
  auStack_30._4_4_ = (this->Padding).Bottom;
  auStack_30[8] = 1;
  local_10 = 0;
  auStack_30._16_8_ = 0;
  uStack_18 = 0;
  SBox::SetPadding(param_1->Object,(TAttribute<FMargin> *)local_38);
  SBox::SetHAlign(param_1->Object,(uint)(this->HorizontalAlignment).Value);
  SBox::SetVAlign(param_1->Object,(uint)(this->VerticalAlignment).Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// execClearHeightOverride @ 146a32f60

void __cdecl
USizeBoxComponent::execClearHeightOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0xfd;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a32fa6;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetHeightOverride(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a32fa6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// execClearMaxAspectRatio @ 146a330a0

void __cdecl
USizeBoxComponent::execClearMaxAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0x7f;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a330e6;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxAspectRatio(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a330e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// execClearMaxDesiredHeight @ 146a331c0

void __cdecl
USizeBoxComponent::execClearMaxDesiredHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0xdf;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a33206;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredHeight(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a33206:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// execClearMaxDesiredWidth @ 146a332e0

void __cdecl
USizeBoxComponent::execClearMaxDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0xef;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a33326;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMaxDesiredWidth(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a33326:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// execClearMinAspectRatio @ 146a33440

void __cdecl
USizeBoxComponent::execClearMinAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0xbf;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a33486;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinAspectRatio(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a33486:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// execClearMinDesiredHeight @ 146a33560

void __cdecl
USizeBoxComponent::execClearMinDesiredHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0xf7;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a335a6;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredHeight(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a335a6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// execClearMinDesiredWidth @ 146a33680

void __cdecl
USizeBoxComponent::execClearMinDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0xfb;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a336c6;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetMinDesiredWidth(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a336c6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// execClearWidthOverride @ 146a339b0

void __cdecl
USizeBoxComponent::execClearWidthOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TAttribute<FOptionalSize> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[3].field_0x14 = param_1[3].field_0x14 & 0xfe;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[3].field_0x20;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a339f6;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(SBox **)&param_1[3].field_0x18 != (SBox *)0x0) {
      local_28.Value.Size = FOptionalSize::Unspecified;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      local_28.bIsSet = true;
      local_28.Getter._16_8_ = 0;
      SBox::SetWidthOverride(*(SBox **)&param_1[3].field_0x18,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_146a339f6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

